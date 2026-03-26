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
#include <aws/workspaces-web/WorkSpacesWebClient.h>
#include <aws/workspaces-web/WorkSpacesWebEndpointProvider.h>
#include <aws/workspaces-web/WorkSpacesWebErrorMarshaller.h>
#include <aws/workspaces-web/model/AssociateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/AssociateDataProtectionSettingsRequest.h>
#include <aws/workspaces-web/model/AssociateIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/AssociateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/AssociateSessionLoggerRequest.h>
#include <aws/workspaces-web/model/AssociateTrustStoreRequest.h>
#include <aws/workspaces-web/model/AssociateUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/AssociateUserSettingsRequest.h>
#include <aws/workspaces-web/model/CreateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/CreateDataProtectionSettingsRequest.h>
#include <aws/workspaces-web/model/CreateIdentityProviderRequest.h>
#include <aws/workspaces-web/model/CreateIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/CreateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/CreatePortalRequest.h>
#include <aws/workspaces-web/model/CreateSessionLoggerRequest.h>
#include <aws/workspaces-web/model/CreateTrustStoreRequest.h>
#include <aws/workspaces-web/model/CreateUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/CreateUserSettingsRequest.h>
#include <aws/workspaces-web/model/DeleteBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/DeleteDataProtectionSettingsRequest.h>
#include <aws/workspaces-web/model/DeleteIdentityProviderRequest.h>
#include <aws/workspaces-web/model/DeleteIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/DeleteNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/DeletePortalRequest.h>
#include <aws/workspaces-web/model/DeleteSessionLoggerRequest.h>
#include <aws/workspaces-web/model/DeleteTrustStoreRequest.h>
#include <aws/workspaces-web/model/DeleteUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/DeleteUserSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateDataProtectionSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateSessionLoggerRequest.h>
#include <aws/workspaces-web/model/DisassociateTrustStoreRequest.h>
#include <aws/workspaces-web/model/DisassociateUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateUserSettingsRequest.h>
#include <aws/workspaces-web/model/ExpireSessionRequest.h>
#include <aws/workspaces-web/model/GetBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/GetDataProtectionSettingsRequest.h>
#include <aws/workspaces-web/model/GetIdentityProviderRequest.h>
#include <aws/workspaces-web/model/GetIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/GetNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/GetPortalRequest.h>
#include <aws/workspaces-web/model/GetPortalServiceProviderMetadataRequest.h>
#include <aws/workspaces-web/model/GetSessionLoggerRequest.h>
#include <aws/workspaces-web/model/GetSessionRequest.h>
#include <aws/workspaces-web/model/GetTrustStoreCertificateRequest.h>
#include <aws/workspaces-web/model/GetTrustStoreRequest.h>
#include <aws/workspaces-web/model/GetUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/GetUserSettingsRequest.h>
#include <aws/workspaces-web/model/ListBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/ListDataProtectionSettingsRequest.h>
#include <aws/workspaces-web/model/ListIdentityProvidersRequest.h>
#include <aws/workspaces-web/model/ListIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/ListNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/ListPortalsRequest.h>
#include <aws/workspaces-web/model/ListSessionLoggersRequest.h>
#include <aws/workspaces-web/model/ListSessionsRequest.h>
#include <aws/workspaces-web/model/ListTagsForResourceRequest.h>
#include <aws/workspaces-web/model/ListTrustStoreCertificatesRequest.h>
#include <aws/workspaces-web/model/ListTrustStoresRequest.h>
#include <aws/workspaces-web/model/ListUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/ListUserSettingsRequest.h>
#include <aws/workspaces-web/model/TagResourceRequest.h>
#include <aws/workspaces-web/model/UntagResourceRequest.h>
#include <aws/workspaces-web/model/UpdateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/UpdateDataProtectionSettingsRequest.h>
#include <aws/workspaces-web/model/UpdateIdentityProviderRequest.h>
#include <aws/workspaces-web/model/UpdateIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/UpdateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/UpdatePortalRequest.h>
#include <aws/workspaces-web/model/UpdateSessionLoggerRequest.h>
#include <aws/workspaces-web/model/UpdateTrustStoreRequest.h>
#include <aws/workspaces-web/model/UpdateUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/UpdateUserSettingsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkSpacesWeb;
using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace WorkSpacesWeb {
const char SERVICE_NAME[] = "workspaces-web";
const char ALLOCATION_TAG[] = "WorkSpacesWebClient";
}  // namespace WorkSpacesWeb
}  // namespace Aws
const char* WorkSpacesWebClient::GetServiceName() { return SERVICE_NAME; }
const char* WorkSpacesWebClient::GetAllocationTag() { return ALLOCATION_TAG; }

WorkSpacesWebClient::WorkSpacesWebClient(const WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration,
                                         std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkSpacesWebClient::WorkSpacesWebClient(const AWSCredentials& credentials,
                                         std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider,
                                         const WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkSpacesWebClient::WorkSpacesWebClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider,
                                         const WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
WorkSpacesWebClient::WorkSpacesWebClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkSpacesWebClient::WorkSpacesWebClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkSpacesWebClient::WorkSpacesWebClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
WorkSpacesWebClient::~WorkSpacesWebClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<WorkSpacesWebEndpointProviderBase>& WorkSpacesWebClient::accessEndpointProvider() { return m_endpointProvider; }

void WorkSpacesWebClient::init(const WorkSpacesWeb::WorkSpacesWebClientConfiguration& config) {
  AWSClient::SetServiceClientName("WorkSpaces Web");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "workspaces-web");
}

void WorkSpacesWebClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
WorkSpacesWebClient::InvokeOperationOutcome WorkSpacesWebClient::InvokeServiceOperation(
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

AssociateBrowserSettingsOutcome WorkSpacesWebClient::AssociateBrowserSettings(const AssociateBrowserSettingsRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateBrowserSettings", "Required field: PortalArn, is not set");
    return AssociateBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  if (!request.BrowserSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return AssociateBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings");
  };

  return AssociateBrowserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateDataProtectionSettingsOutcome WorkSpacesWebClient::AssociateDataProtectionSettings(
    const AssociateDataProtectionSettingsRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateDataProtectionSettings", "Required field: PortalArn, is not set");
    return AssociateDataProtectionSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  if (!request.DataProtectionSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateDataProtectionSettings", "Required field: DataProtectionSettingsArn, is not set");
    return AssociateDataProtectionSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataProtectionSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataProtectionSettings");
  };

  return AssociateDataProtectionSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateIpAccessSettingsOutcome WorkSpacesWebClient::AssociateIpAccessSettings(const AssociateIpAccessSettingsRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateIpAccessSettings", "Required field: PortalArn, is not set");
    return AssociateIpAccessSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  if (!request.IpAccessSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateIpAccessSettings", "Required field: IpAccessSettingsArn, is not set");
    return AssociateIpAccessSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IpAccessSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ipAccessSettings");
  };

  return AssociateIpAccessSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateNetworkSettingsOutcome WorkSpacesWebClient::AssociateNetworkSettings(const AssociateNetworkSettingsRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateNetworkSettings", "Required field: PortalArn, is not set");
    return AssociateNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  if (!request.NetworkSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return AssociateNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings");
  };

  return AssociateNetworkSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateSessionLoggerOutcome WorkSpacesWebClient::AssociateSessionLogger(const AssociateSessionLoggerRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateSessionLogger", "Required field: PortalArn, is not set");
    return AssociateSessionLoggerOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  if (!request.SessionLoggerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateSessionLogger", "Required field: SessionLoggerArn, is not set");
    return AssociateSessionLoggerOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionLoggerArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessionLogger");
  };

  return AssociateSessionLoggerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateTrustStoreOutcome WorkSpacesWebClient::AssociateTrustStore(const AssociateTrustStoreRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateTrustStore", "Required field: PortalArn, is not set");
    return AssociateTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  if (!request.TrustStoreArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateTrustStore", "Required field: TrustStoreArn, is not set");
    return AssociateTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores");
  };

  return AssociateTrustStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateUserAccessLoggingSettingsOutcome WorkSpacesWebClient::AssociateUserAccessLoggingSettings(
    const AssociateUserAccessLoggingSettingsRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateUserAccessLoggingSettings", "Required field: PortalArn, is not set");
    return AssociateUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  if (!request.UserAccessLoggingSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateUserAccessLoggingSettings", "Required field: UserAccessLoggingSettingsArn, is not set");
    return AssociateUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserAccessLoggingSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings");
  };

  return AssociateUserAccessLoggingSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateUserSettingsOutcome WorkSpacesWebClient::AssociateUserSettings(const AssociateUserSettingsRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateUserSettings", "Required field: PortalArn, is not set");
    return AssociateUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  if (!request.UserSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateUserSettings", "Required field: UserSettingsArn, is not set");
    return AssociateUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings");
  };

  return AssociateUserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateBrowserSettingsOutcome WorkSpacesWebClient::CreateBrowserSettings(const CreateBrowserSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings");
  };

  return CreateBrowserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataProtectionSettingsOutcome WorkSpacesWebClient::CreateDataProtectionSettings(
    const CreateDataProtectionSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataProtectionSettings");
  };

  return CreateDataProtectionSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIdentityProviderOutcome WorkSpacesWebClient::CreateIdentityProvider(const CreateIdentityProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders");
  };

  return CreateIdentityProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIpAccessSettingsOutcome WorkSpacesWebClient::CreateIpAccessSettings(const CreateIpAccessSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ipAccessSettings");
  };

  return CreateIpAccessSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNetworkSettingsOutcome WorkSpacesWebClient::CreateNetworkSettings(const CreateNetworkSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings");
  };

  return CreateNetworkSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePortalOutcome WorkSpacesWebClient::CreatePortal(const CreatePortalRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals");
  };

  return CreatePortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSessionLoggerOutcome WorkSpacesWebClient::CreateSessionLogger(const CreateSessionLoggerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessionLoggers");
  };

  return CreateSessionLoggerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrustStoreOutcome WorkSpacesWebClient::CreateTrustStore(const CreateTrustStoreRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores");
  };

  return CreateTrustStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserAccessLoggingSettingsOutcome WorkSpacesWebClient::CreateUserAccessLoggingSettings(
    const CreateUserAccessLoggingSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings");
  };

  return CreateUserAccessLoggingSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserSettingsOutcome WorkSpacesWebClient::CreateUserSettings(const CreateUserSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings");
  };

  return CreateUserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBrowserSettingsOutcome WorkSpacesWebClient::DeleteBrowserSettings(const DeleteBrowserSettingsRequest& request) const {
  if (!request.BrowserSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return DeleteBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetBrowserSettingsArn());
  };

  return DeleteBrowserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataProtectionSettingsOutcome WorkSpacesWebClient::DeleteDataProtectionSettings(
    const DeleteDataProtectionSettingsRequest& request) const {
  if (!request.DataProtectionSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataProtectionSettings", "Required field: DataProtectionSettingsArn, is not set");
    return DeleteDataProtectionSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataProtectionSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataProtectionSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetDataProtectionSettingsArn());
  };

  return DeleteDataProtectionSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIdentityProviderOutcome WorkSpacesWebClient::DeleteIdentityProvider(const DeleteIdentityProviderRequest& request) const {
  if (!request.IdentityProviderArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIdentityProvider", "Required field: IdentityProviderArn, is not set");
    return DeleteIdentityProviderOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityProviderArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIdentityProviderArn());
  };

  return DeleteIdentityProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIpAccessSettingsOutcome WorkSpacesWebClient::DeleteIpAccessSettings(const DeleteIpAccessSettingsRequest& request) const {
  if (!request.IpAccessSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIpAccessSettings", "Required field: IpAccessSettingsArn, is not set");
    return DeleteIpAccessSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IpAccessSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ipAccessSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIpAccessSettingsArn());
  };

  return DeleteIpAccessSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteNetworkSettingsOutcome WorkSpacesWebClient::DeleteNetworkSettings(const DeleteNetworkSettingsRequest& request) const {
  if (!request.NetworkSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return DeleteNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetNetworkSettingsArn());
  };

  return DeleteNetworkSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePortalOutcome WorkSpacesWebClient::DeletePortal(const DeletePortalRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePortal", "Required field: PortalArn, is not set");
    return DeletePortalOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [PortalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  };

  return DeletePortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSessionLoggerOutcome WorkSpacesWebClient::DeleteSessionLogger(const DeleteSessionLoggerRequest& request) const {
  if (!request.SessionLoggerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSessionLogger", "Required field: SessionLoggerArn, is not set");
    return DeleteSessionLoggerOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionLoggerArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessionLoggers/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetSessionLoggerArn());
  };

  return DeleteSessionLoggerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTrustStoreOutcome WorkSpacesWebClient::DeleteTrustStore(const DeleteTrustStoreRequest& request) const {
  if (!request.TrustStoreArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTrustStore", "Required field: TrustStoreArn, is not set");
    return DeleteTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [TrustStoreArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
  };

  return DeleteTrustStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteUserAccessLoggingSettingsOutcome WorkSpacesWebClient::DeleteUserAccessLoggingSettings(
    const DeleteUserAccessLoggingSettingsRequest& request) const {
  if (!request.UserAccessLoggingSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUserAccessLoggingSettings", "Required field: UserAccessLoggingSettingsArn, is not set");
    return DeleteUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserAccessLoggingSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserAccessLoggingSettingsArn());
  };

  return DeleteUserAccessLoggingSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteUserSettingsOutcome WorkSpacesWebClient::DeleteUserSettings(const DeleteUserSettingsRequest& request) const {
  if (!request.UserSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUserSettings", "Required field: UserSettingsArn, is not set");
    return DeleteUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [UserSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserSettingsArn());
  };

  return DeleteUserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateBrowserSettingsOutcome WorkSpacesWebClient::DisassociateBrowserSettings(
    const DisassociateBrowserSettingsRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateBrowserSettings", "Required field: PortalArn, is not set");
    return DisassociateBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings");
  };

  return DisassociateBrowserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateDataProtectionSettingsOutcome WorkSpacesWebClient::DisassociateDataProtectionSettings(
    const DisassociateDataProtectionSettingsRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateDataProtectionSettings", "Required field: PortalArn, is not set");
    return DisassociateDataProtectionSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataProtectionSettings");
  };

  return DisassociateDataProtectionSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateIpAccessSettingsOutcome WorkSpacesWebClient::DisassociateIpAccessSettings(
    const DisassociateIpAccessSettingsRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateIpAccessSettings", "Required field: PortalArn, is not set");
    return DisassociateIpAccessSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ipAccessSettings");
  };

  return DisassociateIpAccessSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateNetworkSettingsOutcome WorkSpacesWebClient::DisassociateNetworkSettings(
    const DisassociateNetworkSettingsRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateNetworkSettings", "Required field: PortalArn, is not set");
    return DisassociateNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings");
  };

  return DisassociateNetworkSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateSessionLoggerOutcome WorkSpacesWebClient::DisassociateSessionLogger(const DisassociateSessionLoggerRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateSessionLogger", "Required field: PortalArn, is not set");
    return DisassociateSessionLoggerOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessionLogger");
  };

  return DisassociateSessionLoggerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateTrustStoreOutcome WorkSpacesWebClient::DisassociateTrustStore(const DisassociateTrustStoreRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateTrustStore", "Required field: PortalArn, is not set");
    return DisassociateTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores");
  };

  return DisassociateTrustStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateUserAccessLoggingSettingsOutcome WorkSpacesWebClient::DisassociateUserAccessLoggingSettings(
    const DisassociateUserAccessLoggingSettingsRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateUserAccessLoggingSettings", "Required field: PortalArn, is not set");
    return DisassociateUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings");
  };

  return DisassociateUserAccessLoggingSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateUserSettingsOutcome WorkSpacesWebClient::DisassociateUserSettings(const DisassociateUserSettingsRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateUserSettings", "Required field: PortalArn, is not set");
    return DisassociateUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings");
  };

  return DisassociateUserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

ExpireSessionOutcome WorkSpacesWebClient::ExpireSession(const ExpireSessionRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExpireSession", "Required field: PortalId, is not set");
    return ExpireSessionOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [PortalId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExpireSession", "Required field: SessionId, is not set");
    return ExpireSessionOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  };

  return ExpireSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetBrowserSettingsOutcome WorkSpacesWebClient::GetBrowserSettings(const GetBrowserSettingsRequest& request) const {
  if (!request.BrowserSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return GetBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [BrowserSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetBrowserSettingsArn());
  };

  return GetBrowserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDataProtectionSettingsOutcome WorkSpacesWebClient::GetDataProtectionSettings(const GetDataProtectionSettingsRequest& request) const {
  if (!request.DataProtectionSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataProtectionSettings", "Required field: DataProtectionSettingsArn, is not set");
    return GetDataProtectionSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataProtectionSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataProtectionSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetDataProtectionSettingsArn());
  };

  return GetDataProtectionSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIdentityProviderOutcome WorkSpacesWebClient::GetIdentityProvider(const GetIdentityProviderRequest& request) const {
  if (!request.IdentityProviderArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIdentityProvider", "Required field: IdentityProviderArn, is not set");
    return GetIdentityProviderOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityProviderArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIdentityProviderArn());
  };

  return GetIdentityProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIpAccessSettingsOutcome WorkSpacesWebClient::GetIpAccessSettings(const GetIpAccessSettingsRequest& request) const {
  if (!request.IpAccessSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIpAccessSettings", "Required field: IpAccessSettingsArn, is not set");
    return GetIpAccessSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IpAccessSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ipAccessSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIpAccessSettingsArn());
  };

  return GetIpAccessSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetNetworkSettingsOutcome WorkSpacesWebClient::GetNetworkSettings(const GetNetworkSettingsRequest& request) const {
  if (!request.NetworkSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return GetNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [NetworkSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetNetworkSettingsArn());
  };

  return GetNetworkSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPortalOutcome WorkSpacesWebClient::GetPortal(const GetPortalRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPortal", "Required field: PortalArn, is not set");
    return GetPortalOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [PortalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  };

  return GetPortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPortalServiceProviderMetadataOutcome WorkSpacesWebClient::GetPortalServiceProviderMetadata(
    const GetPortalServiceProviderMetadataRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPortalServiceProviderMetadata", "Required field: PortalArn, is not set");
    return GetPortalServiceProviderMetadataOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portalIdp/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  };

  return GetPortalServiceProviderMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSessionOutcome WorkSpacesWebClient::GetSession(const GetSessionRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: PortalId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [PortalId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: SessionId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  };

  return GetSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSessionLoggerOutcome WorkSpacesWebClient::GetSessionLogger(const GetSessionLoggerRequest& request) const {
  if (!request.SessionLoggerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSessionLogger", "Required field: SessionLoggerArn, is not set");
    return GetSessionLoggerOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [SessionLoggerArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessionLoggers/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetSessionLoggerArn());
  };

  return GetSessionLoggerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTrustStoreOutcome WorkSpacesWebClient::GetTrustStore(const GetTrustStoreRequest& request) const {
  if (!request.TrustStoreArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrustStore", "Required field: TrustStoreArn, is not set");
    return GetTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TrustStoreArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
  };

  return GetTrustStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTrustStoreCertificateOutcome WorkSpacesWebClient::GetTrustStoreCertificate(const GetTrustStoreCertificateRequest& request) const {
  if (!request.TrustStoreArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrustStoreCertificate", "Required field: TrustStoreArn, is not set");
    return GetTrustStoreCertificateOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  if (!request.ThumbprintHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrustStoreCertificate", "Required field: Thumbprint, is not set");
    return GetTrustStoreCertificateOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Thumbprint]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificate");
  };

  return GetTrustStoreCertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUserAccessLoggingSettingsOutcome WorkSpacesWebClient::GetUserAccessLoggingSettings(
    const GetUserAccessLoggingSettingsRequest& request) const {
  if (!request.UserAccessLoggingSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUserAccessLoggingSettings", "Required field: UserAccessLoggingSettingsArn, is not set");
    return GetUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserAccessLoggingSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserAccessLoggingSettingsArn());
  };

  return GetUserAccessLoggingSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUserSettingsOutcome WorkSpacesWebClient::GetUserSettings(const GetUserSettingsRequest& request) const {
  if (!request.UserSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUserSettings", "Required field: UserSettingsArn, is not set");
    return GetUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [UserSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserSettingsArn());
  };

  return GetUserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBrowserSettingsOutcome WorkSpacesWebClient::ListBrowserSettings(const ListBrowserSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings");
  };

  return ListBrowserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDataProtectionSettingsOutcome WorkSpacesWebClient::ListDataProtectionSettings(const ListDataProtectionSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataProtectionSettings");
  };

  return ListDataProtectionSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListIdentityProvidersOutcome WorkSpacesWebClient::ListIdentityProviders(const ListIdentityProvidersRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIdentityProviders", "Required field: PortalArn, is not set");
    return ListIdentityProvidersOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders");
  };

  return ListIdentityProvidersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListIpAccessSettingsOutcome WorkSpacesWebClient::ListIpAccessSettings(const ListIpAccessSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ipAccessSettings");
  };

  return ListIpAccessSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListNetworkSettingsOutcome WorkSpacesWebClient::ListNetworkSettings(const ListNetworkSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings");
  };

  return ListNetworkSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPortalsOutcome WorkSpacesWebClient::ListPortals(const ListPortalsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals");
  };

  return ListPortalsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSessionLoggersOutcome WorkSpacesWebClient::ListSessionLoggers(const ListSessionLoggersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessionLoggers");
  };

  return ListSessionLoggersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSessionsOutcome WorkSpacesWebClient::ListSessions(const ListSessionsRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessions", "Required field: PortalId, is not set");
    return ListSessionsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
  };

  return ListSessionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome WorkSpacesWebClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().SetRfc3986Encoded(true);
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTrustStoreCertificatesOutcome WorkSpacesWebClient::ListTrustStoreCertificates(const ListTrustStoreCertificatesRequest& request) const {
  if (!request.TrustStoreArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTrustStoreCertificates", "Required field: TrustStoreArn, is not set");
    return ListTrustStoreCertificatesOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificates");
  };

  return ListTrustStoreCertificatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTrustStoresOutcome WorkSpacesWebClient::ListTrustStores(const ListTrustStoresRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores");
  };

  return ListTrustStoresOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListUserAccessLoggingSettingsOutcome WorkSpacesWebClient::ListUserAccessLoggingSettings(
    const ListUserAccessLoggingSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings");
  };

  return ListUserAccessLoggingSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListUserSettingsOutcome WorkSpacesWebClient::ListUserSettings(const ListUserSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings");
  };

  return ListUserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

TagResourceOutcome WorkSpacesWebClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().SetRfc3986Encoded(true);
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome WorkSpacesWebClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().SetRfc3986Encoded(true);
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateBrowserSettingsOutcome WorkSpacesWebClient::UpdateBrowserSettings(const UpdateBrowserSettingsRequest& request) const {
  if (!request.BrowserSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return UpdateBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetBrowserSettingsArn());
  };

  return UpdateBrowserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDataProtectionSettingsOutcome WorkSpacesWebClient::UpdateDataProtectionSettings(
    const UpdateDataProtectionSettingsRequest& request) const {
  if (!request.DataProtectionSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataProtectionSettings", "Required field: DataProtectionSettingsArn, is not set");
    return UpdateDataProtectionSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataProtectionSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataProtectionSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetDataProtectionSettingsArn());
  };

  return UpdateDataProtectionSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateIdentityProviderOutcome WorkSpacesWebClient::UpdateIdentityProvider(const UpdateIdentityProviderRequest& request) const {
  if (!request.IdentityProviderArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIdentityProvider", "Required field: IdentityProviderArn, is not set");
    return UpdateIdentityProviderOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityProviderArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIdentityProviderArn());
  };

  return UpdateIdentityProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateIpAccessSettingsOutcome WorkSpacesWebClient::UpdateIpAccessSettings(const UpdateIpAccessSettingsRequest& request) const {
  if (!request.IpAccessSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIpAccessSettings", "Required field: IpAccessSettingsArn, is not set");
    return UpdateIpAccessSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IpAccessSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ipAccessSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIpAccessSettingsArn());
  };

  return UpdateIpAccessSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateNetworkSettingsOutcome WorkSpacesWebClient::UpdateNetworkSettings(const UpdateNetworkSettingsRequest& request) const {
  if (!request.NetworkSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return UpdateNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetNetworkSettingsArn());
  };

  return UpdateNetworkSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdatePortalOutcome WorkSpacesWebClient::UpdatePortal(const UpdatePortalRequest& request) const {
  if (!request.PortalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePortal", "Required field: PortalArn, is not set");
    return UpdatePortalOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [PortalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  };

  return UpdatePortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateSessionLoggerOutcome WorkSpacesWebClient::UpdateSessionLogger(const UpdateSessionLoggerRequest& request) const {
  if (!request.SessionLoggerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSessionLogger", "Required field: SessionLoggerArn, is not set");
    return UpdateSessionLoggerOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionLoggerArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessionLoggers/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetSessionLoggerArn());
  };

  return UpdateSessionLoggerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTrustStoreOutcome WorkSpacesWebClient::UpdateTrustStore(const UpdateTrustStoreRequest& request) const {
  if (!request.TrustStoreArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTrustStore", "Required field: TrustStoreArn, is not set");
    return UpdateTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [TrustStoreArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
  };

  return UpdateTrustStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateUserAccessLoggingSettingsOutcome WorkSpacesWebClient::UpdateUserAccessLoggingSettings(
    const UpdateUserAccessLoggingSettingsRequest& request) const {
  if (!request.UserAccessLoggingSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUserAccessLoggingSettings", "Required field: UserAccessLoggingSettingsArn, is not set");
    return UpdateUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(
        WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserAccessLoggingSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserAccessLoggingSettingsArn());
  };

  return UpdateUserAccessLoggingSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateUserSettingsOutcome WorkSpacesWebClient::UpdateUserSettings(const UpdateUserSettingsRequest& request) const {
  if (!request.UserSettingsArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUserSettings", "Required field: UserSettingsArn, is not set");
    return UpdateUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [UserSettingsArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserSettingsArn());
  };

  return UpdateUserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
