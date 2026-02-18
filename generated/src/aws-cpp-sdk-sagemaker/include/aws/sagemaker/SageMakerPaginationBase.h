/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace SageMaker {

class SageMakerClient;

template <typename DerivedClient>
class SageMakerPaginationBase {
 public:
  /**
   * Create a paginator for CreateHubContentPresignedUrls operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::CreateHubContentPresignedUrlsRequest,
                                    Pagination::CreateHubContentPresignedUrlsPaginationTraits<DerivedClient>>
  CreateHubContentPresignedUrlsPaginator(const Model::CreateHubContentPresignedUrlsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::CreateHubContentPresignedUrlsRequest,
                                             Pagination::CreateHubContentPresignedUrlsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActionsRequest, Pagination::ListActionsPaginationTraits<DerivedClient>>
  ListActionsPaginator(const Model::ListActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActionsRequest,
                                             Pagination::ListActionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListAlgorithms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAlgorithmsRequest, Pagination::ListAlgorithmsPaginationTraits<DerivedClient>>
  ListAlgorithmsPaginator(const Model::ListAlgorithmsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAlgorithmsRequest,
                                             Pagination::ListAlgorithmsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAliasesRequest, Pagination::ListAliasesPaginationTraits<DerivedClient>>
  ListAliasesPaginator(const Model::ListAliasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAliasesRequest,
                                             Pagination::ListAliasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListAppImageConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppImageConfigsRequest,
                                    Pagination::ListAppImageConfigsPaginationTraits<DerivedClient>>
  ListAppImageConfigsPaginator(const Model::ListAppImageConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppImageConfigsRequest,
                                             Pagination::ListAppImageConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppsRequest, Pagination::ListAppsPaginationTraits<DerivedClient>>
  ListAppsPaginator(const Model::ListAppsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppsRequest, Pagination::ListAppsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListArtifacts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListArtifactsRequest, Pagination::ListArtifactsPaginationTraits<DerivedClient>>
  ListArtifactsPaginator(const Model::ListArtifactsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListArtifactsRequest,
                                             Pagination::ListArtifactsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociationsRequest,
                                    Pagination::ListAssociationsPaginationTraits<DerivedClient>>
  ListAssociationsPaginator(const Model::ListAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociationsRequest,
                                             Pagination::ListAssociationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAutoMLJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutoMLJobsRequest, Pagination::ListAutoMLJobsPaginationTraits<DerivedClient>>
  ListAutoMLJobsPaginator(const Model::ListAutoMLJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutoMLJobsRequest,
                                             Pagination::ListAutoMLJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListCandidatesForAutoMLJob operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCandidatesForAutoMLJobRequest,
                                    Pagination::ListCandidatesForAutoMLJobPaginationTraits<DerivedClient>>
  ListCandidatesForAutoMLJobPaginator(const Model::ListCandidatesForAutoMLJobRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCandidatesForAutoMLJobRequest,
                                             Pagination::ListCandidatesForAutoMLJobPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListClusterEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterEventsRequest,
                                    Pagination::ListClusterEventsPaginationTraits<DerivedClient>>
  ListClusterEventsPaginator(const Model::ListClusterEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterEventsRequest,
                                             Pagination::ListClusterEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListClusterNodes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterNodesRequest,
                                    Pagination::ListClusterNodesPaginationTraits<DerivedClient>>
  ListClusterNodesPaginator(const Model::ListClusterNodesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterNodesRequest,
                                             Pagination::ListClusterNodesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<DerivedClient>>
  ListClustersPaginator(const Model::ListClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest,
                                             Pagination::ListClustersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListClusterSchedulerConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterSchedulerConfigsRequest,
                                    Pagination::ListClusterSchedulerConfigsPaginationTraits<DerivedClient>>
  ListClusterSchedulerConfigsPaginator(const Model::ListClusterSchedulerConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterSchedulerConfigsRequest,
                                             Pagination::ListClusterSchedulerConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCodeRepositories operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeRepositoriesRequest,
                                    Pagination::ListCodeRepositoriesPaginationTraits<DerivedClient>>
  ListCodeRepositoriesPaginator(const Model::ListCodeRepositoriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeRepositoriesRequest,
                                             Pagination::ListCodeRepositoriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCompilationJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCompilationJobsRequest,
                                    Pagination::ListCompilationJobsPaginationTraits<DerivedClient>>
  ListCompilationJobsPaginator(const Model::ListCompilationJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCompilationJobsRequest,
                                             Pagination::ListCompilationJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListComputeQuotas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComputeQuotasRequest,
                                    Pagination::ListComputeQuotasPaginationTraits<DerivedClient>>
  ListComputeQuotasPaginator(const Model::ListComputeQuotasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComputeQuotasRequest,
                                             Pagination::ListComputeQuotasPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListContexts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContextsRequest, Pagination::ListContextsPaginationTraits<DerivedClient>>
  ListContextsPaginator(const Model::ListContextsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContextsRequest,
                                             Pagination::ListContextsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListDataQualityJobDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataQualityJobDefinitionsRequest,
                                    Pagination::ListDataQualityJobDefinitionsPaginationTraits<DerivedClient>>
  ListDataQualityJobDefinitionsPaginator(const Model::ListDataQualityJobDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataQualityJobDefinitionsRequest,
                                             Pagination::ListDataQualityJobDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDeviceFleets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeviceFleetsRequest,
                                    Pagination::ListDeviceFleetsPaginationTraits<DerivedClient>>
  ListDeviceFleetsPaginator(const Model::ListDeviceFleetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeviceFleetsRequest,
                                             Pagination::ListDeviceFleetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListDevices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevicesRequest, Pagination::ListDevicesPaginationTraits<DerivedClient>>
  ListDevicesPaginator(const Model::ListDevicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevicesRequest,
                                             Pagination::ListDevicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListDomains operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest, Pagination::ListDomainsPaginationTraits<DerivedClient>>
  ListDomainsPaginator(const Model::ListDomainsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest,
                                             Pagination::ListDomainsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListEdgeDeploymentPlans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEdgeDeploymentPlansRequest,
                                    Pagination::ListEdgeDeploymentPlansPaginationTraits<DerivedClient>>
  ListEdgeDeploymentPlansPaginator(const Model::ListEdgeDeploymentPlansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEdgeDeploymentPlansRequest,
                                             Pagination::ListEdgeDeploymentPlansPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEdgePackagingJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEdgePackagingJobsRequest,
                                    Pagination::ListEdgePackagingJobsPaginationTraits<DerivedClient>>
  ListEdgePackagingJobsPaginator(const Model::ListEdgePackagingJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEdgePackagingJobsRequest,
                                             Pagination::ListEdgePackagingJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEndpointConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEndpointConfigsRequest,
                                    Pagination::ListEndpointConfigsPaginationTraits<DerivedClient>>
  ListEndpointConfigsPaginator(const Model::ListEndpointConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEndpointConfigsRequest,
                                             Pagination::ListEndpointConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEndpointsRequest, Pagination::ListEndpointsPaginationTraits<DerivedClient>>
  ListEndpointsPaginator(const Model::ListEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEndpointsRequest,
                                             Pagination::ListEndpointsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListExperiments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExperimentsRequest,
                                    Pagination::ListExperimentsPaginationTraits<DerivedClient>>
  ListExperimentsPaginator(const Model::ListExperimentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExperimentsRequest,
                                             Pagination::ListExperimentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListFeatureGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFeatureGroupsRequest,
                                    Pagination::ListFeatureGroupsPaginationTraits<DerivedClient>>
  ListFeatureGroupsPaginator(const Model::ListFeatureGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFeatureGroupsRequest,
                                             Pagination::ListFeatureGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFlowDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowDefinitionsRequest,
                                    Pagination::ListFlowDefinitionsPaginationTraits<DerivedClient>>
  ListFlowDefinitionsPaginator(const Model::ListFlowDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowDefinitionsRequest,
                                             Pagination::ListFlowDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListHumanTaskUis operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHumanTaskUisRequest,
                                    Pagination::ListHumanTaskUisPaginationTraits<DerivedClient>>
  ListHumanTaskUisPaginator(const Model::ListHumanTaskUisRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHumanTaskUisRequest,
                                             Pagination::ListHumanTaskUisPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListHyperParameterTuningJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHyperParameterTuningJobsRequest,
                                    Pagination::ListHyperParameterTuningJobsPaginationTraits<DerivedClient>>
  ListHyperParameterTuningJobsPaginator(const Model::ListHyperParameterTuningJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHyperParameterTuningJobsRequest,
                                             Pagination::ListHyperParameterTuningJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImagesRequest, Pagination::ListImagesPaginationTraits<DerivedClient>>
  ListImagesPaginator(const Model::ListImagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImagesRequest,
                                             Pagination::ListImagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListImageVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImageVersionsRequest,
                                    Pagination::ListImageVersionsPaginationTraits<DerivedClient>>
  ListImageVersionsPaginator(const Model::ListImageVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImageVersionsRequest,
                                             Pagination::ListImageVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInferenceComponents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceComponentsRequest,
                                    Pagination::ListInferenceComponentsPaginationTraits<DerivedClient>>
  ListInferenceComponentsPaginator(const Model::ListInferenceComponentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceComponentsRequest,
                                             Pagination::ListInferenceComponentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInferenceExperiments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceExperimentsRequest,
                                    Pagination::ListInferenceExperimentsPaginationTraits<DerivedClient>>
  ListInferenceExperimentsPaginator(const Model::ListInferenceExperimentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceExperimentsRequest,
                                             Pagination::ListInferenceExperimentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInferenceRecommendationsJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceRecommendationsJobsRequest,
                                    Pagination::ListInferenceRecommendationsJobsPaginationTraits<DerivedClient>>
  ListInferenceRecommendationsJobsPaginator(const Model::ListInferenceRecommendationsJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceRecommendationsJobsRequest,
                                             Pagination::ListInferenceRecommendationsJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInferenceRecommendationsJobSteps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceRecommendationsJobStepsRequest,
                                    Pagination::ListInferenceRecommendationsJobStepsPaginationTraits<DerivedClient>>
  ListInferenceRecommendationsJobStepsPaginator(const Model::ListInferenceRecommendationsJobStepsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceRecommendationsJobStepsRequest,
                                             Pagination::ListInferenceRecommendationsJobStepsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLabelingJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLabelingJobsRequest,
                                    Pagination::ListLabelingJobsPaginationTraits<DerivedClient>>
  ListLabelingJobsPaginator(const Model::ListLabelingJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLabelingJobsRequest,
                                             Pagination::ListLabelingJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListLabelingJobsForWorkteam operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLabelingJobsForWorkteamRequest,
                                    Pagination::ListLabelingJobsForWorkteamPaginationTraits<DerivedClient>>
  ListLabelingJobsForWorkteamPaginator(const Model::ListLabelingJobsForWorkteamRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLabelingJobsForWorkteamRequest,
                                             Pagination::ListLabelingJobsForWorkteamPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLineageGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLineageGroupsRequest,
                                    Pagination::ListLineageGroupsPaginationTraits<DerivedClient>>
  ListLineageGroupsPaginator(const Model::ListLineageGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLineageGroupsRequest,
                                             Pagination::ListLineageGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMlflowApps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMlflowAppsRequest, Pagination::ListMlflowAppsPaginationTraits<DerivedClient>>
  ListMlflowAppsPaginator(const Model::ListMlflowAppsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMlflowAppsRequest,
                                             Pagination::ListMlflowAppsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListMlflowTrackingServers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMlflowTrackingServersRequest,
                                    Pagination::ListMlflowTrackingServersPaginationTraits<DerivedClient>>
  ListMlflowTrackingServersPaginator(const Model::ListMlflowTrackingServersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMlflowTrackingServersRequest,
                                             Pagination::ListMlflowTrackingServersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModelBiasJobDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelBiasJobDefinitionsRequest,
                                    Pagination::ListModelBiasJobDefinitionsPaginationTraits<DerivedClient>>
  ListModelBiasJobDefinitionsPaginator(const Model::ListModelBiasJobDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelBiasJobDefinitionsRequest,
                                             Pagination::ListModelBiasJobDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModelCardExportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelCardExportJobsRequest,
                                    Pagination::ListModelCardExportJobsPaginationTraits<DerivedClient>>
  ListModelCardExportJobsPaginator(const Model::ListModelCardExportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelCardExportJobsRequest,
                                             Pagination::ListModelCardExportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModelCards operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelCardsRequest, Pagination::ListModelCardsPaginationTraits<DerivedClient>>
  ListModelCardsPaginator(const Model::ListModelCardsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelCardsRequest,
                                             Pagination::ListModelCardsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListModelCardVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelCardVersionsRequest,
                                    Pagination::ListModelCardVersionsPaginationTraits<DerivedClient>>
  ListModelCardVersionsPaginator(const Model::ListModelCardVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelCardVersionsRequest,
                                             Pagination::ListModelCardVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModelExplainabilityJobDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelExplainabilityJobDefinitionsRequest,
                                    Pagination::ListModelExplainabilityJobDefinitionsPaginationTraits<DerivedClient>>
  ListModelExplainabilityJobDefinitionsPaginator(const Model::ListModelExplainabilityJobDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelExplainabilityJobDefinitionsRequest,
                                             Pagination::ListModelExplainabilityJobDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModelMetadata operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelMetadataRequest,
                                    Pagination::ListModelMetadataPaginationTraits<DerivedClient>>
  ListModelMetadataPaginator(const Model::ListModelMetadataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelMetadataRequest,
                                             Pagination::ListModelMetadataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModelPackageGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelPackageGroupsRequest,
                                    Pagination::ListModelPackageGroupsPaginationTraits<DerivedClient>>
  ListModelPackageGroupsPaginator(const Model::ListModelPackageGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelPackageGroupsRequest,
                                             Pagination::ListModelPackageGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModelPackages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelPackagesRequest,
                                    Pagination::ListModelPackagesPaginationTraits<DerivedClient>>
  ListModelPackagesPaginator(const Model::ListModelPackagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelPackagesRequest,
                                             Pagination::ListModelPackagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModelQualityJobDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelQualityJobDefinitionsRequest,
                                    Pagination::ListModelQualityJobDefinitionsPaginationTraits<DerivedClient>>
  ListModelQualityJobDefinitionsPaginator(const Model::ListModelQualityJobDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelQualityJobDefinitionsRequest,
                                             Pagination::ListModelQualityJobDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelsRequest, Pagination::ListModelsPaginationTraits<DerivedClient>>
  ListModelsPaginator(const Model::ListModelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelsRequest,
                                             Pagination::ListModelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListMonitoringAlertHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitoringAlertHistoryRequest,
                                    Pagination::ListMonitoringAlertHistoryPaginationTraits<DerivedClient>>
  ListMonitoringAlertHistoryPaginator(const Model::ListMonitoringAlertHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitoringAlertHistoryRequest,
                                             Pagination::ListMonitoringAlertHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMonitoringAlerts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitoringAlertsRequest,
                                    Pagination::ListMonitoringAlertsPaginationTraits<DerivedClient>>
  ListMonitoringAlertsPaginator(const Model::ListMonitoringAlertsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitoringAlertsRequest,
                                             Pagination::ListMonitoringAlertsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMonitoringExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitoringExecutionsRequest,
                                    Pagination::ListMonitoringExecutionsPaginationTraits<DerivedClient>>
  ListMonitoringExecutionsPaginator(const Model::ListMonitoringExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitoringExecutionsRequest,
                                             Pagination::ListMonitoringExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMonitoringSchedules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitoringSchedulesRequest,
                                    Pagination::ListMonitoringSchedulesPaginationTraits<DerivedClient>>
  ListMonitoringSchedulesPaginator(const Model::ListMonitoringSchedulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitoringSchedulesRequest,
                                             Pagination::ListMonitoringSchedulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNotebookInstanceLifecycleConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotebookInstanceLifecycleConfigsRequest,
                                    Pagination::ListNotebookInstanceLifecycleConfigsPaginationTraits<DerivedClient>>
  ListNotebookInstanceLifecycleConfigsPaginator(const Model::ListNotebookInstanceLifecycleConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotebookInstanceLifecycleConfigsRequest,
                                             Pagination::ListNotebookInstanceLifecycleConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNotebookInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotebookInstancesRequest,
                                    Pagination::ListNotebookInstancesPaginationTraits<DerivedClient>>
  ListNotebookInstancesPaginator(const Model::ListNotebookInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotebookInstancesRequest,
                                             Pagination::ListNotebookInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOptimizationJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOptimizationJobsRequest,
                                    Pagination::ListOptimizationJobsPaginationTraits<DerivedClient>>
  ListOptimizationJobsPaginator(const Model::ListOptimizationJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOptimizationJobsRequest,
                                             Pagination::ListOptimizationJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPartnerApps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPartnerAppsRequest,
                                    Pagination::ListPartnerAppsPaginationTraits<DerivedClient>>
  ListPartnerAppsPaginator(const Model::ListPartnerAppsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPartnerAppsRequest,
                                             Pagination::ListPartnerAppsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListPipelineExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineExecutionsRequest,
                                    Pagination::ListPipelineExecutionsPaginationTraits<DerivedClient>>
  ListPipelineExecutionsPaginator(const Model::ListPipelineExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineExecutionsRequest,
                                             Pagination::ListPipelineExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPipelineExecutionSteps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineExecutionStepsRequest,
                                    Pagination::ListPipelineExecutionStepsPaginationTraits<DerivedClient>>
  ListPipelineExecutionStepsPaginator(const Model::ListPipelineExecutionStepsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineExecutionStepsRequest,
                                             Pagination::ListPipelineExecutionStepsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPipelineParametersForExecution operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineParametersForExecutionRequest,
                                    Pagination::ListPipelineParametersForExecutionPaginationTraits<DerivedClient>>
  ListPipelineParametersForExecutionPaginator(const Model::ListPipelineParametersForExecutionRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineParametersForExecutionRequest,
                                             Pagination::ListPipelineParametersForExecutionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPipelines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelinesRequest, Pagination::ListPipelinesPaginationTraits<DerivedClient>>
  ListPipelinesPaginator(const Model::ListPipelinesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelinesRequest,
                                             Pagination::ListPipelinesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListPipelineVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineVersionsRequest,
                                    Pagination::ListPipelineVersionsPaginationTraits<DerivedClient>>
  ListPipelineVersionsPaginator(const Model::ListPipelineVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineVersionsRequest,
                                             Pagination::ListPipelineVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProcessingJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProcessingJobsRequest,
                                    Pagination::ListProcessingJobsPaginationTraits<DerivedClient>>
  ListProcessingJobsPaginator(const Model::ListProcessingJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProcessingJobsRequest,
                                             Pagination::ListProcessingJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectsRequest, Pagination::ListProjectsPaginationTraits<DerivedClient>>
  ListProjectsPaginator(const Model::ListProjectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectsRequest,
                                             Pagination::ListProjectsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListResourceCatalogs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceCatalogsRequest,
                                    Pagination::ListResourceCatalogsPaginationTraits<DerivedClient>>
  ListResourceCatalogsPaginator(const Model::ListResourceCatalogsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceCatalogsRequest,
                                             Pagination::ListResourceCatalogsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSpaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpacesRequest, Pagination::ListSpacesPaginationTraits<DerivedClient>>
  ListSpacesPaginator(const Model::ListSpacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpacesRequest,
                                             Pagination::ListSpacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListStageDevices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStageDevicesRequest,
                                    Pagination::ListStageDevicesPaginationTraits<DerivedClient>>
  ListStageDevicesPaginator(const Model::ListStageDevicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStageDevicesRequest,
                                             Pagination::ListStageDevicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListStudioLifecycleConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStudioLifecycleConfigsRequest,
                                    Pagination::ListStudioLifecycleConfigsPaginationTraits<DerivedClient>>
  ListStudioLifecycleConfigsPaginator(const Model::ListStudioLifecycleConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStudioLifecycleConfigsRequest,
                                             Pagination::ListStudioLifecycleConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSubscribedWorkteams operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscribedWorkteamsRequest,
                                    Pagination::ListSubscribedWorkteamsPaginationTraits<DerivedClient>>
  ListSubscribedWorkteamsPaginator(const Model::ListSubscribedWorkteamsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscribedWorkteamsRequest,
                                             Pagination::ListSubscribedWorkteamsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<DerivedClient>>
  ListTagsPaginator(const Model::ListTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrainingJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrainingJobsRequest,
                                    Pagination::ListTrainingJobsPaginationTraits<DerivedClient>>
  ListTrainingJobsPaginator(const Model::ListTrainingJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrainingJobsRequest,
                                             Pagination::ListTrainingJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListTrainingJobsForHyperParameterTuningJob operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrainingJobsForHyperParameterTuningJobRequest,
                                    Pagination::ListTrainingJobsForHyperParameterTuningJobPaginationTraits<DerivedClient>>
  ListTrainingJobsForHyperParameterTuningJobPaginator(const Model::ListTrainingJobsForHyperParameterTuningJobRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrainingJobsForHyperParameterTuningJobRequest,
                                             Pagination::ListTrainingJobsForHyperParameterTuningJobPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrainingPlans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrainingPlansRequest,
                                    Pagination::ListTrainingPlansPaginationTraits<DerivedClient>>
  ListTrainingPlansPaginator(const Model::ListTrainingPlansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrainingPlansRequest,
                                             Pagination::ListTrainingPlansPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTransformJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTransformJobsRequest,
                                    Pagination::ListTransformJobsPaginationTraits<DerivedClient>>
  ListTransformJobsPaginator(const Model::ListTransformJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTransformJobsRequest,
                                             Pagination::ListTransformJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrialComponents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrialComponentsRequest,
                                    Pagination::ListTrialComponentsPaginationTraits<DerivedClient>>
  ListTrialComponentsPaginator(const Model::ListTrialComponentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrialComponentsRequest,
                                             Pagination::ListTrialComponentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrials operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrialsRequest, Pagination::ListTrialsPaginationTraits<DerivedClient>>
  ListTrialsPaginator(const Model::ListTrialsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrialsRequest,
                                             Pagination::ListTrialsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListUltraServersByReservedCapacity operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUltraServersByReservedCapacityRequest,
                                    Pagination::ListUltraServersByReservedCapacityPaginationTraits<DerivedClient>>
  ListUltraServersByReservedCapacityPaginator(const Model::ListUltraServersByReservedCapacityRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUltraServersByReservedCapacityRequest,
                                             Pagination::ListUltraServersByReservedCapacityPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUserProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserProfilesRequest,
                                    Pagination::ListUserProfilesPaginationTraits<DerivedClient>>
  ListUserProfilesPaginator(const Model::ListUserProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserProfilesRequest,
                                             Pagination::ListUserProfilesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListWorkforces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkforcesRequest, Pagination::ListWorkforcesPaginationTraits<DerivedClient>>
  ListWorkforcesPaginator(const Model::ListWorkforcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkforcesRequest,
                                             Pagination::ListWorkforcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListWorkteams operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkteamsRequest, Pagination::ListWorkteamsPaginationTraits<DerivedClient>>
  ListWorkteamsPaginator(const Model::ListWorkteamsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkteamsRequest,
                                             Pagination::ListWorkteamsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for QueryLineage operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::QueryLineageRequest, Pagination::QueryLineagePaginationTraits<DerivedClient>>
  QueryLineagePaginator(const Model::QueryLineageRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::QueryLineageRequest,
                                             Pagination::QueryLineagePaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for Search operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchRequest, Pagination::SearchPaginationTraits<DerivedClient>> SearchPaginator(
      const Model::SearchRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchRequest, Pagination::SearchPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SageMaker
}  // namespace Aws
