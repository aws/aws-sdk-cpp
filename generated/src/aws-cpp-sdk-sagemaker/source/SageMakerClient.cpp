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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddAssociationOutcome(result.GetResultWithOwnership()) : AddAssociationOutcome(std::move(result.GetError()));
}

AddTagsOutcome SageMakerClient::AddTags(const AddTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddTagsOutcome(result.GetResultWithOwnership()) : AddTagsOutcome(std::move(result.GetError()));
}

AssociateTrialComponentOutcome SageMakerClient::AssociateTrialComponent(const AssociateTrialComponentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateTrialComponentOutcome(result.GetResultWithOwnership())
                            : AssociateTrialComponentOutcome(std::move(result.GetError()));
}

AttachClusterNodeVolumeOutcome SageMakerClient::AttachClusterNodeVolume(const AttachClusterNodeVolumeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachClusterNodeVolumeOutcome(result.GetResultWithOwnership())
                            : AttachClusterNodeVolumeOutcome(std::move(result.GetError()));
}

BatchAddClusterNodesOutcome SageMakerClient::BatchAddClusterNodes(const BatchAddClusterNodesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchAddClusterNodesOutcome(result.GetResultWithOwnership())
                            : BatchAddClusterNodesOutcome(std::move(result.GetError()));
}

BatchDeleteClusterNodesOutcome SageMakerClient::BatchDeleteClusterNodes(const BatchDeleteClusterNodesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteClusterNodesOutcome(result.GetResultWithOwnership())
                            : BatchDeleteClusterNodesOutcome(std::move(result.GetError()));
}

BatchDescribeModelPackageOutcome SageMakerClient::BatchDescribeModelPackage(const BatchDescribeModelPackageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDescribeModelPackageOutcome(result.GetResultWithOwnership())
                            : BatchDescribeModelPackageOutcome(std::move(result.GetError()));
}

BatchRebootClusterNodesOutcome SageMakerClient::BatchRebootClusterNodes(const BatchRebootClusterNodesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchRebootClusterNodesOutcome(result.GetResultWithOwnership())
                            : BatchRebootClusterNodesOutcome(std::move(result.GetError()));
}

BatchReplaceClusterNodesOutcome SageMakerClient::BatchReplaceClusterNodes(const BatchReplaceClusterNodesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchReplaceClusterNodesOutcome(result.GetResultWithOwnership())
                            : BatchReplaceClusterNodesOutcome(std::move(result.GetError()));
}

CreateActionOutcome SageMakerClient::CreateAction(const CreateActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateActionOutcome(result.GetResultWithOwnership()) : CreateActionOutcome(std::move(result.GetError()));
}

CreateAlgorithmOutcome SageMakerClient::CreateAlgorithm(const CreateAlgorithmRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAlgorithmOutcome(result.GetResultWithOwnership())
                            : CreateAlgorithmOutcome(std::move(result.GetError()));
}

CreateAppOutcome SageMakerClient::CreateApp(const CreateAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAppOutcome(result.GetResultWithOwnership()) : CreateAppOutcome(std::move(result.GetError()));
}

CreateAppImageConfigOutcome SageMakerClient::CreateAppImageConfig(const CreateAppImageConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAppImageConfigOutcome(result.GetResultWithOwnership())
                            : CreateAppImageConfigOutcome(std::move(result.GetError()));
}

CreateArtifactOutcome SageMakerClient::CreateArtifact(const CreateArtifactRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateArtifactOutcome(result.GetResultWithOwnership()) : CreateArtifactOutcome(std::move(result.GetError()));
}

CreateAutoMLJobOutcome SageMakerClient::CreateAutoMLJob(const CreateAutoMLJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAutoMLJobOutcome(result.GetResultWithOwnership())
                            : CreateAutoMLJobOutcome(std::move(result.GetError()));
}

CreateAutoMLJobV2Outcome SageMakerClient::CreateAutoMLJobV2(const CreateAutoMLJobV2Request& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAutoMLJobV2Outcome(result.GetResultWithOwnership())
                            : CreateAutoMLJobV2Outcome(std::move(result.GetError()));
}

CreateClusterOutcome SageMakerClient::CreateCluster(const CreateClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClusterOutcome(result.GetResultWithOwnership()) : CreateClusterOutcome(std::move(result.GetError()));
}

CreateClusterSchedulerConfigOutcome SageMakerClient::CreateClusterSchedulerConfig(
    const CreateClusterSchedulerConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClusterSchedulerConfigOutcome(result.GetResultWithOwnership())
                            : CreateClusterSchedulerConfigOutcome(std::move(result.GetError()));
}

CreateCodeRepositoryOutcome SageMakerClient::CreateCodeRepository(const CreateCodeRepositoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCodeRepositoryOutcome(result.GetResultWithOwnership())
                            : CreateCodeRepositoryOutcome(std::move(result.GetError()));
}

CreateCompilationJobOutcome SageMakerClient::CreateCompilationJob(const CreateCompilationJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCompilationJobOutcome(result.GetResultWithOwnership())
                            : CreateCompilationJobOutcome(std::move(result.GetError()));
}

CreateComputeQuotaOutcome SageMakerClient::CreateComputeQuota(const CreateComputeQuotaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateComputeQuotaOutcome(result.GetResultWithOwnership())
                            : CreateComputeQuotaOutcome(std::move(result.GetError()));
}

CreateContextOutcome SageMakerClient::CreateContext(const CreateContextRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateContextOutcome(result.GetResultWithOwnership()) : CreateContextOutcome(std::move(result.GetError()));
}

CreateDataQualityJobDefinitionOutcome SageMakerClient::CreateDataQualityJobDefinition(
    const CreateDataQualityJobDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataQualityJobDefinitionOutcome(result.GetResultWithOwnership())
                            : CreateDataQualityJobDefinitionOutcome(std::move(result.GetError()));
}

CreateDeviceFleetOutcome SageMakerClient::CreateDeviceFleet(const CreateDeviceFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDeviceFleetOutcome(result.GetResultWithOwnership())
                            : CreateDeviceFleetOutcome(std::move(result.GetError()));
}

CreateDomainOutcome SageMakerClient::CreateDomain(const CreateDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDomainOutcome(result.GetResultWithOwnership()) : CreateDomainOutcome(std::move(result.GetError()));
}

CreateEdgeDeploymentPlanOutcome SageMakerClient::CreateEdgeDeploymentPlan(const CreateEdgeDeploymentPlanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEdgeDeploymentPlanOutcome(result.GetResultWithOwnership())
                            : CreateEdgeDeploymentPlanOutcome(std::move(result.GetError()));
}

CreateEdgeDeploymentStageOutcome SageMakerClient::CreateEdgeDeploymentStage(const CreateEdgeDeploymentStageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEdgeDeploymentStageOutcome(result.GetResultWithOwnership())
                            : CreateEdgeDeploymentStageOutcome(std::move(result.GetError()));
}

CreateEdgePackagingJobOutcome SageMakerClient::CreateEdgePackagingJob(const CreateEdgePackagingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEdgePackagingJobOutcome(result.GetResultWithOwnership())
                            : CreateEdgePackagingJobOutcome(std::move(result.GetError()));
}

CreateEndpointOutcome SageMakerClient::CreateEndpoint(const CreateEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEndpointOutcome(result.GetResultWithOwnership()) : CreateEndpointOutcome(std::move(result.GetError()));
}

CreateEndpointConfigOutcome SageMakerClient::CreateEndpointConfig(const CreateEndpointConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEndpointConfigOutcome(result.GetResultWithOwnership())
                            : CreateEndpointConfigOutcome(std::move(result.GetError()));
}

CreateExperimentOutcome SageMakerClient::CreateExperiment(const CreateExperimentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateExperimentOutcome(result.GetResultWithOwnership())
                            : CreateExperimentOutcome(std::move(result.GetError()));
}

CreateFeatureGroupOutcome SageMakerClient::CreateFeatureGroup(const CreateFeatureGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFeatureGroupOutcome(result.GetResultWithOwnership())
                            : CreateFeatureGroupOutcome(std::move(result.GetError()));
}

CreateFlowDefinitionOutcome SageMakerClient::CreateFlowDefinition(const CreateFlowDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFlowDefinitionOutcome(result.GetResultWithOwnership())
                            : CreateFlowDefinitionOutcome(std::move(result.GetError()));
}

CreateHubOutcome SageMakerClient::CreateHub(const CreateHubRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateHubOutcome(result.GetResultWithOwnership()) : CreateHubOutcome(std::move(result.GetError()));
}

CreateHubContentPresignedUrlsOutcome SageMakerClient::CreateHubContentPresignedUrls(
    const CreateHubContentPresignedUrlsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateHubContentPresignedUrlsOutcome(result.GetResultWithOwnership())
                            : CreateHubContentPresignedUrlsOutcome(std::move(result.GetError()));
}

CreateHubContentReferenceOutcome SageMakerClient::CreateHubContentReference(const CreateHubContentReferenceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateHubContentReferenceOutcome(result.GetResultWithOwnership())
                            : CreateHubContentReferenceOutcome(std::move(result.GetError()));
}

CreateHumanTaskUiOutcome SageMakerClient::CreateHumanTaskUi(const CreateHumanTaskUiRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateHumanTaskUiOutcome(result.GetResultWithOwnership())
                            : CreateHumanTaskUiOutcome(std::move(result.GetError()));
}

CreateHyperParameterTuningJobOutcome SageMakerClient::CreateHyperParameterTuningJob(
    const CreateHyperParameterTuningJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateHyperParameterTuningJobOutcome(result.GetResultWithOwnership())
                            : CreateHyperParameterTuningJobOutcome(std::move(result.GetError()));
}

CreateImageOutcome SageMakerClient::CreateImage(const CreateImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateImageOutcome(result.GetResultWithOwnership()) : CreateImageOutcome(std::move(result.GetError()));
}

CreateImageVersionOutcome SageMakerClient::CreateImageVersion(const CreateImageVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateImageVersionOutcome(result.GetResultWithOwnership())
                            : CreateImageVersionOutcome(std::move(result.GetError()));
}

CreateInferenceComponentOutcome SageMakerClient::CreateInferenceComponent(const CreateInferenceComponentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInferenceComponentOutcome(result.GetResultWithOwnership())
                            : CreateInferenceComponentOutcome(std::move(result.GetError()));
}

CreateInferenceExperimentOutcome SageMakerClient::CreateInferenceExperiment(const CreateInferenceExperimentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInferenceExperimentOutcome(result.GetResultWithOwnership())
                            : CreateInferenceExperimentOutcome(std::move(result.GetError()));
}

CreateInferenceRecommendationsJobOutcome SageMakerClient::CreateInferenceRecommendationsJob(
    const CreateInferenceRecommendationsJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInferenceRecommendationsJobOutcome(result.GetResultWithOwnership())
                            : CreateInferenceRecommendationsJobOutcome(std::move(result.GetError()));
}

CreateLabelingJobOutcome SageMakerClient::CreateLabelingJob(const CreateLabelingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLabelingJobOutcome(result.GetResultWithOwnership())
                            : CreateLabelingJobOutcome(std::move(result.GetError()));
}

CreateMlflowAppOutcome SageMakerClient::CreateMlflowApp(const CreateMlflowAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMlflowAppOutcome(result.GetResultWithOwnership())
                            : CreateMlflowAppOutcome(std::move(result.GetError()));
}

CreateMlflowTrackingServerOutcome SageMakerClient::CreateMlflowTrackingServer(const CreateMlflowTrackingServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMlflowTrackingServerOutcome(result.GetResultWithOwnership())
                            : CreateMlflowTrackingServerOutcome(std::move(result.GetError()));
}

CreateModelOutcome SageMakerClient::CreateModel(const CreateModelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateModelOutcome(result.GetResultWithOwnership()) : CreateModelOutcome(std::move(result.GetError()));
}

CreateModelBiasJobDefinitionOutcome SageMakerClient::CreateModelBiasJobDefinition(
    const CreateModelBiasJobDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateModelBiasJobDefinitionOutcome(result.GetResultWithOwnership())
                            : CreateModelBiasJobDefinitionOutcome(std::move(result.GetError()));
}

CreateModelCardOutcome SageMakerClient::CreateModelCard(const CreateModelCardRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateModelCardOutcome(result.GetResultWithOwnership())
                            : CreateModelCardOutcome(std::move(result.GetError()));
}

CreateModelCardExportJobOutcome SageMakerClient::CreateModelCardExportJob(const CreateModelCardExportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateModelCardExportJobOutcome(result.GetResultWithOwnership())
                            : CreateModelCardExportJobOutcome(std::move(result.GetError()));
}

CreateModelExplainabilityJobDefinitionOutcome SageMakerClient::CreateModelExplainabilityJobDefinition(
    const CreateModelExplainabilityJobDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateModelExplainabilityJobDefinitionOutcome(result.GetResultWithOwnership())
                            : CreateModelExplainabilityJobDefinitionOutcome(std::move(result.GetError()));
}

CreateModelPackageOutcome SageMakerClient::CreateModelPackage(const CreateModelPackageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateModelPackageOutcome(result.GetResultWithOwnership())
                            : CreateModelPackageOutcome(std::move(result.GetError()));
}

CreateModelPackageGroupOutcome SageMakerClient::CreateModelPackageGroup(const CreateModelPackageGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateModelPackageGroupOutcome(result.GetResultWithOwnership())
                            : CreateModelPackageGroupOutcome(std::move(result.GetError()));
}

CreateModelQualityJobDefinitionOutcome SageMakerClient::CreateModelQualityJobDefinition(
    const CreateModelQualityJobDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateModelQualityJobDefinitionOutcome(result.GetResultWithOwnership())
                            : CreateModelQualityJobDefinitionOutcome(std::move(result.GetError()));
}

CreateMonitoringScheduleOutcome SageMakerClient::CreateMonitoringSchedule(const CreateMonitoringScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMonitoringScheduleOutcome(result.GetResultWithOwnership())
                            : CreateMonitoringScheduleOutcome(std::move(result.GetError()));
}

CreateNotebookInstanceOutcome SageMakerClient::CreateNotebookInstance(const CreateNotebookInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNotebookInstanceOutcome(result.GetResultWithOwnership())
                            : CreateNotebookInstanceOutcome(std::move(result.GetError()));
}

CreateNotebookInstanceLifecycleConfigOutcome SageMakerClient::CreateNotebookInstanceLifecycleConfig(
    const CreateNotebookInstanceLifecycleConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNotebookInstanceLifecycleConfigOutcome(result.GetResultWithOwnership())
                            : CreateNotebookInstanceLifecycleConfigOutcome(std::move(result.GetError()));
}

CreateOptimizationJobOutcome SageMakerClient::CreateOptimizationJob(const CreateOptimizationJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOptimizationJobOutcome(result.GetResultWithOwnership())
                            : CreateOptimizationJobOutcome(std::move(result.GetError()));
}

CreatePartnerAppOutcome SageMakerClient::CreatePartnerApp(const CreatePartnerAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePartnerAppOutcome(result.GetResultWithOwnership())
                            : CreatePartnerAppOutcome(std::move(result.GetError()));
}

CreatePartnerAppPresignedUrlOutcome SageMakerClient::CreatePartnerAppPresignedUrl(
    const CreatePartnerAppPresignedUrlRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePartnerAppPresignedUrlOutcome(result.GetResultWithOwnership())
                            : CreatePartnerAppPresignedUrlOutcome(std::move(result.GetError()));
}

CreatePipelineOutcome SageMakerClient::CreatePipeline(const CreatePipelineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePipelineOutcome(result.GetResultWithOwnership()) : CreatePipelineOutcome(std::move(result.GetError()));
}

CreatePresignedDomainUrlOutcome SageMakerClient::CreatePresignedDomainUrl(const CreatePresignedDomainUrlRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePresignedDomainUrlOutcome(result.GetResultWithOwnership())
                            : CreatePresignedDomainUrlOutcome(std::move(result.GetError()));
}

CreatePresignedMlflowAppUrlOutcome SageMakerClient::CreatePresignedMlflowAppUrl(const CreatePresignedMlflowAppUrlRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePresignedMlflowAppUrlOutcome(result.GetResultWithOwnership())
                            : CreatePresignedMlflowAppUrlOutcome(std::move(result.GetError()));
}

CreatePresignedMlflowTrackingServerUrlOutcome SageMakerClient::CreatePresignedMlflowTrackingServerUrl(
    const CreatePresignedMlflowTrackingServerUrlRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePresignedMlflowTrackingServerUrlOutcome(result.GetResultWithOwnership())
                            : CreatePresignedMlflowTrackingServerUrlOutcome(std::move(result.GetError()));
}

CreatePresignedNotebookInstanceUrlOutcome SageMakerClient::CreatePresignedNotebookInstanceUrl(
    const CreatePresignedNotebookInstanceUrlRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePresignedNotebookInstanceUrlOutcome(result.GetResultWithOwnership())
                            : CreatePresignedNotebookInstanceUrlOutcome(std::move(result.GetError()));
}

CreateProcessingJobOutcome SageMakerClient::CreateProcessingJob(const CreateProcessingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProcessingJobOutcome(result.GetResultWithOwnership())
                            : CreateProcessingJobOutcome(std::move(result.GetError()));
}

CreateProjectOutcome SageMakerClient::CreateProject(const CreateProjectRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProjectOutcome(result.GetResultWithOwnership()) : CreateProjectOutcome(std::move(result.GetError()));
}

CreateSpaceOutcome SageMakerClient::CreateSpace(const CreateSpaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSpaceOutcome(result.GetResultWithOwnership()) : CreateSpaceOutcome(std::move(result.GetError()));
}

CreateStudioLifecycleConfigOutcome SageMakerClient::CreateStudioLifecycleConfig(const CreateStudioLifecycleConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStudioLifecycleConfigOutcome(result.GetResultWithOwnership())
                            : CreateStudioLifecycleConfigOutcome(std::move(result.GetError()));
}

CreateTrainingJobOutcome SageMakerClient::CreateTrainingJob(const CreateTrainingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrainingJobOutcome(result.GetResultWithOwnership())
                            : CreateTrainingJobOutcome(std::move(result.GetError()));
}

CreateTrainingPlanOutcome SageMakerClient::CreateTrainingPlan(const CreateTrainingPlanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrainingPlanOutcome(result.GetResultWithOwnership())
                            : CreateTrainingPlanOutcome(std::move(result.GetError()));
}

CreateTransformJobOutcome SageMakerClient::CreateTransformJob(const CreateTransformJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTransformJobOutcome(result.GetResultWithOwnership())
                            : CreateTransformJobOutcome(std::move(result.GetError()));
}

CreateTrialOutcome SageMakerClient::CreateTrial(const CreateTrialRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrialOutcome(result.GetResultWithOwnership()) : CreateTrialOutcome(std::move(result.GetError()));
}

CreateTrialComponentOutcome SageMakerClient::CreateTrialComponent(const CreateTrialComponentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrialComponentOutcome(result.GetResultWithOwnership())
                            : CreateTrialComponentOutcome(std::move(result.GetError()));
}

CreateUserProfileOutcome SageMakerClient::CreateUserProfile(const CreateUserProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserProfileOutcome(result.GetResultWithOwnership())
                            : CreateUserProfileOutcome(std::move(result.GetError()));
}

CreateWorkforceOutcome SageMakerClient::CreateWorkforce(const CreateWorkforceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkforceOutcome(result.GetResultWithOwnership())
                            : CreateWorkforceOutcome(std::move(result.GetError()));
}

CreateWorkteamOutcome SageMakerClient::CreateWorkteam(const CreateWorkteamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkteamOutcome(result.GetResultWithOwnership()) : CreateWorkteamOutcome(std::move(result.GetError()));
}

DeleteActionOutcome SageMakerClient::DeleteAction(const DeleteActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteActionOutcome(result.GetResultWithOwnership()) : DeleteActionOutcome(std::move(result.GetError()));
}

DeleteAlgorithmOutcome SageMakerClient::DeleteAlgorithm(const DeleteAlgorithmRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAlgorithmOutcome(result.GetResultWithOwnership())
                            : DeleteAlgorithmOutcome(std::move(result.GetError()));
}

DeleteAppOutcome SageMakerClient::DeleteApp(const DeleteAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAppOutcome(result.GetResultWithOwnership()) : DeleteAppOutcome(std::move(result.GetError()));
}

DeleteAppImageConfigOutcome SageMakerClient::DeleteAppImageConfig(const DeleteAppImageConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAppImageConfigOutcome(result.GetResultWithOwnership())
                            : DeleteAppImageConfigOutcome(std::move(result.GetError()));
}

DeleteArtifactOutcome SageMakerClient::DeleteArtifact(const DeleteArtifactRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteArtifactOutcome(result.GetResultWithOwnership()) : DeleteArtifactOutcome(std::move(result.GetError()));
}

DeleteAssociationOutcome SageMakerClient::DeleteAssociation(const DeleteAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteAssociationOutcome(std::move(result.GetError()));
}

DeleteClusterOutcome SageMakerClient::DeleteCluster(const DeleteClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteClusterOutcome(result.GetResultWithOwnership()) : DeleteClusterOutcome(std::move(result.GetError()));
}

DeleteClusterSchedulerConfigOutcome SageMakerClient::DeleteClusterSchedulerConfig(
    const DeleteClusterSchedulerConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteClusterSchedulerConfigOutcome(result.GetResultWithOwnership())
                            : DeleteClusterSchedulerConfigOutcome(std::move(result.GetError()));
}

DeleteCodeRepositoryOutcome SageMakerClient::DeleteCodeRepository(const DeleteCodeRepositoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCodeRepositoryOutcome(result.GetResultWithOwnership())
                            : DeleteCodeRepositoryOutcome(std::move(result.GetError()));
}

DeleteCompilationJobOutcome SageMakerClient::DeleteCompilationJob(const DeleteCompilationJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCompilationJobOutcome(result.GetResultWithOwnership())
                            : DeleteCompilationJobOutcome(std::move(result.GetError()));
}

DeleteComputeQuotaOutcome SageMakerClient::DeleteComputeQuota(const DeleteComputeQuotaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteComputeQuotaOutcome(result.GetResultWithOwnership())
                            : DeleteComputeQuotaOutcome(std::move(result.GetError()));
}

DeleteContextOutcome SageMakerClient::DeleteContext(const DeleteContextRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteContextOutcome(result.GetResultWithOwnership()) : DeleteContextOutcome(std::move(result.GetError()));
}

DeleteDataQualityJobDefinitionOutcome SageMakerClient::DeleteDataQualityJobDefinition(
    const DeleteDataQualityJobDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDataQualityJobDefinitionOutcome(result.GetResultWithOwnership())
                            : DeleteDataQualityJobDefinitionOutcome(std::move(result.GetError()));
}

DeleteDeviceFleetOutcome SageMakerClient::DeleteDeviceFleet(const DeleteDeviceFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDeviceFleetOutcome(result.GetResultWithOwnership())
                            : DeleteDeviceFleetOutcome(std::move(result.GetError()));
}

DeleteDomainOutcome SageMakerClient::DeleteDomain(const DeleteDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDomainOutcome(result.GetResultWithOwnership()) : DeleteDomainOutcome(std::move(result.GetError()));
}

DeleteEdgeDeploymentPlanOutcome SageMakerClient::DeleteEdgeDeploymentPlan(const DeleteEdgeDeploymentPlanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEdgeDeploymentPlanOutcome(result.GetResultWithOwnership())
                            : DeleteEdgeDeploymentPlanOutcome(std::move(result.GetError()));
}

DeleteEdgeDeploymentStageOutcome SageMakerClient::DeleteEdgeDeploymentStage(const DeleteEdgeDeploymentStageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEdgeDeploymentStageOutcome(result.GetResultWithOwnership())
                            : DeleteEdgeDeploymentStageOutcome(std::move(result.GetError()));
}

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
