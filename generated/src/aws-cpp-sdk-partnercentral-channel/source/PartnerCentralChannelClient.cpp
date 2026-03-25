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
#include <aws/partnercentral-channel/PartnerCentralChannelClient.h>
#include <aws/partnercentral-channel/PartnerCentralChannelEndpointProvider.h>
#include <aws/partnercentral-channel/PartnerCentralChannelErrorMarshaller.h>
#include <aws/partnercentral-channel/model/AcceptChannelHandshakeRequest.h>
#include <aws/partnercentral-channel/model/CancelChannelHandshakeRequest.h>
#include <aws/partnercentral-channel/model/CreateChannelHandshakeRequest.h>
#include <aws/partnercentral-channel/model/CreateProgramManagementAccountRequest.h>
#include <aws/partnercentral-channel/model/CreateRelationshipRequest.h>
#include <aws/partnercentral-channel/model/DeleteProgramManagementAccountRequest.h>
#include <aws/partnercentral-channel/model/DeleteRelationshipRequest.h>
#include <aws/partnercentral-channel/model/GetRelationshipRequest.h>
#include <aws/partnercentral-channel/model/ListChannelHandshakesRequest.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsRequest.h>
#include <aws/partnercentral-channel/model/ListRelationshipsRequest.h>
#include <aws/partnercentral-channel/model/ListTagsForResourceRequest.h>
#include <aws/partnercentral-channel/model/RejectChannelHandshakeRequest.h>
#include <aws/partnercentral-channel/model/TagResourceRequest.h>
#include <aws/partnercentral-channel/model/UntagResourceRequest.h>
#include <aws/partnercentral-channel/model/UpdateProgramManagementAccountRequest.h>
#include <aws/partnercentral-channel/model/UpdateRelationshipRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PartnerCentralChannel;
using namespace Aws::PartnerCentralChannel::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PartnerCentralChannel {
const char SERVICE_NAME[] = "partnercentral-channel";
const char ALLOCATION_TAG[] = "PartnerCentralChannelClient";
}  // namespace PartnerCentralChannel
}  // namespace Aws
const char* PartnerCentralChannelClient::GetServiceName() { return SERVICE_NAME; }
const char* PartnerCentralChannelClient::GetAllocationTag() { return ALLOCATION_TAG; }

PartnerCentralChannelClient::PartnerCentralChannelClient(
    const PartnerCentralChannel::PartnerCentralChannelClientConfiguration& clientConfiguration,
    std::shared_ptr<PartnerCentralChannelEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralChannelErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralChannelEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralChannelClient::PartnerCentralChannelClient(
    const AWSCredentials& credentials, std::shared_ptr<PartnerCentralChannelEndpointProviderBase> endpointProvider,
    const PartnerCentralChannel::PartnerCentralChannelClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralChannelErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralChannelEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralChannelClient::PartnerCentralChannelClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<PartnerCentralChannelEndpointProviderBase> endpointProvider,
    const PartnerCentralChannel::PartnerCentralChannelClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralChannelErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralChannelEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PartnerCentralChannelClient::PartnerCentralChannelClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralChannelErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralChannelEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralChannelClient::PartnerCentralChannelClient(const AWSCredentials& credentials,
                                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralChannelErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralChannelEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralChannelClient::PartnerCentralChannelClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralChannelErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralChannelEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PartnerCentralChannelClient::~PartnerCentralChannelClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PartnerCentralChannelEndpointProviderBase>& PartnerCentralChannelClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void PartnerCentralChannelClient::init(const PartnerCentralChannel::PartnerCentralChannelClientConfiguration& config) {
  AWSClient::SetServiceClientName("PartnerCentral Channel");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "partnercentral-channel");
}

void PartnerCentralChannelClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PartnerCentralChannelClient::InvokeOperationOutcome PartnerCentralChannelClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
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

AcceptChannelHandshakeOutcome PartnerCentralChannelClient::AcceptChannelHandshake(const AcceptChannelHandshakeRequest& request) const {
  return AcceptChannelHandshakeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelChannelHandshakeOutcome PartnerCentralChannelClient::CancelChannelHandshake(const CancelChannelHandshakeRequest& request) const {
  return CancelChannelHandshakeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateChannelHandshakeOutcome PartnerCentralChannelClient::CreateChannelHandshake(const CreateChannelHandshakeRequest& request) const {
  return CreateChannelHandshakeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProgramManagementAccountOutcome PartnerCentralChannelClient::CreateProgramManagementAccount(
    const CreateProgramManagementAccountRequest& request) const {
  return CreateProgramManagementAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRelationshipOutcome PartnerCentralChannelClient::CreateRelationship(const CreateRelationshipRequest& request) const {
  return CreateRelationshipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProgramManagementAccountOutcome PartnerCentralChannelClient::DeleteProgramManagementAccount(
    const DeleteProgramManagementAccountRequest& request) const {
  return DeleteProgramManagementAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRelationshipOutcome PartnerCentralChannelClient::DeleteRelationship(const DeleteRelationshipRequest& request) const {
  return DeleteRelationshipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRelationshipOutcome PartnerCentralChannelClient::GetRelationship(const GetRelationshipRequest& request) const {
  return GetRelationshipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListChannelHandshakesOutcome PartnerCentralChannelClient::ListChannelHandshakes(const ListChannelHandshakesRequest& request) const {
  return ListChannelHandshakesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProgramManagementAccountsOutcome PartnerCentralChannelClient::ListProgramManagementAccounts(
    const ListProgramManagementAccountsRequest& request) const {
  return ListProgramManagementAccountsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRelationshipsOutcome PartnerCentralChannelClient::ListRelationships(const ListRelationshipsRequest& request) const {
  return ListRelationshipsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome PartnerCentralChannelClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectChannelHandshakeOutcome PartnerCentralChannelClient::RejectChannelHandshake(const RejectChannelHandshakeRequest& request) const {
  return RejectChannelHandshakeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome PartnerCentralChannelClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome PartnerCentralChannelClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProgramManagementAccountOutcome PartnerCentralChannelClient::UpdateProgramManagementAccount(
    const UpdateProgramManagementAccountRequest& request) const {
  return UpdateProgramManagementAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRelationshipOutcome PartnerCentralChannelClient::UpdateRelationship(const UpdateRelationshipRequest& request) const {
  return UpdateRelationshipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
