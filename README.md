Intern_task

QUESTIONS:

Question 1 (Mandatory)
The process of estimating the parameters of a camera is called camera calibration.
This means we have all the information (parameters or coefficients) about the camera required to determine an accurate relationship between a 3D point in the real world and its corresponding 2D projection (pixel) in the image captured by that calibrated camera.

Write a python script to automatically find the camera calibration parameters using a 6x8 checkerboard pattern. 
Record a video (or share photographs) to show how the calibration setup works.

You can find the checkerboard pattern here: 

https://raw.githubusercontent.com/MarkHedleyJones/markhedleyjones.github.io/master/media/calibration-checkerboard-collection/Checkerboard-A4-30mm-8x6.pdf


Question 2 (Mandatory)
Task 1:
Download the dataset from the following Google Drive link: 
https://drive.google.com/drive/folders/1uOgOOa-5ltnGAYQ-Wb9rFMX_0lM2YN9_?usp=sharing. This dataset consists of various images containing people at an industrial site
Implement any person detection model, such as MobileNet, YOLOv3, or YOLOv5, to detect individuals in the images. You can use any programming language of your choice.
Task 2:
To enhance the performance of your small object detection model, several techniques can be useful. These include capturing higher-resolution images, using a higher input resolution for your model, dividing images into smaller tiles, generating additional data using augmentation methods, and automatically determining model anchors.
Apply any of the above techniques and apply it to your model. Compare the results with and without the implementation of the technique to demonstrate how it has improved the performance of the detection model.

Write a report summarizing the results, including the accuracy and precision of the model before and after the implementation of the chosen technique. You can also include visualizations of the detected individuals in the images to illustrate the impact of the technique on the model's performance.

Submission:
Submit the report, along with the source code and any relevant visualizations


Bonus Question 
Write a C code for a singly linked list that stores data of type int (using struct). It should contain functions :
Adding a new node, 
Deleting a particular node (referenced by the location),
Delete all the nodes from the list which contain a particular data say a number 5
Delete the complete linked list
Display the linked list
Display the inverted linked list
Display the total memory space occupied by the linked list
Delete all the nodes from the list which contain a particular data say a number 5 and the next subsequent node



SOLUTION FILES:


Cam_calibiration.ipynb contains code for Question -1.

HACKLAB Q2(1).ipynb file contains code for Question-2 Task-1. 

HACKLAB Q2(2).ipynb file contains code for Question-2 Task-2.

Bonus_LinkedList.c file has the code for Bonus Question

Report for Question 2 is attached below







QUESTION 2 REPORT



Task 1:

REPORT :
I chose to train a YOLOv5 model on my dataset of people at an industrial site. The dataset was annotated using the Roboflow website. To measure the accuracy of the model, I used the mAP (Mean Average Precision) metric.
After training the YOLOv5 model, I achieved an mAP of 79.8%, with a precision of 91.7% and a recall of 76.7%. These results indicate that the model performs well in detecting people at an industrial site.

TRAINING GRAPH:
 ![image](https://user-images.githubusercontent.com/72346875/230638428-a8d23c4b-37a3-4d62-8803-dfac2d509906.png)

SAMPLE DETECTION:
![image](https://user-images.githubusercontent.com/72346875/230638452-284a02e5-dd66-4ff0-a027-e1a59346003a.png)

 

Task 2:


REPORT :
	To improve the performance of my YOLOv5 model for detecting people at an industrial site, I used data augmentation techniques such as flipping and rotating to generate up to 800 images. I then split the dataset into 70% for training, 20% for validation, and 10% for testing.
After training the model using this approach, I achieved an mAP of 58.2%, with a precision of 74.4% and a recall of 50.9%. These results indicate that the model has room for improvement in its ability to accurately detect people in the images.

TRAINING GRAPH:
 ![image](https://user-images.githubusercontent.com/72346875/230638518-0df26270-e684-44d6-882e-425e74c9e7af.png)

SAMPLE DETECTION:
![image](https://user-images.githubusercontent.com/72346875/230638583-a61c5610-5837-45f1-89f2-834e61348ae9.png)
 

SUMMARY:
The first approach I used involved annotating the dataset using the Roboflow website and training a YOLOv5 model on the annotated data. The model achieved an mAP of 79.8%, with a precision of 91.7% and a recall of 76.7%.
In the second approach, I used data augmentation techniques such as flipping and rotating to generate up to 800 images. I then split the dataset into 70% for training, 20% for validation, and 10% for testing. After training the model using this approach, I achieved an mAP of 58.2%, with a precision of 74.4% and a recall of 50.9%.
Comparing these results, we can see that the first approach resulted in significantly higher mAP, precision, and recall scores compared to the second approach. This suggests that the first approach, which involved using an existing tool to annotate the dataset and training the model on the annotated data, was more effective in achieving accurate person detection. However, the second approach did involve data augmentation, which can be a useful technique for improving model performance when limited data is available.

