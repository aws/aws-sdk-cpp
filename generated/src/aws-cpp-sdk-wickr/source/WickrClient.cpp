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
#include <aws/wickr/WickrClient.h>
#include <aws/wickr/WickrEndpointProvider.h>
#include <aws/wickr/WickrErrorMarshaller.h>
#include <aws/wickr/model/BatchCreateUserRequest.h>
#include <aws/wickr/model/BatchDeleteUserRequest.h>
#include <aws/wickr/model/BatchLookupUserUnameRequest.h>
#include <aws/wickr/model/BatchReinviteUserRequest.h>
#include <aws/wickr/model/BatchResetDevicesForUserRequest.h>
#include <aws/wickr/model/BatchToggleUserSuspendStatusRequest.h>
#include <aws/wickr/model/CreateBotRequest.h>
#include <aws/wickr/model/CreateDataRetentionBotChallengeRequest.h>
#include <aws/wickr/model/CreateDataRetentionBotRequest.h>
#include <aws/wickr/model/CreateNetworkRequest.h>
#include <aws/wickr/model/CreateSecurityGroupRequest.h>
#include <aws/wickr/model/DeleteBotRequest.h>
#include <aws/wickr/model/DeleteDataRetentionBotRequest.h>
#include <aws/wickr/model/DeleteNetworkRequest.h>
#include <aws/wickr/model/DeleteSecurityGroupRequest.h>
#include <aws/wickr/model/GetBotRequest.h>
#include <aws/wickr/model/GetBotsCountRequest.h>
#include <aws/wickr/model/GetDataRetentionBotRequest.h>
#include <aws/wickr/model/GetGuestUserHistoryCountRequest.h>
#include <aws/wickr/model/GetNetworkRequest.h>
#include <aws/wickr/model/GetNetworkSettingsRequest.h>
#include <aws/wickr/model/GetOidcInfoRequest.h>
#include <aws/wickr/model/GetOpentdfConfigRequest.h>
#include <aws/wickr/model/GetSecurityGroupRequest.h>
#include <aws/wickr/model/GetUserRequest.h>
#include <aws/wickr/model/GetUsersCountRequest.h>
#include <aws/wickr/model/ListBlockedGuestUsersRequest.h>
#include <aws/wickr/model/ListBotsRequest.h>
#include <aws/wickr/model/ListDevicesForUserRequest.h>
#include <aws/wickr/model/ListGuestUsersRequest.h>
#include <aws/wickr/model/ListNetworksRequest.h>
#include <aws/wickr/model/ListSecurityGroupUsersRequest.h>
#include <aws/wickr/model/ListSecurityGroupsRequest.h>
#include <aws/wickr/model/ListUsersRequest.h>
#include <aws/wickr/model/RegisterOidcConfigRequest.h>
#include <aws/wickr/model/RegisterOidcConfigTestRequest.h>
#include <aws/wickr/model/RegisterOpentdfConfigRequest.h>
#include <aws/wickr/model/UpdateBotRequest.h>
#include <aws/wickr/model/UpdateDataRetentionRequest.h>
#include <aws/wickr/model/UpdateGuestUserRequest.h>
#include <aws/wickr/model/UpdateNetworkRequest.h>
#include <aws/wickr/model/UpdateNetworkSettingsRequest.h>
#include <aws/wickr/model/UpdateSecurityGroupRequest.h>
#include <aws/wickr/model/UpdateUserRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Wickr;
using namespace Aws::Wickr::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Wickr {
const char SERVICE_NAME[] = "wickr";
const char ALLOCATION_TAG[] = "WickrClient";
}  // namespace Wickr
}  // namespace Aws
const char* WickrClient::GetServiceName() { return SERVICE_NAME; }
const char* WickrClient::GetAllocationTag() { return ALLOCATION_TAG; }

WickrClient::WickrClient(const Wickr::WickrClientConfiguration& clientConfiguration,
                         std::shared_ptr<WickrEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WickrErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WickrEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WickrClient::WickrClient(const AWSCredentials& credentials, std::shared_ptr<WickrEndpointProviderBase> endpointProvider,
                         const Wickr::WickrClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WickrErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WickrEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WickrClient::WickrClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<WickrEndpointProviderBase> endpointProvider,
                         const Wickr::WickrClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WickrErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WickrEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
WickrClient::WickrClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WickrErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WickrEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WickrClient::WickrClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WickrErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WickrEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WickrClient::WickrClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WickrErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WickrEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
WickrClient::~WickrClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<WickrEndpointProviderBase>& WickrClient::accessEndpointProvider() { return m_endpointProvider; }

void WickrClient::init(const Wickr::WickrClientConfiguration& config) {
  AWSClient::SetServiceClientName("Wickr");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "wickr");
}

void WickrClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
WickrClient::InvokeOperationOutcome WickrClient::InvokeServiceOperation(
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

BatchCreateUserOutcome WickrClient::BatchCreateUser(const BatchCreateUserRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateUser", "Required field: NetworkId, is not set");
    return BatchCreateUserOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  };

  return BatchCreateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteUserOutcome WickrClient::BatchDeleteUser(const BatchDeleteUserRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteUser", "Required field: NetworkId, is not set");
    return BatchDeleteUserOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/batch-delete");
  };

  return BatchDeleteUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchLookupUserUnameOutcome WickrClient::BatchLookupUserUname(const BatchLookupUserUnameRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchLookupUserUname", "Required field: NetworkId, is not set");
    return BatchLookupUserUnameOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/uname-lookup");
  };

  return BatchLookupUserUnameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchReinviteUserOutcome WickrClient::BatchReinviteUser(const BatchReinviteUserRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchReinviteUser", "Required field: NetworkId, is not set");
    return BatchReinviteUserOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/re-invite");
  };

  return BatchReinviteUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

BatchResetDevicesForUserOutcome WickrClient::BatchResetDevicesForUser(const BatchResetDevicesForUserRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchResetDevicesForUser", "Required field: NetworkId, is not set");
    return BatchResetDevicesForUserOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [NetworkId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchResetDevicesForUser", "Required field: UserId, is not set");
    return BatchResetDevicesForUserOutcome(
        Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices");
  };

  return BatchResetDevicesForUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

BatchToggleUserSuspendStatusOutcome WickrClient::BatchToggleUserSuspendStatus(const BatchToggleUserSuspendStatusRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchToggleUserSuspendStatus", "Required field: NetworkId, is not set");
    return BatchToggleUserSuspendStatusOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [NetworkId]", false));
  }
  if (!request.SuspendHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchToggleUserSuspendStatus", "Required field: Suspend, is not set");
    return BatchToggleUserSuspendStatusOutcome(
        Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Suspend]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/toggleSuspend");
  };

  return BatchToggleUserSuspendStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

CreateBotOutcome WickrClient::CreateBot(const CreateBotRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBot", "Required field: NetworkId, is not set");
    return CreateBotOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots");
  };

  return CreateBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataRetentionBotOutcome WickrClient::CreateDataRetentionBot(const CreateDataRetentionBotRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataRetentionBot", "Required field: NetworkId, is not set");
    return CreateDataRetentionBotOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-retention-bots");
  };

  return CreateDataRetentionBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataRetentionBotChallengeOutcome WickrClient::CreateDataRetentionBotChallenge(
    const CreateDataRetentionBotChallengeRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataRetentionBotChallenge", "Required field: NetworkId, is not set");
    return CreateDataRetentionBotChallengeOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-retention-bots/challenge");
  };

  return CreateDataRetentionBotChallengeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNetworkOutcome WickrClient::CreateNetwork(const CreateNetworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks");
  };

  return CreateNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSecurityGroupOutcome WickrClient::CreateSecurityGroup(const CreateSecurityGroupRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSecurityGroup", "Required field: NetworkId, is not set");
    return CreateSecurityGroupOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-groups");
  };

  return CreateSecurityGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBotOutcome WickrClient::DeleteBot(const DeleteBotRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBot", "Required field: NetworkId, is not set");
    return DeleteBotOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [NetworkId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBot", "Required field: BotId, is not set");
    return DeleteBotOutcome(
        Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  };

  return DeleteBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataRetentionBotOutcome WickrClient::DeleteDataRetentionBot(const DeleteDataRetentionBotRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataRetentionBot", "Required field: NetworkId, is not set");
    return DeleteDataRetentionBotOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-retention-bots");
  };

  return DeleteDataRetentionBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteNetworkOutcome WickrClient::DeleteNetwork(const DeleteNetworkRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNetwork", "Required field: NetworkId, is not set");
    return DeleteNetworkOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
  };

  return DeleteNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSecurityGroupOutcome WickrClient::DeleteSecurityGroup(const DeleteSecurityGroupRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSecurityGroup", "Required field: NetworkId, is not set");
    return DeleteSecurityGroupOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [NetworkId]", false));
  }
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSecurityGroup", "Required field: GroupId, is not set");
    return DeleteSecurityGroupOutcome(
        Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  };

  return DeleteSecurityGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetBotOutcome WickrClient::GetBot(const GetBotRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBot", "Required field: NetworkId, is not set");
    return GetBotOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                            "Missing required field [NetworkId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBot", "Required field: BotId, is not set");
    return GetBotOutcome(
        Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  };

  return GetBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBotsCountOutcome WickrClient::GetBotsCount(const GetBotsCountRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBotsCount", "Required field: NetworkId, is not set");
    return GetBotsCountOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/count");
  };

  return GetBotsCountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDataRetentionBotOutcome WickrClient::GetDataRetentionBot(const GetDataRetentionBotRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataRetentionBot", "Required field: NetworkId, is not set");
    return GetDataRetentionBotOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-retention-bots");
  };

  return GetDataRetentionBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGuestUserHistoryCountOutcome WickrClient::GetGuestUserHistoryCount(const GetGuestUserHistoryCountRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGuestUserHistoryCount", "Required field: NetworkId, is not set");
    return GetGuestUserHistoryCountOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/guest-users/count");
  };

  return GetGuestUserHistoryCountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetNetworkOutcome WickrClient::GetNetwork(const GetNetworkRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNetwork", "Required field: NetworkId, is not set");
    return GetNetworkOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
  };

  return GetNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetNetworkSettingsOutcome WickrClient::GetNetworkSettings(const GetNetworkSettingsRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNetworkSettings", "Required field: NetworkId, is not set");
    return GetNetworkSettingsOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return GetNetworkSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetOidcInfoOutcome WickrClient::GetOidcInfo(const GetOidcInfoRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOidcInfo", "Required field: NetworkId, is not set");
    return GetOidcInfoOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/oidc");
  };

  return GetOidcInfoOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetOpentdfConfigOutcome WickrClient::GetOpentdfConfig(const GetOpentdfConfigRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOpentdfConfig", "Required field: NetworkId, is not set");
    return GetOpentdfConfigOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tdf");
  };

  return GetOpentdfConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSecurityGroupOutcome WickrClient::GetSecurityGroup(const GetSecurityGroupRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSecurityGroup", "Required field: NetworkId, is not set");
    return GetSecurityGroupOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [NetworkId]", false));
  }
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSecurityGroup", "Required field: GroupId, is not set");
    return GetSecurityGroupOutcome(
        Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  };

  return GetSecurityGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUserOutcome WickrClient::GetUser(const GetUserRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUser", "Required field: NetworkId, is not set");
    return GetUserOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                             "Missing required field [NetworkId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUser", "Required field: UserId, is not set");
    return GetUserOutcome(
        Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  };

  return GetUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUsersCountOutcome WickrClient::GetUsersCount(const GetUsersCountRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUsersCount", "Required field: NetworkId, is not set");
    return GetUsersCountOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/count");
  };

  return GetUsersCountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBlockedGuestUsersOutcome WickrClient::ListBlockedGuestUsers(const ListBlockedGuestUsersRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBlockedGuestUsers", "Required field: NetworkId, is not set");
    return ListBlockedGuestUsersOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/guest-users/blocklist");
  };

  return ListBlockedGuestUsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBotsOutcome WickrClient::ListBots(const ListBotsRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBots", "Required field: NetworkId, is not set");
    return ListBotsOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                              "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots");
  };

  return ListBotsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDevicesForUserOutcome WickrClient::ListDevicesForUser(const ListDevicesForUserRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDevicesForUser", "Required field: NetworkId, is not set");
    return ListDevicesForUserOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [NetworkId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDevicesForUser", "Required field: UserId, is not set");
    return ListDevicesForUserOutcome(
        Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices");
  };

  return ListDevicesForUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListGuestUsersOutcome WickrClient::ListGuestUsers(const ListGuestUsersRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGuestUsers", "Required field: NetworkId, is not set");
    return ListGuestUsersOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/guest-users");
  };

  return ListGuestUsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListNetworksOutcome WickrClient::ListNetworks(const ListNetworksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks");
  };

  return ListNetworksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSecurityGroupUsersOutcome WickrClient::ListSecurityGroupUsers(const ListSecurityGroupUsersRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSecurityGroupUsers", "Required field: NetworkId, is not set");
    return ListSecurityGroupUsersOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [NetworkId]", false));
  }
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSecurityGroupUsers", "Required field: GroupId, is not set");
    return ListSecurityGroupUsersOutcome(
        Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  };

  return ListSecurityGroupUsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSecurityGroupsOutcome WickrClient::ListSecurityGroups(const ListSecurityGroupsRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSecurityGroups", "Required field: NetworkId, is not set");
    return ListSecurityGroupsOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-groups");
  };

  return ListSecurityGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListUsersOutcome WickrClient::ListUsers(const ListUsersRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: NetworkId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  };

  return ListUsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

RegisterOidcConfigOutcome WickrClient::RegisterOidcConfig(const RegisterOidcConfigRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterOidcConfig", "Required field: NetworkId, is not set");
    return RegisterOidcConfigOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/oidc/save");
  };

  return RegisterOidcConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterOidcConfigTestOutcome WickrClient::RegisterOidcConfigTest(const RegisterOidcConfigTestRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterOidcConfigTest", "Required field: NetworkId, is not set");
    return RegisterOidcConfigTestOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/oidc/test");
  };

  return RegisterOidcConfigTestOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterOpentdfConfigOutcome WickrClient::RegisterOpentdfConfig(const RegisterOpentdfConfigRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterOpentdfConfig", "Required field: NetworkId, is not set");
    return RegisterOpentdfConfigOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tdf");
  };

  return RegisterOpentdfConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBotOutcome WickrClient::UpdateBot(const UpdateBotRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBot", "Required field: NetworkId, is not set");
    return UpdateBotOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [NetworkId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBot", "Required field: BotId, is not set");
    return UpdateBotOutcome(
        Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  };

  return UpdateBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDataRetentionOutcome WickrClient::UpdateDataRetention(const UpdateDataRetentionRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataRetention", "Required field: NetworkId, is not set");
    return UpdateDataRetentionOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-retention-bots");
  };

  return UpdateDataRetentionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateGuestUserOutcome WickrClient::UpdateGuestUser(const UpdateGuestUserRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGuestUser", "Required field: NetworkId, is not set");
    return UpdateGuestUserOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [NetworkId]", false));
  }
  if (!request.UsernameHashHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGuestUser", "Required field: UsernameHash, is not set");
    return UpdateGuestUserOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [UsernameHash]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/guest-users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsernameHash());
  };

  return UpdateGuestUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateNetworkOutcome WickrClient::UpdateNetwork(const UpdateNetworkRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNetwork", "Required field: NetworkId, is not set");
    return UpdateNetworkOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
  };

  return UpdateNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateNetworkSettingsOutcome WickrClient::UpdateNetworkSettings(const UpdateNetworkSettingsRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNetworkSettings", "Required field: NetworkId, is not set");
    return UpdateNetworkSettingsOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return UpdateNetworkSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateSecurityGroupOutcome WickrClient::UpdateSecurityGroup(const UpdateSecurityGroupRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSecurityGroup", "Required field: NetworkId, is not set");
    return UpdateSecurityGroupOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [NetworkId]", false));
  }
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSecurityGroup", "Required field: GroupId, is not set");
    return UpdateSecurityGroupOutcome(
        Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  };

  return UpdateSecurityGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateUserOutcome WickrClient::UpdateUser(const UpdateUserRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: NetworkId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<WickrErrors>(WickrErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  };

  return UpdateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
