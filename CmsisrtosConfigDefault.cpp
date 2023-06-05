/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
#include "cmsisrtos/CmsisrtosConfigDefault.h"

/* ****************************************************************************************
 * Macro
 */

/* ****************************************************************************************
 * Using
 */

//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
using cmsisrtos::CmsisrtosConfigDefault;

/* ****************************************************************************************
 * Variable <Static>
 */

/* ****************************************************************************************
 * Construct Method
 */
/**
 *
 */
CmsisrtosConfigDefault::CmsisrtosConfigDefault(void){
  return;
}
 
/**
 *
 */
CmsisrtosConfigDefault::~CmsisrtosConfigDefault(void){
  return;
}
/* ****************************************************************************************
 * Operator Method
 */

/* ****************************************************************************************
 * Public Method <Static>
 */

/* ****************************************************************************************
 * Public Method <Override>
 */
/**
 *
 */
uint32_t CmsisrtosConfigDefault::coreGetClock(void){
  return this->mClock;
}
  
/**
 * @brief 
 *
 * @return
 */
lang::OutputStream* CmsisrtosConfigDefault::coreGetOutputStream(void){
  return this->mOutputStream;
}
    
/**
 * @brief 
 *
 * @return
 */
lang::InputStream* CmsisrtosConfigDefault::coreGetInputStream(void){
  return this->mInputStream;
}
  
/**
 * @brief 核心重啟
 *
 */
void CmsisrtosConfigDefault::coreReboot(void){
  if(this->mReboot != nullptr)
    this->mReboot();
  
  return;
}
/* ****************************************************************************************
 * Public Method
 */
/**
 *
 */
void CmsisrtosConfigDefault::setClock(uint32_t clock){
  this->mClock = clock;
}
  
/**
 *
 */
void CmsisrtosConfigDefault::setInputStream(lang::InputStream* inputStream){
  this->mInputStream = inputStream;
}
  
/**
 *
 */
void CmsisrtosConfigDefault::setOutputStream(lang::OutputStream* outputStream){
  this->mOutputStream = outputStream;
}
  
/**
 *
 */
void CmsisrtosConfigDefault::setReboot(void (*rebootMethod)(void)){
  this->mReboot = rebootMethod;
}
/* ****************************************************************************************
 * Protected Method <Static>
 */

/* ****************************************************************************************
 * Protected Method <Override>
 */

/* ****************************************************************************************
 * Protected Method
 */

/* ****************************************************************************************
 * Private Method
 */

/* ****************************************************************************************
 * End of file
 */