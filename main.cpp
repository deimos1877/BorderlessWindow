#include <QFile>
#include "MainWindow.h"

#include "vld.h"

int main( int argc, char *argv[] ) {
  QApplication application( argc, argv );

  // Stylesheet
  QFile stylesheet( ":/SystemMenu/BorderlessWindow.css" );
  if ( stylesheet.open( QFile::ReadOnly ) ) {
    QString styleSheet = stylesheet.readAll();
    application.setStyleSheet( styleSheet );
  }

  // Font
  QFont mainFont = application.font();
  mainFont.setStyleStrategy( QFont::PreferAntialias );
  application.setFont( mainFont );

  // Background color
  // This is only for WinApi window, Qt widgets use BorderlessWindow.css stylesheet
  HBRUSH windowBackground = CreateSolidBrush( RGB( 255, 255, 255 ) );

  // Create window
  BorderlessWindow window( &application, windowBackground, 100, 100, 1024, 768 );
  window.setMinimumSize( 800, 600 );

  // Launch
  application.exec();
}
