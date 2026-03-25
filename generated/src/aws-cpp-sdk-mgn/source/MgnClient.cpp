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

  return ArchiveApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ArchiveWaveOutcome MgnClient::ArchiveWave(const ArchiveWaveRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ArchiveWave");
  };

  return ArchiveWaveOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateApplicationsOutcome MgnClient::AssociateApplications(const AssociateApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/AssociateApplications");
  };

  return AssociateApplicationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateSourceServersOutcome MgnClient::AssociateSourceServers(const AssociateSourceServersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/AssociateSourceServers");
  };

  return AssociateSourceServersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ChangeServerLifeCycleStateOutcome MgnClient::ChangeServerLifeCycleState(const ChangeServerLifeCycleStateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ChangeServerLifeCycleState");
  };

  return ChangeServerLifeCycleStateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApplicationOutcome MgnClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateApplication");
  };

  return CreateApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectorOutcome MgnClient::CreateConnector(const CreateConnectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateConnector");
  };

  return CreateConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLaunchConfigurationTemplateOutcome MgnClient::CreateLaunchConfigurationTemplate(
    const CreateLaunchConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateLaunchConfigurationTemplate");
  };

  return CreateLaunchConfigurationTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNetworkMigrationDefinitionOutcome MgnClient::CreateNetworkMigrationDefinition(
    const CreateNetworkMigrationDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/CreateNetworkMigrationDefinition");
  };

  return CreateNetworkMigrationDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReplicationConfigurationTemplateOutcome MgnClient::CreateReplicationConfigurationTemplate(
    const CreateReplicationConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateReplicationConfigurationTemplate");
  };

  return CreateReplicationConfigurationTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWaveOutcome MgnClient::CreateWave(const CreateWaveRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateWave");
  };

  return CreateWaveOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationOutcome MgnClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteApplication");
  };

  return DeleteApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConnectorOutcome MgnClient::DeleteConnector(const DeleteConnectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteConnector");
  };

  return DeleteConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteJobOutcome MgnClient::DeleteJob(const DeleteJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteJob");
  };

  return DeleteJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLaunchConfigurationTemplateOutcome MgnClient::DeleteLaunchConfigurationTemplate(
    const DeleteLaunchConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteLaunchConfigurationTemplate");
  };

  return DeleteLaunchConfigurationTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteNetworkMigrationDefinitionOutcome MgnClient::DeleteNetworkMigrationDefinition(
    const DeleteNetworkMigrationDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/DeleteNetworkMigrationDefinition");
  };

  return DeleteNetworkMigrationDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteReplicationConfigurationTemplateOutcome MgnClient::DeleteReplicationConfigurationTemplate(
    const DeleteReplicationConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteReplicationConfigurationTemplate");
  };

  return DeleteReplicationConfigurationTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSourceServerOutcome MgnClient::DeleteSourceServer(const DeleteSourceServerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteSourceServer");
  };

  return DeleteSourceServerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVcenterClientOutcome MgnClient::DeleteVcenterClient(const DeleteVcenterClientRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteVcenterClient");
  };

  return DeleteVcenterClientOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWaveOutcome MgnClient::DeleteWave(const DeleteWaveRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteWave");
  };

  return DeleteWaveOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeJobLogItemsOutcome MgnClient::DescribeJobLogItems(const DescribeJobLogItemsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeJobLogItems");
  };

  return DescribeJobLogItemsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeJobsOutcome MgnClient::DescribeJobs(const DescribeJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeJobs");
  };

  return DescribeJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLaunchConfigurationTemplatesOutcome MgnClient::DescribeLaunchConfigurationTemplates(
    const DescribeLaunchConfigurationTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeLaunchConfigurationTemplates");
  };

  return DescribeLaunchConfigurationTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplicationConfigurationTemplatesOutcome MgnClient::DescribeReplicationConfigurationTemplates(
    const DescribeReplicationConfigurationTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeReplicationConfigurationTemplates");
  };

  return DescribeReplicationConfigurationTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSourceServersOutcome MgnClient::DescribeSourceServers(const DescribeSourceServersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeSourceServers");
  };

  return DescribeSourceServersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVcenterClientsOutcome MgnClient::DescribeVcenterClients(const DescribeVcenterClientsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeVcenterClients");
  };

  return DescribeVcenterClientsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DisassociateApplicationsOutcome MgnClient::DisassociateApplications(const DisassociateApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DisassociateApplications");
  };

  return DisassociateApplicationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateSourceServersOutcome MgnClient::DisassociateSourceServers(const DisassociateSourceServersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DisassociateSourceServers");
  };

  return DisassociateSourceServersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisconnectFromServiceOutcome MgnClient::DisconnectFromService(const DisconnectFromServiceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DisconnectFromService");
  };

  return DisconnectFromServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

FinalizeCutoverOutcome MgnClient::FinalizeCutover(const FinalizeCutoverRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/FinalizeCutover");
  };

  return FinalizeCutoverOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLaunchConfigurationOutcome MgnClient::GetLaunchConfiguration(const GetLaunchConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetLaunchConfiguration");
  };

  return GetLaunchConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetNetworkMigrationDefinitionOutcome MgnClient::GetNetworkMigrationDefinition(const GetNetworkMigrationDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/GetNetworkMigrationDefinition");
  };

  return GetNetworkMigrationDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetNetworkMigrationMapperSegmentConstructOutcome MgnClient::GetNetworkMigrationMapperSegmentConstruct(
    const GetNetworkMigrationMapperSegmentConstructRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/GetNetworkMigrationMapperSegmentConstruct");
  };

  return GetNetworkMigrationMapperSegmentConstructOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetReplicationConfigurationOutcome MgnClient::GetReplicationConfiguration(const GetReplicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetReplicationConfiguration");
  };

  return GetReplicationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

InitializeServiceOutcome MgnClient::InitializeService(const InitializeServiceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/InitializeService");
  };

  return InitializeServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationsOutcome MgnClient::ListApplications(const ListApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListApplications");
  };

  return ListApplicationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConnectorsOutcome MgnClient::ListConnectors(const ListConnectorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListConnectors");
  };

  return ListConnectorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExportErrorsOutcome MgnClient::ListExportErrors(const ListExportErrorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListExportErrors");
  };

  return ListExportErrorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExportsOutcome MgnClient::ListExports(const ListExportsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListExports");
  };

  return ListExportsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImportErrorsOutcome MgnClient::ListImportErrors(const ListImportErrorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListImportErrors");
  };

  return ListImportErrorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImportFileEnrichmentsOutcome MgnClient::ListImportFileEnrichments(const ListImportFileEnrichmentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListImportFileEnrichments");
  };

  return ListImportFileEnrichmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImportsOutcome MgnClient::ListImports(const ListImportsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListImports");
  };

  return ListImportsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListManagedAccountsOutcome MgnClient::ListManagedAccounts(const ListManagedAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListManagedAccounts");
  };

  return ListManagedAccountsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNetworkMigrationAnalysesOutcome MgnClient::ListNetworkMigrationAnalyses(const ListNetworkMigrationAnalysesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationAnalyses");
  };

  return ListNetworkMigrationAnalysesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNetworkMigrationAnalysisResultsOutcome MgnClient::ListNetworkMigrationAnalysisResults(
    const ListNetworkMigrationAnalysisResultsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationAnalysisResults");
  };

  return ListNetworkMigrationAnalysisResultsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNetworkMigrationCodeGenerationSegmentsOutcome MgnClient::ListNetworkMigrationCodeGenerationSegments(
    const ListNetworkMigrationCodeGenerationSegmentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationCodeGenerationSegments");
  };

  return ListNetworkMigrationCodeGenerationSegmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNetworkMigrationCodeGenerationsOutcome MgnClient::ListNetworkMigrationCodeGenerations(
    const ListNetworkMigrationCodeGenerationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationCodeGenerations");
  };

  return ListNetworkMigrationCodeGenerationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNetworkMigrationDefinitionsOutcome MgnClient::ListNetworkMigrationDefinitions(
    const ListNetworkMigrationDefinitionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationDefinitions");
  };

  return ListNetworkMigrationDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNetworkMigrationDeployedStacksOutcome MgnClient::ListNetworkMigrationDeployedStacks(
    const ListNetworkMigrationDeployedStacksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationDeployedStacks");
  };

  return ListNetworkMigrationDeployedStacksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNetworkMigrationDeploymentsOutcome MgnClient::ListNetworkMigrationDeployments(
    const ListNetworkMigrationDeploymentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationDeployments");
  };

  return ListNetworkMigrationDeploymentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNetworkMigrationExecutionsOutcome MgnClient::ListNetworkMigrationExecutions(
    const ListNetworkMigrationExecutionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationExecutions");
  };

  return ListNetworkMigrationExecutionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNetworkMigrationMapperSegmentConstructsOutcome MgnClient::ListNetworkMigrationMapperSegmentConstructs(
    const ListNetworkMigrationMapperSegmentConstructsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationMapperSegmentConstructs");
  };

  return ListNetworkMigrationMapperSegmentConstructsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNetworkMigrationMapperSegmentsOutcome MgnClient::ListNetworkMigrationMapperSegments(
    const ListNetworkMigrationMapperSegmentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationMapperSegments");
  };

  return ListNetworkMigrationMapperSegmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNetworkMigrationMappingUpdatesOutcome MgnClient::ListNetworkMigrationMappingUpdates(
    const ListNetworkMigrationMappingUpdatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationMappingUpdates");
  };

  return ListNetworkMigrationMappingUpdatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNetworkMigrationMappingsOutcome MgnClient::ListNetworkMigrationMappings(const ListNetworkMigrationMappingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/ListNetworkMigrationMappings");
  };

  return ListNetworkMigrationMappingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSourceServerActionsOutcome MgnClient::ListSourceServerActions(const ListSourceServerActionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListSourceServerActions");
  };

  return ListSourceServerActionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTemplateActionsOutcome MgnClient::ListTemplateActions(const ListTemplateActionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTemplateActions");
  };

  return ListTemplateActionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWavesOutcome MgnClient::ListWaves(const ListWavesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListWaves");
  };

  return ListWavesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

MarkAsArchivedOutcome MgnClient::MarkAsArchived(const MarkAsArchivedRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/MarkAsArchived");
  };

  return MarkAsArchivedOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PauseReplicationOutcome MgnClient::PauseReplication(const PauseReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PauseReplication");
  };

  return PauseReplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutSourceServerActionOutcome MgnClient::PutSourceServerAction(const PutSourceServerActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PutSourceServerAction");
  };

  return PutSourceServerActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutTemplateActionOutcome MgnClient::PutTemplateAction(const PutTemplateActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PutTemplateAction");
  };

  return PutTemplateActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveSourceServerActionOutcome MgnClient::RemoveSourceServerAction(const RemoveSourceServerActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/RemoveSourceServerAction");
  };

  return RemoveSourceServerActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTemplateActionOutcome MgnClient::RemoveTemplateAction(const RemoveTemplateActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/RemoveTemplateAction");
  };

  return RemoveTemplateActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ResumeReplicationOutcome MgnClient::ResumeReplication(const ResumeReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ResumeReplication");
  };

  return ResumeReplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RetryDataReplicationOutcome MgnClient::RetryDataReplication(const RetryDataReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/RetryDataReplication");
  };

  return RetryDataReplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartCutoverOutcome MgnClient::StartCutover(const StartCutoverRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartCutover");
  };

  return StartCutoverOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartExportOutcome MgnClient::StartExport(const StartExportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartExport");
  };

  return StartExportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartImportOutcome MgnClient::StartImport(const StartImportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartImport");
  };

  return StartImportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartImportFileEnrichmentOutcome MgnClient::StartImportFileEnrichment(const StartImportFileEnrichmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/StartImportFileEnrichment");
  };

  return StartImportFileEnrichmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartNetworkMigrationAnalysisOutcome MgnClient::StartNetworkMigrationAnalysis(const StartNetworkMigrationAnalysisRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/StartNetworkMigrationAnalysis");
  };

  return StartNetworkMigrationAnalysisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartNetworkMigrationCodeGenerationOutcome MgnClient::StartNetworkMigrationCodeGeneration(
    const StartNetworkMigrationCodeGenerationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/StartNetworkMigrationCodeGeneration");
  };

  return StartNetworkMigrationCodeGenerationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartNetworkMigrationDeploymentOutcome MgnClient::StartNetworkMigrationDeployment(
    const StartNetworkMigrationDeploymentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/StartNetworkMigrationDeployment");
  };

  return StartNetworkMigrationDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartNetworkMigrationMappingOutcome MgnClient::StartNetworkMigrationMapping(const StartNetworkMigrationMappingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/StartNetworkMigrationMapping");
  };

  return StartNetworkMigrationMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartNetworkMigrationMappingUpdateOutcome MgnClient::StartNetworkMigrationMappingUpdate(
    const StartNetworkMigrationMappingUpdateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/StartNetworkMigrationMappingUpdate");
  };

  return StartNetworkMigrationMappingUpdateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartReplicationOutcome MgnClient::StartReplication(const StartReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartReplication");
  };

  return StartReplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTestOutcome MgnClient::StartTest(const StartTestRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartTest");
  };

  return StartTestOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopReplicationOutcome MgnClient::StopReplication(const StopReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopReplication");
  };

  return StopReplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateTargetInstancesOutcome MgnClient::TerminateTargetInstances(const TerminateTargetInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/TerminateTargetInstances");
  };

  return TerminateTargetInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UnarchiveApplicationOutcome MgnClient::UnarchiveApplication(const UnarchiveApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UnarchiveApplication");
  };

  return UnarchiveApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UnarchiveWaveOutcome MgnClient::UnarchiveWave(const UnarchiveWaveRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UnarchiveWave");
  };

  return UnarchiveWaveOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateApplicationOutcome MgnClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateApplication");
  };

  return UpdateApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConnectorOutcome MgnClient::UpdateConnector(const UpdateConnectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateConnector");
  };

  return UpdateConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLaunchConfigurationOutcome MgnClient::UpdateLaunchConfiguration(const UpdateLaunchConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLaunchConfiguration");
  };

  return UpdateLaunchConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLaunchConfigurationTemplateOutcome MgnClient::UpdateLaunchConfigurationTemplate(
    const UpdateLaunchConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLaunchConfigurationTemplate");
  };

  return UpdateLaunchConfigurationTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNetworkMigrationDefinitionOutcome MgnClient::UpdateNetworkMigrationDefinition(
    const UpdateNetworkMigrationDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/UpdateNetworkMigrationDefinition");
  };

  return UpdateNetworkMigrationDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNetworkMigrationMapperSegmentOutcome MgnClient::UpdateNetworkMigrationMapperSegment(
    const UpdateNetworkMigrationMapperSegmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-migration/UpdateNetworkMigrationMapperSegment");
  };

  return UpdateNetworkMigrationMapperSegmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateReplicationConfigurationOutcome MgnClient::UpdateReplicationConfiguration(
    const UpdateReplicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateReplicationConfiguration");
  };

  return UpdateReplicationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateReplicationConfigurationTemplateOutcome MgnClient::UpdateReplicationConfigurationTemplate(
    const UpdateReplicationConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateReplicationConfigurationTemplate");
  };

  return UpdateReplicationConfigurationTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSourceServerOutcome MgnClient::UpdateSourceServer(const UpdateSourceServerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateSourceServer");
  };

  return UpdateSourceServerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSourceServerReplicationTypeOutcome MgnClient::UpdateSourceServerReplicationType(
    const UpdateSourceServerReplicationTypeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateSourceServerReplicationType");
  };

  return UpdateSourceServerReplicationTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWaveOutcome MgnClient::UpdateWave(const UpdateWaveRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateWave");
  };

  return UpdateWaveOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
