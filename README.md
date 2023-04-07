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

HL Question-2 Report.pdf is the summary report for Question-2 comparing task 1 and 2.

Bonus_LinkedList.c file has the code for Bonus Question
