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
#include <aws/mgn/MgnClient.h>
#include <aws/mgn/MgnEndpointProvider.h>
#include <aws/mgn/MgnErrorMarshaller.h>
#include <aws/mgn/model/ArchiveApplicationRequest.h>
#include <aws/mgn/model/ArchiveWaveRequest.h>
#include <aws/mgn/model/AssociateApplicationsRequest.h>
#include <aws/mgn/model/AssociateSourceServersRequest.h>
#include <aws/mgn/model/ChangeServerLifeCycleStateRequest.h>
#include <aws/mgn/model/CreateApplicationRequest.h>
#include <aws/mgn/model/CreateConnectorRequest.h>
#include <aws/mgn/model/CreateLaunchConfigurationTemplateRequest.h>
#include <aws/mgn/model/CreateNetworkMigrationDefinitionRequest.h>
#include <aws/mgn/model/CreateReplicationConfigurationTemplateRequest.h>
#include <aws/mgn/model/CreateWaveRequest.h>
#include <aws/mgn/model/DeleteApplicationRequest.h>
#include <aws/mgn/model/DeleteConnectorRequest.h>
#include <aws/mgn/model/DeleteJobRequest.h>
#include <aws/mgn/model/DeleteLaunchConfigurationTemplateRequest.h>
#include <aws/mgn/model/DeleteNetworkMigrationDefinitionRequest.h>
#include <aws/mgn/model/DeleteReplicationConfigurationTemplateRequest.h>
#include <aws/mgn/model/DeleteSourceServerRequest.h>
#include <aws/mgn/model/DeleteVcenterClientRequest.h>
#include <aws/mgn/model/DeleteWaveRequest.h>
#include <aws/mgn/model/DescribeJobLogItemsRequest.h>
#include <aws/mgn/model/DescribeJobsRequest.h>
#include <aws/mgn/model/DescribeLaunchConfigurationTemplatesRequest.h>
#include <aws/mgn/model/DescribeReplicationConfigurationTemplatesRequest.h>
#include <aws/mgn/model/DescribeSourceServersRequest.h>
#include <aws/mgn/model/DescribeVcenterClientsRequest.h>
#include <aws/mgn/model/DisassociateApplicationsRequest.h>
#include <aws/mgn/model/DisassociateSourceServersRequest.h>
#include <aws/mgn/model/DisconnectFromServiceRequest.h>
#include <aws/mgn/model/FinalizeCutoverRequest.h>
#include <aws/mgn/model/GetLaunchConfigurationRequest.h>
#include <aws/mgn/model/GetNetworkMigrationDefinitionRequest.h>
#include <aws/mgn/model/GetNetworkMigrationMapperSegmentConstructRequest.h>
#include <aws/mgn/model/GetReplicationConfigurationRequest.h>
#include <aws/mgn/model/InitializeServiceRequest.h>
#include <aws/mgn/model/ListApplicationsRequest.h>
#include <aws/mgn/model/ListConnectorsRequest.h>
#include <aws/mgn/model/ListExportErrorsRequest.h>
#include <aws/mgn/model/ListExportsRequest.h>
#include <aws/mgn/model/ListImportErrorsRequest.h>
#include <aws/mgn/model/ListImportFileEnrichmentsRequest.h>
#include <aws/mgn/model/ListImportsRequest.h>
#include <aws/mgn/model/ListManagedAccountsRequest.h>
#include <aws/mgn/model/ListNetworkMigrationAnalysesRequest.h>
#include <aws/mgn/model/ListNetworkMigrationAnalysisResultsRequest.h>
#include <aws/mgn/model/ListNetworkMigrationCodeGenerationSegmentsRequest.h>
#include <aws/mgn/model/ListNetworkMigrationCodeGenerationsRequest.h>
#include <aws/mgn/model/ListNetworkMigrationDefinitionsRequest.h>
#include <aws/mgn/model/ListNetworkMigrationDeployedStacksRequest.h>
#include <aws/mgn/model/ListNetworkMigrationDeploymentsRequest.h>
#include <aws/mgn/model/ListNetworkMigrationExecutionsRequest.h>
#include <aws/mgn/model/ListNetworkMigrationMapperSegmentConstructsRequest.h>
#include <aws/mgn/model/ListNetworkMigrationMapperSegmentsRequest.h>
#include <aws/mgn/model/ListNetworkMigrationMappingUpdatesRequest.h>
#include <aws/mgn/model/ListNetworkMigrationMappingsRequest.h>
#include <aws/mgn/model/ListSourceServerActionsRequest.h>
#include <aws/mgn/model/ListTagsForResourceRequest.h>
#include <aws/mgn/model/ListTemplateActionsRequest.h>
#include <aws/mgn/model/ListWavesRequest.h>
#include <aws/mgn/model/MarkAsArchivedRequest.h>
#include <aws/mgn/model/PauseReplicationRequest.h>
#include <aws/mgn/model/PutSourceServerActionRequest.h>
#include <aws/mgn/model/PutTemplateActionRequest.h>
#include <aws/mgn/model/RemoveSourceServerActionRequest.h>
#include <aws/mgn/model/RemoveTemplateActionRequest.h>
#include <aws/mgn/model/ResumeReplicationRequest.h>
#include <aws/mgn/model/RetryDataReplicationRequest.h>
#include <aws/mgn/model/StartCutoverRequest.h>
#include <aws/mgn/model/StartExportRequest.h>
#include <aws/mgn/model/StartImportFileEnrichmentRequest.h>
#include <aws/mgn/model/StartImportRequest.h>
#include <aws/mgn/model/StartNetworkMigrationAnalysisRequest.h>
#include <aws/mgn/model/StartNetworkMigrationCodeGenerationRequest.h>
#include <aws/mgn/model/StartNetworkMigrationDeploymentRequest.h>
#include <aws/mgn/model/StartNetworkMigrationMappingRequest.h>
#include <aws/mgn/model/StartNetworkMigrationMappingUpdateRequest.h>
#include <aws/mgn/model/StartReplicationRequest.h>
#include <aws/mgn/model/StartTestRequest.h>
#include <aws/mgn/model/StopReplicationRequest.h>
#include <aws/mgn/model/TagResourceRequest.h>
#include <aws/mgn/model/TerminateTargetInstancesRequest.h>
#include <aws/mgn/model/UnarchiveApplicationRequest.h>
#include <aws/mgn/model/UnarchiveWaveRequest.h>
#include <aws/mgn/model/UntagResourceRequest.h>
#include <aws/mgn/model/UpdateApplicationRequest.h>
#include <aws/mgn/model/UpdateConnectorRequest.h>
#include <aws/mgn/model/UpdateLaunchConfigurationRequest.h>
#include <aws/mgn/model/UpdateLaunchConfigurationTemplateRequest.h>
#include <aws/mgn/model/UpdateNetworkMigrationDefinitionRequest.h>
#include <aws/mgn/model/UpdateNetworkMigrationMapperSegmentRequest.h>
#include <aws/mgn/model/UpdateReplicationConfigurationRequest.h>
#include <aws/mgn/model/UpdateReplicationConfigurationTemplateRequest.h>
#include <aws/mgn/model/UpdateSourceServerReplicationTypeRequest.h>
#include <aws/mgn/model/UpdateSourceServerRequest.h>
#include <aws/mgn/model/UpdateWaveRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::mgn;
using namespace Aws::mgn::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace mgn {
const char SERVICE_NAME[] = "mgn";
const char ALLOCATION_TAG[] = "MgnClient";
}  // namespace mgn
}  // namespace Aws
const char* MgnClient::GetServiceName() { return SERVICE_NAME; }
const char* MgnClient::GetAllocationTag() { return ALLOCATION_TAG; }

MgnClient::MgnClient(const mgn::MgnClientConfiguration& clientConfiguration, std::shared_ptr<MgnEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MgnEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MgnClient::MgnClient(const AWSCredentials& credentials, std::shared_ptr<MgnEndpointProviderBase> endpointProvider,
                     const mgn::MgnClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MgnEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MgnClient::MgnClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<MgnEndpointProviderBase> endpointProvider, const mgn::MgnClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MgnEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MgnClient::MgnClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MgnEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MgnClient::MgnClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MgnEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MgnClient::MgnClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MgnEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MgnClient::~MgnClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MgnEndpointProviderBase>& MgnClient::accessEndpointProvider() { return m_endpointProvider; }

void MgnClient::init(const mgn::MgnClientConfiguration& config) {
  AWSClient::SetServiceClientName("mgn");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "mgn");
}

void MgnClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MgnClient::InvokeOperationOutcome MgnClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
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

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

ArchiveApplicationOutcome MgnClient::ArchiveApplication(const ArchiveApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ArchiveApplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ArchiveApplicationOutcome(result.GetResultWithOwnership())
                            : ArchiveApplicationOutcome(std::move(result.GetError()));
}

ArchiveWaveOutcome MgnClient::ArchiveWave(const ArchiveWaveRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ArchiveWave");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ArchiveWaveOutcome(result.GetResultWithOwnership()) : ArchiveWaveOutcome(std::move(result.GetError()));
}

AssociateApplicationsOutcome MgnClient::AssociateApplications(const AssociateApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/AssociateApplications");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateApplicationsOutcome(result.GetResultWithOwnership())
                            : AssociateApplicationsOutcome(std::move(result.GetError()));
}

AssociateSourceServersOutcome MgnClient::AssociateSourceServers(const AssociateSourceServersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/AssociateSourceServers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateSourceServersOutcome(result.GetResultWithOwnership())
                            : AssociateSourceServersOutcome(std::move(result.GetError()));
}

ChangeServerLifeCycleStateOutcome MgnClient::ChangeServerLifeCycleState(const ChangeServerLifeCycleStateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ChangeServerLifeCycleState");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ChangeServerLifeCycleStateOutcome(result.GetResultWithOwnership())
                            : ChangeServerLifeCycleStateOutcome(std::move(result.GetError()));
}

CreateApplicationOutcome MgnClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateApplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateApplicationOutcome(result.GetResultWithOwnership())
                            : CreateApplicationOutcome(std::move(result.GetError()));
}

CreateConnectorOutcome MgnClient::CreateConnector(const CreateConnectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateConnector");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConnectorOutcome(result.GetResultWithOwnership())
                            : CreateConnectorOutcome(std::move(result.GetError()));
}

CreateLaunchConfigurationTemplateOutcome MgnClient::CreateLaunchConfigurationTemplate(
    const CreateLaunchConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateLaunchConfigurationTemplate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLaunchConfigurationTemplateOutcome(result.GetResultWithOwnership())
                            : CreateLaunchConfigurationTemplateOutcome(std::move(result.GetError()));
}

CreateNetworkMigrationDefinitionOutcome MgnClient::CreateNetworkMigrationDefinition(
    const CreateNetworkMigrationDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/CreateNetworkMigrationDefinition");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNetworkMigrationDefinitionOutcome(result.GetResultWithOwnership())
                            : CreateNetworkMigrationDefinitionOutcome(std::move(result.GetError()));
}

CreateReplicationConfigurationTemplateOutcome MgnClient::CreateReplicationConfigurationTemplate(
    const CreateReplicationConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateReplicationConfigurationTemplate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateReplicationConfigurationTemplateOutcome(result.GetResultWithOwnership())
                            : CreateReplicationConfigurationTemplateOutcome(std::move(result.GetError()));
}

CreateWaveOutcome MgnClient::CreateWave(const CreateWaveRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateWave");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWaveOutcome(result.GetResultWithOwnership()) : CreateWaveOutcome(std::move(result.GetError()));
}

DeleteApplicationOutcome MgnClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteApplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteApplicationOutcome(result.GetResultWithOwnership())
                            : DeleteApplicationOutcome(std::move(result.GetError()));
}

DeleteConnectorOutcome MgnClient::DeleteConnector(const DeleteConnectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteConnector");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConnectorOutcome(result.GetResultWithOwnership())
                            : DeleteConnectorOutcome(std::move(result.GetError()));
}

DeleteJobOutcome MgnClient::DeleteJob(const DeleteJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteJob");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteJobOutcome(result.GetResultWithOwnership()) : DeleteJobOutcome(std::move(result.GetError()));
}

DeleteLaunchConfigurationTemplateOutcome MgnClient::DeleteLaunchConfigurationTemplate(
    const DeleteLaunchConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteLaunchConfigurationTemplate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLaunchConfigurationTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteLaunchConfigurationTemplateOutcome(std::move(result.GetError()));
}

DeleteNetworkMigrationDefinitionOutcome MgnClient::DeleteNetworkMigrationDefinition(
    const DeleteNetworkMigrationDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/DeleteNetworkMigrationDefinition");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNetworkMigrationDefinitionOutcome(result.GetResultWithOwnership())
                            : DeleteNetworkMigrationDefinitionOutcome(std::move(result.GetError()));
}

DeleteReplicationConfigurationTemplateOutcome MgnClient::DeleteReplicationConfigurationTemplate(
    const DeleteReplicationConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteReplicationConfigurationTemplate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteReplicationConfigurationTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteReplicationConfigurationTemplateOutcome(std::move(result.GetError()));
}

DeleteSourceServerOutcome MgnClient::DeleteSourceServer(const DeleteSourceServerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteSourceServer");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSourceServerOutcome(result.GetResultWithOwnership())
                            : DeleteSourceServerOutcome(std::move(result.GetError()));
}

DeleteVcenterClientOutcome MgnClient::DeleteVcenterClient(const DeleteVcenterClientRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteVcenterClient");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVcenterClientOutcome(result.GetResultWithOwnership())
                            : DeleteVcenterClientOutcome(std::move(result.GetError()));
}

DeleteWaveOutcome MgnClient::DeleteWave(const DeleteWaveRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteWave");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWaveOutcome(result.GetResultWithOwnership()) : DeleteWaveOutcome(std::move(result.GetError()));
}

DescribeJobLogItemsOutcome MgnClient::DescribeJobLogItems(const DescribeJobLogItemsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeJobLogItems");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeJobLogItemsOutcome(result.GetResultWithOwnership())
                            : DescribeJobLogItemsOutcome(std::move(result.GetError()));
}

DescribeJobsOutcome MgnClient::DescribeJobs(const DescribeJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeJobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeJobsOutcome(result.GetResultWithOwnership()) : DescribeJobsOutcome(std::move(result.GetError()));
}

DescribeLaunchConfigurationTemplatesOutcome MgnClient::DescribeLaunchConfigurationTemplates(
    const DescribeLaunchConfigurationTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeLaunchConfigurationTemplates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLaunchConfigurationTemplatesOutcome(result.GetResultWithOwnership())
                            : DescribeLaunchConfigurationTemplatesOutcome(std::move(result.GetError()));
}

DescribeReplicationConfigurationTemplatesOutcome MgnClient::DescribeReplicationConfigurationTemplates(
    const DescribeReplicationConfigurationTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeReplicationConfigurationTemplates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplicationConfigurationTemplatesOutcome(result.GetResultWithOwnership())
                            : DescribeReplicationConfigurationTemplatesOutcome(std::move(result.GetError()));
}

DescribeSourceServersOutcome MgnClient::DescribeSourceServers(const DescribeSourceServersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeSourceServers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSourceServersOutcome(result.GetResultWithOwnership())
                            : DescribeSourceServersOutcome(std::move(result.GetError()));
}

DescribeVcenterClientsOutcome MgnClient::DescribeVcenterClients(const DescribeVcenterClientsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeVcenterClients");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeVcenterClientsOutcome(result.GetResultWithOwnership())
                            : DescribeVcenterClientsOutcome(std::move(result.GetError()));
}

DisassociateApplicationsOutcome MgnClient::DisassociateApplications(const DisassociateApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DisassociateApplications");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateApplicationsOutcome(result.GetResultWithOwnership())
                            : DisassociateApplicationsOutcome(std::move(result.GetError()));
}

DisassociateSourceServersOutcome MgnClient::DisassociateSourceServers(const DisassociateSourceServersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DisassociateSourceServers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateSourceServersOutcome(result.GetResultWithOwnership())
                            : DisassociateSourceServersOutcome(std::move(result.GetError()));
}

DisconnectFromServiceOutcome MgnClient::DisconnectFromService(const DisconnectFromServiceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DisconnectFromService");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisconnectFromServiceOutcome(result.GetResultWithOwnership())
                            : DisconnectFromServiceOutcome(std::move(result.GetError()));
}

FinalizeCutoverOutcome MgnClient::FinalizeCutover(const FinalizeCutoverRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/FinalizeCutover");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FinalizeCutoverOutcome(result.GetResultWithOwnership())
                            : FinalizeCutoverOutcome(std::move(result.GetError()));
}

GetLaunchConfigurationOutcome MgnClient::GetLaunchConfiguration(const GetLaunchConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetLaunchConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLaunchConfigurationOutcome(result.GetResultWithOwnership())
                            : GetLaunchConfigurationOutcome(std::move(result.GetError()));
}

GetNetworkMigrationDefinitionOutcome MgnClient::GetNetworkMigrationDefinition(const GetNetworkMigrationDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/GetNetworkMigrationDefinition");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetNetworkMigrationDefinitionOutcome(result.GetResultWithOwnership())
                            : GetNetworkMigrationDefinitionOutcome(std::move(result.GetError()));
}

GetNetworkMigrationMapperSegmentConstructOutcome MgnClient::GetNetworkMigrationMapperSegmentConstruct(
    const GetNetworkMigrationMapperSegmentConstructRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/GetNetworkMigrationMapperSegmentConstruct");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetNetworkMigrationMapperSegmentConstructOutcome(result.GetResultWithOwnership())
                            : GetNetworkMigrationMapperSegmentConstructOutcome(std::move(result.GetError()));
}

GetReplicationConfigurationOutcome MgnClient::GetReplicationConfiguration(const GetReplicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetReplicationConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetReplicationConfigurationOutcome(result.GetResultWithOwnership())
                            : GetReplicationConfigurationOutcome(std::move(result.GetError()));
}

InitializeServiceOutcome MgnClient::InitializeService(const InitializeServiceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/InitializeService");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? InitializeServiceOutcome(result.GetResultWithOwnership())
                            : InitializeServiceOutcome(std::move(result.GetError()));
}

ListApplicationsOutcome MgnClient::ListApplications(const ListApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListApplications");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListApplicationsOutcome(result.GetResultWithOwnership())
                            : ListApplicationsOutcome(std::move(result.GetError()));
}

ListConnectorsOutcome MgnClient::ListConnectors(const ListConnectorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListConnectors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConnectorsOutcome(result.GetResultWithOwnership()) : ListConnectorsOutcome(std::move(result.GetError()));
}

ListExportErrorsOutcome MgnClient::ListExportErrors(const ListExportErrorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListExportErrors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListExportErrorsOutcome(result.GetResultWithOwnership())
                            : ListExportErrorsOutcome(std::move(result.GetError()));
}

ListExportsOutcome MgnClient::ListExports(const ListExportsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListExports");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListExportsOutcome(result.GetResultWithOwnership()) : ListExportsOutcome(std::move(result.GetError()));
}

ListImportErrorsOutcome MgnClient::ListImportErrors(const ListImportErrorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListImportErrors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListImportErrorsOutcome(result.GetResultWithOwnership())
                            : ListImportErrorsOutcome(std::move(result.GetError()));
}

ListImportFileEnrichmentsOutcome MgnClient::ListImportFileEnrichments(const ListImportFileEnrichmentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListImportFileEnrichments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListImportFileEnrichmentsOutcome(result.GetResultWithOwnership())
                            : ListImportFileEnrichmentsOutcome(std::move(result.GetError()));
}

ListImportsOutcome MgnClient::ListImports(const ListImportsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListImports");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListImportsOutcome(result.GetResultWithOwnership()) : ListImportsOutcome(std::move(result.GetError()));
}

ListManagedAccountsOutcome MgnClient::ListManagedAccounts(const ListManagedAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListManagedAccounts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListManagedAccountsOutcome(result.GetResultWithOwnership())
                            : ListManagedAccountsOutcome(std::move(result.GetError()));
}

ListNetworkMigrationAnalysesOutcome MgnClient::ListNetworkMigrationAnalyses(const ListNetworkMigrationAnalysesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationAnalyses");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNetworkMigrationAnalysesOutcome(result.GetResultWithOwnership())
                            : ListNetworkMigrationAnalysesOutcome(std::move(result.GetError()));
}

ListNetworkMigrationAnalysisResultsOutcome MgnClient::ListNetworkMigrationAnalysisResults(
    const ListNetworkMigrationAnalysisResultsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationAnalysisResults");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNetworkMigrationAnalysisResultsOutcome(result.GetResultWithOwnership())
                            : ListNetworkMigrationAnalysisResultsOutcome(std::move(result.GetError()));
}

ListNetworkMigrationCodeGenerationSegmentsOutcome MgnClient::ListNetworkMigrationCodeGenerationSegments(
    const ListNetworkMigrationCodeGenerationSegmentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationCodeGenerationSegments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNetworkMigrationCodeGenerationSegmentsOutcome(result.GetResultWithOwnership())
                            : ListNetworkMigrationCodeGenerationSegmentsOutcome(std::move(result.GetError()));
}

ListNetworkMigrationCodeGenerationsOutcome MgnClient::ListNetworkMigrationCodeGenerations(
    const ListNetworkMigrationCodeGenerationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationCodeGenerations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNetworkMigrationCodeGenerationsOutcome(result.GetResultWithOwnership())
                            : ListNetworkMigrationCodeGenerationsOutcome(std::move(result.GetError()));
}

ListNetworkMigrationDefinitionsOutcome MgnClient::ListNetworkMigrationDefinitions(
    const ListNetworkMigrationDefinitionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationDefinitions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNetworkMigrationDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListNetworkMigrationDefinitionsOutcome(std::move(result.GetError()));
}

ListNetworkMigrationDeployedStacksOutcome MgnClient::ListNetworkMigrationDeployedStacks(
    const ListNetworkMigrationDeployedStacksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationDeployedStacks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNetworkMigrationDeployedStacksOutcome(result.GetResultWithOwnership())
                            : ListNetworkMigrationDeployedStacksOutcome(std::move(result.GetError()));
}

ListNetworkMigrationDeploymentsOutcome MgnClient::ListNetworkMigrationDeployments(
    const ListNetworkMigrationDeploymentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationDeployments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNetworkMigrationDeploymentsOutcome(result.GetResultWithOwnership())
                            : ListNetworkMigrationDeploymentsOutcome(std::move(result.GetError()));
}

ListNetworkMigrationExecutionsOutcome MgnClient::ListNetworkMigrationExecutions(
    const ListNetworkMigrationExecutionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationExecutions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNetworkMigrationExecutionsOutcome(result.GetResultWithOwnership())
                            : ListNetworkMigrationExecutionsOutcome(std::move(result.GetError()));
}

ListNetworkMigrationMapperSegmentConstructsOutcome MgnClient::ListNetworkMigrationMapperSegmentConstructs(
    const ListNetworkMigrationMapperSegmentConstructsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationMapperSegmentConstructs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNetworkMigrationMapperSegmentConstructsOutcome(result.GetResultWithOwnership())
                            : ListNetworkMigrationMapperSegmentConstructsOutcome(std::move(result.GetError()));
}

ListNetworkMigrationMapperSegmentsOutcome MgnClient::ListNetworkMigrationMapperSegments(
    const ListNetworkMigrationMapperSegmentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationMapperSegments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNetworkMigrationMapperSegmentsOutcome(result.GetResultWithOwnership())
                            : ListNetworkMigrationMapperSegmentsOutcome(std::move(result.GetError()));
}

ListNetworkMigrationMappingUpdatesOutcome MgnClient::ListNetworkMigrationMappingUpdates(
    const ListNetworkMigrationMappingUpdatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationMappingUpdates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNetworkMigrationMappingUpdatesOutcome(result.GetResultWithOwnership())
                            : ListNetworkMigrationMappingUpdatesOutcome(std::move(result.GetError()));
}

ListNetworkMigrationMappingsOutcome MgnClient::ListNetworkMigrationMappings(const ListNetworkMigrationMappingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationMappings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNetworkMigrationMappingsOutcome(result.GetResultWithOwnership())
                            : ListNetworkMigrationMappingsOutcome(std::move(result.GetError()));
}

ListSourceServerActionsOutcome MgnClient::ListSourceServerActions(const ListSourceServerActionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListSourceServerActions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSourceServerActionsOutcome(result.GetResultWithOwnership())
                            : ListSourceServerActionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome MgnClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(
        Aws::Client::AWSError<MgnErrors>(MgnErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTemplateActionsOutcome MgnClient::ListTemplateActions(const ListTemplateActionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTemplateActions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTemplateActionsOutcome(result.GetResultWithOwnership())
                            : ListTemplateActionsOutcome(std::move(result.GetError()));
}

ListWavesOutcome MgnClient::ListWaves(const ListWavesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListWaves");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWavesOutcome(result.GetResultWithOwnership()) : ListWavesOutcome(std::move(result.GetError()));
}

MarkAsArchivedOutcome MgnClient::MarkAsArchived(const MarkAsArchivedRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/MarkAsArchived");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? MarkAsArchivedOutcome(result.GetResultWithOwnership()) : MarkAsArchivedOutcome(std::move(result.GetError()));
}

PauseReplicationOutcome MgnClient::PauseReplication(const PauseReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PauseReplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PauseReplicationOutcome(result.GetResultWithOwnership())
                            : PauseReplicationOutcome(std::move(result.GetError()));
}

PutSourceServerActionOutcome MgnClient::PutSourceServerAction(const PutSourceServerActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PutSourceServerAction");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutSourceServerActionOutcome(result.GetResultWithOwnership())
                            : PutSourceServerActionOutcome(std::move(result.GetError()));
}

PutTemplateActionOutcome MgnClient::PutTemplateAction(const PutTemplateActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PutTemplateAction");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutTemplateActionOutcome(result.GetResultWithOwnership())
                            : PutTemplateActionOutcome(std::move(result.GetError()));
}

RemoveSourceServerActionOutcome MgnClient::RemoveSourceServerAction(const RemoveSourceServerActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/RemoveSourceServerAction");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveSourceServerActionOutcome(result.GetResultWithOwnership())
                            : RemoveSourceServerActionOutcome(std::move(result.GetError()));
}

RemoveTemplateActionOutcome MgnClient::RemoveTemplateAction(const RemoveTemplateActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/RemoveTemplateAction");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveTemplateActionOutcome(result.GetResultWithOwnership())
                            : RemoveTemplateActionOutcome(std::move(result.GetError()));
}

ResumeReplicationOutcome MgnClient::ResumeReplication(const ResumeReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ResumeReplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResumeReplicationOutcome(result.GetResultWithOwnership())
                            : ResumeReplicationOutcome(std::move(result.GetError()));
}

RetryDataReplicationOutcome MgnClient::RetryDataReplication(const RetryDataReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/RetryDataReplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RetryDataReplicationOutcome(result.GetResultWithOwnership())
                            : RetryDataReplicationOutcome(std::move(result.GetError()));
}

StartCutoverOutcome MgnClient::StartCutover(const StartCutoverRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartCutover");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartCutoverOutcome(result.GetResultWithOwnership()) : StartCutoverOutcome(std::move(result.GetError()));
}

StartExportOutcome MgnClient::StartExport(const StartExportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartExport");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartExportOutcome(result.GetResultWithOwnership()) : StartExportOutcome(std::move(result.GetError()));
}

StartImportOutcome MgnClient::StartImport(const StartImportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartImport");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartImportOutcome(result.GetResultWithOwnership()) : StartImportOutcome(std::move(result.GetError()));
}

StartImportFileEnrichmentOutcome MgnClient::StartImportFileEnrichment(const StartImportFileEnrichmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/StartImportFileEnrichment");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartImportFileEnrichmentOutcome(result.GetResultWithOwnership())
                            : StartImportFileEnrichmentOutcome(std::move(result.GetError()));
}

StartNetworkMigrationAnalysisOutcome MgnClient::StartNetworkMigrationAnalysis(const StartNetworkMigrationAnalysisRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/StartNetworkMigrationAnalysis");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartNetworkMigrationAnalysisOutcome(result.GetResultWithOwnership())
                            : StartNetworkMigrationAnalysisOutcome(std::move(result.GetError()));
}

StartNetworkMigrationCodeGenerationOutcome MgnClient::StartNetworkMigrationCodeGeneration(
    const StartNetworkMigrationCodeGenerationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/StartNetworkMigrationCodeGeneration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartNetworkMigrationCodeGenerationOutcome(result.GetResultWithOwnership())
                            : StartNetworkMigrationCodeGenerationOutcome(std::move(result.GetError()));
}

StartNetworkMigrationDeploymentOutcome MgnClient::StartNetworkMigrationDeployment(
    const StartNetworkMigrationDeploymentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/StartNetworkMigrationDeployment");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartNetworkMigrationDeploymentOutcome(result.GetResultWithOwnership())
                            : StartNetworkMigrationDeploymentOutcome(std::move(result.GetError()));
}

StartNetworkMigrationMappingOutcome MgnClient::StartNetworkMigrationMapping(const StartNetworkMigrationMappingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/StartNetworkMigrationMapping");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartNetworkMigrationMappingOutcome(result.GetResultWithOwnership())
                            : StartNetworkMigrationMappingOutcome(std::move(result.GetError()));
}

StartNetworkMigrationMappingUpdateOutcome MgnClient::StartNetworkMigrationMappingUpdate(
    const StartNetworkMigrationMappingUpdateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/StartNetworkMigrationMappingUpdate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartNetworkMigrationMappingUpdateOutcome(result.GetResultWithOwnership())
                            : StartNetworkMigrationMappingUpdateOutcome(std::move(result.GetError()));
}

StartReplicationOutcome MgnClient::StartReplication(const StartReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartReplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartReplicationOutcome(result.GetResultWithOwnership())
                            : StartReplicationOutcome(std::move(result.GetError()));
}

StartTestOutcome MgnClient::StartTest(const StartTestRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartTest");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartTestOutcome(result.GetResultWithOwnership()) : StartTestOutcome(std::move(result.GetError()));
}

StopReplicationOutcome MgnClient::StopReplication(const StopReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopReplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopReplicationOutcome(result.GetResultWithOwnership())
                            : StopReplicationOutcome(std::move(result.GetError()));
}

TagResourceOutcome MgnClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(
        Aws::Client::AWSError<MgnErrors>(MgnErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

TerminateTargetInstancesOutcome MgnClient::TerminateTargetInstances(const TerminateTargetInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/TerminateTargetInstances");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TerminateTargetInstancesOutcome(result.GetResultWithOwnership())
                            : TerminateTargetInstancesOutcome(std::move(result.GetError()));
}

UnarchiveApplicationOutcome MgnClient::UnarchiveApplication(const UnarchiveApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UnarchiveApplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnarchiveApplicationOutcome(result.GetResultWithOwnership())
                            : UnarchiveApplicationOutcome(std::move(result.GetError()));
}

UnarchiveWaveOutcome MgnClient::UnarchiveWave(const UnarchiveWaveRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UnarchiveWave");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnarchiveWaveOutcome(result.GetResultWithOwnership()) : UnarchiveWaveOutcome(std::move(result.GetError()));
}

UntagResourceOutcome MgnClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<MgnErrors>(MgnErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<MgnErrors>(MgnErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateApplicationOutcome MgnClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateApplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateApplicationOutcome(result.GetResultWithOwnership())
                            : UpdateApplicationOutcome(std::move(result.GetError()));
}

UpdateConnectorOutcome MgnClient::UpdateConnector(const UpdateConnectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateConnector");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateConnectorOutcome(result.GetResultWithOwnership())
                            : UpdateConnectorOutcome(std::move(result.GetError()));
}

UpdateLaunchConfigurationOutcome MgnClient::UpdateLaunchConfiguration(const UpdateLaunchConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLaunchConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLaunchConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateLaunchConfigurationOutcome(std::move(result.GetError()));
}

UpdateLaunchConfigurationTemplateOutcome MgnClient::UpdateLaunchConfigurationTemplate(
    const UpdateLaunchConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLaunchConfigurationTemplate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLaunchConfigurationTemplateOutcome(result.GetResultWithOwnership())
                            : UpdateLaunchConfigurationTemplateOutcome(std::move(result.GetError()));
}

UpdateNetworkMigrationDefinitionOutcome MgnClient::UpdateNetworkMigrationDefinition(
    const UpdateNetworkMigrationDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/UpdateNetworkMigrationDefinition");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateNetworkMigrationDefinitionOutcome(result.GetResultWithOwnership())
                            : UpdateNetworkMigrationDefinitionOutcome(std::move(result.GetError()));
}

UpdateNetworkMigrationMapperSegmentOutcome MgnClient::UpdateNetworkMigrationMapperSegment(
    const UpdateNetworkMigrationMapperSegmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/UpdateNetworkMigrationMapperSegment");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateNetworkMigrationMapperSegmentOutcome(result.GetResultWithOwnership())
                            : UpdateNetworkMigrationMapperSegmentOutcome(std::move(result.GetError()));
}

UpdateReplicationConfigurationOutcome MgnClient::UpdateReplicationConfiguration(
    const UpdateReplicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateReplicationConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateReplicationConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateReplicationConfigurationOutcome(std::move(result.GetError()));
}

UpdateReplicationConfigurationTemplateOutcome MgnClient::UpdateReplicationConfigurationTemplate(
    const UpdateReplicationConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateReplicationConfigurationTemplate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateReplicationConfigurationTemplateOutcome(result.GetResultWithOwnership())
                            : UpdateReplicationConfigurationTemplateOutcome(std::move(result.GetError()));
}

UpdateSourceServerOutcome MgnClient::UpdateSourceServer(const UpdateSourceServerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateSourceServer");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSourceServerOutcome(result.GetResultWithOwnership())
                            : UpdateSourceServerOutcome(std::move(result.GetError()));
}

UpdateSourceServerReplicationTypeOutcome MgnClient::UpdateSourceServerReplicationType(
    const UpdateSourceServerReplicationTypeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateSourceServerReplicationType");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSourceServerReplicationTypeOutcome(result.GetResultWithOwnership())
                            : UpdateSourceServerReplicationTypeOutcome(std::move(result.GetError()));
}

UpdateWaveOutcome MgnClient::UpdateWave(const UpdateWaveRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateWave");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWaveOutcome(result.GetResultWithOwnership()) : UpdateWaveOutcome(std::move(result.GetError()));
}
