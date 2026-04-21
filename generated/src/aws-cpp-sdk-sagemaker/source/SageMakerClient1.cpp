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
#include <aws/sagemaker/model/DeleteEndpointConfigRequest.h>
#include <aws/sagemaker/model/DeleteEndpointRequest.h>
#include <aws/sagemaker/model/DeleteExperimentRequest.h>
#include <aws/sagemaker/model/DeleteFeatureGroupRequest.h>
#include <aws/sagemaker/model/DeleteFlowDefinitionRequest.h>
#include <aws/sagemaker/model/DeleteHubContentReferenceRequest.h>
#include <aws/sagemaker/model/DeleteHubContentRequest.h>
#include <aws/sagemaker/model/DeleteHubRequest.h>
#include <aws/sagemaker/model/DeleteHumanTaskUiRequest.h>
#include <aws/sagemaker/model/DeleteHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/DeleteImageRequest.h>
#include <aws/sagemaker/model/DeleteImageVersionRequest.h>
#include <aws/sagemaker/model/DeleteInferenceComponentRequest.h>
#include <aws/sagemaker/model/DeleteInferenceExperimentRequest.h>
#include <aws/sagemaker/model/DeleteMlflowAppRequest.h>
#include <aws/sagemaker/model/DeleteMlflowTrackingServerRequest.h>
#include <aws/sagemaker/model/DeleteModelBiasJobDefinitionRequest.h>
#include <aws/sagemaker/model/DeleteModelCardRequest.h>
#include <aws/sagemaker/model/DeleteModelExplainabilityJobDefinitionRequest.h>
#include <aws/sagemaker/model/DeleteModelPackageGroupPolicyRequest.h>
#include <aws/sagemaker/model/DeleteModelPackageGroupRequest.h>
#include <aws/sagemaker/model/DeleteModelPackageRequest.h>
#include <aws/sagemaker/model/DeleteModelQualityJobDefinitionRequest.h>
#include <aws/sagemaker/model/DeleteModelRequest.h>
#include <aws/sagemaker/model/DeleteMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/DeleteNotebookInstanceLifecycleConfigRequest.h>
#include <aws/sagemaker/model/DeleteNotebookInstanceRequest.h>
#include <aws/sagemaker/model/DeleteOptimizationJobRequest.h>
#include <aws/sagemaker/model/DeletePartnerAppRequest.h>
#include <aws/sagemaker/model/DeletePipelineRequest.h>
#include <aws/sagemaker/model/DeleteProcessingJobRequest.h>
#include <aws/sagemaker/model/DeleteProjectRequest.h>
#include <aws/sagemaker/model/DeleteSpaceRequest.h>
#include <aws/sagemaker/model/DeleteStudioLifecycleConfigRequest.h>
#include <aws/sagemaker/model/DeleteTagsRequest.h>
#include <aws/sagemaker/model/DeleteTrainingJobRequest.h>
#include <aws/sagemaker/model/DeleteTrialComponentRequest.h>
#include <aws/sagemaker/model/DeleteTrialRequest.h>
#include <aws/sagemaker/model/DeleteUserProfileRequest.h>
#include <aws/sagemaker/model/DeleteWorkforceRequest.h>
#include <aws/sagemaker/model/DeleteWorkteamRequest.h>
#include <aws/sagemaker/model/DeregisterDevicesRequest.h>
#include <aws/sagemaker/model/DescribeAIBenchmarkJobRequest.h>
#include <aws/sagemaker/model/DescribeAIRecommendationJobRequest.h>
#include <aws/sagemaker/model/DescribeAIWorkloadConfigRequest.h>
#include <aws/sagemaker/model/DescribeActionRequest.h>
#include <aws/sagemaker/model/DescribeAlgorithmRequest.h>
#include <aws/sagemaker/model/DescribeAppImageConfigRequest.h>
#include <aws/sagemaker/model/DescribeAppRequest.h>
#include <aws/sagemaker/model/DescribeArtifactRequest.h>
#include <aws/sagemaker/model/DescribeAutoMLJobRequest.h>
#include <aws/sagemaker/model/DescribeAutoMLJobV2Request.h>
#include <aws/sagemaker/model/DescribeClusterEventRequest.h>
#include <aws/sagemaker/model/DescribeClusterNodeRequest.h>
#include <aws/sagemaker/model/DescribeClusterRequest.h>
#include <aws/sagemaker/model/DescribeClusterSchedulerConfigRequest.h>
#include <aws/sagemaker/model/DescribeCodeRepositoryRequest.h>
#include <aws/sagemaker/model/DescribeCompilationJobRequest.h>
#include <aws/sagemaker/model/DescribeComputeQuotaRequest.h>
#include <aws/sagemaker/model/DescribeContextRequest.h>
#include <aws/sagemaker/model/DescribeDataQualityJobDefinitionRequest.h>
#include <aws/sagemaker/model/DescribeDeviceFleetRequest.h>
#include <aws/sagemaker/model/DescribeDeviceRequest.h>
#include <aws/sagemaker/model/DescribeDomainRequest.h>
#include <aws/sagemaker/model/DescribeEdgeDeploymentPlanRequest.h>
#include <aws/sagemaker/model/DescribeEdgePackagingJobRequest.h>
#include <aws/sagemaker/model/DescribeEndpointConfigRequest.h>
#include <aws/sagemaker/model/DescribeEndpointRequest.h>
#include <aws/sagemaker/model/DescribeExperimentRequest.h>
#include <aws/sagemaker/model/DescribeFeatureGroupRequest.h>
#include <aws/sagemaker/model/DescribeFeatureMetadataRequest.h>
#include <aws/sagemaker/model/DescribeFlowDefinitionRequest.h>
#include <aws/sagemaker/model/DescribeHubContentRequest.h>
#include <aws/sagemaker/model/DescribeHubRequest.h>
#include <aws/sagemaker/model/DescribeHumanTaskUiRequest.h>
#include <aws/sagemaker/model/DescribeHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/DescribeImageRequest.h>
#include <aws/sagemaker/model/DescribeImageVersionRequest.h>
#include <aws/sagemaker/model/DescribeInferenceComponentRequest.h>
#include <aws/sagemaker/model/DescribeInferenceExperimentRequest.h>
#include <aws/sagemaker/model/DescribeInferenceRecommendationsJobRequest.h>
#include <aws/sagemaker/model/DescribeLabelingJobRequest.h>
#include <aws/sagemaker/model/DescribeLineageGroupRequest.h>
#include <aws/sagemaker/model/DescribeMlflowAppRequest.h>
#include <aws/sagemaker/model/DescribeMlflowTrackingServerRequest.h>
#include <aws/sagemaker/model/DescribeModelBiasJobDefinitionRequest.h>
#include <aws/sagemaker/model/DescribeModelCardExportJobRequest.h>
#include <aws/sagemaker/model/DescribeModelCardRequest.h>
#include <aws/sagemaker/model/DescribeModelExplainabilityJobDefinitionRequest.h>
#include <aws/sagemaker/model/DescribeModelPackageGroupRequest.h>
#include <aws/sagemaker/model/DescribeModelPackageRequest.h>
#include <aws/sagemaker/model/DescribeModelQualityJobDefinitionRequest.h>
#include <aws/sagemaker/model/DescribeModelRequest.h>
#include <aws/sagemaker/model/DescribeMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceLifecycleConfigRequest.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceRequest.h>
#include <aws/sagemaker/model/DescribeOptimizationJobRequest.h>
#include <aws/sagemaker/model/DescribePartnerAppRequest.h>
#include <aws/sagemaker/model/DescribePipelineDefinitionForExecutionRequest.h>
#include <aws/sagemaker/model/DescribePipelineRequest.h>
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

DeleteEndpointOutcome SageMakerClient::DeleteEndpoint(const DeleteEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEndpointOutcome(result.GetResultWithOwnership()) : DeleteEndpointOutcome(std::move(result.GetError()));
}

DeleteEndpointConfigOutcome SageMakerClient::DeleteEndpointConfig(const DeleteEndpointConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEndpointConfigOutcome(result.GetResultWithOwnership())
                            : DeleteEndpointConfigOutcome(std::move(result.GetError()));
}

DeleteExperimentOutcome SageMakerClient::DeleteExperiment(const DeleteExperimentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteExperimentOutcome(result.GetResultWithOwnership())
                            : DeleteExperimentOutcome(std::move(result.GetError()));
}

DeleteFeatureGroupOutcome SageMakerClient::DeleteFeatureGroup(const DeleteFeatureGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteFeatureGroupOutcome(result.GetResultWithOwnership())
                            : DeleteFeatureGroupOutcome(std::move(result.GetError()));
}

DeleteFlowDefinitionOutcome SageMakerClient::DeleteFlowDefinition(const DeleteFlowDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteFlowDefinitionOutcome(result.GetResultWithOwnership())
                            : DeleteFlowDefinitionOutcome(std::move(result.GetError()));
}

DeleteHubOutcome SageMakerClient::DeleteHub(const DeleteHubRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteHubOutcome(result.GetResultWithOwnership()) : DeleteHubOutcome(std::move(result.GetError()));
}

DeleteHubContentOutcome SageMakerClient::DeleteHubContent(const DeleteHubContentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteHubContentOutcome(result.GetResultWithOwnership())
                            : DeleteHubContentOutcome(std::move(result.GetError()));
}

DeleteHubContentReferenceOutcome SageMakerClient::DeleteHubContentReference(const DeleteHubContentReferenceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteHubContentReferenceOutcome(result.GetResultWithOwnership())
                            : DeleteHubContentReferenceOutcome(std::move(result.GetError()));
}

DeleteHumanTaskUiOutcome SageMakerClient::DeleteHumanTaskUi(const DeleteHumanTaskUiRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteHumanTaskUiOutcome(result.GetResultWithOwnership())
                            : DeleteHumanTaskUiOutcome(std::move(result.GetError()));
}

DeleteHyperParameterTuningJobOutcome SageMakerClient::DeleteHyperParameterTuningJob(
    const DeleteHyperParameterTuningJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteHyperParameterTuningJobOutcome(result.GetResultWithOwnership())
                            : DeleteHyperParameterTuningJobOutcome(std::move(result.GetError()));
}

DeleteImageOutcome SageMakerClient::DeleteImage(const DeleteImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteImageOutcome(result.GetResultWithOwnership()) : DeleteImageOutcome(std::move(result.GetError()));
}

DeleteImageVersionOutcome SageMakerClient::DeleteImageVersion(const DeleteImageVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteImageVersionOutcome(result.GetResultWithOwnership())
                            : DeleteImageVersionOutcome(std::move(result.GetError()));
}

DeleteInferenceComponentOutcome SageMakerClient::DeleteInferenceComponent(const DeleteInferenceComponentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInferenceComponentOutcome(result.GetResultWithOwnership())
                            : DeleteInferenceComponentOutcome(std::move(result.GetError()));
}

DeleteInferenceExperimentOutcome SageMakerClient::DeleteInferenceExperiment(const DeleteInferenceExperimentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInferenceExperimentOutcome(result.GetResultWithOwnership())
                            : DeleteInferenceExperimentOutcome(std::move(result.GetError()));
}

DeleteMlflowAppOutcome SageMakerClient::DeleteMlflowApp(const DeleteMlflowAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMlflowAppOutcome(result.GetResultWithOwnership())
                            : DeleteMlflowAppOutcome(std::move(result.GetError()));
}

DeleteMlflowTrackingServerOutcome SageMakerClient::DeleteMlflowTrackingServer(const DeleteMlflowTrackingServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMlflowTrackingServerOutcome(result.GetResultWithOwnership())
                            : DeleteMlflowTrackingServerOutcome(std::move(result.GetError()));
}

DeleteModelOutcome SageMakerClient::DeleteModel(const DeleteModelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteModelOutcome(result.GetResultWithOwnership()) : DeleteModelOutcome(std::move(result.GetError()));
}

DeleteModelBiasJobDefinitionOutcome SageMakerClient::DeleteModelBiasJobDefinition(
    const DeleteModelBiasJobDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteModelBiasJobDefinitionOutcome(result.GetResultWithOwnership())
                            : DeleteModelBiasJobDefinitionOutcome(std::move(result.GetError()));
}

DeleteModelCardOutcome SageMakerClient::DeleteModelCard(const DeleteModelCardRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteModelCardOutcome(result.GetResultWithOwnership())
                            : DeleteModelCardOutcome(std::move(result.GetError()));
}

DeleteModelExplainabilityJobDefinitionOutcome SageMakerClient::DeleteModelExplainabilityJobDefinition(
    const DeleteModelExplainabilityJobDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteModelExplainabilityJobDefinitionOutcome(result.GetResultWithOwnership())
                            : DeleteModelExplainabilityJobDefinitionOutcome(std::move(result.GetError()));
}

DeleteModelPackageOutcome SageMakerClient::DeleteModelPackage(const DeleteModelPackageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteModelPackageOutcome(result.GetResultWithOwnership())
                            : DeleteModelPackageOutcome(std::move(result.GetError()));
}

DeleteModelPackageGroupOutcome SageMakerClient::DeleteModelPackageGroup(const DeleteModelPackageGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteModelPackageGroupOutcome(result.GetResultWithOwnership())
                            : DeleteModelPackageGroupOutcome(std::move(result.GetError()));
}

DeleteModelPackageGroupPolicyOutcome SageMakerClient::DeleteModelPackageGroupPolicy(
    const DeleteModelPackageGroupPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteModelPackageGroupPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteModelPackageGroupPolicyOutcome(std::move(result.GetError()));
}

DeleteModelQualityJobDefinitionOutcome SageMakerClient::DeleteModelQualityJobDefinition(
    const DeleteModelQualityJobDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteModelQualityJobDefinitionOutcome(result.GetResultWithOwnership())
                            : DeleteModelQualityJobDefinitionOutcome(std::move(result.GetError()));
}

DeleteMonitoringScheduleOutcome SageMakerClient::DeleteMonitoringSchedule(const DeleteMonitoringScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMonitoringScheduleOutcome(result.GetResultWithOwnership())
                            : DeleteMonitoringScheduleOutcome(std::move(result.GetError()));
}

DeleteNotebookInstanceOutcome SageMakerClient::DeleteNotebookInstance(const DeleteNotebookInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNotebookInstanceOutcome(result.GetResultWithOwnership())
                            : DeleteNotebookInstanceOutcome(std::move(result.GetError()));
}

DeleteNotebookInstanceLifecycleConfigOutcome SageMakerClient::DeleteNotebookInstanceLifecycleConfig(
    const DeleteNotebookInstanceLifecycleConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNotebookInstanceLifecycleConfigOutcome(result.GetResultWithOwnership())
                            : DeleteNotebookInstanceLifecycleConfigOutcome(std::move(result.GetError()));
}

DeleteOptimizationJobOutcome SageMakerClient::DeleteOptimizationJob(const DeleteOptimizationJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOptimizationJobOutcome(result.GetResultWithOwnership())
                            : DeleteOptimizationJobOutcome(std::move(result.GetError()));
}

DeletePartnerAppOutcome SageMakerClient::DeletePartnerApp(const DeletePartnerAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePartnerAppOutcome(result.GetResultWithOwnership())
                            : DeletePartnerAppOutcome(std::move(result.GetError()));
}

DeletePipelineOutcome SageMakerClient::DeletePipeline(const DeletePipelineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePipelineOutcome(result.GetResultWithOwnership()) : DeletePipelineOutcome(std::move(result.GetError()));
}

DeleteProcessingJobOutcome SageMakerClient::DeleteProcessingJob(const DeleteProcessingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteProcessingJobOutcome(result.GetResultWithOwnership())
                            : DeleteProcessingJobOutcome(std::move(result.GetError()));
}

DeleteProjectOutcome SageMakerClient::DeleteProject(const DeleteProjectRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteProjectOutcome(result.GetResultWithOwnership()) : DeleteProjectOutcome(std::move(result.GetError()));
}

DeleteSpaceOutcome SageMakerClient::DeleteSpace(const DeleteSpaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSpaceOutcome(result.GetResultWithOwnership()) : DeleteSpaceOutcome(std::move(result.GetError()));
}

DeleteStudioLifecycleConfigOutcome SageMakerClient::DeleteStudioLifecycleConfig(const DeleteStudioLifecycleConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteStudioLifecycleConfigOutcome(result.GetResultWithOwnership())
                            : DeleteStudioLifecycleConfigOutcome(std::move(result.GetError()));
}

DeleteTagsOutcome SageMakerClient::DeleteTags(const DeleteTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTagsOutcome(result.GetResultWithOwnership()) : DeleteTagsOutcome(std::move(result.GetError()));
}

DeleteTrainingJobOutcome SageMakerClient::DeleteTrainingJob(const DeleteTrainingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTrainingJobOutcome(result.GetResultWithOwnership())
                            : DeleteTrainingJobOutcome(std::move(result.GetError()));
}

DeleteTrialOutcome SageMakerClient::DeleteTrial(const DeleteTrialRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTrialOutcome(result.GetResultWithOwnership()) : DeleteTrialOutcome(std::move(result.GetError()));
}

DeleteTrialComponentOutcome SageMakerClient::DeleteTrialComponent(const DeleteTrialComponentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTrialComponentOutcome(result.GetResultWithOwnership())
                            : DeleteTrialComponentOutcome(std::move(result.GetError()));
}

DeleteUserProfileOutcome SageMakerClient::DeleteUserProfile(const DeleteUserProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserProfileOutcome(result.GetResultWithOwnership())
                            : DeleteUserProfileOutcome(std::move(result.GetError()));
}

DeleteWorkforceOutcome SageMakerClient::DeleteWorkforce(const DeleteWorkforceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWorkforceOutcome(result.GetResultWithOwnership())
                            : DeleteWorkforceOutcome(std::move(result.GetError()));
}

DeleteWorkteamOutcome SageMakerClient::DeleteWorkteam(const DeleteWorkteamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWorkteamOutcome(result.GetResultWithOwnership()) : DeleteWorkteamOutcome(std::move(result.GetError()));
}

DeregisterDevicesOutcome SageMakerClient::DeregisterDevices(const DeregisterDevicesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterDevicesOutcome(result.GetResultWithOwnership())
                            : DeregisterDevicesOutcome(std::move(result.GetError()));
}

DescribeAIBenchmarkJobOutcome SageMakerClient::DescribeAIBenchmarkJob(const DescribeAIBenchmarkJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAIBenchmarkJobOutcome(result.GetResultWithOwnership())
                            : DescribeAIBenchmarkJobOutcome(std::move(result.GetError()));
}

DescribeAIRecommendationJobOutcome SageMakerClient::DescribeAIRecommendationJob(const DescribeAIRecommendationJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAIRecommendationJobOutcome(result.GetResultWithOwnership())
                            : DescribeAIRecommendationJobOutcome(std::move(result.GetError()));
}

DescribeAIWorkloadConfigOutcome SageMakerClient::DescribeAIWorkloadConfig(const DescribeAIWorkloadConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAIWorkloadConfigOutcome(result.GetResultWithOwnership())
                            : DescribeAIWorkloadConfigOutcome(std::move(result.GetError()));
}

DescribeActionOutcome SageMakerClient::DescribeAction(const DescribeActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeActionOutcome(result.GetResultWithOwnership()) : DescribeActionOutcome(std::move(result.GetError()));
}

DescribeAlgorithmOutcome SageMakerClient::DescribeAlgorithm(const DescribeAlgorithmRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAlgorithmOutcome(result.GetResultWithOwnership())
                            : DescribeAlgorithmOutcome(std::move(result.GetError()));
}

DescribeAppOutcome SageMakerClient::DescribeApp(const DescribeAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAppOutcome(result.GetResultWithOwnership()) : DescribeAppOutcome(std::move(result.GetError()));
}

DescribeAppImageConfigOutcome SageMakerClient::DescribeAppImageConfig(const DescribeAppImageConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAppImageConfigOutcome(result.GetResultWithOwnership())
                            : DescribeAppImageConfigOutcome(std::move(result.GetError()));
}

DescribeArtifactOutcome SageMakerClient::DescribeArtifact(const DescribeArtifactRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeArtifactOutcome(result.GetResultWithOwnership())
                            : DescribeArtifactOutcome(std::move(result.GetError()));
}

DescribeAutoMLJobOutcome SageMakerClient::DescribeAutoMLJob(const DescribeAutoMLJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAutoMLJobOutcome(result.GetResultWithOwnership())
                            : DescribeAutoMLJobOutcome(std::move(result.GetError()));
}

DescribeAutoMLJobV2Outcome SageMakerClient::DescribeAutoMLJobV2(const DescribeAutoMLJobV2Request& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAutoMLJobV2Outcome(result.GetResultWithOwnership())
                            : DescribeAutoMLJobV2Outcome(std::move(result.GetError()));
}

DescribeClusterOutcome SageMakerClient::DescribeCluster(const DescribeClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClusterOutcome(result.GetResultWithOwnership())
                            : DescribeClusterOutcome(std::move(result.GetError()));
}

DescribeClusterEventOutcome SageMakerClient::DescribeClusterEvent(const DescribeClusterEventRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClusterEventOutcome(result.GetResultWithOwnership())
                            : DescribeClusterEventOutcome(std::move(result.GetError()));
}

DescribeClusterNodeOutcome SageMakerClient::DescribeClusterNode(const DescribeClusterNodeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClusterNodeOutcome(result.GetResultWithOwnership())
                            : DescribeClusterNodeOutcome(std::move(result.GetError()));
}

DescribeClusterSchedulerConfigOutcome SageMakerClient::DescribeClusterSchedulerConfig(
    const DescribeClusterSchedulerConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClusterSchedulerConfigOutcome(result.GetResultWithOwnership())
                            : DescribeClusterSchedulerConfigOutcome(std::move(result.GetError()));
}

DescribeCodeRepositoryOutcome SageMakerClient::DescribeCodeRepository(const DescribeCodeRepositoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCodeRepositoryOutcome(result.GetResultWithOwnership())
                            : DescribeCodeRepositoryOutcome(std::move(result.GetError()));
}

DescribeCompilationJobOutcome SageMakerClient::DescribeCompilationJob(const DescribeCompilationJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCompilationJobOutcome(result.GetResultWithOwnership())
                            : DescribeCompilationJobOutcome(std::move(result.GetError()));
}

DescribeComputeQuotaOutcome SageMakerClient::DescribeComputeQuota(const DescribeComputeQuotaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeComputeQuotaOutcome(result.GetResultWithOwnership())
                            : DescribeComputeQuotaOutcome(std::move(result.GetError()));
}

DescribeContextOutcome SageMakerClient::DescribeContext(const DescribeContextRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeContextOutcome(result.GetResultWithOwnership())
                            : DescribeContextOutcome(std::move(result.GetError()));
}

DescribeDataQualityJobDefinitionOutcome SageMakerClient::DescribeDataQualityJobDefinition(
    const DescribeDataQualityJobDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDataQualityJobDefinitionOutcome(result.GetResultWithOwnership())
                            : DescribeDataQualityJobDefinitionOutcome(std::move(result.GetError()));
}

DescribeDeviceOutcome SageMakerClient::DescribeDevice(const DescribeDeviceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDeviceOutcome(result.GetResultWithOwnership()) : DescribeDeviceOutcome(std::move(result.GetError()));
}

DescribeDeviceFleetOutcome SageMakerClient::DescribeDeviceFleet(const DescribeDeviceFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDeviceFleetOutcome(result.GetResultWithOwnership())
                            : DescribeDeviceFleetOutcome(std::move(result.GetError()));
}

DescribeDomainOutcome SageMakerClient::DescribeDomain(const DescribeDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDomainOutcome(result.GetResultWithOwnership()) : DescribeDomainOutcome(std::move(result.GetError()));
}

DescribeEdgeDeploymentPlanOutcome SageMakerClient::DescribeEdgeDeploymentPlan(const DescribeEdgeDeploymentPlanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEdgeDeploymentPlanOutcome(result.GetResultWithOwnership())
                            : DescribeEdgeDeploymentPlanOutcome(std::move(result.GetError()));
}

DescribeEdgePackagingJobOutcome SageMakerClient::DescribeEdgePackagingJob(const DescribeEdgePackagingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEdgePackagingJobOutcome(result.GetResultWithOwnership())
                            : DescribeEdgePackagingJobOutcome(std::move(result.GetError()));
}

DescribeEndpointOutcome SageMakerClient::DescribeEndpoint(const DescribeEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEndpointOutcome(result.GetResultWithOwnership())
                            : DescribeEndpointOutcome(std::move(result.GetError()));
}

DescribeEndpointConfigOutcome SageMakerClient::DescribeEndpointConfig(const DescribeEndpointConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEndpointConfigOutcome(result.GetResultWithOwnership())
                            : DescribeEndpointConfigOutcome(std::move(result.GetError()));
}

DescribeExperimentOutcome SageMakerClient::DescribeExperiment(const DescribeExperimentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeExperimentOutcome(result.GetResultWithOwnership())
                            : DescribeExperimentOutcome(std::move(result.GetError()));
}

DescribeFeatureGroupOutcome SageMakerClient::DescribeFeatureGroup(const DescribeFeatureGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFeatureGroupOutcome(result.GetResultWithOwnership())
                            : DescribeFeatureGroupOutcome(std::move(result.GetError()));
}

DescribeFeatureMetadataOutcome SageMakerClient::DescribeFeatureMetadata(const DescribeFeatureMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFeatureMetadataOutcome(result.GetResultWithOwnership())
                            : DescribeFeatureMetadataOutcome(std::move(result.GetError()));
}

DescribeFlowDefinitionOutcome SageMakerClient::DescribeFlowDefinition(const DescribeFlowDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFlowDefinitionOutcome(result.GetResultWithOwnership())
                            : DescribeFlowDefinitionOutcome(std::move(result.GetError()));
}

DescribeHubOutcome SageMakerClient::DescribeHub(const DescribeHubRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeHubOutcome(result.GetResultWithOwnership()) : DescribeHubOutcome(std::move(result.GetError()));
}

DescribeHubContentOutcome SageMakerClient::DescribeHubContent(const DescribeHubContentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeHubContentOutcome(result.GetResultWithOwnership())
                            : DescribeHubContentOutcome(std::move(result.GetError()));
}

DescribeHumanTaskUiOutcome SageMakerClient::DescribeHumanTaskUi(const DescribeHumanTaskUiRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeHumanTaskUiOutcome(result.GetResultWithOwnership())
                            : DescribeHumanTaskUiOutcome(std::move(result.GetError()));
}

DescribeHyperParameterTuningJobOutcome SageMakerClient::DescribeHyperParameterTuningJob(
    const DescribeHyperParameterTuningJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeHyperParameterTuningJobOutcome(result.GetResultWithOwnership())
                            : DescribeHyperParameterTuningJobOutcome(std::move(result.GetError()));
}

DescribeImageOutcome SageMakerClient::DescribeImage(const DescribeImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImageOutcome(result.GetResultWithOwnership()) : DescribeImageOutcome(std::move(result.GetError()));
}

DescribeImageVersionOutcome SageMakerClient::DescribeImageVersion(const DescribeImageVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImageVersionOutcome(result.GetResultWithOwnership())
                            : DescribeImageVersionOutcome(std::move(result.GetError()));
}

DescribeInferenceComponentOutcome SageMakerClient::DescribeInferenceComponent(const DescribeInferenceComponentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInferenceComponentOutcome(result.GetResultWithOwnership())
                            : DescribeInferenceComponentOutcome(std::move(result.GetError()));
}

DescribeInferenceExperimentOutcome SageMakerClient::DescribeInferenceExperiment(const DescribeInferenceExperimentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInferenceExperimentOutcome(result.GetResultWithOwnership())
                            : DescribeInferenceExperimentOutcome(std::move(result.GetError()));
}

DescribeInferenceRecommendationsJobOutcome SageMakerClient::DescribeInferenceRecommendationsJob(
    const DescribeInferenceRecommendationsJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInferenceRecommendationsJobOutcome(result.GetResultWithOwnership())
                            : DescribeInferenceRecommendationsJobOutcome(std::move(result.GetError()));
}

DescribeLabelingJobOutcome SageMakerClient::DescribeLabelingJob(const DescribeLabelingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLabelingJobOutcome(result.GetResultWithOwnership())
                            : DescribeLabelingJobOutcome(std::move(result.GetError()));
}

DescribeLineageGroupOutcome SageMakerClient::DescribeLineageGroup(const DescribeLineageGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLineageGroupOutcome(result.GetResultWithOwnership())
                            : DescribeLineageGroupOutcome(std::move(result.GetError()));
}

DescribeMlflowAppOutcome SageMakerClient::DescribeMlflowApp(const DescribeMlflowAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMlflowAppOutcome(result.GetResultWithOwnership())
                            : DescribeMlflowAppOutcome(std::move(result.GetError()));
}

DescribeMlflowTrackingServerOutcome SageMakerClient::DescribeMlflowTrackingServer(
    const DescribeMlflowTrackingServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMlflowTrackingServerOutcome(result.GetResultWithOwnership())
                            : DescribeMlflowTrackingServerOutcome(std::move(result.GetError()));
}

DescribeModelOutcome SageMakerClient::DescribeModel(const DescribeModelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeModelOutcome(result.GetResultWithOwnership()) : DescribeModelOutcome(std::move(result.GetError()));
}

DescribeModelBiasJobDefinitionOutcome SageMakerClient::DescribeModelBiasJobDefinition(
    const DescribeModelBiasJobDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeModelBiasJobDefinitionOutcome(result.GetResultWithOwnership())
                            : DescribeModelBiasJobDefinitionOutcome(std::move(result.GetError()));
}

DescribeModelCardOutcome SageMakerClient::DescribeModelCard(const DescribeModelCardRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeModelCardOutcome(result.GetResultWithOwnership())
                            : DescribeModelCardOutcome(std::move(result.GetError()));
}

DescribeModelCardExportJobOutcome SageMakerClient::DescribeModelCardExportJob(const DescribeModelCardExportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeModelCardExportJobOutcome(result.GetResultWithOwnership())
                            : DescribeModelCardExportJobOutcome(std::move(result.GetError()));
}

DescribeModelExplainabilityJobDefinitionOutcome SageMakerClient::DescribeModelExplainabilityJobDefinition(
    const DescribeModelExplainabilityJobDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeModelExplainabilityJobDefinitionOutcome(result.GetResultWithOwnership())
                            : DescribeModelExplainabilityJobDefinitionOutcome(std::move(result.GetError()));
}

DescribeModelPackageOutcome SageMakerClient::DescribeModelPackage(const DescribeModelPackageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeModelPackageOutcome(result.GetResultWithOwnership())
                            : DescribeModelPackageOutcome(std::move(result.GetError()));
}

DescribeModelPackageGroupOutcome SageMakerClient::DescribeModelPackageGroup(const DescribeModelPackageGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeModelPackageGroupOutcome(result.GetResultWithOwnership())
                            : DescribeModelPackageGroupOutcome(std::move(result.GetError()));
}

DescribeModelQualityJobDefinitionOutcome SageMakerClient::DescribeModelQualityJobDefinition(
    const DescribeModelQualityJobDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeModelQualityJobDefinitionOutcome(result.GetResultWithOwnership())
                            : DescribeModelQualityJobDefinitionOutcome(std::move(result.GetError()));
}

DescribeMonitoringScheduleOutcome SageMakerClient::DescribeMonitoringSchedule(const DescribeMonitoringScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMonitoringScheduleOutcome(result.GetResultWithOwnership())
                            : DescribeMonitoringScheduleOutcome(std::move(result.GetError()));
}

DescribeNotebookInstanceOutcome SageMakerClient::DescribeNotebookInstance(const DescribeNotebookInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeNotebookInstanceOutcome(result.GetResultWithOwnership())
                            : DescribeNotebookInstanceOutcome(std::move(result.GetError()));
}

DescribeNotebookInstanceLifecycleConfigOutcome SageMakerClient::DescribeNotebookInstanceLifecycleConfig(
    const DescribeNotebookInstanceLifecycleConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeNotebookInstanceLifecycleConfigOutcome(result.GetResultWithOwnership())
                            : DescribeNotebookInstanceLifecycleConfigOutcome(std::move(result.GetError()));
}

DescribeOptimizationJobOutcome SageMakerClient::DescribeOptimizationJob(const DescribeOptimizationJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOptimizationJobOutcome(result.GetResultWithOwnership())
                            : DescribeOptimizationJobOutcome(std::move(result.GetError()));
}

DescribePartnerAppOutcome SageMakerClient::DescribePartnerApp(const DescribePartnerAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePartnerAppOutcome(result.GetResultWithOwnership())
                            : DescribePartnerAppOutcome(std::move(result.GetError()));
}

DescribePipelineOutcome SageMakerClient::DescribePipeline(const DescribePipelineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePipelineOutcome(result.GetResultWithOwnership())
                            : DescribePipelineOutcome(std::move(result.GetError()));
}

DescribePipelineDefinitionForExecutionOutcome SageMakerClient::DescribePipelineDefinitionForExecution(
    const DescribePipelineDefinitionForExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePipelineDefinitionForExecutionOutcome(result.GetResultWithOwnership())
                            : DescribePipelineDefinitionForExecutionOutcome(std::move(result.GetError()));
}
