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
#include <aws/sagemaker/model/StartClusterHealthCheckRequest.h>
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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUltraServersByReservedCapacityOutcome(result.GetResultWithOwnership())
                            : ListUltraServersByReservedCapacityOutcome(std::move(result.GetError()));
}

ListUserProfilesOutcome SageMakerClient::ListUserProfiles(const ListUserProfilesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUserProfilesOutcome(result.GetResultWithOwnership())
                            : ListUserProfilesOutcome(std::move(result.GetError()));
}

ListWorkforcesOutcome SageMakerClient::ListWorkforces(const ListWorkforcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWorkforcesOutcome(result.GetResultWithOwnership()) : ListWorkforcesOutcome(std::move(result.GetError()));
}

ListWorkteamsOutcome SageMakerClient::ListWorkteams(const ListWorkteamsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWorkteamsOutcome(result.GetResultWithOwnership()) : ListWorkteamsOutcome(std::move(result.GetError()));
}

PutModelPackageGroupPolicyOutcome SageMakerClient::PutModelPackageGroupPolicy(const PutModelPackageGroupPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutModelPackageGroupPolicyOutcome(result.GetResultWithOwnership())
                            : PutModelPackageGroupPolicyOutcome(std::move(result.GetError()));
}

QueryLineageOutcome SageMakerClient::QueryLineage(const QueryLineageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryLineageOutcome(result.GetResultWithOwnership()) : QueryLineageOutcome(std::move(result.GetError()));
}

RegisterDevicesOutcome SageMakerClient::RegisterDevices(const RegisterDevicesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterDevicesOutcome(result.GetResultWithOwnership())
                            : RegisterDevicesOutcome(std::move(result.GetError()));
}

RenderUiTemplateOutcome SageMakerClient::RenderUiTemplate(const RenderUiTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RenderUiTemplateOutcome(result.GetResultWithOwnership())
                            : RenderUiTemplateOutcome(std::move(result.GetError()));
}

RetryPipelineExecutionOutcome SageMakerClient::RetryPipelineExecution(const RetryPipelineExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RetryPipelineExecutionOutcome(result.GetResultWithOwnership())
                            : RetryPipelineExecutionOutcome(std::move(result.GetError()));
}

SearchOutcome SageMakerClient::Search(const SearchRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchOutcome(result.GetResultWithOwnership()) : SearchOutcome(std::move(result.GetError()));
}

SearchTrainingPlanOfferingsOutcome SageMakerClient::SearchTrainingPlanOfferings(const SearchTrainingPlanOfferingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchTrainingPlanOfferingsOutcome(result.GetResultWithOwnership())
                            : SearchTrainingPlanOfferingsOutcome(std::move(result.GetError()));
}

SendPipelineExecutionStepFailureOutcome SageMakerClient::SendPipelineExecutionStepFailure(
    const SendPipelineExecutionStepFailureRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendPipelineExecutionStepFailureOutcome(result.GetResultWithOwnership())
                            : SendPipelineExecutionStepFailureOutcome(std::move(result.GetError()));
}

SendPipelineExecutionStepSuccessOutcome SageMakerClient::SendPipelineExecutionStepSuccess(
    const SendPipelineExecutionStepSuccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendPipelineExecutionStepSuccessOutcome(result.GetResultWithOwnership())
                            : SendPipelineExecutionStepSuccessOutcome(std::move(result.GetError()));
}

StartClusterHealthCheckOutcome SageMakerClient::StartClusterHealthCheck(const StartClusterHealthCheckRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartClusterHealthCheckOutcome(result.GetResultWithOwnership())
                            : StartClusterHealthCheckOutcome(std::move(result.GetError()));
}

StartEdgeDeploymentStageOutcome SageMakerClient::StartEdgeDeploymentStage(const StartEdgeDeploymentStageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartEdgeDeploymentStageOutcome(result.GetResultWithOwnership())
                            : StartEdgeDeploymentStageOutcome(std::move(result.GetError()));
}

StartInferenceExperimentOutcome SageMakerClient::StartInferenceExperiment(const StartInferenceExperimentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartInferenceExperimentOutcome(result.GetResultWithOwnership())
                            : StartInferenceExperimentOutcome(std::move(result.GetError()));
}

StartMlflowTrackingServerOutcome SageMakerClient::StartMlflowTrackingServer(const StartMlflowTrackingServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMlflowTrackingServerOutcome(result.GetResultWithOwnership())
                            : StartMlflowTrackingServerOutcome(std::move(result.GetError()));
}

StartMonitoringScheduleOutcome SageMakerClient::StartMonitoringSchedule(const StartMonitoringScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMonitoringScheduleOutcome(result.GetResultWithOwnership())
                            : StartMonitoringScheduleOutcome(std::move(result.GetError()));
}

StartNotebookInstanceOutcome SageMakerClient::StartNotebookInstance(const StartNotebookInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartNotebookInstanceOutcome(result.GetResultWithOwnership())
                            : StartNotebookInstanceOutcome(std::move(result.GetError()));
}

StartPipelineExecutionOutcome SageMakerClient::StartPipelineExecution(const StartPipelineExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartPipelineExecutionOutcome(result.GetResultWithOwnership())
                            : StartPipelineExecutionOutcome(std::move(result.GetError()));
}

StartSessionOutcome SageMakerClient::StartSession(const StartSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartSessionOutcome(result.GetResultWithOwnership()) : StartSessionOutcome(std::move(result.GetError()));
}

StopAutoMLJobOutcome SageMakerClient::StopAutoMLJob(const StopAutoMLJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopAutoMLJobOutcome(result.GetResultWithOwnership()) : StopAutoMLJobOutcome(std::move(result.GetError()));
}

StopCompilationJobOutcome SageMakerClient::StopCompilationJob(const StopCompilationJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopCompilationJobOutcome(result.GetResultWithOwnership())
                            : StopCompilationJobOutcome(std::move(result.GetError()));
}

StopEdgeDeploymentStageOutcome SageMakerClient::StopEdgeDeploymentStage(const StopEdgeDeploymentStageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopEdgeDeploymentStageOutcome(result.GetResultWithOwnership())
                            : StopEdgeDeploymentStageOutcome(std::move(result.GetError()));
}

StopEdgePackagingJobOutcome SageMakerClient::StopEdgePackagingJob(const StopEdgePackagingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopEdgePackagingJobOutcome(result.GetResultWithOwnership())
                            : StopEdgePackagingJobOutcome(std::move(result.GetError()));
}

StopHyperParameterTuningJobOutcome SageMakerClient::StopHyperParameterTuningJob(const StopHyperParameterTuningJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopHyperParameterTuningJobOutcome(result.GetResultWithOwnership())
                            : StopHyperParameterTuningJobOutcome(std::move(result.GetError()));
}

StopInferenceExperimentOutcome SageMakerClient::StopInferenceExperiment(const StopInferenceExperimentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopInferenceExperimentOutcome(result.GetResultWithOwnership())
                            : StopInferenceExperimentOutcome(std::move(result.GetError()));
}

StopInferenceRecommendationsJobOutcome SageMakerClient::StopInferenceRecommendationsJob(
    const StopInferenceRecommendationsJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopInferenceRecommendationsJobOutcome(result.GetResultWithOwnership())
                            : StopInferenceRecommendationsJobOutcome(std::move(result.GetError()));
}

StopLabelingJobOutcome SageMakerClient::StopLabelingJob(const StopLabelingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopLabelingJobOutcome(result.GetResultWithOwnership())
                            : StopLabelingJobOutcome(std::move(result.GetError()));
}

StopMlflowTrackingServerOutcome SageMakerClient::StopMlflowTrackingServer(const StopMlflowTrackingServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopMlflowTrackingServerOutcome(result.GetResultWithOwnership())
                            : StopMlflowTrackingServerOutcome(std::move(result.GetError()));
}

StopMonitoringScheduleOutcome SageMakerClient::StopMonitoringSchedule(const StopMonitoringScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopMonitoringScheduleOutcome(result.GetResultWithOwnership())
                            : StopMonitoringScheduleOutcome(std::move(result.GetError()));
}

StopNotebookInstanceOutcome SageMakerClient::StopNotebookInstance(const StopNotebookInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopNotebookInstanceOutcome(result.GetResultWithOwnership())
                            : StopNotebookInstanceOutcome(std::move(result.GetError()));
}

StopOptimizationJobOutcome SageMakerClient::StopOptimizationJob(const StopOptimizationJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopOptimizationJobOutcome(result.GetResultWithOwnership())
                            : StopOptimizationJobOutcome(std::move(result.GetError()));
}

StopPipelineExecutionOutcome SageMakerClient::StopPipelineExecution(const StopPipelineExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopPipelineExecutionOutcome(result.GetResultWithOwnership())
                            : StopPipelineExecutionOutcome(std::move(result.GetError()));
}

StopProcessingJobOutcome SageMakerClient::StopProcessingJob(const StopProcessingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopProcessingJobOutcome(result.GetResultWithOwnership())
                            : StopProcessingJobOutcome(std::move(result.GetError()));
}

StopTrainingJobOutcome SageMakerClient::StopTrainingJob(const StopTrainingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopTrainingJobOutcome(result.GetResultWithOwnership())
                            : StopTrainingJobOutcome(std::move(result.GetError()));
}

StopTransformJobOutcome SageMakerClient::StopTransformJob(const StopTransformJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopTransformJobOutcome(result.GetResultWithOwnership())
                            : StopTransformJobOutcome(std::move(result.GetError()));
}

UpdateActionOutcome SageMakerClient::UpdateAction(const UpdateActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateActionOutcome(result.GetResultWithOwnership()) : UpdateActionOutcome(std::move(result.GetError()));
}

UpdateAppImageConfigOutcome SageMakerClient::UpdateAppImageConfig(const UpdateAppImageConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAppImageConfigOutcome(result.GetResultWithOwnership())
                            : UpdateAppImageConfigOutcome(std::move(result.GetError()));
}

UpdateArtifactOutcome SageMakerClient::UpdateArtifact(const UpdateArtifactRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateArtifactOutcome(result.GetResultWithOwnership()) : UpdateArtifactOutcome(std::move(result.GetError()));
}

UpdateClusterOutcome SageMakerClient::UpdateCluster(const UpdateClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateClusterOutcome(result.GetResultWithOwnership()) : UpdateClusterOutcome(std::move(result.GetError()));
}

UpdateClusterSchedulerConfigOutcome SageMakerClient::UpdateClusterSchedulerConfig(
    const UpdateClusterSchedulerConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateClusterSchedulerConfigOutcome(result.GetResultWithOwnership())
                            : UpdateClusterSchedulerConfigOutcome(std::move(result.GetError()));
}

UpdateClusterSoftwareOutcome SageMakerClient::UpdateClusterSoftware(const UpdateClusterSoftwareRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateClusterSoftwareOutcome(result.GetResultWithOwnership())
                            : UpdateClusterSoftwareOutcome(std::move(result.GetError()));
}

UpdateCodeRepositoryOutcome SageMakerClient::UpdateCodeRepository(const UpdateCodeRepositoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCodeRepositoryOutcome(result.GetResultWithOwnership())
                            : UpdateCodeRepositoryOutcome(std::move(result.GetError()));
}

UpdateComputeQuotaOutcome SageMakerClient::UpdateComputeQuota(const UpdateComputeQuotaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateComputeQuotaOutcome(result.GetResultWithOwnership())
                            : UpdateComputeQuotaOutcome(std::move(result.GetError()));
}

UpdateContextOutcome SageMakerClient::UpdateContext(const UpdateContextRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateContextOutcome(result.GetResultWithOwnership()) : UpdateContextOutcome(std::move(result.GetError()));
}

UpdateDeviceFleetOutcome SageMakerClient::UpdateDeviceFleet(const UpdateDeviceFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDeviceFleetOutcome(result.GetResultWithOwnership())
                            : UpdateDeviceFleetOutcome(std::move(result.GetError()));
}

UpdateDevicesOutcome SageMakerClient::UpdateDevices(const UpdateDevicesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDevicesOutcome(result.GetResultWithOwnership()) : UpdateDevicesOutcome(std::move(result.GetError()));
}

UpdateDomainOutcome SageMakerClient::UpdateDomain(const UpdateDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDomainOutcome(result.GetResultWithOwnership()) : UpdateDomainOutcome(std::move(result.GetError()));
}

UpdateEndpointOutcome SageMakerClient::UpdateEndpoint(const UpdateEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateEndpointOutcome(result.GetResultWithOwnership()) : UpdateEndpointOutcome(std::move(result.GetError()));
}

UpdateEndpointWeightsAndCapacitiesOutcome SageMakerClient::UpdateEndpointWeightsAndCapacities(
    const UpdateEndpointWeightsAndCapacitiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateEndpointWeightsAndCapacitiesOutcome(result.GetResultWithOwnership())
                            : UpdateEndpointWeightsAndCapacitiesOutcome(std::move(result.GetError()));
}

UpdateExperimentOutcome SageMakerClient::UpdateExperiment(const UpdateExperimentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateExperimentOutcome(result.GetResultWithOwnership())
                            : UpdateExperimentOutcome(std::move(result.GetError()));
}

UpdateFeatureGroupOutcome SageMakerClient::UpdateFeatureGroup(const UpdateFeatureGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFeatureGroupOutcome(result.GetResultWithOwnership())
                            : UpdateFeatureGroupOutcome(std::move(result.GetError()));
}

UpdateFeatureMetadataOutcome SageMakerClient::UpdateFeatureMetadata(const UpdateFeatureMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFeatureMetadataOutcome(result.GetResultWithOwnership())
                            : UpdateFeatureMetadataOutcome(std::move(result.GetError()));
}

UpdateHubOutcome SageMakerClient::UpdateHub(const UpdateHubRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateHubOutcome(result.GetResultWithOwnership()) : UpdateHubOutcome(std::move(result.GetError()));
}

UpdateHubContentOutcome SageMakerClient::UpdateHubContent(const UpdateHubContentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateHubContentOutcome(result.GetResultWithOwnership())
                            : UpdateHubContentOutcome(std::move(result.GetError()));
}

UpdateHubContentReferenceOutcome SageMakerClient::UpdateHubContentReference(const UpdateHubContentReferenceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateHubContentReferenceOutcome(result.GetResultWithOwnership())
                            : UpdateHubContentReferenceOutcome(std::move(result.GetError()));
}

UpdateImageOutcome SageMakerClient::UpdateImage(const UpdateImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateImageOutcome(result.GetResultWithOwnership()) : UpdateImageOutcome(std::move(result.GetError()));
}

UpdateImageVersionOutcome SageMakerClient::UpdateImageVersion(const UpdateImageVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateImageVersionOutcome(result.GetResultWithOwnership())
                            : UpdateImageVersionOutcome(std::move(result.GetError()));
}

UpdateInferenceComponentOutcome SageMakerClient::UpdateInferenceComponent(const UpdateInferenceComponentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateInferenceComponentOutcome(result.GetResultWithOwnership())
                            : UpdateInferenceComponentOutcome(std::move(result.GetError()));
}

UpdateInferenceComponentRuntimeConfigOutcome SageMakerClient::UpdateInferenceComponentRuntimeConfig(
    const UpdateInferenceComponentRuntimeConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateInferenceComponentRuntimeConfigOutcome(result.GetResultWithOwnership())
                            : UpdateInferenceComponentRuntimeConfigOutcome(std::move(result.GetError()));
}

UpdateInferenceExperimentOutcome SageMakerClient::UpdateInferenceExperiment(const UpdateInferenceExperimentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateInferenceExperimentOutcome(result.GetResultWithOwnership())
                            : UpdateInferenceExperimentOutcome(std::move(result.GetError()));
}

UpdateMlflowAppOutcome SageMakerClient::UpdateMlflowApp(const UpdateMlflowAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMlflowAppOutcome(result.GetResultWithOwnership())
                            : UpdateMlflowAppOutcome(std::move(result.GetError()));
}

UpdateMlflowTrackingServerOutcome SageMakerClient::UpdateMlflowTrackingServer(const UpdateMlflowTrackingServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMlflowTrackingServerOutcome(result.GetResultWithOwnership())
                            : UpdateMlflowTrackingServerOutcome(std::move(result.GetError()));
}

UpdateModelCardOutcome SageMakerClient::UpdateModelCard(const UpdateModelCardRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateModelCardOutcome(result.GetResultWithOwnership())
                            : UpdateModelCardOutcome(std::move(result.GetError()));
}

UpdateModelPackageOutcome SageMakerClient::UpdateModelPackage(const UpdateModelPackageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateModelPackageOutcome(result.GetResultWithOwnership())
                            : UpdateModelPackageOutcome(std::move(result.GetError()));
}

UpdateMonitoringAlertOutcome SageMakerClient::UpdateMonitoringAlert(const UpdateMonitoringAlertRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMonitoringAlertOutcome(result.GetResultWithOwnership())
                            : UpdateMonitoringAlertOutcome(std::move(result.GetError()));
}

UpdateMonitoringScheduleOutcome SageMakerClient::UpdateMonitoringSchedule(const UpdateMonitoringScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMonitoringScheduleOutcome(result.GetResultWithOwnership())
                            : UpdateMonitoringScheduleOutcome(std::move(result.GetError()));
}

UpdateNotebookInstanceOutcome SageMakerClient::UpdateNotebookInstance(const UpdateNotebookInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateNotebookInstanceOutcome(result.GetResultWithOwnership())
                            : UpdateNotebookInstanceOutcome(std::move(result.GetError()));
}

UpdateNotebookInstanceLifecycleConfigOutcome SageMakerClient::UpdateNotebookInstanceLifecycleConfig(
    const UpdateNotebookInstanceLifecycleConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateNotebookInstanceLifecycleConfigOutcome(result.GetResultWithOwnership())
                            : UpdateNotebookInstanceLifecycleConfigOutcome(std::move(result.GetError()));
}

UpdatePartnerAppOutcome SageMakerClient::UpdatePartnerApp(const UpdatePartnerAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePartnerAppOutcome(result.GetResultWithOwnership())
                            : UpdatePartnerAppOutcome(std::move(result.GetError()));
}

UpdatePipelineOutcome SageMakerClient::UpdatePipeline(const UpdatePipelineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePipelineOutcome(result.GetResultWithOwnership()) : UpdatePipelineOutcome(std::move(result.GetError()));
}

UpdatePipelineExecutionOutcome SageMakerClient::UpdatePipelineExecution(const UpdatePipelineExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePipelineExecutionOutcome(result.GetResultWithOwnership())
                            : UpdatePipelineExecutionOutcome(std::move(result.GetError()));
}

UpdatePipelineVersionOutcome SageMakerClient::UpdatePipelineVersion(const UpdatePipelineVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePipelineVersionOutcome(result.GetResultWithOwnership())
                            : UpdatePipelineVersionOutcome(std::move(result.GetError()));
}

UpdateProjectOutcome SageMakerClient::UpdateProject(const UpdateProjectRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProjectOutcome(result.GetResultWithOwnership()) : UpdateProjectOutcome(std::move(result.GetError()));
}

UpdateSpaceOutcome SageMakerClient::UpdateSpace(const UpdateSpaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSpaceOutcome(result.GetResultWithOwnership()) : UpdateSpaceOutcome(std::move(result.GetError()));
}

UpdateTrainingJobOutcome SageMakerClient::UpdateTrainingJob(const UpdateTrainingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTrainingJobOutcome(result.GetResultWithOwnership())
                            : UpdateTrainingJobOutcome(std::move(result.GetError()));
}

UpdateTrialOutcome SageMakerClient::UpdateTrial(const UpdateTrialRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTrialOutcome(result.GetResultWithOwnership()) : UpdateTrialOutcome(std::move(result.GetError()));
}

UpdateTrialComponentOutcome SageMakerClient::UpdateTrialComponent(const UpdateTrialComponentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTrialComponentOutcome(result.GetResultWithOwnership())
                            : UpdateTrialComponentOutcome(std::move(result.GetError()));
}

UpdateUserProfileOutcome SageMakerClient::UpdateUserProfile(const UpdateUserProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUserProfileOutcome(result.GetResultWithOwnership())
                            : UpdateUserProfileOutcome(std::move(result.GetError()));
}

UpdateWorkforceOutcome SageMakerClient::UpdateWorkforce(const UpdateWorkforceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkforceOutcome(result.GetResultWithOwnership())
                            : UpdateWorkforceOutcome(std::move(result.GetError()));
}

UpdateWorkteamOutcome SageMakerClient::UpdateWorkteam(const UpdateWorkteamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkteamOutcome(result.GetResultWithOwnership()) : UpdateWorkteamOutcome(std::move(result.GetError()));
}
