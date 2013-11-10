/* Copyright (c) 2012, 2013  BlackBerry Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "app.hpp"

#include <bb/cascades/Application>

#include <QLocale>
#include <QTranslator>
#include <bb/cascades/pickers/FilePicker.hpp>
#include <bb/cascades/pickers/FilePickerMode.hpp>
#include <bb/cascades/pickers/FilePickerSortFlag.hpp>
#include <bb/cascades/pickers/FilePickerSortOrder.hpp>
#include <bb/cascades/pickers/FilePickerViewMode.hpp>
#include <bb/cascades/pickers/FileType.hpp>

using ::bb::cascades::Application;
void myMessageOutput(QtMsgType type, const char* msg) {
	std::fprintf(stdout, "%s\n", msg);
	std::fflush(stdout);
}
Q_DECL_EXPORT int main(int argc, char **argv) {
    qmlRegisterType<bb::cascades::pickers::FilePicker>("bb.cascades.pickers", 1,
            0, "FilePicker");
    qmlRegisterUncreatableType<bb::cascades::pickers::FilePickerMode>(
            "bb.cascades.pickers", 1, 0, "FilePickerMode", "");
    qmlRegisterUncreatableType<bb::cascades::pickers::FilePickerSortFlag>(
            "bb.cascades.pickers", 1, 0, "FilePickerSortFlag", "");
    qmlRegisterUncreatableType<bb::cascades::pickers::FilePickerSortOrder>(
            "bb.cascades.pickers", 1, 0, "FilePickerSortOrder", "");
    qmlRegisterUncreatableType<bb::cascades::pickers::FileType>(
            "bb.cascades.pickers", 1, 0, "FileType", "");
    qmlRegisterUncreatableType<bb::cascades::pickers::FilePickerViewMode>(
            "bb.cascades.pickers", 1, 0, "FilePickerViewMode", "");

    Application app(argc, argv);
	qInstallMsgHandler(myMessageOutput);

    QTranslator translator;
    const QString locale_string = QLocale().name();
    const QString filename = QString("invokeEscreen_%1").arg(locale_string);
    if (translator.load(filename, "app/native/qm")) {
        app.installTranslator(&translator);
    }

    App mainApp;

    return Application::exec();
}
