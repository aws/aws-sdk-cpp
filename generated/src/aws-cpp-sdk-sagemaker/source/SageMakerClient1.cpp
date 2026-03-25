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
#include <aws/sagemaker/model/DeleteHubContentReferenceRequest.h>
#include <aws/sagemaker/model/DeleteHubContentRequest.h>
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
#include <aws/sagemaker/model/DescribePipelineExecutionRequest.h>
#include <aws/sagemaker/model/DescribePipelineRequest.h>
#include <aws/sagemaker/model/DescribeProcessingJobRequest.h>
#include <aws/sagemaker/model/DescribeProjectRequest.h>
#include <aws/sagemaker/model/DescribeReservedCapacityRequest.h>
#include <aws/sagemaker/model/DescribeSpaceRequest.h>
#include <aws/sagemaker/model/DescribeStudioLifecycleConfigRequest.h>
#include <aws/sagemaker/model/DescribeSubscribedWorkteamRequest.h>
#include <aws/sagemaker/model/DescribeTrainingJobRequest.h>
#include <aws/sagemaker/model/DescribeTrainingPlanRequest.h>
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

DeleteHubContentOutcome SageMakerClient::DeleteHubContent(const DeleteHubContentRequest& request) const {
  return DeleteHubContentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteHubContentReferenceOutcome SageMakerClient::DeleteHubContentReference(const DeleteHubContentReferenceRequest& request) const {
  return DeleteHubContentReferenceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteHumanTaskUiOutcome SageMakerClient::DeleteHumanTaskUi(const DeleteHumanTaskUiRequest& request) const {
  return DeleteHumanTaskUiOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteHyperParameterTuningJobOutcome SageMakerClient::DeleteHyperParameterTuningJob(
    const DeleteHyperParameterTuningJobRequest& request) const {
  return DeleteHyperParameterTuningJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteImageOutcome SageMakerClient::DeleteImage(const DeleteImageRequest& request) const {
  return DeleteImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteImageVersionOutcome SageMakerClient::DeleteImageVersion(const DeleteImageVersionRequest& request) const {
  return DeleteImageVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteInferenceComponentOutcome SageMakerClient::DeleteInferenceComponent(const DeleteInferenceComponentRequest& request) const {
  return DeleteInferenceComponentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteInferenceExperimentOutcome SageMakerClient::DeleteInferenceExperiment(const DeleteInferenceExperimentRequest& request) const {
  return DeleteInferenceExperimentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMlflowAppOutcome SageMakerClient::DeleteMlflowApp(const DeleteMlflowAppRequest& request) const {
  return DeleteMlflowAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMlflowTrackingServerOutcome SageMakerClient::DeleteMlflowTrackingServer(const DeleteMlflowTrackingServerRequest& request) const {
  return DeleteMlflowTrackingServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteModelOutcome SageMakerClient::DeleteModel(const DeleteModelRequest& request) const {
  return DeleteModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteModelBiasJobDefinitionOutcome SageMakerClient::DeleteModelBiasJobDefinition(
    const DeleteModelBiasJobDefinitionRequest& request) const {
  return DeleteModelBiasJobDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteModelCardOutcome SageMakerClient::DeleteModelCard(const DeleteModelCardRequest& request) const {
  return DeleteModelCardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteModelExplainabilityJobDefinitionOutcome SageMakerClient::DeleteModelExplainabilityJobDefinition(
    const DeleteModelExplainabilityJobDefinitionRequest& request) const {
  return DeleteModelExplainabilityJobDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteModelPackageOutcome SageMakerClient::DeleteModelPackage(const DeleteModelPackageRequest& request) const {
  return DeleteModelPackageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteModelPackageGroupOutcome SageMakerClient::DeleteModelPackageGroup(const DeleteModelPackageGroupRequest& request) const {
  return DeleteModelPackageGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteModelPackageGroupPolicyOutcome SageMakerClient::DeleteModelPackageGroupPolicy(
    const DeleteModelPackageGroupPolicyRequest& request) const {
  return DeleteModelPackageGroupPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteModelQualityJobDefinitionOutcome SageMakerClient::DeleteModelQualityJobDefinition(
    const DeleteModelQualityJobDefinitionRequest& request) const {
  return DeleteModelQualityJobDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMonitoringScheduleOutcome SageMakerClient::DeleteMonitoringSchedule(const DeleteMonitoringScheduleRequest& request) const {
  return DeleteMonitoringScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteNotebookInstanceOutcome SageMakerClient::DeleteNotebookInstance(const DeleteNotebookInstanceRequest& request) const {
  return DeleteNotebookInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteNotebookInstanceLifecycleConfigOutcome SageMakerClient::DeleteNotebookInstanceLifecycleConfig(
    const DeleteNotebookInstanceLifecycleConfigRequest& request) const {
  return DeleteNotebookInstanceLifecycleConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOptimizationJobOutcome SageMakerClient::DeleteOptimizationJob(const DeleteOptimizationJobRequest& request) const {
  return DeleteOptimizationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePartnerAppOutcome SageMakerClient::DeletePartnerApp(const DeletePartnerAppRequest& request) const {
  return DeletePartnerAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePipelineOutcome SageMakerClient::DeletePipeline(const DeletePipelineRequest& request) const {
  return DeletePipelineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProcessingJobOutcome SageMakerClient::DeleteProcessingJob(const DeleteProcessingJobRequest& request) const {
  return DeleteProcessingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProjectOutcome SageMakerClient::DeleteProject(const DeleteProjectRequest& request) const {
  return DeleteProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSpaceOutcome SageMakerClient::DeleteSpace(const DeleteSpaceRequest& request) const {
  return DeleteSpaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStudioLifecycleConfigOutcome SageMakerClient::DeleteStudioLifecycleConfig(const DeleteStudioLifecycleConfigRequest& request) const {
  return DeleteStudioLifecycleConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTagsOutcome SageMakerClient::DeleteTags(const DeleteTagsRequest& request) const {
  return DeleteTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTrainingJobOutcome SageMakerClient::DeleteTrainingJob(const DeleteTrainingJobRequest& request) const {
  return DeleteTrainingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTrialOutcome SageMakerClient::DeleteTrial(const DeleteTrialRequest& request) const {
  return DeleteTrialOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTrialComponentOutcome SageMakerClient::DeleteTrialComponent(const DeleteTrialComponentRequest& request) const {
  return DeleteTrialComponentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserProfileOutcome SageMakerClient::DeleteUserProfile(const DeleteUserProfileRequest& request) const {
  return DeleteUserProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWorkforceOutcome SageMakerClient::DeleteWorkforce(const DeleteWorkforceRequest& request) const {
  return DeleteWorkforceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWorkteamOutcome SageMakerClient::DeleteWorkteam(const DeleteWorkteamRequest& request) const {
  return DeleteWorkteamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterDevicesOutcome SageMakerClient::DeregisterDevices(const DeregisterDevicesRequest& request) const {
  return DeregisterDevicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeActionOutcome SageMakerClient::DescribeAction(const DescribeActionRequest& request) const {
  return DescribeActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAlgorithmOutcome SageMakerClient::DescribeAlgorithm(const DescribeAlgorithmRequest& request) const {
  return DescribeAlgorithmOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAppOutcome SageMakerClient::DescribeApp(const DescribeAppRequest& request) const {
  return DescribeAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAppImageConfigOutcome SageMakerClient::DescribeAppImageConfig(const DescribeAppImageConfigRequest& request) const {
  return DescribeAppImageConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeArtifactOutcome SageMakerClient::DescribeArtifact(const DescribeArtifactRequest& request) const {
  return DescribeArtifactOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAutoMLJobOutcome SageMakerClient::DescribeAutoMLJob(const DescribeAutoMLJobRequest& request) const {
  return DescribeAutoMLJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAutoMLJobV2Outcome SageMakerClient::DescribeAutoMLJobV2(const DescribeAutoMLJobV2Request& request) const {
  return DescribeAutoMLJobV2Outcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeClusterOutcome SageMakerClient::DescribeCluster(const DescribeClusterRequest& request) const {
  return DescribeClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeClusterEventOutcome SageMakerClient::DescribeClusterEvent(const DescribeClusterEventRequest& request) const {
  return DescribeClusterEventOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeClusterNodeOutcome SageMakerClient::DescribeClusterNode(const DescribeClusterNodeRequest& request) const {
  return DescribeClusterNodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeClusterSchedulerConfigOutcome SageMakerClient::DescribeClusterSchedulerConfig(
    const DescribeClusterSchedulerConfigRequest& request) const {
  return DescribeClusterSchedulerConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCodeRepositoryOutcome SageMakerClient::DescribeCodeRepository(const DescribeCodeRepositoryRequest& request) const {
  return DescribeCodeRepositoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCompilationJobOutcome SageMakerClient::DescribeCompilationJob(const DescribeCompilationJobRequest& request) const {
  return DescribeCompilationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeComputeQuotaOutcome SageMakerClient::DescribeComputeQuota(const DescribeComputeQuotaRequest& request) const {
  return DescribeComputeQuotaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeContextOutcome SageMakerClient::DescribeContext(const DescribeContextRequest& request) const {
  return DescribeContextOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDataQualityJobDefinitionOutcome SageMakerClient::DescribeDataQualityJobDefinition(
    const DescribeDataQualityJobDefinitionRequest& request) const {
  return DescribeDataQualityJobDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDeviceOutcome SageMakerClient::DescribeDevice(const DescribeDeviceRequest& request) const {
  return DescribeDeviceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDeviceFleetOutcome SageMakerClient::DescribeDeviceFleet(const DescribeDeviceFleetRequest& request) const {
  return DescribeDeviceFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDomainOutcome SageMakerClient::DescribeDomain(const DescribeDomainRequest& request) const {
  return DescribeDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEdgeDeploymentPlanOutcome SageMakerClient::DescribeEdgeDeploymentPlan(const DescribeEdgeDeploymentPlanRequest& request) const {
  return DescribeEdgeDeploymentPlanOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEdgePackagingJobOutcome SageMakerClient::DescribeEdgePackagingJob(const DescribeEdgePackagingJobRequest& request) const {
  return DescribeEdgePackagingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEndpointOutcome SageMakerClient::DescribeEndpoint(const DescribeEndpointRequest& request) const {
  return DescribeEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEndpointConfigOutcome SageMakerClient::DescribeEndpointConfig(const DescribeEndpointConfigRequest& request) const {
  return DescribeEndpointConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeExperimentOutcome SageMakerClient::DescribeExperiment(const DescribeExperimentRequest& request) const {
  return DescribeExperimentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFeatureGroupOutcome SageMakerClient::DescribeFeatureGroup(const DescribeFeatureGroupRequest& request) const {
  return DescribeFeatureGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFeatureMetadataOutcome SageMakerClient::DescribeFeatureMetadata(const DescribeFeatureMetadataRequest& request) const {
  return DescribeFeatureMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFlowDefinitionOutcome SageMakerClient::DescribeFlowDefinition(const DescribeFlowDefinitionRequest& request) const {
  return DescribeFlowDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeHubOutcome SageMakerClient::DescribeHub(const DescribeHubRequest& request) const {
  return DescribeHubOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeHubContentOutcome SageMakerClient::DescribeHubContent(const DescribeHubContentRequest& request) const {
  return DescribeHubContentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeHumanTaskUiOutcome SageMakerClient::DescribeHumanTaskUi(const DescribeHumanTaskUiRequest& request) const {
  return DescribeHumanTaskUiOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeHyperParameterTuningJobOutcome SageMakerClient::DescribeHyperParameterTuningJob(
    const DescribeHyperParameterTuningJobRequest& request) const {
  return DescribeHyperParameterTuningJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImageOutcome SageMakerClient::DescribeImage(const DescribeImageRequest& request) const {
  return DescribeImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImageVersionOutcome SageMakerClient::DescribeImageVersion(const DescribeImageVersionRequest& request) const {
  return DescribeImageVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInferenceComponentOutcome SageMakerClient::DescribeInferenceComponent(const DescribeInferenceComponentRequest& request) const {
  return DescribeInferenceComponentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInferenceExperimentOutcome SageMakerClient::DescribeInferenceExperiment(const DescribeInferenceExperimentRequest& request) const {
  return DescribeInferenceExperimentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInferenceRecommendationsJobOutcome SageMakerClient::DescribeInferenceRecommendationsJob(
    const DescribeInferenceRecommendationsJobRequest& request) const {
  return DescribeInferenceRecommendationsJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLabelingJobOutcome SageMakerClient::DescribeLabelingJob(const DescribeLabelingJobRequest& request) const {
  return DescribeLabelingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLineageGroupOutcome SageMakerClient::DescribeLineageGroup(const DescribeLineageGroupRequest& request) const {
  return DescribeLineageGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMlflowAppOutcome SageMakerClient::DescribeMlflowApp(const DescribeMlflowAppRequest& request) const {
  return DescribeMlflowAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMlflowTrackingServerOutcome SageMakerClient::DescribeMlflowTrackingServer(
    const DescribeMlflowTrackingServerRequest& request) const {
  return DescribeMlflowTrackingServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeModelOutcome SageMakerClient::DescribeModel(const DescribeModelRequest& request) const {
  return DescribeModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeModelBiasJobDefinitionOutcome SageMakerClient::DescribeModelBiasJobDefinition(
    const DescribeModelBiasJobDefinitionRequest& request) const {
  return DescribeModelBiasJobDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeModelCardOutcome SageMakerClient::DescribeModelCard(const DescribeModelCardRequest& request) const {
  return DescribeModelCardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeModelCardExportJobOutcome SageMakerClient::DescribeModelCardExportJob(const DescribeModelCardExportJobRequest& request) const {
  return DescribeModelCardExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeModelExplainabilityJobDefinitionOutcome SageMakerClient::DescribeModelExplainabilityJobDefinition(
    const DescribeModelExplainabilityJobDefinitionRequest& request) const {
  return DescribeModelExplainabilityJobDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeModelPackageOutcome SageMakerClient::DescribeModelPackage(const DescribeModelPackageRequest& request) const {
  return DescribeModelPackageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeModelPackageGroupOutcome SageMakerClient::DescribeModelPackageGroup(const DescribeModelPackageGroupRequest& request) const {
  return DescribeModelPackageGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeModelQualityJobDefinitionOutcome SageMakerClient::DescribeModelQualityJobDefinition(
    const DescribeModelQualityJobDefinitionRequest& request) const {
  return DescribeModelQualityJobDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMonitoringScheduleOutcome SageMakerClient::DescribeMonitoringSchedule(const DescribeMonitoringScheduleRequest& request) const {
  return DescribeMonitoringScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNotebookInstanceOutcome SageMakerClient::DescribeNotebookInstance(const DescribeNotebookInstanceRequest& request) const {
  return DescribeNotebookInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNotebookInstanceLifecycleConfigOutcome SageMakerClient::DescribeNotebookInstanceLifecycleConfig(
    const DescribeNotebookInstanceLifecycleConfigRequest& request) const {
  return DescribeNotebookInstanceLifecycleConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOptimizationJobOutcome SageMakerClient::DescribeOptimizationJob(const DescribeOptimizationJobRequest& request) const {
  return DescribeOptimizationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePartnerAppOutcome SageMakerClient::DescribePartnerApp(const DescribePartnerAppRequest& request) const {
  return DescribePartnerAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePipelineOutcome SageMakerClient::DescribePipeline(const DescribePipelineRequest& request) const {
  return DescribePipelineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePipelineDefinitionForExecutionOutcome SageMakerClient::DescribePipelineDefinitionForExecution(
    const DescribePipelineDefinitionForExecutionRequest& request) const {
  return DescribePipelineDefinitionForExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePipelineExecutionOutcome SageMakerClient::DescribePipelineExecution(const DescribePipelineExecutionRequest& request) const {
  return DescribePipelineExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeProcessingJobOutcome SageMakerClient::DescribeProcessingJob(const DescribeProcessingJobRequest& request) const {
  return DescribeProcessingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeProjectOutcome SageMakerClient::DescribeProject(const DescribeProjectRequest& request) const {
  return DescribeProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReservedCapacityOutcome SageMakerClient::DescribeReservedCapacity(const DescribeReservedCapacityRequest& request) const {
  return DescribeReservedCapacityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSpaceOutcome SageMakerClient::DescribeSpace(const DescribeSpaceRequest& request) const {
  return DescribeSpaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStudioLifecycleConfigOutcome SageMakerClient::DescribeStudioLifecycleConfig(
    const DescribeStudioLifecycleConfigRequest& request) const {
  return DescribeStudioLifecycleConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSubscribedWorkteamOutcome SageMakerClient::DescribeSubscribedWorkteam(const DescribeSubscribedWorkteamRequest& request) const {
  return DescribeSubscribedWorkteamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrainingJobOutcome SageMakerClient::DescribeTrainingJob(const DescribeTrainingJobRequest& request) const {
  return DescribeTrainingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrainingPlanOutcome SageMakerClient::DescribeTrainingPlan(const DescribeTrainingPlanRequest& request) const {
  return DescribeTrainingPlanOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
