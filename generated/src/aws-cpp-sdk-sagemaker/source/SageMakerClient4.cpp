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
#include <aws/sagemaker/model/UpdateDeviceFleetRequest.h>
#include <aws/sagemaker/model/UpdateDevicesRequest.h>
#include <aws/sagemaker/model/UpdateDomainRequest.h>
#include <aws/sagemaker/model/UpdateEndpointRequest.h>
#include <aws/sagemaker/model/UpdateEndpointWeightsAndCapacitiesRequest.h>
#include <aws/sagemaker/model/UpdateExperimentRequest.h>
#include <aws/sagemaker/model/UpdateFeatureGroupRequest.h>
#include <aws/sagemaker/model/UpdateFeatureMetadataRequest.h>
#include <aws/sagemaker/model/UpdateGlobalInferenceGatewayRequest.h>
#include <aws/sagemaker/model/UpdateHubContentReferenceRequest.h>
#include <aws/sagemaker/model/UpdateHubContentRequest.h>
#include <aws/sagemaker/model/UpdateHubRequest.h>
#include <aws/sagemaker/model/UpdateImageRequest.h>
#include <aws/sagemaker/model/UpdateImageVersionRequest.h>
#include <aws/sagemaker/model/UpdateInferenceComponentRequest.h>
#include <aws/sagemaker/model/UpdateInferenceComponentRuntimeConfigRequest.h>
#include <aws/sagemaker/model/UpdateInferenceExperimentRequest.h>
#include <aws/sagemaker/model/UpdateInferenceRouterRequest.h>
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

UpdateGlobalInferenceGatewayOutcome SageMakerClient::UpdateGlobalInferenceGateway(
    const UpdateGlobalInferenceGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateGlobalInferenceGatewayOutcome(result.GetResultWithOwnership())
                            : UpdateGlobalInferenceGatewayOutcome(std::move(result.GetError()));
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

UpdateInferenceRouterOutcome SageMakerClient::UpdateInferenceRouter(const UpdateInferenceRouterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateInferenceRouterOutcome(result.GetResultWithOwnership())
                            : UpdateInferenceRouterOutcome(std::move(result.GetError()));
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
