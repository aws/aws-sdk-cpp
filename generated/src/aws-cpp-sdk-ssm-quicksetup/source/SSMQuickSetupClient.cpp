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
#include <aws/ssm-quicksetup/SSMQuickSetupClient.h>
#include <aws/ssm-quicksetup/SSMQuickSetupEndpointProvider.h>
#include <aws/ssm-quicksetup/SSMQuickSetupErrorMarshaller.h>
#include <aws/ssm-quicksetup/model/CreateConfigurationManagerRequest.h>
#include <aws/ssm-quicksetup/model/DeleteConfigurationManagerRequest.h>
#include <aws/ssm-quicksetup/model/GetConfigurationManagerRequest.h>
#include <aws/ssm-quicksetup/model/GetConfigurationRequest.h>
#include <aws/ssm-quicksetup/model/GetServiceSettingsRequest.h>
#include <aws/ssm-quicksetup/model/ListConfigurationManagersRequest.h>
#include <aws/ssm-quicksetup/model/ListConfigurationsRequest.h>
#include <aws/ssm-quicksetup/model/ListQuickSetupTypesRequest.h>
#include <aws/ssm-quicksetup/model/ListTagsForResourceRequest.h>
#include <aws/ssm-quicksetup/model/TagResourceRequest.h>
#include <aws/ssm-quicksetup/model/UntagResourceRequest.h>
#include <aws/ssm-quicksetup/model/UpdateConfigurationDefinitionRequest.h>
#include <aws/ssm-quicksetup/model/UpdateConfigurationManagerRequest.h>
#include <aws/ssm-quicksetup/model/UpdateServiceSettingsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SSMQuickSetup;
using namespace Aws::SSMQuickSetup::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SSMQuickSetup {
const char SERVICE_NAME[] = "ssm-quicksetup";
const char ALLOCATION_TAG[] = "SSMQuickSetupClient";
}  // namespace SSMQuickSetup
}  // namespace Aws
const char* SSMQuickSetupClient::GetServiceName() { return SERVICE_NAME; }
const char* SSMQuickSetupClient::GetAllocationTag() { return ALLOCATION_TAG; }

SSMQuickSetupClient::SSMQuickSetupClient(const SSMQuickSetup::SSMQuickSetupClientConfiguration& clientConfiguration,
                                         std::shared_ptr<SSMQuickSetupEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMQuickSetupErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSMQuickSetupEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMQuickSetupClient::SSMQuickSetupClient(const AWSCredentials& credentials,
                                         std::shared_ptr<SSMQuickSetupEndpointProviderBase> endpointProvider,
                                         const SSMQuickSetup::SSMQuickSetupClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMQuickSetupErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSMQuickSetupEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMQuickSetupClient::SSMQuickSetupClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<SSMQuickSetupEndpointProviderBase> endpointProvider,
                                         const SSMQuickSetup::SSMQuickSetupClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMQuickSetupErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSMQuickSetupEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SSMQuickSetupClient::SSMQuickSetupClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMQuickSetupErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSMQuickSetupEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMQuickSetupClient::SSMQuickSetupClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMQuickSetupErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSMQuickSetupEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMQuickSetupClient::SSMQuickSetupClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMQuickSetupErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSMQuickSetupEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SSMQuickSetupClient::~SSMQuickSetupClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SSMQuickSetupEndpointProviderBase>& SSMQuickSetupClient::accessEndpointProvider() { return m_endpointProvider; }

void SSMQuickSetupClient::init(const SSMQuickSetup::SSMQuickSetupClientConfiguration& config) {
  AWSClient::SetServiceClientName("SSM QuickSetup");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ssm-quicksetup");
}

void SSMQuickSetupClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SSMQuickSetupClient::InvokeOperationOutcome SSMQuickSetupClient::InvokeServiceOperation(
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

CreateConfigurationManagerOutcome SSMQuickSetupClient::CreateConfigurationManager(const CreateConfigurationManagerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationManager");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfigurationManagerOutcome(result.GetResultWithOwnership())
                            : CreateConfigurationManagerOutcome(std::move(result.GetError()));
}

DeleteConfigurationManagerOutcome SSMQuickSetupClient::DeleteConfigurationManager(const DeleteConfigurationManagerRequest& request) const {
  if (!request.ManagerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationManager", "Required field: ManagerArn, is not set");
    return DeleteConfigurationManagerOutcome(Aws::Client::AWSError<SSMQuickSetupErrors>(
        SSMQuickSetupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagerArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationManager/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagerArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfigurationManagerOutcome(result.GetResultWithOwnership())
                            : DeleteConfigurationManagerOutcome(std::move(result.GetError()));
}

GetConfigurationOutcome SSMQuickSetupClient::GetConfiguration(const GetConfigurationRequest& request) const {
  if (!request.ConfigurationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguration", "Required field: ConfigurationId, is not set");
    return GetConfigurationOutcome(Aws::Client::AWSError<SSMQuickSetupErrors>(SSMQuickSetupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ConfigurationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/getConfiguration/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfigurationOutcome(result.GetResultWithOwnership())
                            : GetConfigurationOutcome(std::move(result.GetError()));
}

GetConfigurationManagerOutcome SSMQuickSetupClient::GetConfigurationManager(const GetConfigurationManagerRequest& request) const {
  if (!request.ManagerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfigurationManager", "Required field: ManagerArn, is not set");
    return GetConfigurationManagerOutcome(Aws::Client::AWSError<SSMQuickSetupErrors>(
        SSMQuickSetupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagerArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationManager/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagerArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfigurationManagerOutcome(result.GetResultWithOwnership())
                            : GetConfigurationManagerOutcome(std::move(result.GetError()));
}

GetServiceSettingsOutcome SSMQuickSetupClient::GetServiceSettings(const GetServiceSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/serviceSettings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetServiceSettingsOutcome(result.GetResultWithOwnership())
                            : GetServiceSettingsOutcome(std::move(result.GetError()));
}

ListConfigurationManagersOutcome SSMQuickSetupClient::ListConfigurationManagers(const ListConfigurationManagersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listConfigurationManagers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConfigurationManagersOutcome(result.GetResultWithOwnership())
                            : ListConfigurationManagersOutcome(std::move(result.GetError()));
}

ListConfigurationsOutcome SSMQuickSetupClient::ListConfigurations(const ListConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listConfigurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListConfigurationsOutcome(std::move(result.GetError()));
}

ListQuickSetupTypesOutcome SSMQuickSetupClient::ListQuickSetupTypes(const ListQuickSetupTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listQuickSetupTypes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListQuickSetupTypesOutcome(result.GetResultWithOwnership())
                            : ListQuickSetupTypesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome SSMQuickSetupClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SSMQuickSetupErrors>(
        SSMQuickSetupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

TagResourceOutcome SSMQuickSetupClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SSMQuickSetupErrors>(SSMQuickSetupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome SSMQuickSetupClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SSMQuickSetupErrors>(SSMQuickSetupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SSMQuickSetupErrors>(SSMQuickSetupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UpdateConfigurationDefinitionOutcome SSMQuickSetupClient::UpdateConfigurationDefinition(
    const UpdateConfigurationDefinitionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationDefinition", "Required field: Id, is not set");
    return UpdateConfigurationDefinitionOutcome(Aws::Client::AWSError<SSMQuickSetupErrors>(
        SSMQuickSetupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.ManagerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationDefinition", "Required field: ManagerArn, is not set");
    return UpdateConfigurationDefinitionOutcome(Aws::Client::AWSError<SSMQuickSetupErrors>(
        SSMQuickSetupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagerArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationDefinition/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagerArn());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateConfigurationDefinitionOutcome(result.GetResultWithOwnership())
                            : UpdateConfigurationDefinitionOutcome(std::move(result.GetError()));
}

UpdateConfigurationManagerOutcome SSMQuickSetupClient::UpdateConfigurationManager(const UpdateConfigurationManagerRequest& request) const {
  if (!request.ManagerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationManager", "Required field: ManagerArn, is not set");
    return UpdateConfigurationManagerOutcome(Aws::Client::AWSError<SSMQuickSetupErrors>(
        SSMQuickSetupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagerArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationManager/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagerArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateConfigurationManagerOutcome(result.GetResultWithOwnership())
                            : UpdateConfigurationManagerOutcome(std::move(result.GetError()));
}

UpdateServiceSettingsOutcome SSMQuickSetupClient::UpdateServiceSettings(const UpdateServiceSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/serviceSettings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateServiceSettingsOutcome(result.GetResultWithOwnership())
                            : UpdateServiceSettingsOutcome(std::move(result.GetError()));
}
