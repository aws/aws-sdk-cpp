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
#include <aws/sagemaker/model/ListUltraServersByReservedCapacityRequest.h>
#include <aws/sagemaker/model/ListUserProfilesRequest.h>
#include <aws/sagemaker/model/ListWorkforcesRequest.h>
#include <aws/sagemaker/model/ListWorkteamsRequest.h>
#include <aws/sagemaker/model/PutModelPackageGroupPolicyRequest.h>
#include <aws/sagemaker/model/QueryLineageRequest.h>
#include <aws/sagemaker/model/RegisterDevicesRequest.h>
#include <aws/sagemaker/model/RenderUiTemplateRequest.h>
#include <aws/sagemaker/model/RetryPipelineExecutionRequest.h>
#include <aws/sagemaker/model/SearchRequest.h>
#include <aws/sagemaker/model/SearchTrainingPlanOfferingsRequest.h>
#include <aws/sagemaker/model/SendPipelineExecutionStepFailureRequest.h>
#include <aws/sagemaker/model/SendPipelineExecutionStepSuccessRequest.h>
#include <aws/sagemaker/model/StartEdgeDeploymentStageRequest.h>
#include <aws/sagemaker/model/StartInferenceExperimentRequest.h>
#include <aws/sagemaker/model/StartMlflowTrackingServerRequest.h>
#include <aws/sagemaker/model/StartMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/StartNotebookInstanceRequest.h>
#include <aws/sagemaker/model/StartPipelineExecutionRequest.h>
#include <aws/sagemaker/model/StartSessionRequest.h>
#include <aws/sagemaker/model/StopAutoMLJobRequest.h>
#include <aws/sagemaker/model/StopCompilationJobRequest.h>
#include <aws/sagemaker/model/StopEdgeDeploymentStageRequest.h>
#include <aws/sagemaker/model/StopEdgePackagingJobRequest.h>
#include <aws/sagemaker/model/StopHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/StopInferenceExperimentRequest.h>
#include <aws/sagemaker/model/StopInferenceRecommendationsJobRequest.h>
#include <aws/sagemaker/model/StopLabelingJobRequest.h>
#include <aws/sagemaker/model/StopMlflowTrackingServerRequest.h>
#include <aws/sagemaker/model/StopMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/StopNotebookInstanceRequest.h>
#include <aws/sagemaker/model/StopOptimizationJobRequest.h>
#include <aws/sagemaker/model/StopPipelineExecutionRequest.h>
#include <aws/sagemaker/model/StopProcessingJobRequest.h>
#include <aws/sagemaker/model/StopTrainingJobRequest.h>
#include <aws/sagemaker/model/StopTransformJobRequest.h>
#include <aws/sagemaker/model/UpdateActionRequest.h>
#include <aws/sagemaker/model/UpdateAppImageConfigRequest.h>
#include <aws/sagemaker/model/UpdateArtifactRequest.h>
#include <aws/sagemaker/model/UpdateClusterRequest.h>
#include <aws/sagemaker/model/UpdateClusterSchedulerConfigRequest.h>
#include <aws/sagemaker/model/UpdateClusterSoftwareRequest.h>
#include <aws/sagemaker/model/UpdateCodeRepositoryRequest.h>
#include <aws/sagemaker/model/UpdateComputeQuotaRequest.h>
#include <aws/sagemaker/model/UpdateContextRequest.h>
#include <aws/sagemaker/model/UpdateDeviceFleetRequest.h>
#include <aws/sagemaker/model/UpdateDevicesRequest.h>
#include <aws/sagemaker/model/UpdateDomainRequest.h>
#include <aws/sagemaker/model/UpdateEndpointRequest.h>
#include <aws/sagemaker/model/UpdateEndpointWeightsAndCapacitiesRequest.h>
#include <aws/sagemaker/model/UpdateExperimentRequest.h>
#include <aws/sagemaker/model/UpdateFeatureGroupRequest.h>
#include <aws/sagemaker/model/UpdateFeatureMetadataRequest.h>
#include <aws/sagemaker/model/UpdateHubContentReferenceRequest.h>
#include <aws/sagemaker/model/UpdateHubContentRequest.h>
#include <aws/sagemaker/model/UpdateHubRequest.h>
#include <aws/sagemaker/model/UpdateImageRequest.h>
#include <aws/sagemaker/model/UpdateImageVersionRequest.h>
#include <aws/sagemaker/model/UpdateInferenceComponentRequest.h>
#include <aws/sagemaker/model/UpdateInferenceComponentRuntimeConfigRequest.h>
#include <aws/sagemaker/model/UpdateInferenceExperimentRequest.h>
#include <aws/sagemaker/model/UpdateMlflowAppRequest.h>
#include <aws/sagemaker/model/UpdateMlflowTrackingServerRequest.h>
#include <aws/sagemaker/model/UpdateModelCardRequest.h>
#include <aws/sagemaker/model/UpdateModelPackageRequest.h>
#include <aws/sagemaker/model/UpdateMonitoringAlertRequest.h>
#include <aws/sagemaker/model/UpdateMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceLifecycleConfigRequest.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceRequest.h>
#include <aws/sagemaker/model/UpdatePartnerAppRequest.h>
#include <aws/sagemaker/model/UpdatePipelineExecutionRequest.h>
#include <aws/sagemaker/model/UpdatePipelineRequest.h>
#include <aws/sagemaker/model/UpdatePipelineVersionRequest.h>
#include <aws/sagemaker/model/UpdateProjectRequest.h>
#include <aws/sagemaker/model/UpdateSpaceRequest.h>
#include <aws/sagemaker/model/UpdateTrainingJobRequest.h>
#include <aws/sagemaker/model/UpdateTrialComponentRequest.h>
#include <aws/sagemaker/model/UpdateTrialRequest.h>
#include <aws/sagemaker/model/UpdateUserProfileRequest.h>
#include <aws/sagemaker/model/UpdateWorkforceRequest.h>
#include <aws/sagemaker/model/UpdateWorkteamRequest.h>
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

ListUltraServersByReservedCapacityOutcome SageMakerClient::ListUltraServersByReservedCapacity(
    const ListUltraServersByReservedCapacityRequest& request) const {
  return ListUltraServersByReservedCapacityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUserProfilesOutcome SageMakerClient::ListUserProfiles(const ListUserProfilesRequest& request) const {
  return ListUserProfilesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkforcesOutcome SageMakerClient::ListWorkforces(const ListWorkforcesRequest& request) const {
  return ListWorkforcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkteamsOutcome SageMakerClient::ListWorkteams(const ListWorkteamsRequest& request) const {
  return ListWorkteamsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutModelPackageGroupPolicyOutcome SageMakerClient::PutModelPackageGroupPolicy(const PutModelPackageGroupPolicyRequest& request) const {
  return PutModelPackageGroupPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

QueryLineageOutcome SageMakerClient::QueryLineage(const QueryLineageRequest& request) const {
  return QueryLineageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterDevicesOutcome SageMakerClient::RegisterDevices(const RegisterDevicesRequest& request) const {
  return RegisterDevicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RenderUiTemplateOutcome SageMakerClient::RenderUiTemplate(const RenderUiTemplateRequest& request) const {
  return RenderUiTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RetryPipelineExecutionOutcome SageMakerClient::RetryPipelineExecution(const RetryPipelineExecutionRequest& request) const {
  return RetryPipelineExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchOutcome SageMakerClient::Search(const SearchRequest& request) const {
  return SearchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchTrainingPlanOfferingsOutcome SageMakerClient::SearchTrainingPlanOfferings(const SearchTrainingPlanOfferingsRequest& request) const {
  return SearchTrainingPlanOfferingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendPipelineExecutionStepFailureOutcome SageMakerClient::SendPipelineExecutionStepFailure(
    const SendPipelineExecutionStepFailureRequest& request) const {
  return SendPipelineExecutionStepFailureOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendPipelineExecutionStepSuccessOutcome SageMakerClient::SendPipelineExecutionStepSuccess(
    const SendPipelineExecutionStepSuccessRequest& request) const {
  return SendPipelineExecutionStepSuccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartEdgeDeploymentStageOutcome SageMakerClient::StartEdgeDeploymentStage(const StartEdgeDeploymentStageRequest& request) const {
  return StartEdgeDeploymentStageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartInferenceExperimentOutcome SageMakerClient::StartInferenceExperiment(const StartInferenceExperimentRequest& request) const {
  return StartInferenceExperimentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMlflowTrackingServerOutcome SageMakerClient::StartMlflowTrackingServer(const StartMlflowTrackingServerRequest& request) const {
  return StartMlflowTrackingServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMonitoringScheduleOutcome SageMakerClient::StartMonitoringSchedule(const StartMonitoringScheduleRequest& request) const {
  return StartMonitoringScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartNotebookInstanceOutcome SageMakerClient::StartNotebookInstance(const StartNotebookInstanceRequest& request) const {
  return StartNotebookInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartPipelineExecutionOutcome SageMakerClient::StartPipelineExecution(const StartPipelineExecutionRequest& request) const {
  return StartPipelineExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSessionOutcome SageMakerClient::StartSession(const StartSessionRequest& request) const {
  return StartSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopAutoMLJobOutcome SageMakerClient::StopAutoMLJob(const StopAutoMLJobRequest& request) const {
  return StopAutoMLJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopCompilationJobOutcome SageMakerClient::StopCompilationJob(const StopCompilationJobRequest& request) const {
  return StopCompilationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopEdgeDeploymentStageOutcome SageMakerClient::StopEdgeDeploymentStage(const StopEdgeDeploymentStageRequest& request) const {
  return StopEdgeDeploymentStageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopEdgePackagingJobOutcome SageMakerClient::StopEdgePackagingJob(const StopEdgePackagingJobRequest& request) const {
  return StopEdgePackagingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopHyperParameterTuningJobOutcome SageMakerClient::StopHyperParameterTuningJob(const StopHyperParameterTuningJobRequest& request) const {
  return StopHyperParameterTuningJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopInferenceExperimentOutcome SageMakerClient::StopInferenceExperiment(const StopInferenceExperimentRequest& request) const {
  return StopInferenceExperimentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopInferenceRecommendationsJobOutcome SageMakerClient::StopInferenceRecommendationsJob(
    const StopInferenceRecommendationsJobRequest& request) const {
  return StopInferenceRecommendationsJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopLabelingJobOutcome SageMakerClient::StopLabelingJob(const StopLabelingJobRequest& request) const {
  return StopLabelingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopMlflowTrackingServerOutcome SageMakerClient::StopMlflowTrackingServer(const StopMlflowTrackingServerRequest& request) const {
  return StopMlflowTrackingServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopMonitoringScheduleOutcome SageMakerClient::StopMonitoringSchedule(const StopMonitoringScheduleRequest& request) const {
  return StopMonitoringScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopNotebookInstanceOutcome SageMakerClient::StopNotebookInstance(const StopNotebookInstanceRequest& request) const {
  return StopNotebookInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopOptimizationJobOutcome SageMakerClient::StopOptimizationJob(const StopOptimizationJobRequest& request) const {
  return StopOptimizationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopPipelineExecutionOutcome SageMakerClient::StopPipelineExecution(const StopPipelineExecutionRequest& request) const {
  return StopPipelineExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopProcessingJobOutcome SageMakerClient::StopProcessingJob(const StopProcessingJobRequest& request) const {
  return StopProcessingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopTrainingJobOutcome SageMakerClient::StopTrainingJob(const StopTrainingJobRequest& request) const {
  return StopTrainingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopTransformJobOutcome SageMakerClient::StopTransformJob(const StopTransformJobRequest& request) const {
  return StopTransformJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateActionOutcome SageMakerClient::UpdateAction(const UpdateActionRequest& request) const {
  return UpdateActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAppImageConfigOutcome SageMakerClient::UpdateAppImageConfig(const UpdateAppImageConfigRequest& request) const {
  return UpdateAppImageConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateArtifactOutcome SageMakerClient::UpdateArtifact(const UpdateArtifactRequest& request) const {
  return UpdateArtifactOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateClusterOutcome SageMakerClient::UpdateCluster(const UpdateClusterRequest& request) const {
  return UpdateClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateClusterSchedulerConfigOutcome SageMakerClient::UpdateClusterSchedulerConfig(
    const UpdateClusterSchedulerConfigRequest& request) const {
  return UpdateClusterSchedulerConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateClusterSoftwareOutcome SageMakerClient::UpdateClusterSoftware(const UpdateClusterSoftwareRequest& request) const {
  return UpdateClusterSoftwareOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCodeRepositoryOutcome SageMakerClient::UpdateCodeRepository(const UpdateCodeRepositoryRequest& request) const {
  return UpdateCodeRepositoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateComputeQuotaOutcome SageMakerClient::UpdateComputeQuota(const UpdateComputeQuotaRequest& request) const {
  return UpdateComputeQuotaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateContextOutcome SageMakerClient::UpdateContext(const UpdateContextRequest& request) const {
  return UpdateContextOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDeviceFleetOutcome SageMakerClient::UpdateDeviceFleet(const UpdateDeviceFleetRequest& request) const {
  return UpdateDeviceFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDevicesOutcome SageMakerClient::UpdateDevices(const UpdateDevicesRequest& request) const {
  return UpdateDevicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDomainOutcome SageMakerClient::UpdateDomain(const UpdateDomainRequest& request) const {
  return UpdateDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEndpointOutcome SageMakerClient::UpdateEndpoint(const UpdateEndpointRequest& request) const {
  return UpdateEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEndpointWeightsAndCapacitiesOutcome SageMakerClient::UpdateEndpointWeightsAndCapacities(
    const UpdateEndpointWeightsAndCapacitiesRequest& request) const {
  return UpdateEndpointWeightsAndCapacitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateExperimentOutcome SageMakerClient::UpdateExperiment(const UpdateExperimentRequest& request) const {
  return UpdateExperimentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFeatureGroupOutcome SageMakerClient::UpdateFeatureGroup(const UpdateFeatureGroupRequest& request) const {
  return UpdateFeatureGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFeatureMetadataOutcome SageMakerClient::UpdateFeatureMetadata(const UpdateFeatureMetadataRequest& request) const {
  return UpdateFeatureMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateHubOutcome SageMakerClient::UpdateHub(const UpdateHubRequest& request) const {
  return UpdateHubOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateHubContentOutcome SageMakerClient::UpdateHubContent(const UpdateHubContentRequest& request) const {
  return UpdateHubContentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateHubContentReferenceOutcome SageMakerClient::UpdateHubContentReference(const UpdateHubContentReferenceRequest& request) const {
  return UpdateHubContentReferenceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateImageOutcome SageMakerClient::UpdateImage(const UpdateImageRequest& request) const {
  return UpdateImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateImageVersionOutcome SageMakerClient::UpdateImageVersion(const UpdateImageVersionRequest& request) const {
  return UpdateImageVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateInferenceComponentOutcome SageMakerClient::UpdateInferenceComponent(const UpdateInferenceComponentRequest& request) const {
  return UpdateInferenceComponentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateInferenceComponentRuntimeConfigOutcome SageMakerClient::UpdateInferenceComponentRuntimeConfig(
    const UpdateInferenceComponentRuntimeConfigRequest& request) const {
  return UpdateInferenceComponentRuntimeConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateInferenceExperimentOutcome SageMakerClient::UpdateInferenceExperiment(const UpdateInferenceExperimentRequest& request) const {
  return UpdateInferenceExperimentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMlflowAppOutcome SageMakerClient::UpdateMlflowApp(const UpdateMlflowAppRequest& request) const {
  return UpdateMlflowAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMlflowTrackingServerOutcome SageMakerClient::UpdateMlflowTrackingServer(const UpdateMlflowTrackingServerRequest& request) const {
  return UpdateMlflowTrackingServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateModelCardOutcome SageMakerClient::UpdateModelCard(const UpdateModelCardRequest& request) const {
  return UpdateModelCardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateModelPackageOutcome SageMakerClient::UpdateModelPackage(const UpdateModelPackageRequest& request) const {
  return UpdateModelPackageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMonitoringAlertOutcome SageMakerClient::UpdateMonitoringAlert(const UpdateMonitoringAlertRequest& request) const {
  return UpdateMonitoringAlertOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMonitoringScheduleOutcome SageMakerClient::UpdateMonitoringSchedule(const UpdateMonitoringScheduleRequest& request) const {
  return UpdateMonitoringScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNotebookInstanceOutcome SageMakerClient::UpdateNotebookInstance(const UpdateNotebookInstanceRequest& request) const {
  return UpdateNotebookInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNotebookInstanceLifecycleConfigOutcome SageMakerClient::UpdateNotebookInstanceLifecycleConfig(
    const UpdateNotebookInstanceLifecycleConfigRequest& request) const {
  return UpdateNotebookInstanceLifecycleConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePartnerAppOutcome SageMakerClient::UpdatePartnerApp(const UpdatePartnerAppRequest& request) const {
  return UpdatePartnerAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePipelineOutcome SageMakerClient::UpdatePipeline(const UpdatePipelineRequest& request) const {
  return UpdatePipelineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePipelineExecutionOutcome SageMakerClient::UpdatePipelineExecution(const UpdatePipelineExecutionRequest& request) const {
  return UpdatePipelineExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePipelineVersionOutcome SageMakerClient::UpdatePipelineVersion(const UpdatePipelineVersionRequest& request) const {
  return UpdatePipelineVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProjectOutcome SageMakerClient::UpdateProject(const UpdateProjectRequest& request) const {
  return UpdateProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSpaceOutcome SageMakerClient::UpdateSpace(const UpdateSpaceRequest& request) const {
  return UpdateSpaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTrainingJobOutcome SageMakerClient::UpdateTrainingJob(const UpdateTrainingJobRequest& request) const {
  return UpdateTrainingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTrialOutcome SageMakerClient::UpdateTrial(const UpdateTrialRequest& request) const {
  return UpdateTrialOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTrialComponentOutcome SageMakerClient::UpdateTrialComponent(const UpdateTrialComponentRequest& request) const {
  return UpdateTrialComponentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUserProfileOutcome SageMakerClient::UpdateUserProfile(const UpdateUserProfileRequest& request) const {
  return UpdateUserProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkforceOutcome SageMakerClient::UpdateWorkforce(const UpdateWorkforceRequest& request) const {
  return UpdateWorkforceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkteamOutcome SageMakerClient::UpdateWorkteam(const UpdateWorkteamRequest& request) const {
  return UpdateWorkteamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
