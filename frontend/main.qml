import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 300
    height: 200
    title: "Qt5 Counter Example"

    Column {
        anchors.centerIn: parent
        spacing: 20

        Text {
            id: counterText
            text: counter.value.toString()
            font.pixelSize: 40
            horizontalAlignment: Text.AlignHCenter
        }

        Button {
            text: "Добавить +1"
            onClicked: counter.increment()
        }
    }
}

