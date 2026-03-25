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
#include <aws/rolesanywhere/RolesAnywhereClient.h>
#include <aws/rolesanywhere/RolesAnywhereEndpointProvider.h>
#include <aws/rolesanywhere/RolesAnywhereErrorMarshaller.h>
#include <aws/rolesanywhere/model/CreateProfileRequest.h>
#include <aws/rolesanywhere/model/CreateTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/DeleteAttributeMappingRequest.h>
#include <aws/rolesanywhere/model/DeleteCrlRequest.h>
#include <aws/rolesanywhere/model/DeleteProfileRequest.h>
#include <aws/rolesanywhere/model/DeleteTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/DisableCrlRequest.h>
#include <aws/rolesanywhere/model/DisableProfileRequest.h>
#include <aws/rolesanywhere/model/DisableTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/EnableCrlRequest.h>
#include <aws/rolesanywhere/model/EnableProfileRequest.h>
#include <aws/rolesanywhere/model/EnableTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/GetCrlRequest.h>
#include <aws/rolesanywhere/model/GetProfileRequest.h>
#include <aws/rolesanywhere/model/GetSubjectRequest.h>
#include <aws/rolesanywhere/model/GetTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/ImportCrlRequest.h>
#include <aws/rolesanywhere/model/ListCrlsRequest.h>
#include <aws/rolesanywhere/model/ListProfilesRequest.h>
#include <aws/rolesanywhere/model/ListSubjectsRequest.h>
#include <aws/rolesanywhere/model/ListTagsForResourceRequest.h>
#include <aws/rolesanywhere/model/ListTrustAnchorsRequest.h>
#include <aws/rolesanywhere/model/PutAttributeMappingRequest.h>
#include <aws/rolesanywhere/model/PutNotificationSettingsRequest.h>
#include <aws/rolesanywhere/model/ResetNotificationSettingsRequest.h>
#include <aws/rolesanywhere/model/TagResourceRequest.h>
#include <aws/rolesanywhere/model/UntagResourceRequest.h>
#include <aws/rolesanywhere/model/UpdateCrlRequest.h>
#include <aws/rolesanywhere/model/UpdateProfileRequest.h>
#include <aws/rolesanywhere/model/UpdateTrustAnchorRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RolesAnywhere;
using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace RolesAnywhere {
const char SERVICE_NAME[] = "rolesanywhere";
const char ALLOCATION_TAG[] = "RolesAnywhereClient";
}  // namespace RolesAnywhere
}  // namespace Aws
const char* RolesAnywhereClient::GetServiceName() { return SERVICE_NAME; }
const char* RolesAnywhereClient::GetAllocationTag() { return ALLOCATION_TAG; }

RolesAnywhereClient::RolesAnywhereClient(const RolesAnywhere::RolesAnywhereClientConfiguration& clientConfiguration,
                                         std::shared_ptr<RolesAnywhereEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RolesAnywhereEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RolesAnywhereClient::RolesAnywhereClient(const AWSCredentials& credentials,
                                         std::shared_ptr<RolesAnywhereEndpointProviderBase> endpointProvider,
                                         const RolesAnywhere::RolesAnywhereClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RolesAnywhereEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RolesAnywhereClient::RolesAnywhereClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<RolesAnywhereEndpointProviderBase> endpointProvider,
                                         const RolesAnywhere::RolesAnywhereClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RolesAnywhereEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
RolesAnywhereClient::RolesAnywhereClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RolesAnywhereEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RolesAnywhereClient::RolesAnywhereClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RolesAnywhereEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RolesAnywhereClient::RolesAnywhereClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RolesAnywhereEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
RolesAnywhereClient::~RolesAnywhereClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<RolesAnywhereEndpointProviderBase>& RolesAnywhereClient::accessEndpointProvider() { return m_endpointProvider; }

void RolesAnywhereClient::init(const RolesAnywhere::RolesAnywhereClientConfiguration& config) {
  AWSClient::SetServiceClientName("RolesAnywhere");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "rolesanywhere");
}

void RolesAnywhereClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
RolesAnywhereClient::InvokeOperationOutcome RolesAnywhereClient::InvokeServiceOperation(
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

CreateProfileOutcome RolesAnywhereClient::CreateProfile(const CreateProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles");
  };

  return CreateProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrustAnchorOutcome RolesAnywhereClient::CreateTrustAnchor(const CreateTrustAnchorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchors");
  };

  return CreateTrustAnchorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAttributeMappingOutcome RolesAnywhereClient::DeleteAttributeMapping(const DeleteAttributeMappingRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAttributeMapping", "Required field: ProfileId, is not set");
    return DeleteAttributeMappingOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(
        RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  if (!request.CertificateFieldHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAttributeMapping", "Required field: CertificateField, is not set");
    return DeleteAttributeMappingOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(
        RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CertificateField]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/mappings");
  };

  return DeleteAttributeMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCrlOutcome RolesAnywhereClient::DeleteCrl(const DeleteCrlRequest& request) const {
  if (!request.CrlIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCrl", "Required field: CrlId, is not set");
    return DeleteCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CrlId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/crl/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrlId());
  };

  return DeleteCrlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteProfileOutcome RolesAnywhereClient::DeleteProfile(const DeleteProfileRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProfile", "Required field: ProfileId, is not set");
    return DeleteProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profile/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
  };

  return DeleteProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTrustAnchorOutcome RolesAnywhereClient::DeleteTrustAnchor(const DeleteTrustAnchorRequest& request) const {
  if (!request.TrustAnchorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTrustAnchor", "Required field: TrustAnchorId, is not set");
    return DeleteTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [TrustAnchorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrustAnchorId());
  };

  return DeleteTrustAnchorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisableCrlOutcome RolesAnywhereClient::DisableCrl(const DisableCrlRequest& request) const {
  if (!request.CrlIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisableCrl", "Required field: CrlId, is not set");
    return DisableCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [CrlId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/crl/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrlId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disable");
  };

  return DisableCrlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableProfileOutcome RolesAnywhereClient::DisableProfile(const DisableProfileRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisableProfile", "Required field: ProfileId, is not set");
    return DisableProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profile/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disable");
  };

  return DisableProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableTrustAnchorOutcome RolesAnywhereClient::DisableTrustAnchor(const DisableTrustAnchorRequest& request) const {
  if (!request.TrustAnchorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisableTrustAnchor", "Required field: TrustAnchorId, is not set");
    return DisableTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [TrustAnchorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrustAnchorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disable");
  };

  return DisableTrustAnchorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableCrlOutcome RolesAnywhereClient::EnableCrl(const EnableCrlRequest& request) const {
  if (!request.CrlIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("EnableCrl", "Required field: CrlId, is not set");
    return EnableCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CrlId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/crl/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrlId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/enable");
  };

  return EnableCrlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableProfileOutcome RolesAnywhereClient::EnableProfile(const EnableProfileRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("EnableProfile", "Required field: ProfileId, is not set");
    return EnableProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profile/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/enable");
  };

  return EnableProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableTrustAnchorOutcome RolesAnywhereClient::EnableTrustAnchor(const EnableTrustAnchorRequest& request) const {
  if (!request.TrustAnchorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("EnableTrustAnchor", "Required field: TrustAnchorId, is not set");
    return EnableTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [TrustAnchorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrustAnchorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/enable");
  };

  return EnableTrustAnchorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCrlOutcome RolesAnywhereClient::GetCrl(const GetCrlRequest& request) const {
  if (!request.CrlIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCrl", "Required field: CrlId, is not set");
    return GetCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [CrlId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/crl/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrlId());
  };

  return GetCrlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProfileOutcome RolesAnywhereClient::GetProfile(const GetProfileRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProfile", "Required field: ProfileId, is not set");
    return GetProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profile/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
  };

  return GetProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSubjectOutcome RolesAnywhereClient::GetSubject(const GetSubjectRequest& request) const {
  if (!request.SubjectIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubject", "Required field: SubjectId, is not set");
    return GetSubjectOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [SubjectId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/subject/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubjectId());
  };

  return GetSubjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTrustAnchorOutcome RolesAnywhereClient::GetTrustAnchor(const GetTrustAnchorRequest& request) const {
  if (!request.TrustAnchorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrustAnchor", "Required field: TrustAnchorId, is not set");
    return GetTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TrustAnchorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrustAnchorId());
  };

  return GetTrustAnchorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ImportCrlOutcome RolesAnywhereClient::ImportCrl(const ImportCrlRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/crls");
  };

  return ImportCrlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCrlsOutcome RolesAnywhereClient::ListCrls(const ListCrlsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/crls");
  };

  return ListCrlsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProfilesOutcome RolesAnywhereClient::ListProfiles(const ListProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles");
  };

  return ListProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSubjectsOutcome RolesAnywhereClient::ListSubjects(const ListSubjectsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/subjects");
  };

  return ListSubjectsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome RolesAnywhereClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(
        RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTagsForResource");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTrustAnchorsOutcome RolesAnywhereClient::ListTrustAnchors(const ListTrustAnchorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchors");
  };

  return ListTrustAnchorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutAttributeMappingOutcome RolesAnywhereClient::PutAttributeMapping(const PutAttributeMappingRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutAttributeMapping", "Required field: ProfileId, is not set");
    return PutAttributeMappingOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(
        RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/mappings");
  };

  return PutAttributeMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutNotificationSettingsOutcome RolesAnywhereClient::PutNotificationSettings(const PutNotificationSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/put-notifications-settings");
  };

  return PutNotificationSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

ResetNotificationSettingsOutcome RolesAnywhereClient::ResetNotificationSettings(const ResetNotificationSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reset-notifications-settings");
  };

  return ResetNotificationSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

TagResourceOutcome RolesAnywhereClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/TagResource");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome RolesAnywhereClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UntagResource");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCrlOutcome RolesAnywhereClient::UpdateCrl(const UpdateCrlRequest& request) const {
  if (!request.CrlIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCrl", "Required field: CrlId, is not set");
    return UpdateCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CrlId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/crl/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrlId());
  };

  return UpdateCrlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateProfileOutcome RolesAnywhereClient::UpdateProfile(const UpdateProfileRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProfile", "Required field: ProfileId, is not set");
    return UpdateProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profile/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
  };

  return UpdateProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateTrustAnchorOutcome RolesAnywhereClient::UpdateTrustAnchor(const UpdateTrustAnchorRequest& request) const {
  if (!request.TrustAnchorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTrustAnchor", "Required field: TrustAnchorId, is not set");
    return UpdateTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [TrustAnchorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrustAnchorId());
  };

  return UpdateTrustAnchorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
