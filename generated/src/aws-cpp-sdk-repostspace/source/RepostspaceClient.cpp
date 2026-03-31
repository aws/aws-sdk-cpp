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
#include <aws/repostspace/RepostspaceClient.h>
#include <aws/repostspace/RepostspaceEndpointProvider.h>
#include <aws/repostspace/RepostspaceErrorMarshaller.h>
#include <aws/repostspace/model/BatchAddChannelRoleToAccessorsRequest.h>
#include <aws/repostspace/model/BatchAddRoleRequest.h>
#include <aws/repostspace/model/BatchRemoveChannelRoleFromAccessorsRequest.h>
#include <aws/repostspace/model/BatchRemoveRoleRequest.h>
#include <aws/repostspace/model/CreateChannelRequest.h>
#include <aws/repostspace/model/CreateSpaceRequest.h>
#include <aws/repostspace/model/DeleteSpaceRequest.h>
#include <aws/repostspace/model/DeregisterAdminRequest.h>
#include <aws/repostspace/model/GetChannelRequest.h>
#include <aws/repostspace/model/GetSpaceRequest.h>
#include <aws/repostspace/model/ListChannelsRequest.h>
#include <aws/repostspace/model/ListSpacesRequest.h>
#include <aws/repostspace/model/ListTagsForResourceRequest.h>
#include <aws/repostspace/model/RegisterAdminRequest.h>
#include <aws/repostspace/model/SendInvitesRequest.h>
#include <aws/repostspace/model/TagResourceRequest.h>
#include <aws/repostspace/model/UntagResourceRequest.h>
#include <aws/repostspace/model/UpdateChannelRequest.h>
#include <aws/repostspace/model/UpdateSpaceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::repostspace;
using namespace Aws::repostspace::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace repostspace {
const char SERVICE_NAME[] = "repostspace";
const char ALLOCATION_TAG[] = "RepostspaceClient";
}  // namespace repostspace
}  // namespace Aws
const char* RepostspaceClient::GetServiceName() { return SERVICE_NAME; }
const char* RepostspaceClient::GetAllocationTag() { return ALLOCATION_TAG; }

RepostspaceClient::RepostspaceClient(const repostspace::RepostspaceClientConfiguration& clientConfiguration,
                                     std::shared_ptr<RepostspaceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RepostspaceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RepostspaceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RepostspaceClient::RepostspaceClient(const AWSCredentials& credentials, std::shared_ptr<RepostspaceEndpointProviderBase> endpointProvider,
                                     const repostspace::RepostspaceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RepostspaceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RepostspaceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RepostspaceClient::RepostspaceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<RepostspaceEndpointProviderBase> endpointProvider,
                                     const repostspace::RepostspaceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RepostspaceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RepostspaceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
RepostspaceClient::RepostspaceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RepostspaceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RepostspaceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RepostspaceClient::RepostspaceClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RepostspaceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RepostspaceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RepostspaceClient::RepostspaceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RepostspaceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RepostspaceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
RepostspaceClient::~RepostspaceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<RepostspaceEndpointProviderBase>& RepostspaceClient::accessEndpointProvider() { return m_endpointProvider; }

void RepostspaceClient::init(const repostspace::RepostspaceClientConfiguration& config) {
  AWSClient::SetServiceClientName("repostspace");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "repostspace");
}

void RepostspaceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
RepostspaceClient::InvokeOperationOutcome RepostspaceClient::InvokeServiceOperation(
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

BatchAddChannelRoleToAccessorsOutcome RepostspaceClient::BatchAddChannelRoleToAccessors(
    const BatchAddChannelRoleToAccessorsRequest& request) const {
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchAddChannelRoleToAccessors", "Required field: SpaceId, is not set");
    return BatchAddChannelRoleToAccessorsOutcome(Aws::Client::AWSError<RepostspaceErrors>(
        RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceId]", false));
  }
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchAddChannelRoleToAccessors", "Required field: ChannelId, is not set");
    return BatchAddChannelRoleToAccessorsOutcome(Aws::Client::AWSError<RepostspaceErrors>(
        RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/roles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchAddChannelRoleToAccessorsOutcome(result.GetResultWithOwnership())
                            : BatchAddChannelRoleToAccessorsOutcome(std::move(result.GetError()));
}

BatchAddRoleOutcome RepostspaceClient::BatchAddRole(const BatchAddRoleRequest& request) const {
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchAddRole", "Required field: SpaceId, is not set");
    return BatchAddRoleOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [SpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/roles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchAddRoleOutcome(result.GetResultWithOwnership()) : BatchAddRoleOutcome(std::move(result.GetError()));
}

BatchRemoveChannelRoleFromAccessorsOutcome RepostspaceClient::BatchRemoveChannelRoleFromAccessors(
    const BatchRemoveChannelRoleFromAccessorsRequest& request) const {
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchRemoveChannelRoleFromAccessors", "Required field: SpaceId, is not set");
    return BatchRemoveChannelRoleFromAccessorsOutcome(Aws::Client::AWSError<RepostspaceErrors>(
        RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceId]", false));
  }
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchRemoveChannelRoleFromAccessors", "Required field: ChannelId, is not set");
    return BatchRemoveChannelRoleFromAccessorsOutcome(Aws::Client::AWSError<RepostspaceErrors>(
        RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/roles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? BatchRemoveChannelRoleFromAccessorsOutcome(result.GetResultWithOwnership())
                            : BatchRemoveChannelRoleFromAccessorsOutcome(std::move(result.GetError()));
}

BatchRemoveRoleOutcome RepostspaceClient::BatchRemoveRole(const BatchRemoveRoleRequest& request) const {
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchRemoveRole", "Required field: SpaceId, is not set");
    return BatchRemoveRoleOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/roles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? BatchRemoveRoleOutcome(result.GetResultWithOwnership())
                            : BatchRemoveRoleOutcome(std::move(result.GetError()));
}

CreateChannelOutcome RepostspaceClient::CreateChannel(const CreateChannelRequest& request) const {
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChannel", "Required field: SpaceId, is not set");
    return CreateChannelOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChannelOutcome(result.GetResultWithOwnership()) : CreateChannelOutcome(std::move(result.GetError()));
}

CreateSpaceOutcome RepostspaceClient::CreateSpace(const CreateSpaceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSpaceOutcome(result.GetResultWithOwnership()) : CreateSpaceOutcome(std::move(result.GetError()));
}

DeleteSpaceOutcome RepostspaceClient::DeleteSpace(const DeleteSpaceRequest& request) const {
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSpace", "Required field: SpaceId, is not set");
    return DeleteSpaceOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [SpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSpaceOutcome(result.GetResultWithOwnership()) : DeleteSpaceOutcome(std::move(result.GetError()));
}

DeregisterAdminOutcome RepostspaceClient::DeregisterAdmin(const DeregisterAdminRequest& request) const {
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterAdmin", "Required field: SpaceId, is not set");
    return DeregisterAdminOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SpaceId]", false));
  }
  if (!request.AdminIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterAdmin", "Required field: AdminId, is not set");
    return DeregisterAdminOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AdminId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/admins/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAdminId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeregisterAdminOutcome(result.GetResultWithOwnership())
                            : DeregisterAdminOutcome(std::move(result.GetError()));
}

GetChannelOutcome RepostspaceClient::GetChannel(const GetChannelRequest& request) const {
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannel", "Required field: SpaceId, is not set");
    return GetChannelOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [SpaceId]", false));
  }
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannel", "Required field: ChannelId, is not set");
    return GetChannelOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetChannelOutcome(result.GetResultWithOwnership()) : GetChannelOutcome(std::move(result.GetError()));
}

GetSpaceOutcome RepostspaceClient::GetSpace(const GetSpaceRequest& request) const {
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSpace", "Required field: SpaceId, is not set");
    return GetSpaceOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [SpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSpaceOutcome(result.GetResultWithOwnership()) : GetSpaceOutcome(std::move(result.GetError()));
}

ListChannelsOutcome RepostspaceClient::ListChannels(const ListChannelsRequest& request) const {
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannels", "Required field: SpaceId, is not set");
    return ListChannelsOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [SpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelsOutcome(result.GetResultWithOwnership()) : ListChannelsOutcome(std::move(result.GetError()));
}

ListSpacesOutcome RepostspaceClient::ListSpaces(const ListSpacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSpacesOutcome(result.GetResultWithOwnership()) : ListSpacesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome RepostspaceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceArn]", false));
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

RegisterAdminOutcome RepostspaceClient::RegisterAdmin(const RegisterAdminRequest& request) const {
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterAdmin", "Required field: SpaceId, is not set");
    return RegisterAdminOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SpaceId]", false));
  }
  if (!request.AdminIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterAdmin", "Required field: AdminId, is not set");
    return RegisterAdminOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AdminId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/admins/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAdminId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterAdminOutcome(result.GetResultWithOwnership()) : RegisterAdminOutcome(std::move(result.GetError()));
}

SendInvitesOutcome RepostspaceClient::SendInvites(const SendInvitesRequest& request) const {
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendInvites", "Required field: SpaceId, is not set");
    return SendInvitesOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [SpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/invite");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendInvitesOutcome(result.GetResultWithOwnership()) : SendInvitesOutcome(std::move(result.GetError()));
}

TagResourceOutcome RepostspaceClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UntagResourceOutcome RepostspaceClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UpdateChannelOutcome RepostspaceClient::UpdateChannel(const UpdateChannelRequest& request) const {
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: SpaceId, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SpaceId]", false));
  }
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelId, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateChannelOutcome(result.GetResultWithOwnership()) : UpdateChannelOutcome(std::move(result.GetError()));
}

UpdateSpaceOutcome RepostspaceClient::UpdateSpace(const UpdateSpaceRequest& request) const {
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSpace", "Required field: SpaceId, is not set");
    return UpdateSpaceOutcome(Aws::Client::AWSError<RepostspaceErrors>(RepostspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [SpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSpaceOutcome(result.GetResultWithOwnership()) : UpdateSpaceOutcome(std::move(result.GetError()));
}
