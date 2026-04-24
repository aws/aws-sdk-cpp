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
#include <aws/resource-explorer-2/ResourceExplorer2Client.h>
#include <aws/resource-explorer-2/ResourceExplorer2EndpointProvider.h>
#include <aws/resource-explorer-2/ResourceExplorer2ErrorMarshaller.h>
#include <aws/resource-explorer-2/model/AssociateDefaultViewRequest.h>
#include <aws/resource-explorer-2/model/BatchGetViewRequest.h>
#include <aws/resource-explorer-2/model/CreateIndexRequest.h>
#include <aws/resource-explorer-2/model/CreateResourceExplorerSetupRequest.h>
#include <aws/resource-explorer-2/model/CreateViewRequest.h>
#include <aws/resource-explorer-2/model/DeleteIndexRequest.h>
#include <aws/resource-explorer-2/model/DeleteResourceExplorerSetupRequest.h>
#include <aws/resource-explorer-2/model/DeleteViewRequest.h>
#include <aws/resource-explorer-2/model/DisassociateDefaultViewRequest.h>
#include <aws/resource-explorer-2/model/GetAccountLevelServiceConfigurationRequest.h>
#include <aws/resource-explorer-2/model/GetDefaultViewRequest.h>
#include <aws/resource-explorer-2/model/GetIndexRequest.h>
#include <aws/resource-explorer-2/model/GetManagedViewRequest.h>
#include <aws/resource-explorer-2/model/GetResourceExplorerSetupRequest.h>
#include <aws/resource-explorer-2/model/GetServiceIndexRequest.h>
#include <aws/resource-explorer-2/model/GetServiceViewRequest.h>
#include <aws/resource-explorer-2/model/GetViewRequest.h>
#include <aws/resource-explorer-2/model/ListIndexesForMembersRequest.h>
#include <aws/resource-explorer-2/model/ListIndexesRequest.h>
#include <aws/resource-explorer-2/model/ListManagedViewsRequest.h>
#include <aws/resource-explorer-2/model/ListResourcesRequest.h>
#include <aws/resource-explorer-2/model/ListServiceIndexesRequest.h>
#include <aws/resource-explorer-2/model/ListServiceViewsRequest.h>
#include <aws/resource-explorer-2/model/ListStreamingAccessForServicesRequest.h>
#include <aws/resource-explorer-2/model/ListSupportedResourceTypesRequest.h>
#include <aws/resource-explorer-2/model/ListTagsForResourceRequest.h>
#include <aws/resource-explorer-2/model/ListViewsRequest.h>
#include <aws/resource-explorer-2/model/SearchRequest.h>
#include <aws/resource-explorer-2/model/TagResourceRequest.h>
#include <aws/resource-explorer-2/model/UntagResourceRequest.h>
#include <aws/resource-explorer-2/model/UpdateIndexTypeRequest.h>
#include <aws/resource-explorer-2/model/UpdateViewRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ResourceExplorer2;
using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ResourceExplorer2 {
const char SERVICE_NAME[] = "resource-explorer-2";
const char ALLOCATION_TAG[] = "ResourceExplorer2Client";
}  // namespace ResourceExplorer2
}  // namespace Aws
const char* ResourceExplorer2Client::GetServiceName() { return SERVICE_NAME; }
const char* ResourceExplorer2Client::GetAllocationTag() { return ALLOCATION_TAG; }

ResourceExplorer2Client::ResourceExplorer2Client(const ResourceExplorer2::ResourceExplorer2ClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<ResourceExplorer2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResourceExplorer2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ResourceExplorer2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ResourceExplorer2Client::ResourceExplorer2Client(const AWSCredentials& credentials,
                                                 std::shared_ptr<ResourceExplorer2EndpointProviderBase> endpointProvider,
                                                 const ResourceExplorer2::ResourceExplorer2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResourceExplorer2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ResourceExplorer2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ResourceExplorer2Client::ResourceExplorer2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<ResourceExplorer2EndpointProviderBase> endpointProvider,
                                                 const ResourceExplorer2::ResourceExplorer2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResourceExplorer2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ResourceExplorer2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ResourceExplorer2Client::ResourceExplorer2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResourceExplorer2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ResourceExplorer2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ResourceExplorer2Client::ResourceExplorer2Client(const AWSCredentials& credentials,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResourceExplorer2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ResourceExplorer2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ResourceExplorer2Client::ResourceExplorer2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResourceExplorer2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ResourceExplorer2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ResourceExplorer2Client::~ResourceExplorer2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ResourceExplorer2EndpointProviderBase>& ResourceExplorer2Client::accessEndpointProvider() { return m_endpointProvider; }

void ResourceExplorer2Client::init(const ResourceExplorer2::ResourceExplorer2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("Resource Explorer 2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "resource-explorer-2");
}

void ResourceExplorer2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ResourceExplorer2Client::InvokeOperationOutcome ResourceExplorer2Client::InvokeServiceOperation(
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

AssociateDefaultViewOutcome ResourceExplorer2Client::AssociateDefaultView(const AssociateDefaultViewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/AssociateDefaultView");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateDefaultViewOutcome(result.GetResultWithOwnership())
                            : AssociateDefaultViewOutcome(std::move(result.GetError()));
}

BatchGetViewOutcome ResourceExplorer2Client::BatchGetView(const BatchGetViewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/BatchGetView");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetViewOutcome(result.GetResultWithOwnership()) : BatchGetViewOutcome(std::move(result.GetError()));
}

CreateIndexOutcome ResourceExplorer2Client::CreateIndex(const CreateIndexRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateIndex");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIndexOutcome(result.GetResultWithOwnership()) : CreateIndexOutcome(std::move(result.GetError()));
}

CreateResourceExplorerSetupOutcome ResourceExplorer2Client::CreateResourceExplorerSetup(
    const CreateResourceExplorerSetupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateResourceExplorerSetup");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateResourceExplorerSetupOutcome(result.GetResultWithOwnership())
                            : CreateResourceExplorerSetupOutcome(std::move(result.GetError()));
}

CreateViewOutcome ResourceExplorer2Client::CreateView(const CreateViewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateView");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateViewOutcome(result.GetResultWithOwnership()) : CreateViewOutcome(std::move(result.GetError()));
}

DeleteIndexOutcome ResourceExplorer2Client::DeleteIndex(const DeleteIndexRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteIndex");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIndexOutcome(result.GetResultWithOwnership()) : DeleteIndexOutcome(std::move(result.GetError()));
}

DeleteResourceExplorerSetupOutcome ResourceExplorer2Client::DeleteResourceExplorerSetup(
    const DeleteResourceExplorerSetupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteResourceExplorerSetup");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourceExplorerSetupOutcome(result.GetResultWithOwnership())
                            : DeleteResourceExplorerSetupOutcome(std::move(result.GetError()));
}

DeleteViewOutcome ResourceExplorer2Client::DeleteView(const DeleteViewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteView");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteViewOutcome(result.GetResultWithOwnership()) : DeleteViewOutcome(std::move(result.GetError()));
}

DisassociateDefaultViewOutcome ResourceExplorer2Client::DisassociateDefaultView(const DisassociateDefaultViewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DisassociateDefaultView");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateDefaultViewOutcome(result.GetResultWithOwnership())
                            : DisassociateDefaultViewOutcome(std::move(result.GetError()));
}

GetAccountLevelServiceConfigurationOutcome ResourceExplorer2Client::GetAccountLevelServiceConfiguration(
    const GetAccountLevelServiceConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetAccountLevelServiceConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccountLevelServiceConfigurationOutcome(result.GetResultWithOwnership())
                            : GetAccountLevelServiceConfigurationOutcome(std::move(result.GetError()));
}

GetDefaultViewOutcome ResourceExplorer2Client::GetDefaultView(const GetDefaultViewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetDefaultView");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDefaultViewOutcome(result.GetResultWithOwnership()) : GetDefaultViewOutcome(std::move(result.GetError()));
}

GetIndexOutcome ResourceExplorer2Client::GetIndex(const GetIndexRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetIndex");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIndexOutcome(result.GetResultWithOwnership()) : GetIndexOutcome(std::move(result.GetError()));
}

GetManagedViewOutcome ResourceExplorer2Client::GetManagedView(const GetManagedViewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetManagedView");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetManagedViewOutcome(result.GetResultWithOwnership()) : GetManagedViewOutcome(std::move(result.GetError()));
}

GetResourceExplorerSetupOutcome ResourceExplorer2Client::GetResourceExplorerSetup(const GetResourceExplorerSetupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetResourceExplorerSetup");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourceExplorerSetupOutcome(result.GetResultWithOwnership())
                            : GetResourceExplorerSetupOutcome(std::move(result.GetError()));
}

GetServiceIndexOutcome ResourceExplorer2Client::GetServiceIndex(const GetServiceIndexRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetServiceIndex");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetServiceIndexOutcome(result.GetResultWithOwnership())
                            : GetServiceIndexOutcome(std::move(result.GetError()));
}

GetServiceViewOutcome ResourceExplorer2Client::GetServiceView(const GetServiceViewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetServiceView");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetServiceViewOutcome(result.GetResultWithOwnership()) : GetServiceViewOutcome(std::move(result.GetError()));
}

GetViewOutcome ResourceExplorer2Client::GetView(const GetViewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetView");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetViewOutcome(result.GetResultWithOwnership()) : GetViewOutcome(std::move(result.GetError()));
}

ListIndexesOutcome ResourceExplorer2Client::ListIndexes(const ListIndexesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListIndexes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIndexesOutcome(result.GetResultWithOwnership()) : ListIndexesOutcome(std::move(result.GetError()));
}

ListIndexesForMembersOutcome ResourceExplorer2Client::ListIndexesForMembers(const ListIndexesForMembersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListIndexesForMembers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIndexesForMembersOutcome(result.GetResultWithOwnership())
                            : ListIndexesForMembersOutcome(std::move(result.GetError()));
}

ListManagedViewsOutcome ResourceExplorer2Client::ListManagedViews(const ListManagedViewsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListManagedViews");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListManagedViewsOutcome(result.GetResultWithOwnership())
                            : ListManagedViewsOutcome(std::move(result.GetError()));
}

ListResourcesOutcome ResourceExplorer2Client::ListResources(const ListResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListResources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourcesOutcome(result.GetResultWithOwnership()) : ListResourcesOutcome(std::move(result.GetError()));
}

ListServiceIndexesOutcome ResourceExplorer2Client::ListServiceIndexes(const ListServiceIndexesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListServiceIndexes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListServiceIndexesOutcome(result.GetResultWithOwnership())
                            : ListServiceIndexesOutcome(std::move(result.GetError()));
}

ListServiceViewsOutcome ResourceExplorer2Client::ListServiceViews(const ListServiceViewsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListServiceViews");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListServiceViewsOutcome(result.GetResultWithOwnership())
                            : ListServiceViewsOutcome(std::move(result.GetError()));
}

ListStreamingAccessForServicesOutcome ResourceExplorer2Client::ListStreamingAccessForServices(
    const ListStreamingAccessForServicesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListStreamingAccessForServices");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStreamingAccessForServicesOutcome(result.GetResultWithOwnership())
                            : ListStreamingAccessForServicesOutcome(std::move(result.GetError()));
}

ListSupportedResourceTypesOutcome ResourceExplorer2Client::ListSupportedResourceTypes(
    const ListSupportedResourceTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListSupportedResourceTypes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSupportedResourceTypesOutcome(result.GetResultWithOwnership())
                            : ListSupportedResourceTypesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ResourceExplorer2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ResourceExplorer2Errors>(
        ResourceExplorer2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

ListViewsOutcome ResourceExplorer2Client::ListViews(const ListViewsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListViews");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListViewsOutcome(result.GetResultWithOwnership()) : ListViewsOutcome(std::move(result.GetError()));
}

SearchOutcome ResourceExplorer2Client::Search(const SearchRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Search");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchOutcome(result.GetResultWithOwnership()) : SearchOutcome(std::move(result.GetError()));
}

TagResourceOutcome ResourceExplorer2Client::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ResourceExplorer2Errors>(
        ResourceExplorer2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ResourceExplorer2Client::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ResourceExplorer2Errors>(
        ResourceExplorer2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ResourceExplorer2Errors>(
        ResourceExplorer2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateIndexTypeOutcome ResourceExplorer2Client::UpdateIndexType(const UpdateIndexTypeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateIndexType");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateIndexTypeOutcome(result.GetResultWithOwnership())
                            : UpdateIndexTypeOutcome(std::move(result.GetError()));
}

UpdateViewOutcome ResourceExplorer2Client::UpdateView(const UpdateViewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateView");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateViewOutcome(result.GetResultWithOwnership()) : UpdateViewOutcome(std::move(result.GetError()));
}
