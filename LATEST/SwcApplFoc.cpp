/******************************************************************************/
/* File   : SwcApplFoc.cpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infSwcApplFoc_EcuM.hpp"
#include "infSwcApplFoc_Dcm.hpp"
#include "infSwcApplFoc_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SWCAPPLFOC_AR_RELEASE_VERSION_MAJOR                                    4
#define SWCAPPLFOC_AR_RELEASE_VERSION_MINOR                                    3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SWCAPPLFOC_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SWCAPPLFOC_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SWCAPPLFOC_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SWCAPPLFOC_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_SwcApplFoc:
      public abstract_module
{
   public:
      module_SwcApplFoc(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, SWCAPPLFOC_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, SWCAPPLFOC_CONFIG_DATA, SWCAPPLFOC_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SWCAPPLFOC_CODE) DeInitFunction (void);
      FUNC(void, SWCAPPLFOC_CODE) MainFunction   (void);
};

extern VAR(module_SwcApplFoc, SWCAPPLFOC_VAR) SwcApplFoc;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, SWCAPPLFOC_VAR, SWCAPPLFOC_CONST) gptrinfEcuMClient_SwcApplFoc = &SwcApplFoc;
CONSTP2VAR(infDcmClient,  SWCAPPLFOC_VAR, SWCAPPLFOC_CONST) gptrinfDcmClient_SwcApplFoc  = &SwcApplFoc;
CONSTP2VAR(infSchMClient, SWCAPPLFOC_VAR, SWCAPPLFOC_CONST) gptrinfSchMClient_SwcApplFoc = &SwcApplFoc;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
//#include "CfgSwcApplFoc.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_SwcApplFoc, SWCAPPLFOC_VAR) SwcApplFoc(
   {
         SWCAPPLFOC_AR_RELEASE_VERSION_MAJOR
      ,  SWCAPPLFOC_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SWCAPPLFOC_CODE) module_SwcApplFoc::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, SWCAPPLFOC_CONFIG_DATA, SWCAPPLFOC_APPL_CONST) lptrCfgModule
){
#if(STD_ON == SwcApplFoc_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == SwcApplFoc_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == SwcApplFoc_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
// check lptrCfgModule for memory faults
// use PBcfg_SwcApplFoc as back-up configuration
      }
      IsInitDone = E_OK;
#if(STD_ON == SwcApplFoc_InitCheck)
   }
#endif
}

FUNC(void, SWCAPPLFOC_CODE) module_SwcApplFoc::DeInitFunction(void){
#if(STD_ON == SwcApplFoc_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == SwcApplFoc_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == SwcApplFoc_InitCheck)
   }
#endif
}

FUNC(void, SWCAPPLFOC_CODE) module_SwcApplFoc::MainFunction(void){
#if(STD_ON == SwcApplFoc_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == SwcApplFoc_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
#if(STD_ON == SwcApplFoc_InitCheck)
   }
#endif
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

