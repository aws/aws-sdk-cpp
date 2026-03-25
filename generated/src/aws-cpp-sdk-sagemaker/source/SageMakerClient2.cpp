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
#include <aws/sagemaker/model/DescribeTrainingPlanExtensionHistoryRequest.h>
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
#include <aws/sagemaker/model/ListResourceCatalogsRequest.h>
#include <aws/sagemaker/model/ListSpacesRequest.h>
#include <aws/sagemaker/model/ListStageDevicesRequest.h>
#include <aws/sagemaker/model/ListStudioLifecycleConfigsRequest.h>
#include <aws/sagemaker/model/ListSubscribedWorkteamsRequest.h>
#include <aws/sagemaker/model/ListTagsRequest.h>
#include <aws/sagemaker/model/ListTrainingJobsForHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/ListTrainingJobsRequest.h>
#include <aws/sagemaker/model/ListTrainingPlansRequest.h>
#include <aws/sagemaker/model/ListTransformJobsRequest.h>
#include <aws/sagemaker/model/ListTrialComponentsRequest.h>
#include <aws/sagemaker/model/ListTrialsRequest.h>
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

DescribeTrainingPlanExtensionHistoryOutcome SageMakerClient::DescribeTrainingPlanExtensionHistory(
    const DescribeTrainingPlanExtensionHistoryRequest& request) const {
  return DescribeTrainingPlanExtensionHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTransformJobOutcome SageMakerClient::DescribeTransformJob(const DescribeTransformJobRequest& request) const {
  return DescribeTransformJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrialOutcome SageMakerClient::DescribeTrial(const DescribeTrialRequest& request) const {
  return DescribeTrialOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrialComponentOutcome SageMakerClient::DescribeTrialComponent(const DescribeTrialComponentRequest& request) const {
  return DescribeTrialComponentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUserProfileOutcome SageMakerClient::DescribeUserProfile(const DescribeUserProfileRequest& request) const {
  return DescribeUserProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkforceOutcome SageMakerClient::DescribeWorkforce(const DescribeWorkforceRequest& request) const {
  return DescribeWorkforceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkteamOutcome SageMakerClient::DescribeWorkteam(const DescribeWorkteamRequest& request) const {
  return DescribeWorkteamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachClusterNodeVolumeOutcome SageMakerClient::DetachClusterNodeVolume(const DetachClusterNodeVolumeRequest& request) const {
  return DetachClusterNodeVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableSagemakerServicecatalogPortfolioOutcome SageMakerClient::DisableSagemakerServicecatalogPortfolio(
    const DisableSagemakerServicecatalogPortfolioRequest& request) const {
  return DisableSagemakerServicecatalogPortfolioOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateTrialComponentOutcome SageMakerClient::DisassociateTrialComponent(const DisassociateTrialComponentRequest& request) const {
  return DisassociateTrialComponentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableSagemakerServicecatalogPortfolioOutcome SageMakerClient::EnableSagemakerServicecatalogPortfolio(
    const EnableSagemakerServicecatalogPortfolioRequest& request) const {
  return EnableSagemakerServicecatalogPortfolioOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExtendTrainingPlanOutcome SageMakerClient::ExtendTrainingPlan(const ExtendTrainingPlanRequest& request) const {
  return ExtendTrainingPlanOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDeviceFleetReportOutcome SageMakerClient::GetDeviceFleetReport(const GetDeviceFleetReportRequest& request) const {
  return GetDeviceFleetReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLineageGroupPolicyOutcome SageMakerClient::GetLineageGroupPolicy(const GetLineageGroupPolicyRequest& request) const {
  return GetLineageGroupPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetModelPackageGroupPolicyOutcome SageMakerClient::GetModelPackageGroupPolicy(const GetModelPackageGroupPolicyRequest& request) const {
  return GetModelPackageGroupPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSagemakerServicecatalogPortfolioStatusOutcome SageMakerClient::GetSagemakerServicecatalogPortfolioStatus(
    const GetSagemakerServicecatalogPortfolioStatusRequest& request) const {
  return GetSagemakerServicecatalogPortfolioStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetScalingConfigurationRecommendationOutcome SageMakerClient::GetScalingConfigurationRecommendation(
    const GetScalingConfigurationRecommendationRequest& request) const {
  return GetScalingConfigurationRecommendationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSearchSuggestionsOutcome SageMakerClient::GetSearchSuggestions(const GetSearchSuggestionsRequest& request) const {
  return GetSearchSuggestionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportHubContentOutcome SageMakerClient::ImportHubContent(const ImportHubContentRequest& request) const {
  return ImportHubContentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListActionsOutcome SageMakerClient::ListActions(const ListActionsRequest& request) const {
  return ListActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAlgorithmsOutcome SageMakerClient::ListAlgorithms(const ListAlgorithmsRequest& request) const {
  return ListAlgorithmsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAliasesOutcome SageMakerClient::ListAliases(const ListAliasesRequest& request) const {
  return ListAliasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAppImageConfigsOutcome SageMakerClient::ListAppImageConfigs(const ListAppImageConfigsRequest& request) const {
  return ListAppImageConfigsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAppsOutcome SageMakerClient::ListApps(const ListAppsRequest& request) const {
  return ListAppsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListArtifactsOutcome SageMakerClient::ListArtifacts(const ListArtifactsRequest& request) const {
  return ListArtifactsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAssociationsOutcome SageMakerClient::ListAssociations(const ListAssociationsRequest& request) const {
  return ListAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAutoMLJobsOutcome SageMakerClient::ListAutoMLJobs(const ListAutoMLJobsRequest& request) const {
  return ListAutoMLJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCandidatesForAutoMLJobOutcome SageMakerClient::ListCandidatesForAutoMLJob(const ListCandidatesForAutoMLJobRequest& request) const {
  return ListCandidatesForAutoMLJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListClusterEventsOutcome SageMakerClient::ListClusterEvents(const ListClusterEventsRequest& request) const {
  return ListClusterEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListClusterNodesOutcome SageMakerClient::ListClusterNodes(const ListClusterNodesRequest& request) const {
  return ListClusterNodesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListClusterSchedulerConfigsOutcome SageMakerClient::ListClusterSchedulerConfigs(const ListClusterSchedulerConfigsRequest& request) const {
  return ListClusterSchedulerConfigsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListClustersOutcome SageMakerClient::ListClusters(const ListClustersRequest& request) const {
  return ListClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCodeRepositoriesOutcome SageMakerClient::ListCodeRepositories(const ListCodeRepositoriesRequest& request) const {
  return ListCodeRepositoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCompilationJobsOutcome SageMakerClient::ListCompilationJobs(const ListCompilationJobsRequest& request) const {
  return ListCompilationJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListComputeQuotasOutcome SageMakerClient::ListComputeQuotas(const ListComputeQuotasRequest& request) const {
  return ListComputeQuotasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListContextsOutcome SageMakerClient::ListContexts(const ListContextsRequest& request) const {
  return ListContextsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataQualityJobDefinitionsOutcome SageMakerClient::ListDataQualityJobDefinitions(
    const ListDataQualityJobDefinitionsRequest& request) const {
  return ListDataQualityJobDefinitionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDeviceFleetsOutcome SageMakerClient::ListDeviceFleets(const ListDeviceFleetsRequest& request) const {
  return ListDeviceFleetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDevicesOutcome SageMakerClient::ListDevices(const ListDevicesRequest& request) const {
  return ListDevicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDomainsOutcome SageMakerClient::ListDomains(const ListDomainsRequest& request) const {
  return ListDomainsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEdgeDeploymentPlansOutcome SageMakerClient::ListEdgeDeploymentPlans(const ListEdgeDeploymentPlansRequest& request) const {
  return ListEdgeDeploymentPlansOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEdgePackagingJobsOutcome SageMakerClient::ListEdgePackagingJobs(const ListEdgePackagingJobsRequest& request) const {
  return ListEdgePackagingJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEndpointConfigsOutcome SageMakerClient::ListEndpointConfigs(const ListEndpointConfigsRequest& request) const {
  return ListEndpointConfigsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEndpointsOutcome SageMakerClient::ListEndpoints(const ListEndpointsRequest& request) const {
  return ListEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExperimentsOutcome SageMakerClient::ListExperiments(const ListExperimentsRequest& request) const {
  return ListExperimentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFeatureGroupsOutcome SageMakerClient::ListFeatureGroups(const ListFeatureGroupsRequest& request) const {
  return ListFeatureGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFlowDefinitionsOutcome SageMakerClient::ListFlowDefinitions(const ListFlowDefinitionsRequest& request) const {
  return ListFlowDefinitionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListHubContentVersionsOutcome SageMakerClient::ListHubContentVersions(const ListHubContentVersionsRequest& request) const {
  return ListHubContentVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListHubContentsOutcome SageMakerClient::ListHubContents(const ListHubContentsRequest& request) const {
  return ListHubContentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListHubsOutcome SageMakerClient::ListHubs(const ListHubsRequest& request) const {
  return ListHubsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListHumanTaskUisOutcome SageMakerClient::ListHumanTaskUis(const ListHumanTaskUisRequest& request) const {
  return ListHumanTaskUisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListHyperParameterTuningJobsOutcome SageMakerClient::ListHyperParameterTuningJobs(
    const ListHyperParameterTuningJobsRequest& request) const {
  return ListHyperParameterTuningJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImageVersionsOutcome SageMakerClient::ListImageVersions(const ListImageVersionsRequest& request) const {
  return ListImageVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImagesOutcome SageMakerClient::ListImages(const ListImagesRequest& request) const {
  return ListImagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInferenceComponentsOutcome SageMakerClient::ListInferenceComponents(const ListInferenceComponentsRequest& request) const {
  return ListInferenceComponentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInferenceExperimentsOutcome SageMakerClient::ListInferenceExperiments(const ListInferenceExperimentsRequest& request) const {
  return ListInferenceExperimentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInferenceRecommendationsJobStepsOutcome SageMakerClient::ListInferenceRecommendationsJobSteps(
    const ListInferenceRecommendationsJobStepsRequest& request) const {
  return ListInferenceRecommendationsJobStepsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInferenceRecommendationsJobsOutcome SageMakerClient::ListInferenceRecommendationsJobs(
    const ListInferenceRecommendationsJobsRequest& request) const {
  return ListInferenceRecommendationsJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLabelingJobsOutcome SageMakerClient::ListLabelingJobs(const ListLabelingJobsRequest& request) const {
  return ListLabelingJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLabelingJobsForWorkteamOutcome SageMakerClient::ListLabelingJobsForWorkteam(const ListLabelingJobsForWorkteamRequest& request) const {
  return ListLabelingJobsForWorkteamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLineageGroupsOutcome SageMakerClient::ListLineageGroups(const ListLineageGroupsRequest& request) const {
  return ListLineageGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMlflowAppsOutcome SageMakerClient::ListMlflowApps(const ListMlflowAppsRequest& request) const {
  return ListMlflowAppsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMlflowTrackingServersOutcome SageMakerClient::ListMlflowTrackingServers(const ListMlflowTrackingServersRequest& request) const {
  return ListMlflowTrackingServersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListModelBiasJobDefinitionsOutcome SageMakerClient::ListModelBiasJobDefinitions(const ListModelBiasJobDefinitionsRequest& request) const {
  return ListModelBiasJobDefinitionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListModelCardExportJobsOutcome SageMakerClient::ListModelCardExportJobs(const ListModelCardExportJobsRequest& request) const {
  return ListModelCardExportJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListModelCardVersionsOutcome SageMakerClient::ListModelCardVersions(const ListModelCardVersionsRequest& request) const {
  return ListModelCardVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListModelCardsOutcome SageMakerClient::ListModelCards(const ListModelCardsRequest& request) const {
  return ListModelCardsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListModelExplainabilityJobDefinitionsOutcome SageMakerClient::ListModelExplainabilityJobDefinitions(
    const ListModelExplainabilityJobDefinitionsRequest& request) const {
  return ListModelExplainabilityJobDefinitionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListModelMetadataOutcome SageMakerClient::ListModelMetadata(const ListModelMetadataRequest& request) const {
  return ListModelMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListModelPackageGroupsOutcome SageMakerClient::ListModelPackageGroups(const ListModelPackageGroupsRequest& request) const {
  return ListModelPackageGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListModelPackagesOutcome SageMakerClient::ListModelPackages(const ListModelPackagesRequest& request) const {
  return ListModelPackagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListModelQualityJobDefinitionsOutcome SageMakerClient::ListModelQualityJobDefinitions(
    const ListModelQualityJobDefinitionsRequest& request) const {
  return ListModelQualityJobDefinitionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListModelsOutcome SageMakerClient::ListModels(const ListModelsRequest& request) const {
  return ListModelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMonitoringAlertHistoryOutcome SageMakerClient::ListMonitoringAlertHistory(const ListMonitoringAlertHistoryRequest& request) const {
  return ListMonitoringAlertHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMonitoringAlertsOutcome SageMakerClient::ListMonitoringAlerts(const ListMonitoringAlertsRequest& request) const {
  return ListMonitoringAlertsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMonitoringExecutionsOutcome SageMakerClient::ListMonitoringExecutions(const ListMonitoringExecutionsRequest& request) const {
  return ListMonitoringExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMonitoringSchedulesOutcome SageMakerClient::ListMonitoringSchedules(const ListMonitoringSchedulesRequest& request) const {
  return ListMonitoringSchedulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNotebookInstanceLifecycleConfigsOutcome SageMakerClient::ListNotebookInstanceLifecycleConfigs(
    const ListNotebookInstanceLifecycleConfigsRequest& request) const {
  return ListNotebookInstanceLifecycleConfigsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNotebookInstancesOutcome SageMakerClient::ListNotebookInstances(const ListNotebookInstancesRequest& request) const {
  return ListNotebookInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOptimizationJobsOutcome SageMakerClient::ListOptimizationJobs(const ListOptimizationJobsRequest& request) const {
  return ListOptimizationJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPartnerAppsOutcome SageMakerClient::ListPartnerApps(const ListPartnerAppsRequest& request) const {
  return ListPartnerAppsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPipelineExecutionStepsOutcome SageMakerClient::ListPipelineExecutionSteps(const ListPipelineExecutionStepsRequest& request) const {
  return ListPipelineExecutionStepsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPipelineExecutionsOutcome SageMakerClient::ListPipelineExecutions(const ListPipelineExecutionsRequest& request) const {
  return ListPipelineExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPipelineParametersForExecutionOutcome SageMakerClient::ListPipelineParametersForExecution(
    const ListPipelineParametersForExecutionRequest& request) const {
  return ListPipelineParametersForExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPipelineVersionsOutcome SageMakerClient::ListPipelineVersions(const ListPipelineVersionsRequest& request) const {
  return ListPipelineVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPipelinesOutcome SageMakerClient::ListPipelines(const ListPipelinesRequest& request) const {
  return ListPipelinesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProcessingJobsOutcome SageMakerClient::ListProcessingJobs(const ListProcessingJobsRequest& request) const {
  return ListProcessingJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProjectsOutcome SageMakerClient::ListProjects(const ListProjectsRequest& request) const {
  return ListProjectsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceCatalogsOutcome SageMakerClient::ListResourceCatalogs(const ListResourceCatalogsRequest& request) const {
  return ListResourceCatalogsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSpacesOutcome SageMakerClient::ListSpaces(const ListSpacesRequest& request) const {
  return ListSpacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStageDevicesOutcome SageMakerClient::ListStageDevices(const ListStageDevicesRequest& request) const {
  return ListStageDevicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStudioLifecycleConfigsOutcome SageMakerClient::ListStudioLifecycleConfigs(const ListStudioLifecycleConfigsRequest& request) const {
  return ListStudioLifecycleConfigsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSubscribedWorkteamsOutcome SageMakerClient::ListSubscribedWorkteams(const ListSubscribedWorkteamsRequest& request) const {
  return ListSubscribedWorkteamsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsOutcome SageMakerClient::ListTags(const ListTagsRequest& request) const {
  return ListTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTrainingJobsOutcome SageMakerClient::ListTrainingJobs(const ListTrainingJobsRequest& request) const {
  return ListTrainingJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTrainingJobsForHyperParameterTuningJobOutcome SageMakerClient::ListTrainingJobsForHyperParameterTuningJob(
    const ListTrainingJobsForHyperParameterTuningJobRequest& request) const {
  return ListTrainingJobsForHyperParameterTuningJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTrainingPlansOutcome SageMakerClient::ListTrainingPlans(const ListTrainingPlansRequest& request) const {
  return ListTrainingPlansOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTransformJobsOutcome SageMakerClient::ListTransformJobs(const ListTransformJobsRequest& request) const {
  return ListTransformJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTrialComponentsOutcome SageMakerClient::ListTrialComponents(const ListTrialComponentsRequest& request) const {
  return ListTrialComponentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTrialsOutcome SageMakerClient::ListTrials(const ListTrialsRequest& request) const {
  return ListTrialsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
