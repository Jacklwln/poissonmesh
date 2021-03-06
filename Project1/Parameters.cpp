#include "stdafx.h"
#include "Parameters.h"
#include "Utility.h"

const GLdouble Parameters::PI = 3.141592653589793238;
const int Parameters::MAX_LINE_LENGTH = 1000;
const int Parameters::MAX_PREFIX_LENGTH = 10;
const int Parameters::MAX_SUFFIX_LENGTH = 10;
const GLdouble Parameters::zNear = 0.01;
const GLdouble Parameters::zFar = 1000;
GLfloat Parameters::fMagnification = 10.0f;
bool Parameters::bLine = false;
bool Parameters::bHiddenFaceRemoval = true;
GLfloat& Parameters::fIntersectRadius = fMagnification;
States Parameters::status = States::TRANSLATE;
const GLfloat Parameters::fNormalLineWidth = 1.0f;
const GLfloat Parameters::fHighLightLineWidth = 5.0f;
const GLfloat Parameters::fAxisLineWidth = 2.0f;
GLfloat Parameters::fAxisLength;
vector<HEFace*>::size_type Parameters::nMaxDrawNumber;
Point Parameters::m_vMin = Utility::maxPoint;
Point Parameters::m_vMax = Utility::minPoint;
GLfloat Parameters::fMaxDrawSize;
const int Parameters::nWindowHeight = GetSystemMetrics(SM_CYSCREEN);
const int Parameters::nWindowWidth = GetSystemMetrics(SM_CXSCREEN);
const int Parameters::nMargin = 30;
int Parameters::nCount;
bool Parameters::bSelectVert = false;

GLfloat Parameters::fRevisedMaginification()
{
	return log(fMagnification + 1) + 1;
}