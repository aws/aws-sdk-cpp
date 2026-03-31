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
#include <aws/securityagent/SecurityAgentClient.h>
#include <aws/securityagent/SecurityAgentEndpointProvider.h>
#include <aws/securityagent/SecurityAgentErrorMarshaller.h>
#include <aws/securityagent/model/AddArtifactRequest.h>
#include <aws/securityagent/model/BatchDeletePentestsRequest.h>
#include <aws/securityagent/model/BatchGetAgentSpacesRequest.h>
#include <aws/securityagent/model/BatchGetArtifactMetadataRequest.h>
#include <aws/securityagent/model/BatchGetFindingsRequest.h>
#include <aws/securityagent/model/BatchGetPentestJobTasksRequest.h>
#include <aws/securityagent/model/BatchGetPentestJobsRequest.h>
#include <aws/securityagent/model/BatchGetPentestsRequest.h>
#include <aws/securityagent/model/BatchGetTargetDomainsRequest.h>
#include <aws/securityagent/model/CreateAgentSpaceRequest.h>
#include <aws/securityagent/model/CreateApplicationRequest.h>
#include <aws/securityagent/model/CreateIntegrationRequest.h>
#include <aws/securityagent/model/CreateMembershipRequest.h>
#include <aws/securityagent/model/CreatePentestRequest.h>
#include <aws/securityagent/model/CreateTargetDomainRequest.h>
#include <aws/securityagent/model/DeleteAgentSpaceRequest.h>
#include <aws/securityagent/model/DeleteApplicationRequest.h>
#include <aws/securityagent/model/DeleteArtifactRequest.h>
#include <aws/securityagent/model/DeleteIntegrationRequest.h>
#include <aws/securityagent/model/DeleteMembershipRequest.h>
#include <aws/securityagent/model/DeleteTargetDomainRequest.h>
#include <aws/securityagent/model/GetApplicationRequest.h>
#include <aws/securityagent/model/GetArtifactRequest.h>
#include <aws/securityagent/model/GetIntegrationRequest.h>
#include <aws/securityagent/model/InitiateProviderRegistrationRequest.h>
#include <aws/securityagent/model/ListAgentSpacesRequest.h>
#include <aws/securityagent/model/ListApplicationsRequest.h>
#include <aws/securityagent/model/ListArtifactsRequest.h>
#include <aws/securityagent/model/ListDiscoveredEndpointsRequest.h>
#include <aws/securityagent/model/ListFindingsRequest.h>
#include <aws/securityagent/model/ListIntegratedResourcesRequest.h>
#include <aws/securityagent/model/ListIntegrationsRequest.h>
#include <aws/securityagent/model/ListMembershipsRequest.h>
#include <aws/securityagent/model/ListPentestJobTasksRequest.h>
#include <aws/securityagent/model/ListPentestJobsForPentestRequest.h>
#include <aws/securityagent/model/ListPentestsRequest.h>
#include <aws/securityagent/model/ListTagsForResourceRequest.h>
#include <aws/securityagent/model/ListTargetDomainsRequest.h>
#include <aws/securityagent/model/StartCodeRemediationRequest.h>
#include <aws/securityagent/model/StartPentestJobRequest.h>
#include <aws/securityagent/model/StopPentestJobRequest.h>
#include <aws/securityagent/model/TagResourceRequest.h>
#include <aws/securityagent/model/UntagResourceRequest.h>
#include <aws/securityagent/model/UpdateAgentSpaceRequest.h>
#include <aws/securityagent/model/UpdateApplicationRequest.h>
#include <aws/securityagent/model/UpdateFindingRequest.h>
#include <aws/securityagent/model/UpdateIntegratedResourcesRequest.h>
#include <aws/securityagent/model/UpdatePentestRequest.h>
#include <aws/securityagent/model/UpdateTargetDomainRequest.h>
#include <aws/securityagent/model/VerifyTargetDomainRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SecurityAgent;
using namespace Aws::SecurityAgent::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SecurityAgent {
const char SERVICE_NAME[] = "securityagent";
const char ALLOCATION_TAG[] = "SecurityAgentClient";
}  // namespace SecurityAgent
}  // namespace Aws
const char* SecurityAgentClient::GetServiceName() { return SERVICE_NAME; }
const char* SecurityAgentClient::GetAllocationTag() { return ALLOCATION_TAG; }

SecurityAgentClient::SecurityAgentClient(const SecurityAgent::SecurityAgentClientConfiguration& clientConfiguration,
                                         std::shared_ptr<SecurityAgentEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityAgentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecurityAgentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityAgentClient::SecurityAgentClient(const AWSCredentials& credentials,
                                         std::shared_ptr<SecurityAgentEndpointProviderBase> endpointProvider,
                                         const SecurityAgent::SecurityAgentClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityAgentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecurityAgentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityAgentClient::SecurityAgentClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<SecurityAgentEndpointProviderBase> endpointProvider,
                                         const SecurityAgent::SecurityAgentClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityAgentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecurityAgentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SecurityAgentClient::SecurityAgentClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityAgentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecurityAgentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityAgentClient::SecurityAgentClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityAgentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecurityAgentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityAgentClient::SecurityAgentClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityAgentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecurityAgentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SecurityAgentClient::~SecurityAgentClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SecurityAgentEndpointProviderBase>& SecurityAgentClient::accessEndpointProvider() { return m_endpointProvider; }

void SecurityAgentClient::init(const SecurityAgent::SecurityAgentClientConfiguration& config) {
  AWSClient::SetServiceClientName("SecurityAgent");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "securityagent");
}

void SecurityAgentClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SecurityAgentClient::InvokeOperationOutcome SecurityAgentClient::InvokeServiceOperation(
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

AddArtifactOutcome SecurityAgentClient::AddArtifact(const AddArtifactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/AddArtifact");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddArtifactOutcome(result.GetResultWithOwnership()) : AddArtifactOutcome(std::move(result.GetError()));
}

BatchDeletePentestsOutcome SecurityAgentClient::BatchDeletePentests(const BatchDeletePentestsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/BatchDeletePentests");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeletePentestsOutcome(result.GetResultWithOwnership())
                            : BatchDeletePentestsOutcome(std::move(result.GetError()));
}

BatchGetAgentSpacesOutcome SecurityAgentClient::BatchGetAgentSpaces(const BatchGetAgentSpacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/BatchGetAgentSpaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetAgentSpacesOutcome(result.GetResultWithOwnership())
                            : BatchGetAgentSpacesOutcome(std::move(result.GetError()));
}

BatchGetArtifactMetadataOutcome SecurityAgentClient::BatchGetArtifactMetadata(const BatchGetArtifactMetadataRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/BatchGetArtifactMetadata");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetArtifactMetadataOutcome(result.GetResultWithOwnership())
                            : BatchGetArtifactMetadataOutcome(std::move(result.GetError()));
}

BatchGetFindingsOutcome SecurityAgentClient::BatchGetFindings(const BatchGetFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/BatchGetFindings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetFindingsOutcome(result.GetResultWithOwnership())
                            : BatchGetFindingsOutcome(std::move(result.GetError()));
}

BatchGetPentestJobTasksOutcome SecurityAgentClient::BatchGetPentestJobTasks(const BatchGetPentestJobTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/BatchGetPentestJobTasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetPentestJobTasksOutcome(result.GetResultWithOwnership())
                            : BatchGetPentestJobTasksOutcome(std::move(result.GetError()));
}

BatchGetPentestJobsOutcome SecurityAgentClient::BatchGetPentestJobs(const BatchGetPentestJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/BatchGetPentestJobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetPentestJobsOutcome(result.GetResultWithOwnership())
                            : BatchGetPentestJobsOutcome(std::move(result.GetError()));
}

BatchGetPentestsOutcome SecurityAgentClient::BatchGetPentests(const BatchGetPentestsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/BatchGetPentests");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetPentestsOutcome(result.GetResultWithOwnership())
                            : BatchGetPentestsOutcome(std::move(result.GetError()));
}

BatchGetTargetDomainsOutcome SecurityAgentClient::BatchGetTargetDomains(const BatchGetTargetDomainsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/BatchGetTargetDomains");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetTargetDomainsOutcome(result.GetResultWithOwnership())
                            : BatchGetTargetDomainsOutcome(std::move(result.GetError()));
}

CreateAgentSpaceOutcome SecurityAgentClient::CreateAgentSpace(const CreateAgentSpaceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateAgentSpace");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAgentSpaceOutcome(result.GetResultWithOwnership())
                            : CreateAgentSpaceOutcome(std::move(result.GetError()));
}

CreateApplicationOutcome SecurityAgentClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateApplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateApplicationOutcome(result.GetResultWithOwnership())
                            : CreateApplicationOutcome(std::move(result.GetError()));
}

CreateIntegrationOutcome SecurityAgentClient::CreateIntegration(const CreateIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateIntegration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIntegrationOutcome(result.GetResultWithOwnership())
                            : CreateIntegrationOutcome(std::move(result.GetError()));
}

CreateMembershipOutcome SecurityAgentClient::CreateMembership(const CreateMembershipRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateMembership");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMembershipOutcome(result.GetResultWithOwnership())
                            : CreateMembershipOutcome(std::move(result.GetError()));
}

CreatePentestOutcome SecurityAgentClient::CreatePentest(const CreatePentestRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreatePentest");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePentestOutcome(result.GetResultWithOwnership()) : CreatePentestOutcome(std::move(result.GetError()));
}

CreateTargetDomainOutcome SecurityAgentClient::CreateTargetDomain(const CreateTargetDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateTargetDomain");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTargetDomainOutcome(result.GetResultWithOwnership())
                            : CreateTargetDomainOutcome(std::move(result.GetError()));
}

DeleteAgentSpaceOutcome SecurityAgentClient::DeleteAgentSpace(const DeleteAgentSpaceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteAgentSpace");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAgentSpaceOutcome(result.GetResultWithOwnership())
                            : DeleteAgentSpaceOutcome(std::move(result.GetError()));
}

DeleteApplicationOutcome SecurityAgentClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteApplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteApplicationOutcome(result.GetResultWithOwnership())
                            : DeleteApplicationOutcome(std::move(result.GetError()));
}

DeleteArtifactOutcome SecurityAgentClient::DeleteArtifact(const DeleteArtifactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteArtifact");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteArtifactOutcome(result.GetResultWithOwnership()) : DeleteArtifactOutcome(std::move(result.GetError()));
}

DeleteIntegrationOutcome SecurityAgentClient::DeleteIntegration(const DeleteIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteIntegration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIntegrationOutcome(result.GetResultWithOwnership())
                            : DeleteIntegrationOutcome(std::move(result.GetError()));
}

DeleteMembershipOutcome SecurityAgentClient::DeleteMembership(const DeleteMembershipRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteMembership");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMembershipOutcome(result.GetResultWithOwnership())
                            : DeleteMembershipOutcome(std::move(result.GetError()));
}

DeleteTargetDomainOutcome SecurityAgentClient::DeleteTargetDomain(const DeleteTargetDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteTargetDomain");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTargetDomainOutcome(result.GetResultWithOwnership())
                            : DeleteTargetDomainOutcome(std::move(result.GetError()));
}

GetApplicationOutcome SecurityAgentClient::GetApplication(const GetApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetApplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetApplicationOutcome(result.GetResultWithOwnership()) : GetApplicationOutcome(std::move(result.GetError()));
}

GetArtifactOutcome SecurityAgentClient::GetArtifact(const GetArtifactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetArtifact");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetArtifactOutcome(result.GetResultWithOwnership()) : GetArtifactOutcome(std::move(result.GetError()));
}

GetIntegrationOutcome SecurityAgentClient::GetIntegration(const GetIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetIntegration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIntegrationOutcome(result.GetResultWithOwnership()) : GetIntegrationOutcome(std::move(result.GetError()));
}

InitiateProviderRegistrationOutcome SecurityAgentClient::InitiateProviderRegistration(
    const InitiateProviderRegistrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/oauth2/provider/register");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? InitiateProviderRegistrationOutcome(result.GetResultWithOwnership())
                            : InitiateProviderRegistrationOutcome(std::move(result.GetError()));
}

ListAgentSpacesOutcome SecurityAgentClient::ListAgentSpaces(const ListAgentSpacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListAgentSpaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgentSpacesOutcome(result.GetResultWithOwnership())
                            : ListAgentSpacesOutcome(std::move(result.GetError()));
}

ListApplicationsOutcome SecurityAgentClient::ListApplications(const ListApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListApplications");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListApplicationsOutcome(result.GetResultWithOwnership())
                            : ListApplicationsOutcome(std::move(result.GetError()));
}

ListArtifactsOutcome SecurityAgentClient::ListArtifacts(const ListArtifactsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListArtifacts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListArtifactsOutcome(result.GetResultWithOwnership()) : ListArtifactsOutcome(std::move(result.GetError()));
}

ListDiscoveredEndpointsOutcome SecurityAgentClient::ListDiscoveredEndpoints(const ListDiscoveredEndpointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListDiscoveredEndpoints");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDiscoveredEndpointsOutcome(result.GetResultWithOwnership())
                            : ListDiscoveredEndpointsOutcome(std::move(result.GetError()));
}

ListFindingsOutcome SecurityAgentClient::ListFindings(const ListFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListFindings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFindingsOutcome(result.GetResultWithOwnership()) : ListFindingsOutcome(std::move(result.GetError()));
}

ListIntegratedResourcesOutcome SecurityAgentClient::ListIntegratedResources(const ListIntegratedResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListIntegratedResources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIntegratedResourcesOutcome(result.GetResultWithOwnership())
                            : ListIntegratedResourcesOutcome(std::move(result.GetError()));
}

ListIntegrationsOutcome SecurityAgentClient::ListIntegrations(const ListIntegrationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListIntegrations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIntegrationsOutcome(result.GetResultWithOwnership())
                            : ListIntegrationsOutcome(std::move(result.GetError()));
}

ListMembershipsOutcome SecurityAgentClient::ListMemberships(const ListMembershipsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListMemberships");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMembershipsOutcome(result.GetResultWithOwnership())
                            : ListMembershipsOutcome(std::move(result.GetError()));
}

ListPentestJobTasksOutcome SecurityAgentClient::ListPentestJobTasks(const ListPentestJobTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListPentestJobTasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPentestJobTasksOutcome(result.GetResultWithOwnership())
                            : ListPentestJobTasksOutcome(std::move(result.GetError()));
}

ListPentestJobsForPentestOutcome SecurityAgentClient::ListPentestJobsForPentest(const ListPentestJobsForPentestRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListPentestJobsForPentest");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPentestJobsForPentestOutcome(result.GetResultWithOwnership())
                            : ListPentestJobsForPentestOutcome(std::move(result.GetError()));
}

ListPentestsOutcome SecurityAgentClient::ListPentests(const ListPentestsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListPentests");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPentestsOutcome(result.GetResultWithOwnership()) : ListPentestsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome SecurityAgentClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SecurityAgentErrors>(
        SecurityAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

ListTargetDomainsOutcome SecurityAgentClient::ListTargetDomains(const ListTargetDomainsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTargetDomains");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTargetDomainsOutcome(result.GetResultWithOwnership())
                            : ListTargetDomainsOutcome(std::move(result.GetError()));
}

StartCodeRemediationOutcome SecurityAgentClient::StartCodeRemediation(const StartCodeRemediationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartCodeRemediation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartCodeRemediationOutcome(result.GetResultWithOwnership())
                            : StartCodeRemediationOutcome(std::move(result.GetError()));
}

StartPentestJobOutcome SecurityAgentClient::StartPentestJob(const StartPentestJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartPentestJob");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartPentestJobOutcome(result.GetResultWithOwnership())
                            : StartPentestJobOutcome(std::move(result.GetError()));
}

StopPentestJobOutcome SecurityAgentClient::StopPentestJob(const StopPentestJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopPentestJob");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopPentestJobOutcome(result.GetResultWithOwnership()) : StopPentestJobOutcome(std::move(result.GetError()));
}

TagResourceOutcome SecurityAgentClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SecurityAgentErrors>(SecurityAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome SecurityAgentClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SecurityAgentErrors>(SecurityAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SecurityAgentErrors>(SecurityAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAgentSpaceOutcome SecurityAgentClient::UpdateAgentSpace(const UpdateAgentSpaceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateAgentSpace");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAgentSpaceOutcome(result.GetResultWithOwnership())
                            : UpdateAgentSpaceOutcome(std::move(result.GetError()));
}

UpdateApplicationOutcome SecurityAgentClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateApplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateApplicationOutcome(result.GetResultWithOwnership())
                            : UpdateApplicationOutcome(std::move(result.GetError()));
}

UpdateFindingOutcome SecurityAgentClient::UpdateFinding(const UpdateFindingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateFinding");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFindingOutcome(result.GetResultWithOwnership()) : UpdateFindingOutcome(std::move(result.GetError()));
}

UpdateIntegratedResourcesOutcome SecurityAgentClient::UpdateIntegratedResources(const UpdateIntegratedResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateIntegratedResources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateIntegratedResourcesOutcome(result.GetResultWithOwnership())
                            : UpdateIntegratedResourcesOutcome(std::move(result.GetError()));
}

UpdatePentestOutcome SecurityAgentClient::UpdatePentest(const UpdatePentestRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdatePentest");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePentestOutcome(result.GetResultWithOwnership()) : UpdatePentestOutcome(std::move(result.GetError()));
}

UpdateTargetDomainOutcome SecurityAgentClient::UpdateTargetDomain(const UpdateTargetDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateTargetDomain");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTargetDomainOutcome(result.GetResultWithOwnership())
                            : UpdateTargetDomainOutcome(std::move(result.GetError()));
}

VerifyTargetDomainOutcome SecurityAgentClient::VerifyTargetDomain(const VerifyTargetDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/VerifyTargetDomain");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? VerifyTargetDomainOutcome(result.GetResultWithOwnership())
                            : VerifyTargetDomainOutcome(std::move(result.GetError()));
}
