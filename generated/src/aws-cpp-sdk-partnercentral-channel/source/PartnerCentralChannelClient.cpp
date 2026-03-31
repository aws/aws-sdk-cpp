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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptChannelHandshakeOutcome(result.GetResultWithOwnership())
                            : AcceptChannelHandshakeOutcome(std::move(result.GetError()));
}

CancelChannelHandshakeOutcome PartnerCentralChannelClient::CancelChannelHandshake(const CancelChannelHandshakeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelChannelHandshakeOutcome(result.GetResultWithOwnership())
                            : CancelChannelHandshakeOutcome(std::move(result.GetError()));
}

CreateChannelHandshakeOutcome PartnerCentralChannelClient::CreateChannelHandshake(const CreateChannelHandshakeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChannelHandshakeOutcome(result.GetResultWithOwnership())
                            : CreateChannelHandshakeOutcome(std::move(result.GetError()));
}

CreateProgramManagementAccountOutcome PartnerCentralChannelClient::CreateProgramManagementAccount(
    const CreateProgramManagementAccountRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProgramManagementAccountOutcome(result.GetResultWithOwnership())
                            : CreateProgramManagementAccountOutcome(std::move(result.GetError()));
}

CreateRelationshipOutcome PartnerCentralChannelClient::CreateRelationship(const CreateRelationshipRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRelationshipOutcome(result.GetResultWithOwnership())
                            : CreateRelationshipOutcome(std::move(result.GetError()));
}

DeleteProgramManagementAccountOutcome PartnerCentralChannelClient::DeleteProgramManagementAccount(
    const DeleteProgramManagementAccountRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteProgramManagementAccountOutcome(result.GetResultWithOwnership())
                            : DeleteProgramManagementAccountOutcome(std::move(result.GetError()));
}

DeleteRelationshipOutcome PartnerCentralChannelClient::DeleteRelationship(const DeleteRelationshipRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRelationshipOutcome(result.GetResultWithOwnership())
                            : DeleteRelationshipOutcome(std::move(result.GetError()));
}

GetRelationshipOutcome PartnerCentralChannelClient::GetRelationship(const GetRelationshipRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRelationshipOutcome(result.GetResultWithOwnership())
                            : GetRelationshipOutcome(std::move(result.GetError()));
}

ListChannelHandshakesOutcome PartnerCentralChannelClient::ListChannelHandshakes(const ListChannelHandshakesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListChannelHandshakesOutcome(result.GetResultWithOwnership())
                            : ListChannelHandshakesOutcome(std::move(result.GetError()));
}

ListProgramManagementAccountsOutcome PartnerCentralChannelClient::ListProgramManagementAccounts(
    const ListProgramManagementAccountsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListProgramManagementAccountsOutcome(result.GetResultWithOwnership())
                            : ListProgramManagementAccountsOutcome(std::move(result.GetError()));
}

ListRelationshipsOutcome PartnerCentralChannelClient::ListRelationships(const ListRelationshipsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRelationshipsOutcome(result.GetResultWithOwnership())
                            : ListRelationshipsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome PartnerCentralChannelClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

RejectChannelHandshakeOutcome PartnerCentralChannelClient::RejectChannelHandshake(const RejectChannelHandshakeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectChannelHandshakeOutcome(result.GetResultWithOwnership())
                            : RejectChannelHandshakeOutcome(std::move(result.GetError()));
}

TagResourceOutcome PartnerCentralChannelClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome PartnerCentralChannelClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateProgramManagementAccountOutcome PartnerCentralChannelClient::UpdateProgramManagementAccount(
    const UpdateProgramManagementAccountRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProgramManagementAccountOutcome(result.GetResultWithOwnership())
                            : UpdateProgramManagementAccountOutcome(std::move(result.GetError()));
}

UpdateRelationshipOutcome PartnerCentralChannelClient::UpdateRelationship(const UpdateRelationshipRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRelationshipOutcome(result.GetResultWithOwnership())
                            : UpdateRelationshipOutcome(std::move(result.GetError()));
}
