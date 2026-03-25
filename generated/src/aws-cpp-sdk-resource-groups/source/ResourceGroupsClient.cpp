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
#include <aws/resource-groups/ResourceGroupsClient.h>
#include <aws/resource-groups/ResourceGroupsEndpointProvider.h>
#include <aws/resource-groups/ResourceGroupsErrorMarshaller.h>
#include <aws/resource-groups/model/CancelTagSyncTaskRequest.h>
#include <aws/resource-groups/model/CreateGroupRequest.h>
#include <aws/resource-groups/model/DeleteGroupRequest.h>
#include <aws/resource-groups/model/GetAccountSettingsRequest.h>
#include <aws/resource-groups/model/GetGroupConfigurationRequest.h>
#include <aws/resource-groups/model/GetGroupQueryRequest.h>
#include <aws/resource-groups/model/GetGroupRequest.h>
#include <aws/resource-groups/model/GetTagSyncTaskRequest.h>
#include <aws/resource-groups/model/GetTagsRequest.h>
#include <aws/resource-groups/model/GroupResourcesRequest.h>
#include <aws/resource-groups/model/ListGroupResourcesRequest.h>
#include <aws/resource-groups/model/ListGroupingStatusesRequest.h>
#include <aws/resource-groups/model/ListGroupsRequest.h>
#include <aws/resource-groups/model/ListTagSyncTasksRequest.h>
#include <aws/resource-groups/model/PutGroupConfigurationRequest.h>
#include <aws/resource-groups/model/SearchResourcesRequest.h>
#include <aws/resource-groups/model/StartTagSyncTaskRequest.h>
#include <aws/resource-groups/model/TagRequest.h>
#include <aws/resource-groups/model/UngroupResourcesRequest.h>
#include <aws/resource-groups/model/UntagRequest.h>
#include <aws/resource-groups/model/UpdateAccountSettingsRequest.h>
#include <aws/resource-groups/model/UpdateGroupQueryRequest.h>
#include <aws/resource-groups/model/UpdateGroupRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ResourceGroups;
using namespace Aws::ResourceGroups::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ResourceGroups {
const char SERVICE_NAME[] = "resource-groups";
const char ALLOCATION_TAG[] = "ResourceGroupsClient";
}  // namespace ResourceGroups
}  // namespace Aws
const char* ResourceGroupsClient::GetServiceName() { return SERVICE_NAME; }
const char* ResourceGroupsClient::GetAllocationTag() { return ALLOCATION_TAG; }

ResourceGroupsClient::ResourceGroupsClient(const ResourceGroups::ResourceGroupsClientConfiguration& clientConfiguration,
                                           std::shared_ptr<ResourceGroupsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResourceGroupsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ResourceGroupsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ResourceGroupsClient::ResourceGroupsClient(const AWSCredentials& credentials,
                                           std::shared_ptr<ResourceGroupsEndpointProviderBase> endpointProvider,
                                           const ResourceGroups::ResourceGroupsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResourceGroupsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ResourceGroupsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ResourceGroupsClient::ResourceGroupsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<ResourceGroupsEndpointProviderBase> endpointProvider,
                                           const ResourceGroups::ResourceGroupsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResourceGroupsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ResourceGroupsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ResourceGroupsClient::ResourceGroupsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResourceGroupsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ResourceGroupsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ResourceGroupsClient::ResourceGroupsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResourceGroupsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ResourceGroupsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ResourceGroupsClient::ResourceGroupsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResourceGroupsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ResourceGroupsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ResourceGroupsClient::~ResourceGroupsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ResourceGroupsEndpointProviderBase>& ResourceGroupsClient::accessEndpointProvider() { return m_endpointProvider; }

void ResourceGroupsClient::init(const ResourceGroups::ResourceGroupsClientConfiguration& config) {
  AWSClient::SetServiceClientName("Resource Groups");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "resource-groups");
}

void ResourceGroupsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ResourceGroupsClient::InvokeOperationOutcome ResourceGroupsClient::InvokeServiceOperation(
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

CancelTagSyncTaskOutcome ResourceGroupsClient::CancelTagSyncTask(const CancelTagSyncTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel-tag-sync-task");
  };

  return CancelTagSyncTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGroupOutcome ResourceGroupsClient::CreateGroup(const CreateGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
  };

  return CreateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGroupOutcome ResourceGroupsClient::DeleteGroup(const DeleteGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-group");
  };

  return DeleteGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccountSettingsOutcome ResourceGroupsClient::GetAccountSettings(const GetAccountSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-account-settings");
  };

  return GetAccountSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGroupOutcome ResourceGroupsClient::GetGroup(const GetGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-group");
  };

  return GetGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGroupConfigurationOutcome ResourceGroupsClient::GetGroupConfiguration(const GetGroupConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-group-configuration");
  };

  return GetGroupConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGroupQueryOutcome ResourceGroupsClient::GetGroupQuery(const GetGroupQueryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-group-query");
  };

  return GetGroupQueryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTagSyncTaskOutcome ResourceGroupsClient::GetTagSyncTask(const GetTagSyncTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-tag-sync-task");
  };

  return GetTagSyncTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTagsOutcome ResourceGroupsClient::GetTags(const GetTagsRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTags", "Required field: Arn, is not set");
    return GetTagsOutcome(Aws::Client::AWSError<ResourceGroupsErrors>(ResourceGroupsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return GetTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GroupResourcesOutcome ResourceGroupsClient::GroupResources(const GroupResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/group-resources");
  };

  return GroupResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupResourcesOutcome ResourceGroupsClient::ListGroupResources(const ListGroupResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-group-resources");
  };

  return ListGroupResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupingStatusesOutcome ResourceGroupsClient::ListGroupingStatuses(const ListGroupingStatusesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-grouping-statuses");
  };

  return ListGroupingStatusesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupsOutcome ResourceGroupsClient::ListGroups(const ListGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups-list");
  };

  return ListGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagSyncTasksOutcome ResourceGroupsClient::ListTagSyncTasks(const ListTagSyncTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-tag-sync-tasks");
  };

  return ListTagSyncTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutGroupConfigurationOutcome ResourceGroupsClient::PutGroupConfiguration(const PutGroupConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/put-group-configuration");
  };

  return PutGroupConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchResourcesOutcome ResourceGroupsClient::SearchResources(const SearchResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/search");
  };

  return SearchResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTagSyncTaskOutcome ResourceGroupsClient::StartTagSyncTask(const StartTagSyncTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/start-tag-sync-task");
  };

  return StartTagSyncTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagOutcome ResourceGroupsClient::Tag(const TagRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("Tag", "Required field: Arn, is not set");
    return TagOutcome(Aws::Client::AWSError<ResourceGroupsErrors>(ResourceGroupsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return TagOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UngroupResourcesOutcome ResourceGroupsClient::UngroupResources(const UngroupResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ungroup-resources");
  };

  return UngroupResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagOutcome ResourceGroupsClient::Untag(const UntagRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("Untag", "Required field: Arn, is not set");
    return UntagOutcome(Aws::Client::AWSError<ResourceGroupsErrors>(ResourceGroupsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return UntagOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateAccountSettingsOutcome ResourceGroupsClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-account-settings");
  };

  return UpdateAccountSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGroupOutcome ResourceGroupsClient::UpdateGroup(const UpdateGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-group");
  };

  return UpdateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGroupQueryOutcome ResourceGroupsClient::UpdateGroupQuery(const UpdateGroupQueryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-group-query");
  };

  return UpdateGroupQueryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
