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
#include <aws/sagemaker/model/AddAssociationRequest.h>
#include <aws/sagemaker/model/AddTagsRequest.h>
#include <aws/sagemaker/model/AssociateTrialComponentRequest.h>
#include <aws/sagemaker/model/AttachClusterNodeVolumeRequest.h>
#include <aws/sagemaker/model/BatchAddClusterNodesRequest.h>
#include <aws/sagemaker/model/BatchDeleteClusterNodesRequest.h>
#include <aws/sagemaker/model/BatchDescribeModelPackageRequest.h>
#include <aws/sagemaker/model/BatchRebootClusterNodesRequest.h>
#include <aws/sagemaker/model/BatchReplaceClusterNodesRequest.h>
#include <aws/sagemaker/model/CreateActionRequest.h>
#include <aws/sagemaker/model/CreateAlgorithmRequest.h>
#include <aws/sagemaker/model/CreateAppImageConfigRequest.h>
#include <aws/sagemaker/model/CreateAppRequest.h>
#include <aws/sagemaker/model/CreateArtifactRequest.h>
#include <aws/sagemaker/model/CreateAutoMLJobRequest.h>
#include <aws/sagemaker/model/CreateAutoMLJobV2Request.h>
#include <aws/sagemaker/model/CreateClusterRequest.h>
#include <aws/sagemaker/model/CreateClusterSchedulerConfigRequest.h>
#include <aws/sagemaker/model/CreateCodeRepositoryRequest.h>
#include <aws/sagemaker/model/CreateCompilationJobRequest.h>
#include <aws/sagemaker/model/CreateComputeQuotaRequest.h>
#include <aws/sagemaker/model/CreateContextRequest.h>
#include <aws/sagemaker/model/CreateDataQualityJobDefinitionRequest.h>
#include <aws/sagemaker/model/CreateDeviceFleetRequest.h>
#include <aws/sagemaker/model/CreateDomainRequest.h>
#include <aws/sagemaker/model/CreateEdgeDeploymentPlanRequest.h>
#include <aws/sagemaker/model/CreateEdgeDeploymentStageRequest.h>
#include <aws/sagemaker/model/CreateEdgePackagingJobRequest.h>
#include <aws/sagemaker/model/CreateEndpointConfigRequest.h>
#include <aws/sagemaker/model/CreateEndpointRequest.h>
#include <aws/sagemaker/model/CreateExperimentRequest.h>
#include <aws/sagemaker/model/CreateFeatureGroupRequest.h>
#include <aws/sagemaker/model/CreateFlowDefinitionRequest.h>
#include <aws/sagemaker/model/CreateHubContentPresignedUrlsRequest.h>
#include <aws/sagemaker/model/CreateHubContentReferenceRequest.h>
#include <aws/sagemaker/model/CreateHubRequest.h>
#include <aws/sagemaker/model/CreateHumanTaskUiRequest.h>
#include <aws/sagemaker/model/CreateHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/CreateImageRequest.h>
#include <aws/sagemaker/model/CreateImageVersionRequest.h>
#include <aws/sagemaker/model/CreateInferenceComponentRequest.h>
#include <aws/sagemaker/model/CreateInferenceExperimentRequest.h>
#include <aws/sagemaker/model/CreateInferenceRecommendationsJobRequest.h>
#include <aws/sagemaker/model/CreateLabelingJobRequest.h>
#include <aws/sagemaker/model/CreateMlflowAppRequest.h>
#include <aws/sagemaker/model/CreateMlflowTrackingServerRequest.h>
#include <aws/sagemaker/model/CreateModelBiasJobDefinitionRequest.h>
#include <aws/sagemaker/model/CreateModelCardExportJobRequest.h>
#include <aws/sagemaker/model/CreateModelCardRequest.h>
#include <aws/sagemaker/model/CreateModelExplainabilityJobDefinitionRequest.h>
#include <aws/sagemaker/model/CreateModelPackageGroupRequest.h>
#include <aws/sagemaker/model/CreateModelPackageRequest.h>
#include <aws/sagemaker/model/CreateModelQualityJobDefinitionRequest.h>
#include <aws/sagemaker/model/CreateModelRequest.h>
#include <aws/sagemaker/model/CreateMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/CreateNotebookInstanceLifecycleConfigRequest.h>
#include <aws/sagemaker/model/CreateNotebookInstanceRequest.h>
#include <aws/sagemaker/model/CreateOptimizationJobRequest.h>
#include <aws/sagemaker/model/CreatePartnerAppPresignedUrlRequest.h>
#include <aws/sagemaker/model/CreatePartnerAppRequest.h>
#include <aws/sagemaker/model/CreatePipelineRequest.h>
#include <aws/sagemaker/model/CreatePresignedDomainUrlRequest.h>
#include <aws/sagemaker/model/CreatePresignedMlflowAppUrlRequest.h>
#include <aws/sagemaker/model/CreatePresignedMlflowTrackingServerUrlRequest.h>
#include <aws/sagemaker/model/CreatePresignedNotebookInstanceUrlRequest.h>
#include <aws/sagemaker/model/CreateProcessingJobRequest.h>
#include <aws/sagemaker/model/CreateProjectRequest.h>
#include <aws/sagemaker/model/CreateSpaceRequest.h>
#include <aws/sagemaker/model/CreateStudioLifecycleConfigRequest.h>
#include <aws/sagemaker/model/CreateTrainingJobRequest.h>
#include <aws/sagemaker/model/CreateTrainingPlanRequest.h>
#include <aws/sagemaker/model/CreateTransformJobRequest.h>
#include <aws/sagemaker/model/CreateTrialComponentRequest.h>
#include <aws/sagemaker/model/CreateTrialRequest.h>
#include <aws/sagemaker/model/CreateUserProfileRequest.h>
#include <aws/sagemaker/model/CreateWorkforceRequest.h>
#include <aws/sagemaker/model/CreateWorkteamRequest.h>
#include <aws/sagemaker/model/DeleteActionRequest.h>
#include <aws/sagemaker/model/DeleteAlgorithmRequest.h>
#include <aws/sagemaker/model/DeleteAppImageConfigRequest.h>
#include <aws/sagemaker/model/DeleteAppRequest.h>
#include <aws/sagemaker/model/DeleteArtifactRequest.h>
#include <aws/sagemaker/model/DeleteAssociationRequest.h>
#include <aws/sagemaker/model/DeleteClusterRequest.h>
#include <aws/sagemaker/model/DeleteClusterSchedulerConfigRequest.h>
#include <aws/sagemaker/model/DeleteCodeRepositoryRequest.h>
#include <aws/sagemaker/model/DeleteCompilationJobRequest.h>
#include <aws/sagemaker/model/DeleteComputeQuotaRequest.h>
#include <aws/sagemaker/model/DeleteContextRequest.h>
#include <aws/sagemaker/model/DeleteDataQualityJobDefinitionRequest.h>
#include <aws/sagemaker/model/DeleteDeviceFleetRequest.h>
#include <aws/sagemaker/model/DeleteDomainRequest.h>
#include <aws/sagemaker/model/DeleteEdgeDeploymentPlanRequest.h>
#include <aws/sagemaker/model/DeleteEdgeDeploymentStageRequest.h>
#include <aws/sagemaker/model/DeleteEndpointConfigRequest.h>
#include <aws/sagemaker/model/DeleteEndpointRequest.h>
#include <aws/sagemaker/model/DeleteExperimentRequest.h>
#include <aws/sagemaker/model/DeleteFeatureGroupRequest.h>
#include <aws/sagemaker/model/DeleteFlowDefinitionRequest.h>
#include <aws/sagemaker/model/DeleteHubRequest.h>
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

namespace Aws {
namespace SageMaker {
const char SERVICE_NAME[] = "sagemaker";
const char ALLOCATION_TAG[] = "SageMakerClient";
}  // namespace SageMaker
}  // namespace Aws
const char* SageMakerClient::GetServiceName() { return SERVICE_NAME; }
const char* SageMakerClient::GetAllocationTag() { return ALLOCATION_TAG; }

SageMakerClient::SageMakerClient(const SageMaker::SageMakerClientConfiguration& clientConfiguration,
                                 std::shared_ptr<SageMakerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SageMakerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerClient::SageMakerClient(const AWSCredentials& credentials, std::shared_ptr<SageMakerEndpointProviderBase> endpointProvider,
                                 const SageMaker::SageMakerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SageMakerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerClient::SageMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<SageMakerEndpointProviderBase> endpointProvider,
                                 const SageMaker::SageMakerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SageMakerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SageMakerClient::SageMakerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerClient::SageMakerClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerClient::SageMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SageMakerClient::~SageMakerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SageMakerEndpointProviderBase>& SageMakerClient::accessEndpointProvider() { return m_endpointProvider; }

void SageMakerClient::init(const SageMaker::SageMakerClientConfiguration& config) {
  AWSClient::SetServiceClientName("SageMaker");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "sagemaker");
}

void SageMakerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SageMakerClient::InvokeOperationOutcome SageMakerClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                                Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AddAssociationOutcome SageMakerClient::AddAssociation(const AddAssociationRequest& request) const {
  return AddAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddTagsOutcome SageMakerClient::AddTags(const AddTagsRequest& request) const {
  return AddTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateTrialComponentOutcome SageMakerClient::AssociateTrialComponent(const AssociateTrialComponentRequest& request) const {
  return AssociateTrialComponentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachClusterNodeVolumeOutcome SageMakerClient::AttachClusterNodeVolume(const AttachClusterNodeVolumeRequest& request) const {
  return AttachClusterNodeVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchAddClusterNodesOutcome SageMakerClient::BatchAddClusterNodes(const BatchAddClusterNodesRequest& request) const {
  return BatchAddClusterNodesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteClusterNodesOutcome SageMakerClient::BatchDeleteClusterNodes(const BatchDeleteClusterNodesRequest& request) const {
  return BatchDeleteClusterNodesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDescribeModelPackageOutcome SageMakerClient::BatchDescribeModelPackage(const BatchDescribeModelPackageRequest& request) const {
  return BatchDescribeModelPackageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchRebootClusterNodesOutcome SageMakerClient::BatchRebootClusterNodes(const BatchRebootClusterNodesRequest& request) const {
  return BatchRebootClusterNodesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchReplaceClusterNodesOutcome SageMakerClient::BatchReplaceClusterNodes(const BatchReplaceClusterNodesRequest& request) const {
  return BatchReplaceClusterNodesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateActionOutcome SageMakerClient::CreateAction(const CreateActionRequest& request) const {
  return CreateActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAlgorithmOutcome SageMakerClient::CreateAlgorithm(const CreateAlgorithmRequest& request) const {
  return CreateAlgorithmOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAppOutcome SageMakerClient::CreateApp(const CreateAppRequest& request) const {
  return CreateAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAppImageConfigOutcome SageMakerClient::CreateAppImageConfig(const CreateAppImageConfigRequest& request) const {
  return CreateAppImageConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateArtifactOutcome SageMakerClient::CreateArtifact(const CreateArtifactRequest& request) const {
  return CreateArtifactOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAutoMLJobOutcome SageMakerClient::CreateAutoMLJob(const CreateAutoMLJobRequest& request) const {
  return CreateAutoMLJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAutoMLJobV2Outcome SageMakerClient::CreateAutoMLJobV2(const CreateAutoMLJobV2Request& request) const {
  return CreateAutoMLJobV2Outcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateClusterOutcome SageMakerClient::CreateCluster(const CreateClusterRequest& request) const {
  return CreateClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateClusterSchedulerConfigOutcome SageMakerClient::CreateClusterSchedulerConfig(
    const CreateClusterSchedulerConfigRequest& request) const {
  return CreateClusterSchedulerConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCodeRepositoryOutcome SageMakerClient::CreateCodeRepository(const CreateCodeRepositoryRequest& request) const {
  return CreateCodeRepositoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCompilationJobOutcome SageMakerClient::CreateCompilationJob(const CreateCompilationJobRequest& request) const {
  return CreateCompilationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateComputeQuotaOutcome SageMakerClient::CreateComputeQuota(const CreateComputeQuotaRequest& request) const {
  return CreateComputeQuotaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateContextOutcome SageMakerClient::CreateContext(const CreateContextRequest& request) const {
  return CreateContextOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataQualityJobDefinitionOutcome SageMakerClient::CreateDataQualityJobDefinition(
    const CreateDataQualityJobDefinitionRequest& request) const {
  return CreateDataQualityJobDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeviceFleetOutcome SageMakerClient::CreateDeviceFleet(const CreateDeviceFleetRequest& request) const {
  return CreateDeviceFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainOutcome SageMakerClient::CreateDomain(const CreateDomainRequest& request) const {
  return CreateDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEdgeDeploymentPlanOutcome SageMakerClient::CreateEdgeDeploymentPlan(const CreateEdgeDeploymentPlanRequest& request) const {
  return CreateEdgeDeploymentPlanOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEdgeDeploymentStageOutcome SageMakerClient::CreateEdgeDeploymentStage(const CreateEdgeDeploymentStageRequest& request) const {
  return CreateEdgeDeploymentStageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEdgePackagingJobOutcome SageMakerClient::CreateEdgePackagingJob(const CreateEdgePackagingJobRequest& request) const {
  return CreateEdgePackagingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEndpointOutcome SageMakerClient::CreateEndpoint(const CreateEndpointRequest& request) const {
  return CreateEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEndpointConfigOutcome SageMakerClient::CreateEndpointConfig(const CreateEndpointConfigRequest& request) const {
  return CreateEndpointConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateExperimentOutcome SageMakerClient::CreateExperiment(const CreateExperimentRequest& request) const {
  return CreateExperimentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFeatureGroupOutcome SageMakerClient::CreateFeatureGroup(const CreateFeatureGroupRequest& request) const {
  return CreateFeatureGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFlowDefinitionOutcome SageMakerClient::CreateFlowDefinition(const CreateFlowDefinitionRequest& request) const {
  return CreateFlowDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateHubOutcome SageMakerClient::CreateHub(const CreateHubRequest& request) const {
  return CreateHubOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateHubContentPresignedUrlsOutcome SageMakerClient::CreateHubContentPresignedUrls(
    const CreateHubContentPresignedUrlsRequest& request) const {
  return CreateHubContentPresignedUrlsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateHubContentReferenceOutcome SageMakerClient::CreateHubContentReference(const CreateHubContentReferenceRequest& request) const {
  return CreateHubContentReferenceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateHumanTaskUiOutcome SageMakerClient::CreateHumanTaskUi(const CreateHumanTaskUiRequest& request) const {
  return CreateHumanTaskUiOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateHyperParameterTuningJobOutcome SageMakerClient::CreateHyperParameterTuningJob(
    const CreateHyperParameterTuningJobRequest& request) const {
  return CreateHyperParameterTuningJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateImageOutcome SageMakerClient::CreateImage(const CreateImageRequest& request) const {
  return CreateImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateImageVersionOutcome SageMakerClient::CreateImageVersion(const CreateImageVersionRequest& request) const {
  return CreateImageVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInferenceComponentOutcome SageMakerClient::CreateInferenceComponent(const CreateInferenceComponentRequest& request) const {
  return CreateInferenceComponentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInferenceExperimentOutcome SageMakerClient::CreateInferenceExperiment(const CreateInferenceExperimentRequest& request) const {
  return CreateInferenceExperimentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInferenceRecommendationsJobOutcome SageMakerClient::CreateInferenceRecommendationsJob(
    const CreateInferenceRecommendationsJobRequest& request) const {
  return CreateInferenceRecommendationsJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLabelingJobOutcome SageMakerClient::CreateLabelingJob(const CreateLabelingJobRequest& request) const {
  return CreateLabelingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMlflowAppOutcome SageMakerClient::CreateMlflowApp(const CreateMlflowAppRequest& request) const {
  return CreateMlflowAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMlflowTrackingServerOutcome SageMakerClient::CreateMlflowTrackingServer(const CreateMlflowTrackingServerRequest& request) const {
  return CreateMlflowTrackingServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateModelOutcome SageMakerClient::CreateModel(const CreateModelRequest& request) const {
  return CreateModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateModelBiasJobDefinitionOutcome SageMakerClient::CreateModelBiasJobDefinition(
    const CreateModelBiasJobDefinitionRequest& request) const {
  return CreateModelBiasJobDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateModelCardOutcome SageMakerClient::CreateModelCard(const CreateModelCardRequest& request) const {
  return CreateModelCardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateModelCardExportJobOutcome SageMakerClient::CreateModelCardExportJob(const CreateModelCardExportJobRequest& request) const {
  return CreateModelCardExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateModelExplainabilityJobDefinitionOutcome SageMakerClient::CreateModelExplainabilityJobDefinition(
    const CreateModelExplainabilityJobDefinitionRequest& request) const {
  return CreateModelExplainabilityJobDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateModelPackageOutcome SageMakerClient::CreateModelPackage(const CreateModelPackageRequest& request) const {
  return CreateModelPackageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateModelPackageGroupOutcome SageMakerClient::CreateModelPackageGroup(const CreateModelPackageGroupRequest& request) const {
  return CreateModelPackageGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateModelQualityJobDefinitionOutcome SageMakerClient::CreateModelQualityJobDefinition(
    const CreateModelQualityJobDefinitionRequest& request) const {
  return CreateModelQualityJobDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMonitoringScheduleOutcome SageMakerClient::CreateMonitoringSchedule(const CreateMonitoringScheduleRequest& request) const {
  return CreateMonitoringScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNotebookInstanceOutcome SageMakerClient::CreateNotebookInstance(const CreateNotebookInstanceRequest& request) const {
  return CreateNotebookInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNotebookInstanceLifecycleConfigOutcome SageMakerClient::CreateNotebookInstanceLifecycleConfig(
    const CreateNotebookInstanceLifecycleConfigRequest& request) const {
  return CreateNotebookInstanceLifecycleConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOptimizationJobOutcome SageMakerClient::CreateOptimizationJob(const CreateOptimizationJobRequest& request) const {
  return CreateOptimizationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePartnerAppOutcome SageMakerClient::CreatePartnerApp(const CreatePartnerAppRequest& request) const {
  return CreatePartnerAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePartnerAppPresignedUrlOutcome SageMakerClient::CreatePartnerAppPresignedUrl(
    const CreatePartnerAppPresignedUrlRequest& request) const {
  return CreatePartnerAppPresignedUrlOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePipelineOutcome SageMakerClient::CreatePipeline(const CreatePipelineRequest& request) const {
  return CreatePipelineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePresignedDomainUrlOutcome SageMakerClient::CreatePresignedDomainUrl(const CreatePresignedDomainUrlRequest& request) const {
  return CreatePresignedDomainUrlOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePresignedMlflowAppUrlOutcome SageMakerClient::CreatePresignedMlflowAppUrl(const CreatePresignedMlflowAppUrlRequest& request) const {
  return CreatePresignedMlflowAppUrlOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePresignedMlflowTrackingServerUrlOutcome SageMakerClient::CreatePresignedMlflowTrackingServerUrl(
    const CreatePresignedMlflowTrackingServerUrlRequest& request) const {
  return CreatePresignedMlflowTrackingServerUrlOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePresignedNotebookInstanceUrlOutcome SageMakerClient::CreatePresignedNotebookInstanceUrl(
    const CreatePresignedNotebookInstanceUrlRequest& request) const {
  return CreatePresignedNotebookInstanceUrlOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProcessingJobOutcome SageMakerClient::CreateProcessingJob(const CreateProcessingJobRequest& request) const {
  return CreateProcessingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProjectOutcome SageMakerClient::CreateProject(const CreateProjectRequest& request) const {
  return CreateProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSpaceOutcome SageMakerClient::CreateSpace(const CreateSpaceRequest& request) const {
  return CreateSpaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStudioLifecycleConfigOutcome SageMakerClient::CreateStudioLifecycleConfig(const CreateStudioLifecycleConfigRequest& request) const {
  return CreateStudioLifecycleConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrainingJobOutcome SageMakerClient::CreateTrainingJob(const CreateTrainingJobRequest& request) const {
  return CreateTrainingJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrainingPlanOutcome SageMakerClient::CreateTrainingPlan(const CreateTrainingPlanRequest& request) const {
  return CreateTrainingPlanOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTransformJobOutcome SageMakerClient::CreateTransformJob(const CreateTransformJobRequest& request) const {
  return CreateTransformJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrialOutcome SageMakerClient::CreateTrial(const CreateTrialRequest& request) const {
  return CreateTrialOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrialComponentOutcome SageMakerClient::CreateTrialComponent(const CreateTrialComponentRequest& request) const {
  return CreateTrialComponentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserProfileOutcome SageMakerClient::CreateUserProfile(const CreateUserProfileRequest& request) const {
  return CreateUserProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkforceOutcome SageMakerClient::CreateWorkforce(const CreateWorkforceRequest& request) const {
  return CreateWorkforceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkteamOutcome SageMakerClient::CreateWorkteam(const CreateWorkteamRequest& request) const {
  return CreateWorkteamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteActionOutcome SageMakerClient::DeleteAction(const DeleteActionRequest& request) const {
  return DeleteActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAlgorithmOutcome SageMakerClient::DeleteAlgorithm(const DeleteAlgorithmRequest& request) const {
  return DeleteAlgorithmOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAppOutcome SageMakerClient::DeleteApp(const DeleteAppRequest& request) const {
  return DeleteAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAppImageConfigOutcome SageMakerClient::DeleteAppImageConfig(const DeleteAppImageConfigRequest& request) const {
  return DeleteAppImageConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteArtifactOutcome SageMakerClient::DeleteArtifact(const DeleteArtifactRequest& request) const {
  return DeleteArtifactOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAssociationOutcome SageMakerClient::DeleteAssociation(const DeleteAssociationRequest& request) const {
  return DeleteAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteClusterOutcome SageMakerClient::DeleteCluster(const DeleteClusterRequest& request) const {
  return DeleteClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteClusterSchedulerConfigOutcome SageMakerClient::DeleteClusterSchedulerConfig(
    const DeleteClusterSchedulerConfigRequest& request) const {
  return DeleteClusterSchedulerConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCodeRepositoryOutcome SageMakerClient::DeleteCodeRepository(const DeleteCodeRepositoryRequest& request) const {
  return DeleteCodeRepositoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCompilationJobOutcome SageMakerClient::DeleteCompilationJob(const DeleteCompilationJobRequest& request) const {
  return DeleteCompilationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteComputeQuotaOutcome SageMakerClient::DeleteComputeQuota(const DeleteComputeQuotaRequest& request) const {
  return DeleteComputeQuotaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteContextOutcome SageMakerClient::DeleteContext(const DeleteContextRequest& request) const {
  return DeleteContextOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDataQualityJobDefinitionOutcome SageMakerClient::DeleteDataQualityJobDefinition(
    const DeleteDataQualityJobDefinitionRequest& request) const {
  return DeleteDataQualityJobDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDeviceFleetOutcome SageMakerClient::DeleteDeviceFleet(const DeleteDeviceFleetRequest& request) const {
  return DeleteDeviceFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDomainOutcome SageMakerClient::DeleteDomain(const DeleteDomainRequest& request) const {
  return DeleteDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEdgeDeploymentPlanOutcome SageMakerClient::DeleteEdgeDeploymentPlan(const DeleteEdgeDeploymentPlanRequest& request) const {
  return DeleteEdgeDeploymentPlanOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEdgeDeploymentStageOutcome SageMakerClient::DeleteEdgeDeploymentStage(const DeleteEdgeDeploymentStageRequest& request) const {
  return DeleteEdgeDeploymentStageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEndpointOutcome SageMakerClient::DeleteEndpoint(const DeleteEndpointRequest& request) const {
  return DeleteEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEndpointConfigOutcome SageMakerClient::DeleteEndpointConfig(const DeleteEndpointConfigRequest& request) const {
  return DeleteEndpointConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteExperimentOutcome SageMakerClient::DeleteExperiment(const DeleteExperimentRequest& request) const {
  return DeleteExperimentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFeatureGroupOutcome SageMakerClient::DeleteFeatureGroup(const DeleteFeatureGroupRequest& request) const {
  return DeleteFeatureGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFlowDefinitionOutcome SageMakerClient::DeleteFlowDefinition(const DeleteFlowDefinitionRequest& request) const {
  return DeleteFlowDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteHubOutcome SageMakerClient::DeleteHub(const DeleteHubRequest& request) const {
  return DeleteHubOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
