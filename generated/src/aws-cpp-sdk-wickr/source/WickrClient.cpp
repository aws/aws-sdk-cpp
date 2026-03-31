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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchCreateUserOutcome(result.GetResultWithOwnership())
                            : BatchCreateUserOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteUserOutcome(result.GetResultWithOwnership())
                            : BatchDeleteUserOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchLookupUserUnameOutcome(result.GetResultWithOwnership())
                            : BatchLookupUserUnameOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? BatchReinviteUserOutcome(result.GetResultWithOwnership())
                            : BatchReinviteUserOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? BatchResetDevicesForUserOutcome(result.GetResultWithOwnership())
                            : BatchResetDevicesForUserOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? BatchToggleUserSuspendStatusOutcome(result.GetResultWithOwnership())
                            : BatchToggleUserSuspendStatusOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBotOutcome(result.GetResultWithOwnership()) : CreateBotOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataRetentionBotOutcome(result.GetResultWithOwnership())
                            : CreateDataRetentionBotOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataRetentionBotChallengeOutcome(result.GetResultWithOwnership())
                            : CreateDataRetentionBotChallengeOutcome(std::move(result.GetError()));
}

CreateNetworkOutcome WickrClient::CreateNetwork(const CreateNetworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNetworkOutcome(result.GetResultWithOwnership()) : CreateNetworkOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSecurityGroupOutcome(result.GetResultWithOwnership())
                            : CreateSecurityGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBotOutcome(result.GetResultWithOwnership()) : DeleteBotOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataRetentionBotOutcome(result.GetResultWithOwnership())
                            : DeleteDataRetentionBotOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteNetworkOutcome(result.GetResultWithOwnership()) : DeleteNetworkOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSecurityGroupOutcome(result.GetResultWithOwnership())
                            : DeleteSecurityGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBotOutcome(result.GetResultWithOwnership()) : GetBotOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBotsCountOutcome(result.GetResultWithOwnership()) : GetBotsCountOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataRetentionBotOutcome(result.GetResultWithOwnership())
                            : GetDataRetentionBotOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetGuestUserHistoryCountOutcome(result.GetResultWithOwnership())
                            : GetGuestUserHistoryCountOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetNetworkOutcome(result.GetResultWithOwnership()) : GetNetworkOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetNetworkSettingsOutcome(result.GetResultWithOwnership())
                            : GetNetworkSettingsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOidcInfoOutcome(result.GetResultWithOwnership()) : GetOidcInfoOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOpentdfConfigOutcome(result.GetResultWithOwnership())
                            : GetOpentdfConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSecurityGroupOutcome(result.GetResultWithOwnership())
                            : GetSecurityGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetUserOutcome(result.GetResultWithOwnership()) : GetUserOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetUsersCountOutcome(result.GetResultWithOwnership()) : GetUsersCountOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBlockedGuestUsersOutcome(result.GetResultWithOwnership())
                            : ListBlockedGuestUsersOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBotsOutcome(result.GetResultWithOwnership()) : ListBotsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDevicesForUserOutcome(result.GetResultWithOwnership())
                            : ListDevicesForUserOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListGuestUsersOutcome(result.GetResultWithOwnership()) : ListGuestUsersOutcome(std::move(result.GetError()));
}

ListNetworksOutcome WickrClient::ListNetworks(const ListNetworksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListNetworksOutcome(result.GetResultWithOwnership()) : ListNetworksOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSecurityGroupUsersOutcome(result.GetResultWithOwnership())
                            : ListSecurityGroupUsersOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSecurityGroupsOutcome(result.GetResultWithOwnership())
                            : ListSecurityGroupsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListUsersOutcome(result.GetResultWithOwnership()) : ListUsersOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterOidcConfigOutcome(result.GetResultWithOwnership())
                            : RegisterOidcConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterOidcConfigTestOutcome(result.GetResultWithOwnership())
                            : RegisterOidcConfigTestOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterOpentdfConfigOutcome(result.GetResultWithOwnership())
                            : RegisterOpentdfConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateBotOutcome(result.GetResultWithOwnership()) : UpdateBotOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateDataRetentionOutcome(result.GetResultWithOwnership())
                            : UpdateDataRetentionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateGuestUserOutcome(result.GetResultWithOwnership())
                            : UpdateGuestUserOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateNetworkOutcome(result.GetResultWithOwnership()) : UpdateNetworkOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateNetworkSettingsOutcome(result.GetResultWithOwnership())
                            : UpdateNetworkSettingsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateSecurityGroupOutcome(result.GetResultWithOwnership())
                            : UpdateSecurityGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateUserOutcome(result.GetResultWithOwnership()) : UpdateUserOutcome(std::move(result.GetError()));
}
