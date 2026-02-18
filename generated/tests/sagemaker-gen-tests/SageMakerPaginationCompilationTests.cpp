/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SageMaker pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/sagemaker/SageMakerClientPagination.h>
#include <aws/sagemaker/SageMakerPaginationBase.h>
#include <aws/sagemaker/model/ListAssociationsPaginationTraits.h>
#include <aws/sagemaker/model/ListTransformJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListModelCardVersionsPaginationTraits.h>
#include <aws/sagemaker/model/ListEndpointConfigsPaginationTraits.h>
#include <aws/sagemaker/model/ListProcessingJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListAppsPaginationTraits.h>
#include <aws/sagemaker/model/SearchPaginationTraits.h>
#include <aws/sagemaker/model/ListPipelineExecutionsPaginationTraits.h>
#include <aws/sagemaker/model/ListLabelingJobsForWorkteamPaginationTraits.h>
#include <aws/sagemaker/model/ListProjectsPaginationTraits.h>
#include <aws/sagemaker/model/ListAppImageConfigsPaginationTraits.h>
#include <aws/sagemaker/model/ListLineageGroupsPaginationTraits.h>
#include <aws/sagemaker/model/ListPipelineVersionsPaginationTraits.h>
#include <aws/sagemaker/model/ListWorkteamsPaginationTraits.h>
#include <aws/sagemaker/model/ListClustersPaginationTraits.h>
#include <aws/sagemaker/model/ListModelExplainabilityJobDefinitionsPaginationTraits.h>
#include <aws/sagemaker/model/ListModelPackageGroupsPaginationTraits.h>
#include <aws/sagemaker/model/ListMonitoringExecutionsPaginationTraits.h>
#include <aws/sagemaker/model/ListAutoMLJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListImagesPaginationTraits.h>
#include <aws/sagemaker/model/ListUserProfilesPaginationTraits.h>
#include <aws/sagemaker/model/QueryLineagePaginationTraits.h>
#include <aws/sagemaker/model/ListEdgePackagingJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListModelQualityJobDefinitionsPaginationTraits.h>
#include <aws/sagemaker/model/ListTrialsPaginationTraits.h>
#include <aws/sagemaker/model/ListModelMetadataPaginationTraits.h>
#include <aws/sagemaker/model/ListComputeQuotasPaginationTraits.h>
#include <aws/sagemaker/model/ListArtifactsPaginationTraits.h>
#include <aws/sagemaker/model/ListTagsPaginationTraits.h>
#include <aws/sagemaker/model/ListModelCardExportJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListClusterNodesPaginationTraits.h>
#include <aws/sagemaker/model/ListDataQualityJobDefinitionsPaginationTraits.h>
#include <aws/sagemaker/model/ListModelsPaginationTraits.h>
#include <aws/sagemaker/model/ListActionsPaginationTraits.h>
#include <aws/sagemaker/model/ListCandidatesForAutoMLJobPaginationTraits.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobStepsPaginationTraits.h>
#include <aws/sagemaker/model/ListDevicesPaginationTraits.h>
#include <aws/sagemaker/model/ListModelPackagesPaginationTraits.h>
#include <aws/sagemaker/model/ListImageVersionsPaginationTraits.h>
#include <aws/sagemaker/model/ListPartnerAppsPaginationTraits.h>
#include <aws/sagemaker/model/ListStudioLifecycleConfigsPaginationTraits.h>
#include <aws/sagemaker/model/ListMlflowAppsPaginationTraits.h>
#include <aws/sagemaker/model/ListResourceCatalogsPaginationTraits.h>
#include <aws/sagemaker/model/ListDomainsPaginationTraits.h>
#include <aws/sagemaker/model/ListContextsPaginationTraits.h>
#include <aws/sagemaker/model/ListTrainingJobsPaginationTraits.h>
#include <aws/sagemaker/model/CreateHubContentPresignedUrlsPaginationTraits.h>
#include <aws/sagemaker/model/ListMlflowTrackingServersPaginationTraits.h>
#include <aws/sagemaker/model/ListFeatureGroupsPaginationTraits.h>
#include <aws/sagemaker/model/ListTrialComponentsPaginationTraits.h>
#include <aws/sagemaker/model/ListCompilationJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListMonitoringAlertsPaginationTraits.h>
#include <aws/sagemaker/model/ListHumanTaskUisPaginationTraits.h>
#include <aws/sagemaker/model/ListModelCardsPaginationTraits.h>
#include <aws/sagemaker/model/ListStageDevicesPaginationTraits.h>
#include <aws/sagemaker/model/ListSubscribedWorkteamsPaginationTraits.h>
#include <aws/sagemaker/model/ListCodeRepositoriesPaginationTraits.h>
#include <aws/sagemaker/model/ListPipelinesPaginationTraits.h>
#include <aws/sagemaker/model/ListPipelineExecutionStepsPaginationTraits.h>
#include <aws/sagemaker/model/ListTrainingPlansPaginationTraits.h>
#include <aws/sagemaker/model/ListHyperParameterTuningJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListSpacesPaginationTraits.h>
#include <aws/sagemaker/model/ListInferenceExperimentsPaginationTraits.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListClusterEventsPaginationTraits.h>
#include <aws/sagemaker/model/ListNotebookInstancesPaginationTraits.h>
#include <aws/sagemaker/model/ListFlowDefinitionsPaginationTraits.h>
#include <aws/sagemaker/model/ListUltraServersByReservedCapacityPaginationTraits.h>
#include <aws/sagemaker/model/ListAliasesPaginationTraits.h>
#include <aws/sagemaker/model/ListClusterSchedulerConfigsPaginationTraits.h>
#include <aws/sagemaker/model/ListAlgorithmsPaginationTraits.h>
#include <aws/sagemaker/model/ListEndpointsPaginationTraits.h>
#include <aws/sagemaker/model/ListExperimentsPaginationTraits.h>
#include <aws/sagemaker/model/ListMonitoringAlertHistoryPaginationTraits.h>
#include <aws/sagemaker/model/ListInferenceComponentsPaginationTraits.h>
#include <aws/sagemaker/model/ListLabelingJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListOptimizationJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListDeviceFleetsPaginationTraits.h>
#include <aws/sagemaker/model/ListNotebookInstanceLifecycleConfigsPaginationTraits.h>
#include <aws/sagemaker/model/ListPipelineParametersForExecutionPaginationTraits.h>
#include <aws/sagemaker/model/ListWorkforcesPaginationTraits.h>
#include <aws/sagemaker/model/ListMonitoringSchedulesPaginationTraits.h>
#include <aws/sagemaker/model/ListModelBiasJobDefinitionsPaginationTraits.h>
#include <aws/sagemaker/model/ListTrainingJobsForHyperParameterTuningJobPaginationTraits.h>
#include <aws/sagemaker/model/ListEdgeDeploymentPlansPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SageMakerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SageMakerPaginationCompilationTest, SageMakerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
