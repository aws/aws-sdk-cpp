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
#include <aws/servicecatalog-appregistry/AppRegistryClient.h>
#include <aws/servicecatalog-appregistry/AppRegistryEndpointProvider.h>
#include <aws/servicecatalog-appregistry/AppRegistryErrorMarshaller.h>
#include <aws/servicecatalog-appregistry/model/AssociateAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/AssociateResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/CreateApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/CreateAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/DeleteApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/DeleteAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/DisassociateAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/DisassociateResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/GetApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/GetAssociatedResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/GetAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/GetConfigurationRequest.h>
#include <aws/servicecatalog-appregistry/model/ListApplicationsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedAttributeGroupsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedResourcesRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsForApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListTagsForResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/PutConfigurationRequest.h>
#include <aws/servicecatalog-appregistry/model/SyncResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/TagResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/UntagResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/UpdateApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/UpdateAttributeGroupRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppRegistry;
using namespace Aws::AppRegistry::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AppRegistry {
const char SERVICE_NAME[] = "servicecatalog";
const char ALLOCATION_TAG[] = "AppRegistryClient";
}  // namespace AppRegistry
}  // namespace Aws
const char* AppRegistryClient::GetServiceName() { return SERVICE_NAME; }
const char* AppRegistryClient::GetAllocationTag() { return ALLOCATION_TAG; }

AppRegistryClient::AppRegistryClient(const AppRegistry::AppRegistryClientConfiguration& clientConfiguration,
                                     std::shared_ptr<AppRegistryEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppRegistryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppRegistryClient::AppRegistryClient(const AWSCredentials& credentials, std::shared_ptr<AppRegistryEndpointProviderBase> endpointProvider,
                                     const AppRegistry::AppRegistryClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppRegistryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppRegistryClient::AppRegistryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<AppRegistryEndpointProviderBase> endpointProvider,
                                     const AppRegistry::AppRegistryClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppRegistryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AppRegistryClient::AppRegistryClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppRegistryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppRegistryClient::AppRegistryClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppRegistryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppRegistryClient::AppRegistryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppRegistryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AppRegistryClient::~AppRegistryClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AppRegistryEndpointProviderBase>& AppRegistryClient::accessEndpointProvider() { return m_endpointProvider; }

void AppRegistryClient::init(const AppRegistry::AppRegistryClientConfiguration& config) {
  AWSClient::SetServiceClientName("Service Catalog AppRegistry");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "servicecatalog");
}

void AppRegistryClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AppRegistryClient::InvokeOperationOutcome AppRegistryClient::InvokeServiceOperation(
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

AssociateAttributeGroupOutcome AppRegistryClient::AssociateAttributeGroup(const AssociateAttributeGroupRequest& request) const {
  if (!request.ApplicationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAttributeGroup", "Required field: Application, is not set");
    return AssociateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(
        AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  if (!request.AttributeGroupHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAttributeGroup", "Required field: AttributeGroup, is not set");
    return AssociateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(
        AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeGroup]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeGroup());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateAttributeGroupOutcome(result.GetResultWithOwnership())
                            : AssociateAttributeGroupOutcome(std::move(result.GetError()));
}

AssociateResourceOutcome AppRegistryClient::AssociateResource(const AssociateResourceRequest& request) const {
  if (!request.ApplicationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateResource", "Required field: Application, is not set");
    return AssociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Application]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateResource", "Required field: ResourceType, is not set");
    return AssociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateResource", "Required field: Resource, is not set");
    return AssociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Resource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(ResourceTypeMapper::GetNameForResourceType(request.GetResourceType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResource());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateResourceOutcome(result.GetResultWithOwnership())
                            : AssociateResourceOutcome(std::move(result.GetError()));
}

CreateApplicationOutcome AppRegistryClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateApplicationOutcome(result.GetResultWithOwnership())
                            : CreateApplicationOutcome(std::move(result.GetError()));
}

CreateAttributeGroupOutcome AppRegistryClient::CreateAttributeGroup(const CreateAttributeGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAttributeGroupOutcome(result.GetResultWithOwnership())
                            : CreateAttributeGroupOutcome(std::move(result.GetError()));
}

DeleteApplicationOutcome AppRegistryClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  if (!request.ApplicationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: Application, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Application]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteApplicationOutcome(result.GetResultWithOwnership())
                            : DeleteApplicationOutcome(std::move(result.GetError()));
}

DeleteAttributeGroupOutcome AppRegistryClient::DeleteAttributeGroup(const DeleteAttributeGroupRequest& request) const {
  if (!request.AttributeGroupHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAttributeGroup", "Required field: AttributeGroup, is not set");
    return DeleteAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AttributeGroup]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeGroup());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAttributeGroupOutcome(result.GetResultWithOwnership())
                            : DeleteAttributeGroupOutcome(std::move(result.GetError()));
}

DisassociateAttributeGroupOutcome AppRegistryClient::DisassociateAttributeGroup(const DisassociateAttributeGroupRequest& request) const {
  if (!request.ApplicationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAttributeGroup", "Required field: Application, is not set");
    return DisassociateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(
        AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  if (!request.AttributeGroupHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAttributeGroup", "Required field: AttributeGroup, is not set");
    return DisassociateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(
        AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeGroup]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeGroup());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateAttributeGroupOutcome(result.GetResultWithOwnership())
                            : DisassociateAttributeGroupOutcome(std::move(result.GetError()));
}

DisassociateResourceOutcome AppRegistryClient::DisassociateResource(const DisassociateResourceRequest& request) const {
  if (!request.ApplicationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateResource", "Required field: Application, is not set");
    return DisassociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Application]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateResource", "Required field: ResourceType, is not set");
    return DisassociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateResource", "Required field: Resource, is not set");
    return DisassociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Resource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(ResourceTypeMapper::GetNameForResourceType(request.GetResourceType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResource());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateResourceOutcome(result.GetResultWithOwnership())
                            : DisassociateResourceOutcome(std::move(result.GetError()));
}

GetApplicationOutcome AppRegistryClient::GetApplication(const GetApplicationRequest& request) const {
  if (!request.ApplicationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: Application, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Application]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetApplicationOutcome(result.GetResultWithOwnership()) : GetApplicationOutcome(std::move(result.GetError()));
}

GetAssociatedResourceOutcome AppRegistryClient::GetAssociatedResource(const GetAssociatedResourceRequest& request) const {
  if (!request.ApplicationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssociatedResource", "Required field: Application, is not set");
    return GetAssociatedResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Application]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssociatedResource", "Required field: ResourceType, is not set");
    return GetAssociatedResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssociatedResource", "Required field: Resource, is not set");
    return GetAssociatedResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Resource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(ResourceTypeMapper::GetNameForResourceType(request.GetResourceType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResource());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAssociatedResourceOutcome(result.GetResultWithOwnership())
                            : GetAssociatedResourceOutcome(std::move(result.GetError()));
}

GetAttributeGroupOutcome AppRegistryClient::GetAttributeGroup(const GetAttributeGroupRequest& request) const {
  if (!request.AttributeGroupHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAttributeGroup", "Required field: AttributeGroup, is not set");
    return GetAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AttributeGroup]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeGroup());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAttributeGroupOutcome(result.GetResultWithOwnership())
                            : GetAttributeGroupOutcome(std::move(result.GetError()));
}

GetConfigurationOutcome AppRegistryClient::GetConfiguration(const GetConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfigurationOutcome(result.GetResultWithOwnership())
                            : GetConfigurationOutcome(std::move(result.GetError()));
}

ListApplicationsOutcome AppRegistryClient::ListApplications(const ListApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListApplicationsOutcome(result.GetResultWithOwnership())
                            : ListApplicationsOutcome(std::move(result.GetError()));
}

ListAssociatedAttributeGroupsOutcome AppRegistryClient::ListAssociatedAttributeGroups(
    const ListAssociatedAttributeGroupsRequest& request) const {
  if (!request.ApplicationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssociatedAttributeGroups", "Required field: Application, is not set");
    return ListAssociatedAttributeGroupsOutcome(Aws::Client::AWSError<AppRegistryErrors>(
        AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAssociatedAttributeGroupsOutcome(result.GetResultWithOwnership())
                            : ListAssociatedAttributeGroupsOutcome(std::move(result.GetError()));
}

ListAssociatedResourcesOutcome AppRegistryClient::ListAssociatedResources(const ListAssociatedResourcesRequest& request) const {
  if (!request.ApplicationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssociatedResources", "Required field: Application, is not set");
    return ListAssociatedResourcesOutcome(Aws::Client::AWSError<AppRegistryErrors>(
        AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAssociatedResourcesOutcome(result.GetResultWithOwnership())
                            : ListAssociatedResourcesOutcome(std::move(result.GetError()));
}

ListAttributeGroupsOutcome AppRegistryClient::ListAttributeGroups(const ListAttributeGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAttributeGroupsOutcome(result.GetResultWithOwnership())
                            : ListAttributeGroupsOutcome(std::move(result.GetError()));
}

ListAttributeGroupsForApplicationOutcome AppRegistryClient::ListAttributeGroupsForApplication(
    const ListAttributeGroupsForApplicationRequest& request) const {
  if (!request.ApplicationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAttributeGroupsForApplication", "Required field: Application, is not set");
    return ListAttributeGroupsForApplicationOutcome(Aws::Client::AWSError<AppRegistryErrors>(
        AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-group-details");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAttributeGroupsForApplicationOutcome(result.GetResultWithOwnership())
                            : ListAttributeGroupsForApplicationOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome AppRegistryClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

PutConfigurationOutcome AppRegistryClient::PutConfiguration(const PutConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutConfigurationOutcome(result.GetResultWithOwnership())
                            : PutConfigurationOutcome(std::move(result.GetError()));
}

SyncResourceOutcome AppRegistryClient::SyncResource(const SyncResourceRequest& request) const {
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SyncResource", "Required field: ResourceType, is not set");
    return SyncResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SyncResource", "Required field: Resource, is not set");
    return SyncResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Resource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sync/");
    endpointResolutionOutcome.GetResult().AddPathSegment(ResourceTypeMapper::GetNameForResourceType(request.GetResourceType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResource());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SyncResourceOutcome(result.GetResultWithOwnership()) : SyncResourceOutcome(std::move(result.GetError()));
}

TagResourceOutcome AppRegistryClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UntagResourceOutcome AppRegistryClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UpdateApplicationOutcome AppRegistryClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  if (!request.ApplicationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: Application, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Application]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateApplicationOutcome(result.GetResultWithOwnership())
                            : UpdateApplicationOutcome(std::move(result.GetError()));
}

UpdateAttributeGroupOutcome AppRegistryClient::UpdateAttributeGroup(const UpdateAttributeGroupRequest& request) const {
  if (!request.AttributeGroupHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAttributeGroup", "Required field: AttributeGroup, is not set");
    return UpdateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AttributeGroup]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeGroup());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateAttributeGroupOutcome(result.GetResultWithOwnership())
                            : UpdateAttributeGroupOutcome(std::move(result.GetError()));
}
