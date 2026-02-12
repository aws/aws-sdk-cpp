/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sagemaker/SageMakerClient.h>
#include <aws/sagemaker/model/CreateHubContentPresignedUrlsPaginationTraits.h>
#include <aws/sagemaker/model/ListActionsPaginationTraits.h>
#include <aws/sagemaker/model/ListAlgorithmsPaginationTraits.h>
#include <aws/sagemaker/model/ListAliasesPaginationTraits.h>
#include <aws/sagemaker/model/ListAppImageConfigsPaginationTraits.h>
#include <aws/sagemaker/model/ListAppsPaginationTraits.h>
#include <aws/sagemaker/model/ListArtifactsPaginationTraits.h>
#include <aws/sagemaker/model/ListAssociationsPaginationTraits.h>
#include <aws/sagemaker/model/ListAutoMLJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListCandidatesForAutoMLJobPaginationTraits.h>
#include <aws/sagemaker/model/ListClusterEventsPaginationTraits.h>
#include <aws/sagemaker/model/ListClusterNodesPaginationTraits.h>
#include <aws/sagemaker/model/ListClusterSchedulerConfigsPaginationTraits.h>
#include <aws/sagemaker/model/ListClustersPaginationTraits.h>
#include <aws/sagemaker/model/ListCodeRepositoriesPaginationTraits.h>
#include <aws/sagemaker/model/ListCompilationJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListComputeQuotasPaginationTraits.h>
#include <aws/sagemaker/model/ListContextsPaginationTraits.h>
#include <aws/sagemaker/model/ListDataQualityJobDefinitionsPaginationTraits.h>
#include <aws/sagemaker/model/ListDeviceFleetsPaginationTraits.h>
#include <aws/sagemaker/model/ListDevicesPaginationTraits.h>
#include <aws/sagemaker/model/ListDomainsPaginationTraits.h>
#include <aws/sagemaker/model/ListEdgeDeploymentPlansPaginationTraits.h>
#include <aws/sagemaker/model/ListEdgePackagingJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListEndpointConfigsPaginationTraits.h>
#include <aws/sagemaker/model/ListEndpointsPaginationTraits.h>
#include <aws/sagemaker/model/ListExperimentsPaginationTraits.h>
#include <aws/sagemaker/model/ListFeatureGroupsPaginationTraits.h>
#include <aws/sagemaker/model/ListFlowDefinitionsPaginationTraits.h>
#include <aws/sagemaker/model/ListHumanTaskUisPaginationTraits.h>
#include <aws/sagemaker/model/ListHyperParameterTuningJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListImageVersionsPaginationTraits.h>
#include <aws/sagemaker/model/ListImagesPaginationTraits.h>
#include <aws/sagemaker/model/ListInferenceComponentsPaginationTraits.h>
#include <aws/sagemaker/model/ListInferenceExperimentsPaginationTraits.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobStepsPaginationTraits.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListLabelingJobsForWorkteamPaginationTraits.h>
#include <aws/sagemaker/model/ListLabelingJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListLineageGroupsPaginationTraits.h>
#include <aws/sagemaker/model/ListMlflowAppsPaginationTraits.h>
#include <aws/sagemaker/model/ListMlflowTrackingServersPaginationTraits.h>
#include <aws/sagemaker/model/ListModelBiasJobDefinitionsPaginationTraits.h>
#include <aws/sagemaker/model/ListModelCardExportJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListModelCardVersionsPaginationTraits.h>
#include <aws/sagemaker/model/ListModelCardsPaginationTraits.h>
#include <aws/sagemaker/model/ListModelExplainabilityJobDefinitionsPaginationTraits.h>
#include <aws/sagemaker/model/ListModelMetadataPaginationTraits.h>
#include <aws/sagemaker/model/ListModelPackageGroupsPaginationTraits.h>
#include <aws/sagemaker/model/ListModelPackagesPaginationTraits.h>
#include <aws/sagemaker/model/ListModelQualityJobDefinitionsPaginationTraits.h>
#include <aws/sagemaker/model/ListModelsPaginationTraits.h>
#include <aws/sagemaker/model/ListMonitoringAlertHistoryPaginationTraits.h>
#include <aws/sagemaker/model/ListMonitoringAlertsPaginationTraits.h>
#include <aws/sagemaker/model/ListMonitoringExecutionsPaginationTraits.h>
#include <aws/sagemaker/model/ListMonitoringSchedulesPaginationTraits.h>
#include <aws/sagemaker/model/ListNotebookInstanceLifecycleConfigsPaginationTraits.h>
#include <aws/sagemaker/model/ListNotebookInstancesPaginationTraits.h>
#include <aws/sagemaker/model/ListOptimizationJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListPartnerAppsPaginationTraits.h>
#include <aws/sagemaker/model/ListPipelineExecutionStepsPaginationTraits.h>
#include <aws/sagemaker/model/ListPipelineExecutionsPaginationTraits.h>
#include <aws/sagemaker/model/ListPipelineParametersForExecutionPaginationTraits.h>
#include <aws/sagemaker/model/ListPipelineVersionsPaginationTraits.h>
#include <aws/sagemaker/model/ListPipelinesPaginationTraits.h>
#include <aws/sagemaker/model/ListProcessingJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListProjectsPaginationTraits.h>
#include <aws/sagemaker/model/ListResourceCatalogsPaginationTraits.h>
#include <aws/sagemaker/model/ListSpacesPaginationTraits.h>
#include <aws/sagemaker/model/ListStageDevicesPaginationTraits.h>
#include <aws/sagemaker/model/ListStudioLifecycleConfigsPaginationTraits.h>
#include <aws/sagemaker/model/ListSubscribedWorkteamsPaginationTraits.h>
#include <aws/sagemaker/model/ListTagsPaginationTraits.h>
#include <aws/sagemaker/model/ListTrainingJobsForHyperParameterTuningJobPaginationTraits.h>
#include <aws/sagemaker/model/ListTrainingJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListTrainingPlansPaginationTraits.h>
#include <aws/sagemaker/model/ListTransformJobsPaginationTraits.h>
#include <aws/sagemaker/model/ListTrialComponentsPaginationTraits.h>
#include <aws/sagemaker/model/ListTrialsPaginationTraits.h>
#include <aws/sagemaker/model/ListUltraServersByReservedCapacityPaginationTraits.h>
#include <aws/sagemaker/model/ListUserProfilesPaginationTraits.h>
#include <aws/sagemaker/model/ListWorkforcesPaginationTraits.h>
#include <aws/sagemaker/model/ListWorkteamsPaginationTraits.h>
#include <aws/sagemaker/model/QueryLineagePaginationTraits.h>
#include <aws/sagemaker/model/SearchPaginationTraits.h>

namespace Aws {
namespace SageMaker {

using CreateHubContentPresignedUrlsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::CreateHubContentPresignedUrlsRequest,
                                      Pagination::CreateHubContentPresignedUrlsPaginationTraits<SageMakerClient>>;
using ListActionsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListActionsRequest, Pagination::ListActionsPaginationTraits<SageMakerClient>>;
using ListAlgorithmsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListAlgorithmsRequest,
                                                                  Pagination::ListAlgorithmsPaginationTraits<SageMakerClient>>;
using ListAliasesPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListAliasesRequest, Pagination::ListAliasesPaginationTraits<SageMakerClient>>;
using ListAppImageConfigsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListAppImageConfigsRequest,
                                                                       Pagination::ListAppImageConfigsPaginationTraits<SageMakerClient>>;
using ListAppsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListAppsRequest, Pagination::ListAppsPaginationTraits<SageMakerClient>>;
using ListArtifactsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListArtifactsRequest,
                                                                 Pagination::ListArtifactsPaginationTraits<SageMakerClient>>;
using ListAssociationsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListAssociationsRequest,
                                                                    Pagination::ListAssociationsPaginationTraits<SageMakerClient>>;
using ListAutoMLJobsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListAutoMLJobsRequest,
                                                                  Pagination::ListAutoMLJobsPaginationTraits<SageMakerClient>>;
using ListCandidatesForAutoMLJobPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListCandidatesForAutoMLJobRequest,
                                      Pagination::ListCandidatesForAutoMLJobPaginationTraits<SageMakerClient>>;
using ListClusterEventsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListClusterEventsRequest,
                                                                     Pagination::ListClusterEventsPaginationTraits<SageMakerClient>>;
using ListClusterNodesPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListClusterNodesRequest,
                                                                    Pagination::ListClusterNodesPaginationTraits<SageMakerClient>>;
using ListClustersPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListClustersRequest,
                                                                Pagination::ListClustersPaginationTraits<SageMakerClient>>;
using ListClusterSchedulerConfigsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListClusterSchedulerConfigsRequest,
                                      Pagination::ListClusterSchedulerConfigsPaginationTraits<SageMakerClient>>;
using ListCodeRepositoriesPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListCodeRepositoriesRequest,
                                                                        Pagination::ListCodeRepositoriesPaginationTraits<SageMakerClient>>;
using ListCompilationJobsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListCompilationJobsRequest,
                                                                       Pagination::ListCompilationJobsPaginationTraits<SageMakerClient>>;
using ListComputeQuotasPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListComputeQuotasRequest,
                                                                     Pagination::ListComputeQuotasPaginationTraits<SageMakerClient>>;
using ListContextsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListContextsRequest,
                                                                Pagination::ListContextsPaginationTraits<SageMakerClient>>;
using ListDataQualityJobDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListDataQualityJobDefinitionsRequest,
                                      Pagination::ListDataQualityJobDefinitionsPaginationTraits<SageMakerClient>>;
using ListDeviceFleetsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListDeviceFleetsRequest,
                                                                    Pagination::ListDeviceFleetsPaginationTraits<SageMakerClient>>;
using ListDevicesPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListDevicesRequest, Pagination::ListDevicesPaginationTraits<SageMakerClient>>;
using ListDomainsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListDomainsRequest, Pagination::ListDomainsPaginationTraits<SageMakerClient>>;
using ListEdgeDeploymentPlansPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListEdgeDeploymentPlansRequest,
                                      Pagination::ListEdgeDeploymentPlansPaginationTraits<SageMakerClient>>;
using ListEdgePackagingJobsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListEdgePackagingJobsRequest,
                                      Pagination::ListEdgePackagingJobsPaginationTraits<SageMakerClient>>;
using ListEndpointConfigsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListEndpointConfigsRequest,
                                                                       Pagination::ListEndpointConfigsPaginationTraits<SageMakerClient>>;
using ListEndpointsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListEndpointsRequest,
                                                                 Pagination::ListEndpointsPaginationTraits<SageMakerClient>>;
using ListExperimentsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListExperimentsRequest,
                                                                   Pagination::ListExperimentsPaginationTraits<SageMakerClient>>;
using ListFeatureGroupsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListFeatureGroupsRequest,
                                                                     Pagination::ListFeatureGroupsPaginationTraits<SageMakerClient>>;
using ListFlowDefinitionsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListFlowDefinitionsRequest,
                                                                       Pagination::ListFlowDefinitionsPaginationTraits<SageMakerClient>>;
using ListHumanTaskUisPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListHumanTaskUisRequest,
                                                                    Pagination::ListHumanTaskUisPaginationTraits<SageMakerClient>>;
using ListHyperParameterTuningJobsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListHyperParameterTuningJobsRequest,
                                      Pagination::ListHyperParameterTuningJobsPaginationTraits<SageMakerClient>>;
using ListImagesPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListImagesRequest, Pagination::ListImagesPaginationTraits<SageMakerClient>>;
using ListImageVersionsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListImageVersionsRequest,
                                                                     Pagination::ListImageVersionsPaginationTraits<SageMakerClient>>;
using ListInferenceComponentsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListInferenceComponentsRequest,
                                      Pagination::ListInferenceComponentsPaginationTraits<SageMakerClient>>;
using ListInferenceExperimentsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListInferenceExperimentsRequest,
                                      Pagination::ListInferenceExperimentsPaginationTraits<SageMakerClient>>;
using ListInferenceRecommendationsJobsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListInferenceRecommendationsJobsRequest,
                                      Pagination::ListInferenceRecommendationsJobsPaginationTraits<SageMakerClient>>;
using ListInferenceRecommendationsJobStepsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListInferenceRecommendationsJobStepsRequest,
                                      Pagination::ListInferenceRecommendationsJobStepsPaginationTraits<SageMakerClient>>;
using ListLabelingJobsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListLabelingJobsRequest,
                                                                    Pagination::ListLabelingJobsPaginationTraits<SageMakerClient>>;
using ListLabelingJobsForWorkteamPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListLabelingJobsForWorkteamRequest,
                                      Pagination::ListLabelingJobsForWorkteamPaginationTraits<SageMakerClient>>;
using ListLineageGroupsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListLineageGroupsRequest,
                                                                     Pagination::ListLineageGroupsPaginationTraits<SageMakerClient>>;
using ListMlflowAppsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListMlflowAppsRequest,
                                                                  Pagination::ListMlflowAppsPaginationTraits<SageMakerClient>>;
using ListMlflowTrackingServersPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListMlflowTrackingServersRequest,
                                      Pagination::ListMlflowTrackingServersPaginationTraits<SageMakerClient>>;
using ListModelBiasJobDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListModelBiasJobDefinitionsRequest,
                                      Pagination::ListModelBiasJobDefinitionsPaginationTraits<SageMakerClient>>;
using ListModelCardExportJobsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListModelCardExportJobsRequest,
                                      Pagination::ListModelCardExportJobsPaginationTraits<SageMakerClient>>;
using ListModelCardsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListModelCardsRequest,
                                                                  Pagination::ListModelCardsPaginationTraits<SageMakerClient>>;
using ListModelCardVersionsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListModelCardVersionsRequest,
                                      Pagination::ListModelCardVersionsPaginationTraits<SageMakerClient>>;
using ListModelExplainabilityJobDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListModelExplainabilityJobDefinitionsRequest,
                                      Pagination::ListModelExplainabilityJobDefinitionsPaginationTraits<SageMakerClient>>;
using ListModelMetadataPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListModelMetadataRequest,
                                                                     Pagination::ListModelMetadataPaginationTraits<SageMakerClient>>;
using ListModelPackageGroupsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListModelPackageGroupsRequest,
                                      Pagination::ListModelPackageGroupsPaginationTraits<SageMakerClient>>;
using ListModelPackagesPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListModelPackagesRequest,
                                                                     Pagination::ListModelPackagesPaginationTraits<SageMakerClient>>;
using ListModelQualityJobDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListModelQualityJobDefinitionsRequest,
                                      Pagination::ListModelQualityJobDefinitionsPaginationTraits<SageMakerClient>>;
using ListModelsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListModelsRequest, Pagination::ListModelsPaginationTraits<SageMakerClient>>;
using ListMonitoringAlertHistoryPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListMonitoringAlertHistoryRequest,
                                      Pagination::ListMonitoringAlertHistoryPaginationTraits<SageMakerClient>>;
using ListMonitoringAlertsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListMonitoringAlertsRequest,
                                                                        Pagination::ListMonitoringAlertsPaginationTraits<SageMakerClient>>;
using ListMonitoringExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListMonitoringExecutionsRequest,
                                      Pagination::ListMonitoringExecutionsPaginationTraits<SageMakerClient>>;
using ListMonitoringSchedulesPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListMonitoringSchedulesRequest,
                                      Pagination::ListMonitoringSchedulesPaginationTraits<SageMakerClient>>;
using ListNotebookInstanceLifecycleConfigsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListNotebookInstanceLifecycleConfigsRequest,
                                      Pagination::ListNotebookInstanceLifecycleConfigsPaginationTraits<SageMakerClient>>;
using ListNotebookInstancesPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListNotebookInstancesRequest,
                                      Pagination::ListNotebookInstancesPaginationTraits<SageMakerClient>>;
using ListOptimizationJobsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListOptimizationJobsRequest,
                                                                        Pagination::ListOptimizationJobsPaginationTraits<SageMakerClient>>;
using ListPartnerAppsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListPartnerAppsRequest,
                                                                   Pagination::ListPartnerAppsPaginationTraits<SageMakerClient>>;
using ListPipelineExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListPipelineExecutionsRequest,
                                      Pagination::ListPipelineExecutionsPaginationTraits<SageMakerClient>>;
using ListPipelineExecutionStepsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListPipelineExecutionStepsRequest,
                                      Pagination::ListPipelineExecutionStepsPaginationTraits<SageMakerClient>>;
using ListPipelineParametersForExecutionPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListPipelineParametersForExecutionRequest,
                                      Pagination::ListPipelineParametersForExecutionPaginationTraits<SageMakerClient>>;
using ListPipelinesPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListPipelinesRequest,
                                                                 Pagination::ListPipelinesPaginationTraits<SageMakerClient>>;
using ListPipelineVersionsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListPipelineVersionsRequest,
                                                                        Pagination::ListPipelineVersionsPaginationTraits<SageMakerClient>>;
using ListProcessingJobsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListProcessingJobsRequest,
                                                                      Pagination::ListProcessingJobsPaginationTraits<SageMakerClient>>;
using ListProjectsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListProjectsRequest,
                                                                Pagination::ListProjectsPaginationTraits<SageMakerClient>>;
using ListResourceCatalogsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListResourceCatalogsRequest,
                                                                        Pagination::ListResourceCatalogsPaginationTraits<SageMakerClient>>;
using ListSpacesPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListSpacesRequest, Pagination::ListSpacesPaginationTraits<SageMakerClient>>;
using ListStageDevicesPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListStageDevicesRequest,
                                                                    Pagination::ListStageDevicesPaginationTraits<SageMakerClient>>;
using ListStudioLifecycleConfigsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListStudioLifecycleConfigsRequest,
                                      Pagination::ListStudioLifecycleConfigsPaginationTraits<SageMakerClient>>;
using ListSubscribedWorkteamsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListSubscribedWorkteamsRequest,
                                      Pagination::ListSubscribedWorkteamsPaginationTraits<SageMakerClient>>;
using ListTagsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<SageMakerClient>>;
using ListTrainingJobsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListTrainingJobsRequest,
                                                                    Pagination::ListTrainingJobsPaginationTraits<SageMakerClient>>;
using ListTrainingJobsForHyperParameterTuningJobPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListTrainingJobsForHyperParameterTuningJobRequest,
                                      Pagination::ListTrainingJobsForHyperParameterTuningJobPaginationTraits<SageMakerClient>>;
using ListTrainingPlansPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListTrainingPlansRequest,
                                                                     Pagination::ListTrainingPlansPaginationTraits<SageMakerClient>>;
using ListTransformJobsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListTransformJobsRequest,
                                                                     Pagination::ListTransformJobsPaginationTraits<SageMakerClient>>;
using ListTrialComponentsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListTrialComponentsRequest,
                                                                       Pagination::ListTrialComponentsPaginationTraits<SageMakerClient>>;
using ListTrialsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListTrialsRequest, Pagination::ListTrialsPaginationTraits<SageMakerClient>>;
using ListUltraServersByReservedCapacityPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListUltraServersByReservedCapacityRequest,
                                      Pagination::ListUltraServersByReservedCapacityPaginationTraits<SageMakerClient>>;
using ListUserProfilesPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListUserProfilesRequest,
                                                                    Pagination::ListUserProfilesPaginationTraits<SageMakerClient>>;
using ListWorkforcesPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListWorkforcesRequest,
                                                                  Pagination::ListWorkforcesPaginationTraits<SageMakerClient>>;
using ListWorkteamsPaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::ListWorkteamsRequest,
                                                                 Pagination::ListWorkteamsPaginationTraits<SageMakerClient>>;
using QueryLineagePaginator = Aws::Utils::Pagination::Paginator<SageMakerClient, Model::QueryLineageRequest,
                                                                Pagination::QueryLineagePaginationTraits<SageMakerClient>>;
using SearchPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerClient, Model::SearchRequest, Pagination::SearchPaginationTraits<SageMakerClient>>;

}  // namespace SageMaker
}  // namespace Aws
