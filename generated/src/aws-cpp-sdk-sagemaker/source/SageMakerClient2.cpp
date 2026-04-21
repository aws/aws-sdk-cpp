/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/sagemaker/SageMakerClient.h>
#include <aws/sagemaker/SageMakerEndpointProvider.h>
#include <aws/sagemaker/SageMakerErrorMarshaller.h>
#include <aws/sagemaker/model/DescribePipelineExecutionRequest.h>
#include <aws/sagemaker/model/DescribeProcessingJobRequest.h>
#include <aws/sagemaker/model/DescribeProjectRequest.h>
#include <aws/sagemaker/model/DescribeReservedCapacityRequest.h>
#include <aws/sagemaker/model/DescribeSpaceRequest.h>
#include <aws/sagemaker/model/DescribeStudioLifecycleConfigRequest.h>
#include <aws/sagemaker/model/DescribeSubscribedWorkteamRequest.h>
#include <aws/sagemaker/model/DescribeTrainingJobRequest.h>
#include <aws/sagemaker/model/DescribeTrainingPlanExtensionHistoryRequest.h>
#include <aws/sagemaker/model/DescribeTrainingPlanRequest.h>
#include <aws/sagemaker/model/DescribeTransformJobRequest.h>
#include <aws/sagemaker/model/DescribeTrialComponentRequest.h>
#include <aws/sagemaker/model/DescribeTrialRequest.h>
#include <aws/sagemaker/model/DescribeUserProfileRequest.h>
#include <aws/sagemaker/model/DescribeWorkforceRequest.h>
#include <aws/sagemaker/model/DescribeWorkteamRequest.h>
#include <aws/sagemaker/model/DetachClusterNodeVolumeRequest.h>
#include <aws/sagemaker/model/DisableSagemakerServicecatalogPortfolioRequest.h>
#include <aws/sagemaker/model/DisassociateTrialComponentRequest.h>
#include <aws/sagemaker/model/EnableSagemakerServicecatalogPortfolioRequest.h>
#include <aws/sagemaker/model/ExtendTrainingPlanRequest.h>
#include <aws/sagemaker/model/GetDeviceFleetReportRequest.h>
#include <aws/sagemaker/model/GetLineageGroupPolicyRequest.h>
#include <aws/sagemaker/model/GetModelPackageGroupPolicyRequest.h>
#include <aws/sagemaker/model/GetSagemakerServicecatalogPortfolioStatusRequest.h>
#include <aws/sagemaker/model/GetScalingConfigurationRecommendationRequest.h>
#include <aws/sagemaker/model/GetSearchSuggestionsRequest.h>
#include <aws/sagemaker/model/ImportHubContentRequest.h>
#include <aws/sagemaker/model/ListAIBenchmarkJobsRequest.h>
#include <aws/sagemaker/model/ListAIRecommendationJobsRequest.h>
#include <aws/sagemaker/model/ListAIWorkloadConfigsRequest.h>
#include <aws/sagemaker/model/ListActionsRequest.h>
#include <aws/sagemaker/model/ListAlgorithmsRequest.h>
#include <aws/sagemaker/model/ListAliasesRequest.h>
#include <aws/sagemaker/model/ListAppImageConfigsRequest.h>
#include <aws/sagemaker/model/ListAppsRequest.h>
#include <aws/sagemaker/model/ListArtifactsRequest.h>
#include <aws/sagemaker/model/ListAssociationsRequest.h>
#include <aws/sagemaker/model/ListAutoMLJobsRequest.h>
#include <aws/sagemaker/model/ListCandidatesForAutoMLJobRequest.h>
#include <aws/sagemaker/model/ListClusterEventsRequest.h>
#include <aws/sagemaker/model/ListClusterNodesRequest.h>
#include <aws/sagemaker/model/ListClusterSchedulerConfigsRequest.h>
#include <aws/sagemaker/model/ListClustersRequest.h>
#include <aws/sagemaker/model/ListCodeRepositoriesRequest.h>
#include <aws/sagemaker/model/ListCompilationJobsRequest.h>
#include <aws/sagemaker/model/ListComputeQuotasRequest.h>
#include <aws/sagemaker/model/ListContextsRequest.h>
#include <aws/sagemaker/model/ListDataQualityJobDefinitionsRequest.h>
#include <aws/sagemaker/model/ListDeviceFleetsRequest.h>
#include <aws/sagemaker/model/ListDevicesRequest.h>
#include <aws/sagemaker/model/ListDomainsRequest.h>
#include <aws/sagemaker/model/ListEdgeDeploymentPlansRequest.h>
#include <aws/sagemaker/model/ListEdgePackagingJobsRequest.h>
#include <aws/sagemaker/model/ListEndpointConfigsRequest.h>
#include <aws/sagemaker/model/ListEndpointsRequest.h>
#include <aws/sagemaker/model/ListExperimentsRequest.h>
#include <aws/sagemaker/model/ListFeatureGroupsRequest.h>
#include <aws/sagemaker/model/ListFlowDefinitionsRequest.h>
#include <aws/sagemaker/model/ListHubContentVersionsRequest.h>
#include <aws/sagemaker/model/ListHubContentsRequest.h>
#include <aws/sagemaker/model/ListHubsRequest.h>
#include <aws/sagemaker/model/ListHumanTaskUisRequest.h>
#include <aws/sagemaker/model/ListHyperParameterTuningJobsRequest.h>
#include <aws/sagemaker/model/ListImageVersionsRequest.h>
#include <aws/sagemaker/model/ListImagesRequest.h>
#include <aws/sagemaker/model/ListInferenceComponentsRequest.h>
#include <aws/sagemaker/model/ListInferenceExperimentsRequest.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobStepsRequest.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobsRequest.h>
#include <aws/sagemaker/model/ListLabelingJobsForWorkteamRequest.h>
#include <aws/sagemaker/model/ListLabelingJobsRequest.h>
#include <aws/sagemaker/model/ListLineageGroupsRequest.h>
#include <aws/sagemaker/model/ListMlflowAppsRequest.h>
#include <aws/sagemaker/model/ListMlflowTrackingServersRequest.h>
#include <aws/sagemaker/model/ListModelBiasJobDefinitionsRequest.h>
#include <aws/sagemaker/model/ListModelCardExportJobsRequest.h>
#include <aws/sagemaker/model/ListModelCardVersionsRequest.h>
#include <aws/sagemaker/model/ListModelCardsRequest.h>
#include <aws/sagemaker/model/ListModelExplainabilityJobDefinitionsRequest.h>
#include <aws/sagemaker/model/ListModelMetadataRequest.h>
#include <aws/sagemaker/model/ListModelPackageGroupsRequest.h>
#include <aws/sagemaker/model/ListModelPackagesRequest.h>
#include <aws/sagemaker/model/ListModelQualityJobDefinitionsRequest.h>
#include <aws/sagemaker/model/ListModelsRequest.h>
#include <aws/sagemaker/model/ListMonitoringAlertHistoryRequest.h>
#include <aws/sagemaker/model/ListMonitoringAlertsRequest.h>
#include <aws/sagemaker/model/ListMonitoringExecutionsRequest.h>
#include <aws/sagemaker/model/ListMonitoringSchedulesRequest.h>
#include <aws/sagemaker/model/ListNotebookInstanceLifecycleConfigsRequest.h>
#include <aws/sagemaker/model/ListNotebookInstancesRequest.h>
#include <aws/sagemaker/model/ListOptimizationJobsRequest.h>
#include <aws/sagemaker/model/ListPartnerAppsRequest.h>
#include <aws/sagemaker/model/ListPipelineExecutionStepsRequest.h>
#include <aws/sagemaker/model/ListPipelineExecutionsRequest.h>
#include <aws/sagemaker/model/ListPipelineParametersForExecutionRequest.h>
#include <aws/sagemaker/model/ListPipelineVersionsRequest.h>
#include <aws/sagemaker/model/ListPipelinesRequest.h>
#include <aws/sagemaker/model/ListProcessingJobsRequest.h>
#include <aws/sagemaker/model/ListProjectsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMaker;
using namespace Aws::SageMaker::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

DescribePipelineExecutionOutcome SageMakerClient::DescribePipelineExecution(const DescribePipelineExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePipelineExecutionOutcome(result.GetResultWithOwnership())
                            : DescribePipelineExecutionOutcome(std::move(result.GetError()));
}

DescribeProcessingJobOutcome SageMakerClient::DescribeProcessingJob(const DescribeProcessingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeProcessingJobOutcome(result.GetResultWithOwnership())
                            : DescribeProcessingJobOutcome(std::move(result.GetError()));
}

DescribeProjectOutcome SageMakerClient::DescribeProject(const DescribeProjectRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeProjectOutcome(result.GetResultWithOwnership())
                            : DescribeProjectOutcome(std::move(result.GetError()));
}

DescribeReservedCapacityOutcome SageMakerClient::DescribeReservedCapacity(const DescribeReservedCapacityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReservedCapacityOutcome(result.GetResultWithOwnership())
                            : DescribeReservedCapacityOutcome(std::move(result.GetError()));
}

DescribeSpaceOutcome SageMakerClient::DescribeSpace(const DescribeSpaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSpaceOutcome(result.GetResultWithOwnership()) : DescribeSpaceOutcome(std::move(result.GetError()));
}

DescribeStudioLifecycleConfigOutcome SageMakerClient::DescribeStudioLifecycleConfig(
    const DescribeStudioLifecycleConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStudioLifecycleConfigOutcome(result.GetResultWithOwnership())
                            : DescribeStudioLifecycleConfigOutcome(std::move(result.GetError()));
}

DescribeSubscribedWorkteamOutcome SageMakerClient::DescribeSubscribedWorkteam(const DescribeSubscribedWorkteamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSubscribedWorkteamOutcome(result.GetResultWithOwnership())
                            : DescribeSubscribedWorkteamOutcome(std::move(result.GetError()));
}

DescribeTrainingJobOutcome SageMakerClient::DescribeTrainingJob(const DescribeTrainingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrainingJobOutcome(result.GetResultWithOwnership())
                            : DescribeTrainingJobOutcome(std::move(result.GetError()));
}

DescribeTrainingPlanOutcome SageMakerClient::DescribeTrainingPlan(const DescribeTrainingPlanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrainingPlanOutcome(result.GetResultWithOwnership())
                            : DescribeTrainingPlanOutcome(std::move(result.GetError()));
}

DescribeTrainingPlanExtensionHistoryOutcome SageMakerClient::DescribeTrainingPlanExtensionHistory(
    const DescribeTrainingPlanExtensionHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrainingPlanExtensionHistoryOutcome(result.GetResultWithOwnership())
                            : DescribeTrainingPlanExtensionHistoryOutcome(std::move(result.GetError()));
}

DescribeTransformJobOutcome SageMakerClient::DescribeTransformJob(const DescribeTransformJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTransformJobOutcome(result.GetResultWithOwnership())
                            : DescribeTransformJobOutcome(std::move(result.GetError()));
}

DescribeTrialOutcome SageMakerClient::DescribeTrial(const DescribeTrialRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrialOutcome(result.GetResultWithOwnership()) : DescribeTrialOutcome(std::move(result.GetError()));
}

DescribeTrialComponentOutcome SageMakerClient::DescribeTrialComponent(const DescribeTrialComponentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrialComponentOutcome(result.GetResultWithOwnership())
                            : DescribeTrialComponentOutcome(std::move(result.GetError()));
}

DescribeUserProfileOutcome SageMakerClient::DescribeUserProfile(const DescribeUserProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUserProfileOutcome(result.GetResultWithOwnership())
                            : DescribeUserProfileOutcome(std::move(result.GetError()));
}

DescribeWorkforceOutcome SageMakerClient::DescribeWorkforce(const DescribeWorkforceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkforceOutcome(result.GetResultWithOwnership())
                            : DescribeWorkforceOutcome(std::move(result.GetError()));
}

DescribeWorkteamOutcome SageMakerClient::DescribeWorkteam(const DescribeWorkteamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkteamOutcome(result.GetResultWithOwnership())
                            : DescribeWorkteamOutcome(std::move(result.GetError()));
}

DetachClusterNodeVolumeOutcome SageMakerClient::DetachClusterNodeVolume(const DetachClusterNodeVolumeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachClusterNodeVolumeOutcome(result.GetResultWithOwnership())
                            : DetachClusterNodeVolumeOutcome(std::move(result.GetError()));
}

DisableSagemakerServicecatalogPortfolioOutcome SageMakerClient::DisableSagemakerServicecatalogPortfolio(
    const DisableSagemakerServicecatalogPortfolioRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableSagemakerServicecatalogPortfolioOutcome(result.GetResultWithOwnership())
                            : DisableSagemakerServicecatalogPortfolioOutcome(std::move(result.GetError()));
}

DisassociateTrialComponentOutcome SageMakerClient::DisassociateTrialComponent(const DisassociateTrialComponentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateTrialComponentOutcome(result.GetResultWithOwnership())
                            : DisassociateTrialComponentOutcome(std::move(result.GetError()));
}

EnableSagemakerServicecatalogPortfolioOutcome SageMakerClient::EnableSagemakerServicecatalogPortfolio(
    const EnableSagemakerServicecatalogPortfolioRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableSagemakerServicecatalogPortfolioOutcome(result.GetResultWithOwnership())
                            : EnableSagemakerServicecatalogPortfolioOutcome(std::move(result.GetError()));
}

ExtendTrainingPlanOutcome SageMakerClient::ExtendTrainingPlan(const ExtendTrainingPlanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExtendTrainingPlanOutcome(result.GetResultWithOwnership())
                            : ExtendTrainingPlanOutcome(std::move(result.GetError()));
}

GetDeviceFleetReportOutcome SageMakerClient::GetDeviceFleetReport(const GetDeviceFleetReportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDeviceFleetReportOutcome(result.GetResultWithOwnership())
                            : GetDeviceFleetReportOutcome(std::move(result.GetError()));
}

GetLineageGroupPolicyOutcome SageMakerClient::GetLineageGroupPolicy(const GetLineageGroupPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLineageGroupPolicyOutcome(result.GetResultWithOwnership())
                            : GetLineageGroupPolicyOutcome(std::move(result.GetError()));
}

GetModelPackageGroupPolicyOutcome SageMakerClient::GetModelPackageGroupPolicy(const GetModelPackageGroupPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetModelPackageGroupPolicyOutcome(result.GetResultWithOwnership())
                            : GetModelPackageGroupPolicyOutcome(std::move(result.GetError()));
}

GetSagemakerServicecatalogPortfolioStatusOutcome SageMakerClient::GetSagemakerServicecatalogPortfolioStatus(
    const GetSagemakerServicecatalogPortfolioStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSagemakerServicecatalogPortfolioStatusOutcome(result.GetResultWithOwnership())
                            : GetSagemakerServicecatalogPortfolioStatusOutcome(std::move(result.GetError()));
}

GetScalingConfigurationRecommendationOutcome SageMakerClient::GetScalingConfigurationRecommendation(
    const GetScalingConfigurationRecommendationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetScalingConfigurationRecommendationOutcome(result.GetResultWithOwnership())
                            : GetScalingConfigurationRecommendationOutcome(std::move(result.GetError()));
}

GetSearchSuggestionsOutcome SageMakerClient::GetSearchSuggestions(const GetSearchSuggestionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSearchSuggestionsOutcome(result.GetResultWithOwnership())
                            : GetSearchSuggestionsOutcome(std::move(result.GetError()));
}

ImportHubContentOutcome SageMakerClient::ImportHubContent(const ImportHubContentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportHubContentOutcome(result.GetResultWithOwnership())
                            : ImportHubContentOutcome(std::move(result.GetError()));
}

ListAIBenchmarkJobsOutcome SageMakerClient::ListAIBenchmarkJobs(const ListAIBenchmarkJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAIBenchmarkJobsOutcome(result.GetResultWithOwnership())
                            : ListAIBenchmarkJobsOutcome(std::move(result.GetError()));
}

ListAIRecommendationJobsOutcome SageMakerClient::ListAIRecommendationJobs(const ListAIRecommendationJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAIRecommendationJobsOutcome(result.GetResultWithOwnership())
                            : ListAIRecommendationJobsOutcome(std::move(result.GetError()));
}

ListAIWorkloadConfigsOutcome SageMakerClient::ListAIWorkloadConfigs(const ListAIWorkloadConfigsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAIWorkloadConfigsOutcome(result.GetResultWithOwnership())
                            : ListAIWorkloadConfigsOutcome(std::move(result.GetError()));
}

ListActionsOutcome SageMakerClient::ListActions(const ListActionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListActionsOutcome(result.GetResultWithOwnership()) : ListActionsOutcome(std::move(result.GetError()));
}

ListAlgorithmsOutcome SageMakerClient::ListAlgorithms(const ListAlgorithmsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAlgorithmsOutcome(result.GetResultWithOwnership()) : ListAlgorithmsOutcome(std::move(result.GetError()));
}

ListAliasesOutcome SageMakerClient::ListAliases(const ListAliasesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAliasesOutcome(result.GetResultWithOwnership()) : ListAliasesOutcome(std::move(result.GetError()));
}

ListAppImageConfigsOutcome SageMakerClient::ListAppImageConfigs(const ListAppImageConfigsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAppImageConfigsOutcome(result.GetResultWithOwnership())
                            : ListAppImageConfigsOutcome(std::move(result.GetError()));
}

ListAppsOutcome SageMakerClient::ListApps(const ListAppsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAppsOutcome(result.GetResultWithOwnership()) : ListAppsOutcome(std::move(result.GetError()));
}

ListArtifactsOutcome SageMakerClient::ListArtifacts(const ListArtifactsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListArtifactsOutcome(result.GetResultWithOwnership()) : ListArtifactsOutcome(std::move(result.GetError()));
}

ListAssociationsOutcome SageMakerClient::ListAssociations(const ListAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAssociationsOutcome(result.GetResultWithOwnership())
                            : ListAssociationsOutcome(std::move(result.GetError()));
}

ListAutoMLJobsOutcome SageMakerClient::ListAutoMLJobs(const ListAutoMLJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAutoMLJobsOutcome(result.GetResultWithOwnership()) : ListAutoMLJobsOutcome(std::move(result.GetError()));
}

ListCandidatesForAutoMLJobOutcome SageMakerClient::ListCandidatesForAutoMLJob(const ListCandidatesForAutoMLJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCandidatesForAutoMLJobOutcome(result.GetResultWithOwnership())
                            : ListCandidatesForAutoMLJobOutcome(std::move(result.GetError()));
}

ListClusterEventsOutcome SageMakerClient::ListClusterEvents(const ListClusterEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListClusterEventsOutcome(result.GetResultWithOwnership())
                            : ListClusterEventsOutcome(std::move(result.GetError()));
}

ListClusterNodesOutcome SageMakerClient::ListClusterNodes(const ListClusterNodesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListClusterNodesOutcome(result.GetResultWithOwnership())
                            : ListClusterNodesOutcome(std::move(result.GetError()));
}

ListClusterSchedulerConfigsOutcome SageMakerClient::ListClusterSchedulerConfigs(const ListClusterSchedulerConfigsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListClusterSchedulerConfigsOutcome(result.GetResultWithOwnership())
                            : ListClusterSchedulerConfigsOutcome(std::move(result.GetError()));
}

ListClustersOutcome SageMakerClient::ListClusters(const ListClustersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListClustersOutcome(result.GetResultWithOwnership()) : ListClustersOutcome(std::move(result.GetError()));
}

ListCodeRepositoriesOutcome SageMakerClient::ListCodeRepositories(const ListCodeRepositoriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCodeRepositoriesOutcome(result.GetResultWithOwnership())
                            : ListCodeRepositoriesOutcome(std::move(result.GetError()));
}

ListCompilationJobsOutcome SageMakerClient::ListCompilationJobs(const ListCompilationJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCompilationJobsOutcome(result.GetResultWithOwnership())
                            : ListCompilationJobsOutcome(std::move(result.GetError()));
}

ListComputeQuotasOutcome SageMakerClient::ListComputeQuotas(const ListComputeQuotasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListComputeQuotasOutcome(result.GetResultWithOwnership())
                            : ListComputeQuotasOutcome(std::move(result.GetError()));
}

ListContextsOutcome SageMakerClient::ListContexts(const ListContextsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListContextsOutcome(result.GetResultWithOwnership()) : ListContextsOutcome(std::move(result.GetError()));
}

ListDataQualityJobDefinitionsOutcome SageMakerClient::ListDataQualityJobDefinitions(
    const ListDataQualityJobDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDataQualityJobDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListDataQualityJobDefinitionsOutcome(std::move(result.GetError()));
}

ListDeviceFleetsOutcome SageMakerClient::ListDeviceFleets(const ListDeviceFleetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDeviceFleetsOutcome(result.GetResultWithOwnership())
                            : ListDeviceFleetsOutcome(std::move(result.GetError()));
}

ListDevicesOutcome SageMakerClient::ListDevices(const ListDevicesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDevicesOutcome(result.GetResultWithOwnership()) : ListDevicesOutcome(std::move(result.GetError()));
}

ListDomainsOutcome SageMakerClient::ListDomains(const ListDomainsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDomainsOutcome(result.GetResultWithOwnership()) : ListDomainsOutcome(std::move(result.GetError()));
}

ListEdgeDeploymentPlansOutcome SageMakerClient::ListEdgeDeploymentPlans(const ListEdgeDeploymentPlansRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEdgeDeploymentPlansOutcome(result.GetResultWithOwnership())
                            : ListEdgeDeploymentPlansOutcome(std::move(result.GetError()));
}

ListEdgePackagingJobsOutcome SageMakerClient::ListEdgePackagingJobs(const ListEdgePackagingJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEdgePackagingJobsOutcome(result.GetResultWithOwnership())
                            : ListEdgePackagingJobsOutcome(std::move(result.GetError()));
}

ListEndpointConfigsOutcome SageMakerClient::ListEndpointConfigs(const ListEndpointConfigsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEndpointConfigsOutcome(result.GetResultWithOwnership())
                            : ListEndpointConfigsOutcome(std::move(result.GetError()));
}

ListEndpointsOutcome SageMakerClient::ListEndpoints(const ListEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEndpointsOutcome(result.GetResultWithOwnership()) : ListEndpointsOutcome(std::move(result.GetError()));
}

ListExperimentsOutcome SageMakerClient::ListExperiments(const ListExperimentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListExperimentsOutcome(result.GetResultWithOwnership())
                            : ListExperimentsOutcome(std::move(result.GetError()));
}

ListFeatureGroupsOutcome SageMakerClient::ListFeatureGroups(const ListFeatureGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFeatureGroupsOutcome(result.GetResultWithOwnership())
                            : ListFeatureGroupsOutcome(std::move(result.GetError()));
}

ListFlowDefinitionsOutcome SageMakerClient::ListFlowDefinitions(const ListFlowDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFlowDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListFlowDefinitionsOutcome(std::move(result.GetError()));
}

ListHubContentVersionsOutcome SageMakerClient::ListHubContentVersions(const ListHubContentVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListHubContentVersionsOutcome(result.GetResultWithOwnership())
                            : ListHubContentVersionsOutcome(std::move(result.GetError()));
}

ListHubContentsOutcome SageMakerClient::ListHubContents(const ListHubContentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListHubContentsOutcome(result.GetResultWithOwnership())
                            : ListHubContentsOutcome(std::move(result.GetError()));
}

ListHubsOutcome SageMakerClient::ListHubs(const ListHubsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListHubsOutcome(result.GetResultWithOwnership()) : ListHubsOutcome(std::move(result.GetError()));
}

ListHumanTaskUisOutcome SageMakerClient::ListHumanTaskUis(const ListHumanTaskUisRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListHumanTaskUisOutcome(result.GetResultWithOwnership())
                            : ListHumanTaskUisOutcome(std::move(result.GetError()));
}

ListHyperParameterTuningJobsOutcome SageMakerClient::ListHyperParameterTuningJobs(
    const ListHyperParameterTuningJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListHyperParameterTuningJobsOutcome(result.GetResultWithOwnership())
                            : ListHyperParameterTuningJobsOutcome(std::move(result.GetError()));
}

ListImageVersionsOutcome SageMakerClient::ListImageVersions(const ListImageVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListImageVersionsOutcome(result.GetResultWithOwnership())
                            : ListImageVersionsOutcome(std::move(result.GetError()));
}

ListImagesOutcome SageMakerClient::ListImages(const ListImagesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListImagesOutcome(result.GetResultWithOwnership()) : ListImagesOutcome(std::move(result.GetError()));
}

ListInferenceComponentsOutcome SageMakerClient::ListInferenceComponents(const ListInferenceComponentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInferenceComponentsOutcome(result.GetResultWithOwnership())
                            : ListInferenceComponentsOutcome(std::move(result.GetError()));
}

ListInferenceExperimentsOutcome SageMakerClient::ListInferenceExperiments(const ListInferenceExperimentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInferenceExperimentsOutcome(result.GetResultWithOwnership())
                            : ListInferenceExperimentsOutcome(std::move(result.GetError()));
}

ListInferenceRecommendationsJobStepsOutcome SageMakerClient::ListInferenceRecommendationsJobSteps(
    const ListInferenceRecommendationsJobStepsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInferenceRecommendationsJobStepsOutcome(result.GetResultWithOwnership())
                            : ListInferenceRecommendationsJobStepsOutcome(std::move(result.GetError()));
}

ListInferenceRecommendationsJobsOutcome SageMakerClient::ListInferenceRecommendationsJobs(
    const ListInferenceRecommendationsJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInferenceRecommendationsJobsOutcome(result.GetResultWithOwnership())
                            : ListInferenceRecommendationsJobsOutcome(std::move(result.GetError()));
}

ListLabelingJobsOutcome SageMakerClient::ListLabelingJobs(const ListLabelingJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLabelingJobsOutcome(result.GetResultWithOwnership())
                            : ListLabelingJobsOutcome(std::move(result.GetError()));
}

ListLabelingJobsForWorkteamOutcome SageMakerClient::ListLabelingJobsForWorkteam(const ListLabelingJobsForWorkteamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLabelingJobsForWorkteamOutcome(result.GetResultWithOwnership())
                            : ListLabelingJobsForWorkteamOutcome(std::move(result.GetError()));
}

ListLineageGroupsOutcome SageMakerClient::ListLineageGroups(const ListLineageGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLineageGroupsOutcome(result.GetResultWithOwnership())
                            : ListLineageGroupsOutcome(std::move(result.GetError()));
}

ListMlflowAppsOutcome SageMakerClient::ListMlflowApps(const ListMlflowAppsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMlflowAppsOutcome(result.GetResultWithOwnership()) : ListMlflowAppsOutcome(std::move(result.GetError()));
}

ListMlflowTrackingServersOutcome SageMakerClient::ListMlflowTrackingServers(const ListMlflowTrackingServersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMlflowTrackingServersOutcome(result.GetResultWithOwnership())
                            : ListMlflowTrackingServersOutcome(std::move(result.GetError()));
}

ListModelBiasJobDefinitionsOutcome SageMakerClient::ListModelBiasJobDefinitions(const ListModelBiasJobDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListModelBiasJobDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListModelBiasJobDefinitionsOutcome(std::move(result.GetError()));
}

ListModelCardExportJobsOutcome SageMakerClient::ListModelCardExportJobs(const ListModelCardExportJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListModelCardExportJobsOutcome(result.GetResultWithOwnership())
                            : ListModelCardExportJobsOutcome(std::move(result.GetError()));
}

ListModelCardVersionsOutcome SageMakerClient::ListModelCardVersions(const ListModelCardVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListModelCardVersionsOutcome(result.GetResultWithOwnership())
                            : ListModelCardVersionsOutcome(std::move(result.GetError()));
}

ListModelCardsOutcome SageMakerClient::ListModelCards(const ListModelCardsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListModelCardsOutcome(result.GetResultWithOwnership()) : ListModelCardsOutcome(std::move(result.GetError()));
}

ListModelExplainabilityJobDefinitionsOutcome SageMakerClient::ListModelExplainabilityJobDefinitions(
    const ListModelExplainabilityJobDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListModelExplainabilityJobDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListModelExplainabilityJobDefinitionsOutcome(std::move(result.GetError()));
}

ListModelMetadataOutcome SageMakerClient::ListModelMetadata(const ListModelMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListModelMetadataOutcome(result.GetResultWithOwnership())
                            : ListModelMetadataOutcome(std::move(result.GetError()));
}

ListModelPackageGroupsOutcome SageMakerClient::ListModelPackageGroups(const ListModelPackageGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListModelPackageGroupsOutcome(result.GetResultWithOwnership())
                            : ListModelPackageGroupsOutcome(std::move(result.GetError()));
}

ListModelPackagesOutcome SageMakerClient::ListModelPackages(const ListModelPackagesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListModelPackagesOutcome(result.GetResultWithOwnership())
                            : ListModelPackagesOutcome(std::move(result.GetError()));
}

ListModelQualityJobDefinitionsOutcome SageMakerClient::ListModelQualityJobDefinitions(
    const ListModelQualityJobDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListModelQualityJobDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListModelQualityJobDefinitionsOutcome(std::move(result.GetError()));
}

ListModelsOutcome SageMakerClient::ListModels(const ListModelsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListModelsOutcome(result.GetResultWithOwnership()) : ListModelsOutcome(std::move(result.GetError()));
}

ListMonitoringAlertHistoryOutcome SageMakerClient::ListMonitoringAlertHistory(const ListMonitoringAlertHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMonitoringAlertHistoryOutcome(result.GetResultWithOwnership())
                            : ListMonitoringAlertHistoryOutcome(std::move(result.GetError()));
}

ListMonitoringAlertsOutcome SageMakerClient::ListMonitoringAlerts(const ListMonitoringAlertsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMonitoringAlertsOutcome(result.GetResultWithOwnership())
                            : ListMonitoringAlertsOutcome(std::move(result.GetError()));
}

ListMonitoringExecutionsOutcome SageMakerClient::ListMonitoringExecutions(const ListMonitoringExecutionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMonitoringExecutionsOutcome(result.GetResultWithOwnership())
                            : ListMonitoringExecutionsOutcome(std::move(result.GetError()));
}

ListMonitoringSchedulesOutcome SageMakerClient::ListMonitoringSchedules(const ListMonitoringSchedulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMonitoringSchedulesOutcome(result.GetResultWithOwnership())
                            : ListMonitoringSchedulesOutcome(std::move(result.GetError()));
}

ListNotebookInstanceLifecycleConfigsOutcome SageMakerClient::ListNotebookInstanceLifecycleConfigs(
    const ListNotebookInstanceLifecycleConfigsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNotebookInstanceLifecycleConfigsOutcome(result.GetResultWithOwnership())
                            : ListNotebookInstanceLifecycleConfigsOutcome(std::move(result.GetError()));
}

ListNotebookInstancesOutcome SageMakerClient::ListNotebookInstances(const ListNotebookInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNotebookInstancesOutcome(result.GetResultWithOwnership())
                            : ListNotebookInstancesOutcome(std::move(result.GetError()));
}

ListOptimizationJobsOutcome SageMakerClient::ListOptimizationJobs(const ListOptimizationJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOptimizationJobsOutcome(result.GetResultWithOwnership())
                            : ListOptimizationJobsOutcome(std::move(result.GetError()));
}

ListPartnerAppsOutcome SageMakerClient::ListPartnerApps(const ListPartnerAppsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPartnerAppsOutcome(result.GetResultWithOwnership())
                            : ListPartnerAppsOutcome(std::move(result.GetError()));
}

ListPipelineExecutionStepsOutcome SageMakerClient::ListPipelineExecutionSteps(const ListPipelineExecutionStepsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPipelineExecutionStepsOutcome(result.GetResultWithOwnership())
                            : ListPipelineExecutionStepsOutcome(std::move(result.GetError()));
}

ListPipelineExecutionsOutcome SageMakerClient::ListPipelineExecutions(const ListPipelineExecutionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPipelineExecutionsOutcome(result.GetResultWithOwnership())
                            : ListPipelineExecutionsOutcome(std::move(result.GetError()));
}

ListPipelineParametersForExecutionOutcome SageMakerClient::ListPipelineParametersForExecution(
    const ListPipelineParametersForExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPipelineParametersForExecutionOutcome(result.GetResultWithOwnership())
                            : ListPipelineParametersForExecutionOutcome(std::move(result.GetError()));
}

ListPipelineVersionsOutcome SageMakerClient::ListPipelineVersions(const ListPipelineVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPipelineVersionsOutcome(result.GetResultWithOwnership())
                            : ListPipelineVersionsOutcome(std::move(result.GetError()));
}

ListPipelinesOutcome SageMakerClient::ListPipelines(const ListPipelinesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPipelinesOutcome(result.GetResultWithOwnership()) : ListPipelinesOutcome(std::move(result.GetError()));
}

ListProcessingJobsOutcome SageMakerClient::ListProcessingJobs(const ListProcessingJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListProcessingJobsOutcome(result.GetResultWithOwnership())
                            : ListProcessingJobsOutcome(std::move(result.GetError()));
}

ListProjectsOutcome SageMakerClient::ListProjects(const ListProjectsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListProjectsOutcome(result.GetResultWithOwnership()) : ListProjectsOutcome(std::move(result.GetError()));
}
