#include "opencvtest.h"
#include "ui_opencvtest.h"
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <QDebug>

using namespace cv;
using namespace std;

opencvtest::opencvtest(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    string imname = "1.jpg";
    cv::Mat image = cv::imread(imname,1);
    if (image.empty())
        qDebug("Failed to open %s", imname);
 
    // create image window named imname"
    cv::namedWindow(imname,WINDOW_AUTOSIZE);
    // show the image on window
    cv::resizeWindow(imname, 1280,720);
    try {
        cv::imshow(imname, image);
    }
    catch (cv::Exception& e) {
        std::cout << e.msg << std::endl;
    }

	waitKey(5000);
    //cv::Mat mat = QImage2cvMat(src);
    //cv::cvtColor(mat, mat, CV_BGR2RGB);
    //imshow("QImage2cvMat RGB32", mat);
	QImage src1("1.jpg");
	//src1 = src.convertToFormat(QImage::Format_Indexed8);
	imgLabel = new QLabel(this);
	imgLabel->setText(QStringLiteral("原图"));
	imgLabel->move(0, 0);
	imgLabel->setPixmap(QPixmap(QString::fromLocal8Bit("1.jpg")));
	imgLabel->show();  // 在qt界面显示图片 

	waitKey(0);
}

