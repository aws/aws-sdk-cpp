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
#include <aws/pca-connector-ad/PcaConnectorAdClient.h>
#include <aws/pca-connector-ad/PcaConnectorAdEndpointProvider.h>
#include <aws/pca-connector-ad/PcaConnectorAdErrorMarshaller.h>
#include <aws/pca-connector-ad/model/CreateConnectorRequest.h>
#include <aws/pca-connector-ad/model/CreateDirectoryRegistrationRequest.h>
#include <aws/pca-connector-ad/model/CreateServicePrincipalNameRequest.h>
#include <aws/pca-connector-ad/model/CreateTemplateGroupAccessControlEntryRequest.h>
#include <aws/pca-connector-ad/model/CreateTemplateRequest.h>
#include <aws/pca-connector-ad/model/DeleteConnectorRequest.h>
#include <aws/pca-connector-ad/model/DeleteDirectoryRegistrationRequest.h>
#include <aws/pca-connector-ad/model/DeleteServicePrincipalNameRequest.h>
#include <aws/pca-connector-ad/model/DeleteTemplateGroupAccessControlEntryRequest.h>
#include <aws/pca-connector-ad/model/DeleteTemplateRequest.h>
#include <aws/pca-connector-ad/model/GetConnectorRequest.h>
#include <aws/pca-connector-ad/model/GetDirectoryRegistrationRequest.h>
#include <aws/pca-connector-ad/model/GetServicePrincipalNameRequest.h>
#include <aws/pca-connector-ad/model/GetTemplateGroupAccessControlEntryRequest.h>
#include <aws/pca-connector-ad/model/GetTemplateRequest.h>
#include <aws/pca-connector-ad/model/ListConnectorsRequest.h>
#include <aws/pca-connector-ad/model/ListDirectoryRegistrationsRequest.h>
#include <aws/pca-connector-ad/model/ListServicePrincipalNamesRequest.h>
#include <aws/pca-connector-ad/model/ListTagsForResourceRequest.h>
#include <aws/pca-connector-ad/model/ListTemplateGroupAccessControlEntriesRequest.h>
#include <aws/pca-connector-ad/model/ListTemplatesRequest.h>
#include <aws/pca-connector-ad/model/TagResourceRequest.h>
#include <aws/pca-connector-ad/model/UntagResourceRequest.h>
#include <aws/pca-connector-ad/model/UpdateTemplateGroupAccessControlEntryRequest.h>
#include <aws/pca-connector-ad/model/UpdateTemplateRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PcaConnectorAd;
using namespace Aws::PcaConnectorAd::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PcaConnectorAd {
const char SERVICE_NAME[] = "pca-connector-ad";
const char ALLOCATION_TAG[] = "PcaConnectorAdClient";
}  // namespace PcaConnectorAd
}  // namespace Aws
const char* PcaConnectorAdClient::GetServiceName() { return SERVICE_NAME; }
const char* PcaConnectorAdClient::GetAllocationTag() { return ALLOCATION_TAG; }

PcaConnectorAdClient::PcaConnectorAdClient(const PcaConnectorAd::PcaConnectorAdClientConfiguration& clientConfiguration,
                                           std::shared_ptr<PcaConnectorAdEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PcaConnectorAdErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PcaConnectorAdEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PcaConnectorAdClient::PcaConnectorAdClient(const AWSCredentials& credentials,
                                           std::shared_ptr<PcaConnectorAdEndpointProviderBase> endpointProvider,
                                           const PcaConnectorAd::PcaConnectorAdClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PcaConnectorAdErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PcaConnectorAdEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PcaConnectorAdClient::PcaConnectorAdClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<PcaConnectorAdEndpointProviderBase> endpointProvider,
                                           const PcaConnectorAd::PcaConnectorAdClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PcaConnectorAdErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PcaConnectorAdEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PcaConnectorAdClient::PcaConnectorAdClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PcaConnectorAdErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PcaConnectorAdEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PcaConnectorAdClient::PcaConnectorAdClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PcaConnectorAdErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PcaConnectorAdEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PcaConnectorAdClient::PcaConnectorAdClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PcaConnectorAdErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PcaConnectorAdEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PcaConnectorAdClient::~PcaConnectorAdClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PcaConnectorAdEndpointProviderBase>& PcaConnectorAdClient::accessEndpointProvider() { return m_endpointProvider; }

void PcaConnectorAdClient::init(const PcaConnectorAd::PcaConnectorAdClientConfiguration& config) {
  AWSClient::SetServiceClientName("Pca Connector Ad");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "pca-connector-ad");
}

void PcaConnectorAdClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PcaConnectorAdClient::InvokeOperationOutcome PcaConnectorAdClient::InvokeServiceOperation(
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

CreateConnectorOutcome PcaConnectorAdClient::CreateConnector(const CreateConnectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConnectorOutcome(result.GetResultWithOwnership())
                            : CreateConnectorOutcome(std::move(result.GetError()));
}

CreateDirectoryRegistrationOutcome PcaConnectorAdClient::CreateDirectoryRegistration(
    const CreateDirectoryRegistrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/directoryRegistrations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDirectoryRegistrationOutcome(result.GetResultWithOwnership())
                            : CreateDirectoryRegistrationOutcome(std::move(result.GetError()));
}

CreateServicePrincipalNameOutcome PcaConnectorAdClient::CreateServicePrincipalName(const CreateServicePrincipalNameRequest& request) const {
  if (!request.ConnectorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateServicePrincipalName", "Required field: ConnectorArn, is not set");
    return CreateServicePrincipalNameOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }
  if (!request.DirectoryRegistrationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateServicePrincipalName", "Required field: DirectoryRegistrationArn, is not set");
    return CreateServicePrincipalNameOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryRegistrationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/directoryRegistrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDirectoryRegistrationArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicePrincipalNames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateServicePrincipalNameOutcome(result.GetResultWithOwnership())
                            : CreateServicePrincipalNameOutcome(std::move(result.GetError()));
}

CreateTemplateOutcome PcaConnectorAdClient::CreateTemplate(const CreateTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTemplateOutcome(result.GetResultWithOwnership()) : CreateTemplateOutcome(std::move(result.GetError()));
}

CreateTemplateGroupAccessControlEntryOutcome PcaConnectorAdClient::CreateTemplateGroupAccessControlEntry(
    const CreateTemplateGroupAccessControlEntryRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTemplateGroupAccessControlEntry", "Required field: TemplateArn, is not set");
    return CreateTemplateGroupAccessControlEntryOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accessControlEntries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTemplateGroupAccessControlEntryOutcome(result.GetResultWithOwnership())
                            : CreateTemplateGroupAccessControlEntryOutcome(std::move(result.GetError()));
}

DeleteConnectorOutcome PcaConnectorAdClient::DeleteConnector(const DeleteConnectorRequest& request) const {
  if (!request.ConnectorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnector", "Required field: ConnectorArn, is not set");
    return DeleteConnectorOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ConnectorArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConnectorOutcome(result.GetResultWithOwnership())
                            : DeleteConnectorOutcome(std::move(result.GetError()));
}

DeleteDirectoryRegistrationOutcome PcaConnectorAdClient::DeleteDirectoryRegistration(
    const DeleteDirectoryRegistrationRequest& request) const {
  if (!request.DirectoryRegistrationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDirectoryRegistration", "Required field: DirectoryRegistrationArn, is not set");
    return DeleteDirectoryRegistrationOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryRegistrationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/directoryRegistrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDirectoryRegistrationArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDirectoryRegistrationOutcome(result.GetResultWithOwnership())
                            : DeleteDirectoryRegistrationOutcome(std::move(result.GetError()));
}

DeleteServicePrincipalNameOutcome PcaConnectorAdClient::DeleteServicePrincipalName(const DeleteServicePrincipalNameRequest& request) const {
  if (!request.ConnectorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteServicePrincipalName", "Required field: ConnectorArn, is not set");
    return DeleteServicePrincipalNameOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }
  if (!request.DirectoryRegistrationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteServicePrincipalName", "Required field: DirectoryRegistrationArn, is not set");
    return DeleteServicePrincipalNameOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryRegistrationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/directoryRegistrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDirectoryRegistrationArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicePrincipalNames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteServicePrincipalNameOutcome(result.GetResultWithOwnership())
                            : DeleteServicePrincipalNameOutcome(std::move(result.GetError()));
}

DeleteTemplateOutcome PcaConnectorAdClient::DeleteTemplate(const DeleteTemplateRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplate", "Required field: TemplateArn, is not set");
    return DeleteTemplateOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TemplateArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTemplateOutcome(result.GetResultWithOwnership()) : DeleteTemplateOutcome(std::move(result.GetError()));
}

DeleteTemplateGroupAccessControlEntryOutcome PcaConnectorAdClient::DeleteTemplateGroupAccessControlEntry(
    const DeleteTemplateGroupAccessControlEntryRequest& request) const {
  if (!request.GroupSecurityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplateGroupAccessControlEntry", "Required field: GroupSecurityIdentifier, is not set");
    return DeleteTemplateGroupAccessControlEntryOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupSecurityIdentifier]", false));
  }
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplateGroupAccessControlEntry", "Required field: TemplateArn, is not set");
    return DeleteTemplateGroupAccessControlEntryOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accessControlEntries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupSecurityIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTemplateGroupAccessControlEntryOutcome(result.GetResultWithOwnership())
                            : DeleteTemplateGroupAccessControlEntryOutcome(std::move(result.GetError()));
}

GetConnectorOutcome PcaConnectorAdClient::GetConnector(const GetConnectorRequest& request) const {
  if (!request.ConnectorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnector", "Required field: ConnectorArn, is not set");
    return GetConnectorOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ConnectorArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConnectorOutcome(result.GetResultWithOwnership()) : GetConnectorOutcome(std::move(result.GetError()));
}

GetDirectoryRegistrationOutcome PcaConnectorAdClient::GetDirectoryRegistration(const GetDirectoryRegistrationRequest& request) const {
  if (!request.DirectoryRegistrationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDirectoryRegistration", "Required field: DirectoryRegistrationArn, is not set");
    return GetDirectoryRegistrationOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryRegistrationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/directoryRegistrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDirectoryRegistrationArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDirectoryRegistrationOutcome(result.GetResultWithOwnership())
                            : GetDirectoryRegistrationOutcome(std::move(result.GetError()));
}

GetServicePrincipalNameOutcome PcaConnectorAdClient::GetServicePrincipalName(const GetServicePrincipalNameRequest& request) const {
  if (!request.ConnectorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetServicePrincipalName", "Required field: ConnectorArn, is not set");
    return GetServicePrincipalNameOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }
  if (!request.DirectoryRegistrationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetServicePrincipalName", "Required field: DirectoryRegistrationArn, is not set");
    return GetServicePrincipalNameOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryRegistrationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/directoryRegistrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDirectoryRegistrationArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicePrincipalNames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetServicePrincipalNameOutcome(result.GetResultWithOwnership())
                            : GetServicePrincipalNameOutcome(std::move(result.GetError()));
}

GetTemplateOutcome PcaConnectorAdClient::GetTemplate(const GetTemplateRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTemplate", "Required field: TemplateArn, is not set");
    return GetTemplateOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TemplateArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTemplateOutcome(result.GetResultWithOwnership()) : GetTemplateOutcome(std::move(result.GetError()));
}

GetTemplateGroupAccessControlEntryOutcome PcaConnectorAdClient::GetTemplateGroupAccessControlEntry(
    const GetTemplateGroupAccessControlEntryRequest& request) const {
  if (!request.GroupSecurityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTemplateGroupAccessControlEntry", "Required field: GroupSecurityIdentifier, is not set");
    return GetTemplateGroupAccessControlEntryOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupSecurityIdentifier]", false));
  }
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTemplateGroupAccessControlEntry", "Required field: TemplateArn, is not set");
    return GetTemplateGroupAccessControlEntryOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accessControlEntries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupSecurityIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTemplateGroupAccessControlEntryOutcome(result.GetResultWithOwnership())
                            : GetTemplateGroupAccessControlEntryOutcome(std::move(result.GetError()));
}

ListConnectorsOutcome PcaConnectorAdClient::ListConnectors(const ListConnectorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConnectorsOutcome(result.GetResultWithOwnership()) : ListConnectorsOutcome(std::move(result.GetError()));
}

ListDirectoryRegistrationsOutcome PcaConnectorAdClient::ListDirectoryRegistrations(const ListDirectoryRegistrationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/directoryRegistrations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDirectoryRegistrationsOutcome(result.GetResultWithOwnership())
                            : ListDirectoryRegistrationsOutcome(std::move(result.GetError()));
}

ListServicePrincipalNamesOutcome PcaConnectorAdClient::ListServicePrincipalNames(const ListServicePrincipalNamesRequest& request) const {
  if (!request.DirectoryRegistrationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServicePrincipalNames", "Required field: DirectoryRegistrationArn, is not set");
    return ListServicePrincipalNamesOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryRegistrationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/directoryRegistrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDirectoryRegistrationArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicePrincipalNames");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListServicePrincipalNamesOutcome(result.GetResultWithOwnership())
                            : ListServicePrincipalNamesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome PcaConnectorAdClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

ListTemplateGroupAccessControlEntriesOutcome PcaConnectorAdClient::ListTemplateGroupAccessControlEntries(
    const ListTemplateGroupAccessControlEntriesRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplateGroupAccessControlEntries", "Required field: TemplateArn, is not set");
    return ListTemplateGroupAccessControlEntriesOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accessControlEntries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTemplateGroupAccessControlEntriesOutcome(result.GetResultWithOwnership())
                            : ListTemplateGroupAccessControlEntriesOutcome(std::move(result.GetError()));
}

ListTemplatesOutcome PcaConnectorAdClient::ListTemplates(const ListTemplatesRequest& request) const {
  if (!request.ConnectorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplates", "Required field: ConnectorArn, is not set");
    return ListTemplatesOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ConnectorArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTemplatesOutcome(result.GetResultWithOwnership()) : ListTemplatesOutcome(std::move(result.GetError()));
}

TagResourceOutcome PcaConnectorAdClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UntagResourceOutcome PcaConnectorAdClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UpdateTemplateOutcome PcaConnectorAdClient::UpdateTemplate(const UpdateTemplateRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplate", "Required field: TemplateArn, is not set");
    return UpdateTemplateOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TemplateArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateTemplateOutcome(result.GetResultWithOwnership()) : UpdateTemplateOutcome(std::move(result.GetError()));
}

UpdateTemplateGroupAccessControlEntryOutcome PcaConnectorAdClient::UpdateTemplateGroupAccessControlEntry(
    const UpdateTemplateGroupAccessControlEntryRequest& request) const {
  if (!request.GroupSecurityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplateGroupAccessControlEntry", "Required field: GroupSecurityIdentifier, is not set");
    return UpdateTemplateGroupAccessControlEntryOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupSecurityIdentifier]", false));
  }
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplateGroupAccessControlEntry", "Required field: TemplateArn, is not set");
    return UpdateTemplateGroupAccessControlEntryOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(
        PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accessControlEntries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupSecurityIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateTemplateGroupAccessControlEntryOutcome(result.GetResultWithOwnership())
                            : UpdateTemplateGroupAccessControlEntryOutcome(std::move(result.GetError()));
}
