//start DomainT 2025.01.09 10:57:10
zOPER_EXPORT zSHORT OPERATION
oDomainT_ActivateDomainList( zPVIEW vViewToInstance0,
                             zVIEW vViewToWindow1 );

zOPER_EXPORT zSHORT OPERATION
oDomainT_AcceptDomainValue( zVIEW vViewtoInstance0,
                            zPCHAR pchNameOfEntity1,
                            zSHORT nEvent2,
                            zSHORT nState3 );

zOPER_EXPORT zSHORT OPERATION
oDomainT_ObjectConstraints( zVIEW vViewtoInstance0,
                            zSHORT nEvent1,
                            zSHORT nState2 );

zOPER_EXPORT zSHORT OPERATION
oDomainT_ActivateDomain( zPVIEW vViewToInstance0,
                         zPCHAR pchDomainName1,
                         zVIEW vViewToWindow2 );

//end
//start mChart 2025.01.09 10:57:10
zOPER_EXPORT zSHORT OPERATION
omChart_CreatePieChart( zVIEW vViewToInstance0 );

zOPER_EXPORT zSHORT OPERATION
omChart_CreateTimeLine( zVIEW vViewToInstance0 );

zOPER_EXPORT zSHORT OPERATION
omChart_CreatePieChartRS( zVIEW vmChart0,
                          zVIEW vzqFrame1,
                          zVIEW vvResultSet2,
                          zPCHAR pchszGroupNameGraph3 );

zOPER_EXPORT zSHORT OPERATION
omChart_CreateBarChartRS( zVIEW vViewToInstance0,
                          zVIEW vzqFrame1,
                          zVIEW vvResultSet2,
                          zPCHAR pchszGroupNameGraph3,
                          zPCHAR pchszGraphOrientation4 );

zOPER_EXPORT zSHORT OPERATION
omChart_Create2_LevelBarChart( zVIEW vViewToInstance0,
                               zVIEW vzqFrame1,
                               zVIEW vvResultSet2,
                               zPCHAR pchszGroupNameGraph3,
                               zPCHAR pchszGraphOrientation4 );

zOPER_EXPORT zSHORT OPERATION
omChart_SetJavaScriptLine( zVIEW vmChart0,
                           zPCHAR pchJavaScriptLine1 );

zOPER_EXPORT zSHORT OPERATION
omChart_WriteChartToFile( zVIEW vmChart0,
                          zPCHAR pchszDirectoryFileName1 );

zOPER_EXPORT zSHORT OPERATION
omChart_CreateBarChart( zVIEW vViewToInstance0 );

zOPER_EXPORT zSHORT OPERATION
omChart_CreateColumnChart( zVIEW vmChart0 );

zOPER_EXPORT zSHORT OPERATION
omChart_CreateComboChart( zVIEW vViewToInstance0 );

//end
//start mConList 2025.08.12 14:47:21
zOPER_EXPORT zSHORT OPERATION
omConList_GetConListName( zVIEW vViewToInstance0,
                          zPCHAR pchszMainViewName1,
                          zPCHAR pchszPotentialListName2,
                          zPCHAR pchszReturnString3 );

zOPER_EXPORT zSHORT OPERATION
omConList_GetConListNameDefault( zPCHAR pchszMainViewName0,
                                 zPCHAR pchszPotentialListName1,
                                 zPCHAR pchszFinalListName2 );

//end
//start mPerson 2025.01.09 10:57:11
zOPER_EXPORT zSHORT OPERATION
omPerson_ActivateConstraint( zVIEW vViewtoInstance0,
                             zSHORT nEvent1,
                             zSHORT nState2 );

//end
//start mQryObj 2025.01.09 10:57:11
zOPER_EXPORT zSHORT OPERATION
omQryObj_BuildQueryObjectList( zPVIEW vViewToInstance0,
                               zVIEW vViewToTask1 );

//end
//start mQryRpt 2025.01.09 10:57:11
zOPER_EXPORT zSHORT OPERATION
omQryRpt_ActivateUserReportList( zPVIEW vViewToInstance0,
                                 zVIEW vmUser1 );

//end
//start mUser 2025.01.09 10:57:11
zOPER_EXPORT zSHORT OPERATION
omUser_SectionAccessAllowed( zVIEW vmUser0,
                             zPCHAR pchszAdminDiv1,
                             zPCHAR pchszArea2,
                             zPCHAR pchszSection3,
                             zPCHAR pchszPermissionString4 );

zOPER_EXPORT zSHORT OPERATION
omUser_SubSectReadAccAllowed( zVIEW vViewToInstance0,
                              zPCHAR pchszAdminDiv1,
                              zPCHAR pchszArea2,
                              zPCHAR pchszSection3,
                              zPCHAR pchszSubSectionName4 );

zOPER_EXPORT zSHORT OPERATION
omUser_SubSectAccessAllowed( zVIEW vmUser0,
                             zPCHAR pchszAdminDiv1,
                             zPCHAR pchszArea2,
                             zPCHAR pchszSection3,
                             zPCHAR pchszSubSectionName4 );

//end
//start sHost 2025.01.09 10:57:11
zOPER_EXPORT zSHORT OPERATION
osHost_ActivateHostObject( zPVIEW vViewToInstance0,
                           zVIEW vViewToWindow1 );

//end
//start wXferO 2025.08.12 14:23:53
zOPER_EXPORT zSHORT OPERATION
owXferO_SetUpAllQueryValues( zVIEW vViewToInstance0 );

//end
//start zqFrame 2025.01.09 10:57:11
zOPER_EXPORT zSHORT OPERATION
ozqFrame_ActivateQueryObjectO( zVIEW vViewToInstance0,
                               zPVIEW vvResultSet1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_AddColumnAttribute( zVIEW vViewToInstance0,
                             zPCHAR pchDisplayValue1,
                             zPCHAR pchszEntityName2,
                             zPCHAR pchszAttributeName3 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_AnalyzeReformatResult( zVIEW vzqFrame0,
                                zVIEW vvResultSet1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_BuildConditionValues( zVIEW vViewToInstance0 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_BuildPostQualEntry( zVIEW vViewToInstance0 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_BuildQualEntry( zVIEW vViewToInstance0,
                         zPCHAR pchEntityName1,
                         zPCHAR pchAttributeName2,
                         zPCHAR pchSearchType3,
                         zPCHAR pchSearchValue4,
                         zVIEW vqConvertData5,
                         zVIEW vKZDBHQUA6 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_BuildQualFromFrame( zVIEW vViewToInstance0,
                             zPVIEW vKZDBHQUA1,
                             zVIEW vqConvertData2 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_BuildSummaryDetail( zVIEW vViewToInstance0,
                             zVIEW vResultSet1,
                             zVIEW vvLOD2 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_CheckAddLanguageText( zVIEW vViewToInstance0,
                               zPCHAR pchOriginalTextValue1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_CheckSubgroupSelection( zVIEW vViewToInstance0,
                                 zVIEW vQueryObject1,
                                 zPCHAR pchQualifyingEntityName2,
                                 zPCHAR pchRootEntityFlag3 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_ClearQueryInformation( zVIEW vViewToInstance0 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_ComputeOperationValue( zVIEW vViewToInstance0,
                                zVIEW vvQueryObject1,
                                zPDECIMAL mReturnedValue2,
                                zPCHAR pchOperation3,
                                zPCHAR pchEntityName4,
                                zPCHAR pchAttributeName5,
                                zPCHAR pchScopingEntityName6 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_ComputeOperationVDate( zVIEW vViewToInstance0,
                                zVIEW vvQueryObject1,
                                zPCHAR pchReturnedValue2,
                                zPCHAR pchOperationName3,
                                zPCHAR pchszEntityName4,
                                zPCHAR pchszAttributeName5,
                                zPCHAR pchScopingEntityName6 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_ExpandGeneralParms( zVIEW vViewToInstance0,
                             zVIEW vQueryFrame1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_FormatCSV_EntityRecurs( zVIEW vViewToInstance0,
                                 zVIEW vzqFrameRoot1,
                                 zVIEW vvQueryObject2,
                                 zPCHAR pchOutputLine3,
                                 zPCHAR pchszType4,
                                 zLONG lFilePointer5,
                                 zPLONG lHierarchicalLevel6,
                                 zPLONG lLastLevel7,
                                 zPCHAR pchScopingEntityName8,
                                 zPLONG lColumnCount9 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_FormatCSV_FrmResultSet( zVIEW vViewToInstance0,
                                 zVIEW vvXOD1,
                                 zVIEW vvResultSet2,
                                 zPCHAR pchszType3,
                                 zPCHAR pchOutputFileName4 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_FormatCSV_StartLine( zVIEW vViewToInstance0,
                              zPCHAR pchOutputLine1,
                              zLONG lNextColumnCount2,
                              zPCHAR pchFormatCSV_StartLine3 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_FormatCSV_TitleRecurs( zVIEW vViewToInstance0,
                                zVIEW vzqFrameRoot1,
                                zPCHAR pchOutputLine2,
                                zPLONG lNextColumnNumber3,
                                zPCHAR pchszTypeFlag4,
                                zLONG lRecursiveLevel5 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_FormatDisplay( zVIEW vViewToInstance0,
                        zVIEW vvXOD1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_FormatDisplayRecur( zVIEW vViewToInstance0,
                             zVIEW vqFrameRoot1,
                             zVIEW vvXOD2 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_FormatQueryForChart( zVIEW vViewToInstance0,
                              zVIEW vvResultSet1,
                              zPCHAR pchGraphName2 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_FormatResultSetList( zVIEW vViewToInstance0,
                              zVIEW vResultSet1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_FormatRptDesign( zVIEW vViewToInstance0,
                          zVIEW vvXOD1,
                          zPVIEW vqBaseR_Return2,
                          zPCHAR pchReportTitle3,
                          zPCHAR pchQueryViewName4 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_FormatRptDesignRecurs( zVIEW vViewToInstance0,
                                zVIEW vqFrameRoot1,
                                zVIEW vqBaseR2,
                                zVIEW vqBaseR_Source3,
                                zPCHAR pchQueryViewName4,
                                zLONG lFirstColumnStartingPosi5,
                                zPCHAR pchParentDisplayRowFlag6 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_FormatRS_DisplayToCSV( zVIEW vViewToInstance0,
                                zPCHAR pchOutputFileName1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_InitializeFrameForLOD( zPVIEW vViewToInstance0,
                                zVIEW vvLOD1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_InitializeFrameRecurs( zVIEW vViewToInstance0,
                                zVIEW vzqFrameRoot1,
                                zVIEW vvLOD_Recurs2,
                                zVIEW vvLOD_Root3,
                                zPCHAR pchParentEntityName4,
                                zPCHAR pchRootEntityName5,
                                zLONG lPreviousHierarchicalLev6 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_InitQueryUpdate( zVIEW vViewToInstance0,
                          zVIEW vQueryView1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_LocateEntityRecurs( zVIEW vViewToInstance0,
                             zPCHAR pchEntityName1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_MergeResultSets( zVIEW vViewToInstance0,
                          zVIEW vResultSetTarget1,
                          zVIEW vResultSetSource2,
                          zPCHAR pchszEntityName3 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_OrderRequestedEntity( zVIEW vViewToInstance0,
                               zVIEW vQueryObject1,
                               zPCHAR pchszEntityName2 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_ParseBooleanVML( zVIEW vzqFrame0 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_PostActivateProc( zVIEW vViewToInstance0,
                           zVIEW vvResultSet1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_PostActivateRecurs( zVIEW vViewToInstance0,
                             zVIEW vzqFrameRoot1,
                             zVIEW vvQueryObject2 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_RebuildFrameAttr( zVIEW vzqFrame0,
                           zVIEW vvLOD_Root1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_RebuildFrameAttrRecur( zVIEW vzqFrame0,
                                zVIEW vvLOD_Root1,
                                zVIEW vvLOD_Recurs2 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_RebuildObjEntRecurs( zVIEW vzqFrame0,
                              zVIEW vzqFrameRoot1,
                              zVIEW vvLOD_Recurs2,
                              zVIEW vvLOD_Root3,
                              zPCHAR pchParentEntityName4,
                              zPCHAR pchRootEntityName5 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_ResyncObjectNames( zVIEW vViewToInstance0,
                            zVIEW vvLOD1,
                            zPCHAR pchszLanguageCode2 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_SetFrameStructure( zVIEW vViewToInstance0,
                            zVIEW vvObject1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_SetTreeParentRecurs( zVIEW vViewToInstance0,
                              zVIEW vzqFrameRecurs1,
                              zPCHAR pchParentEntityName2 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_SetUpForNewQuery( zPVIEW vViewToInstance0,
                           zVIEW vAnyView1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_SetUpOrderingInfo( zVIEW vViewToInstance0 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_ValidateQuery( zVIEW vViewToInstance0,
                        zPCHAR pchType1 );

zOPER_EXPORT zSHORT OPERATION
ozqFrame_ValidateScopingEntity( zVIEW vViewToInstance0 );

//end
//start zqObjExt 2025.01.09 14:13:40
zOPER_EXPORT zSHORT OPERATION
ozqObjExt_BuildDisplayValues( zPVIEW vViewToInstance0,
                              zVIEW vzqFrame1,
                              zVIEW vResultSet2 );

zOPER_EXPORT zSHORT OPERATION
ozqObjExt_BuildFrameSummary( zVIEW vViewToInstance0,
                             zVIEW vzqFrame1 );

zOPER_EXPORT zSHORT OPERATION
ozqObjExt_ComputeLevel1Values( zVIEW vViewToInstance0,
                               zVIEW vResultSet1 );

zOPER_EXPORT zSHORT OPERATION
ozqObjExt_CreateTraceMessage( zVIEW vViewToInstance0,
                              zPCHAR pchMessageText1,
                              zPCHAR pchOptionalValue2 );

zOPER_EXPORT zSHORT OPERATION
ozqObjExt_FormatCSV_FromSummary( zVIEW vViewToInstance0,
                                 zVIEW vzqFrame1 );

zOPER_EXPORT zSHORT OPERATION
ozqObjExt_FormatGraphFromSummary( zVIEW vViewToInstance0,
                                  zVIEW vzqFrame1,
                                  zPCHAR pchGraphName2 );

//end
//start zqSQuery 2025.01.09 10:57:12
zOPER_EXPORT zSHORT OPERATION
ozqSQuery_ObjectConstraint( zVIEW vViewtoInstance0,
                            zSHORT nEvent1,
                            zSHORT nState2 );

zOPER_EXPORT zSHORT OPERATION
ozqSQuery_ResyncQueryToReport( zVIEW vViewToInstance0 );

zOPER_EXPORT zSHORT OPERATION
ozqSQuery_ExecQueryForGenerate( zVIEW vViewToInstance0 );

zOPER_EXPORT zSHORT OPERATION
ozqSQuery_SetUpPackagedQueryRun( zPVIEW vViewToInstance0,
                                 zVIEW vmReportLST1 );

//end
//start zqSumR 2025.01.09 10:57:12
zOPER_EXPORT zSHORT OPERATION
ozqSumR_BuildSummaryResultSet( zPVIEW vViewToInstance0,
                               zVIEW vzqFrame1,
                               zVIEW vInputResultSet2 );

zOPER_EXPORT zSHORT OPERATION
ozqSumR_BuildDisplayValues( zVIEW vzqSumR0,
                            zVIEW vzqFrame1 );

zOPER_EXPORT zSHORT OPERATION
ozqSumR_ReformatDisplayReport( zVIEW vViewToInstance0,
                               zVIEW vqBaseR1,
                               zVIEW vqBaseR_Base2 );

zOPER_EXPORT zSHORT OPERATION
ozqSumR_FormatCSV_BreakPtLine( zVIEW vzqSumR0,
                               zLONG lFilePointer1,
                               zPCHAR pchSummaryEntityName2 );

zOPER_EXPORT zSHORT OPERATION
ozqSumR_FormatCSV_BreakPtsFile( zVIEW vViewToInstance0,
                                zLONG lFilePointer1 );

zOPER_EXPORT zSHORT OPERATION
ozqSumR_CreateSummaryEntity( zVIEW vViewToInstance0,
                             zPCHAR pchSummaryEntityName1 );

//end
