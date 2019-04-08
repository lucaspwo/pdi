#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int, char**){
  Mat imageIn;
  Mat uQuarto(imageIn, Rect(0, 249, 0, 299));
  Mat dQuarto(imageIn, Rect(0, 249, 300, 599));
  Mat tQuarto(imageIn, Rect(250, 499, 0, 299));
  Mat qQuarto(imageIn, Rect(250, 499, 300, 599));
//   Vec3b val1, val2, val3, val4;

  imageIn= imread("bono.png",CV_LOAD_IMAGE_GRAYSCALE);
  if(!imageIn.data)
    cout << "nao abriu bono.png" << endl;

//   imageOut = imageIn;

  namedWindow("janela1",WINDOW_AUTOSIZE);
  namedWindow("janela2",WINDOW_AUTOSIZE);
  namedWindow("janela3",WINDOW_AUTOSIZE);
  namedWindow("janela4",WINDOW_AUTOSIZE);

//   for(int i=0;i<250;i++){
//     for(int j=0;j<300;j++){
//       // image.at<uchar>(i,j)=255 - image.at<uchar>(i,j);
//       imageOut.at<uchar>(i+250,j+300) = imageIn.at<uchar>(i,j);
//     //   imageOut.at<uchar>(i,j) = imageIn.at<uchar>(i+250,j+300);
//     }
//   }

//   for(int i=0;i<250;i++){
//     for(int j=0;j<300;j++){
//       // image.at<uchar>(i,j)=255 - image.at<uchar>(i,j);
//     //   imageOut.at<uchar>(i+250,j+300) = imageIn.at<uchar>(i,j);
//       imageOut.at<uchar>(i,j) = imageIn.at<uchar>(i+250,j+300);
//     }
//   }

//   for(int i=0;i<250;i++){
//     for(int j=300;j<600;j++){
//       // image.at<uchar>(i,j)=255 - image.at<uchar>(i,j);
//       imageOut.at<uchar>(i+250,j-300) = imageIn.at<uchar>(i,j);
//     //   imageOut.at<uchar>(i,j) = imageIn.at<uchar>(i+250,j-300);
//     }
//   }
  
//   for(int i=0;i<250;i++){
//     for(int j=300;j<600;j++){
//       // image.at<uchar>(i,j)=255 - image.at<uchar>(i,j);
//     //   imageOut.at<uchar>(i+250,j-300) = imageIn.at<uchar>(i,j);
//       imageOut.at<uchar>(i,j) = imageIn.at<uchar>(i+250,j-300);
//     }
//   }

  imshow("janela1", uQuarto);  
  imshow("janela2", dQuarto);  
  imshow("janela3", tQuarto);  
  imshow("janela4", qQuarto);  
  waitKey();
  return 0;
}
