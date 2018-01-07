#include <iostream>
#include "stdafx.h"  
#include <iostream>    
#include "Eigen"    
//#include "Dense"  
#include "Vector"

using namespace Eigen;

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	MatrixXd m(2, 2);
	m(0, 0) = 3;
	m(1, 0) = 2.5;
	m(0, 1) = -1;
	m(1, 1) = m(1, 0) + m(0, 1);
	std::cout << m << std::endl;

	VectorXd x(2);
	x(0) = 1;
	x(1) = 0;
	cout << x << endl;
	system("pause");
	return 0;
}