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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProfileOutcome(result.GetResultWithOwnership()) : CreateProfileOutcome(std::move(result.GetError()));
}

CreateTrustAnchorOutcome RolesAnywhereClient::CreateTrustAnchor(const CreateTrustAnchorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrustAnchorOutcome(result.GetResultWithOwnership())
                            : CreateTrustAnchorOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAttributeMappingOutcome(result.GetResultWithOwnership())
                            : DeleteAttributeMappingOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCrlOutcome(result.GetResultWithOwnership()) : DeleteCrlOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteProfileOutcome(result.GetResultWithOwnership()) : DeleteProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTrustAnchorOutcome(result.GetResultWithOwnership())
                            : DeleteTrustAnchorOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableCrlOutcome(result.GetResultWithOwnership()) : DisableCrlOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableProfileOutcome(result.GetResultWithOwnership()) : DisableProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableTrustAnchorOutcome(result.GetResultWithOwnership())
                            : DisableTrustAnchorOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableCrlOutcome(result.GetResultWithOwnership()) : EnableCrlOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableProfileOutcome(result.GetResultWithOwnership()) : EnableProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableTrustAnchorOutcome(result.GetResultWithOwnership())
                            : EnableTrustAnchorOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCrlOutcome(result.GetResultWithOwnership()) : GetCrlOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProfileOutcome(result.GetResultWithOwnership()) : GetProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSubjectOutcome(result.GetResultWithOwnership()) : GetSubjectOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTrustAnchorOutcome(result.GetResultWithOwnership()) : GetTrustAnchorOutcome(std::move(result.GetError()));
}

ImportCrlOutcome RolesAnywhereClient::ImportCrl(const ImportCrlRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/crls");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportCrlOutcome(result.GetResultWithOwnership()) : ImportCrlOutcome(std::move(result.GetError()));
}

ListCrlsOutcome RolesAnywhereClient::ListCrls(const ListCrlsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/crls");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCrlsOutcome(result.GetResultWithOwnership()) : ListCrlsOutcome(std::move(result.GetError()));
}

ListProfilesOutcome RolesAnywhereClient::ListProfiles(const ListProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProfilesOutcome(result.GetResultWithOwnership()) : ListProfilesOutcome(std::move(result.GetError()));
}

ListSubjectsOutcome RolesAnywhereClient::ListSubjects(const ListSubjectsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/subjects");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSubjectsOutcome(result.GetResultWithOwnership()) : ListSubjectsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTrustAnchorsOutcome RolesAnywhereClient::ListTrustAnchors(const ListTrustAnchorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTrustAnchorsOutcome(result.GetResultWithOwnership())
                            : ListTrustAnchorsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutAttributeMappingOutcome(result.GetResultWithOwnership())
                            : PutAttributeMappingOutcome(std::move(result.GetError()));
}

PutNotificationSettingsOutcome RolesAnywhereClient::PutNotificationSettings(const PutNotificationSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/put-notifications-settings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? PutNotificationSettingsOutcome(result.GetResultWithOwnership())
                            : PutNotificationSettingsOutcome(std::move(result.GetError()));
}

ResetNotificationSettingsOutcome RolesAnywhereClient::ResetNotificationSettings(const ResetNotificationSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reset-notifications-settings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? ResetNotificationSettingsOutcome(result.GetResultWithOwnership())
                            : ResetNotificationSettingsOutcome(std::move(result.GetError()));
}

TagResourceOutcome RolesAnywhereClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/TagResource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome RolesAnywhereClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UntagResource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateCrlOutcome(result.GetResultWithOwnership()) : UpdateCrlOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateProfileOutcome(result.GetResultWithOwnership()) : UpdateProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateTrustAnchorOutcome(result.GetResultWithOwnership())
                            : UpdateTrustAnchorOutcome(std::move(result.GetError()));
}
