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
#include <aws/route53profiles/Route53ProfilesClient.h>
#include <aws/route53profiles/Route53ProfilesEndpointProvider.h>
#include <aws/route53profiles/Route53ProfilesErrorMarshaller.h>
#include <aws/route53profiles/model/AssociateProfileRequest.h>
#include <aws/route53profiles/model/AssociateResourceToProfileRequest.h>
#include <aws/route53profiles/model/CreateProfileRequest.h>
#include <aws/route53profiles/model/DeleteProfileRequest.h>
#include <aws/route53profiles/model/DisassociateProfileRequest.h>
#include <aws/route53profiles/model/DisassociateResourceFromProfileRequest.h>
#include <aws/route53profiles/model/GetProfileAssociationRequest.h>
#include <aws/route53profiles/model/GetProfileRequest.h>
#include <aws/route53profiles/model/GetProfileResourceAssociationRequest.h>
#include <aws/route53profiles/model/ListProfileAssociationsRequest.h>
#include <aws/route53profiles/model/ListProfileResourceAssociationsRequest.h>
#include <aws/route53profiles/model/ListProfilesRequest.h>
#include <aws/route53profiles/model/ListTagsForResourceRequest.h>
#include <aws/route53profiles/model/TagResourceRequest.h>
#include <aws/route53profiles/model/UntagResourceRequest.h>
#include <aws/route53profiles/model/UpdateProfileResourceAssociationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53Profiles;
using namespace Aws::Route53Profiles::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Route53Profiles {
const char SERVICE_NAME[] = "route53profiles";
const char ALLOCATION_TAG[] = "Route53ProfilesClient";
}  // namespace Route53Profiles
}  // namespace Aws
const char* Route53ProfilesClient::GetServiceName() { return SERVICE_NAME; }
const char* Route53ProfilesClient::GetAllocationTag() { return ALLOCATION_TAG; }

Route53ProfilesClient::Route53ProfilesClient(const Route53Profiles::Route53ProfilesClientConfiguration& clientConfiguration,
                                             std::shared_ptr<Route53ProfilesEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ProfilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53ProfilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53ProfilesClient::Route53ProfilesClient(const AWSCredentials& credentials,
                                             std::shared_ptr<Route53ProfilesEndpointProviderBase> endpointProvider,
                                             const Route53Profiles::Route53ProfilesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ProfilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53ProfilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53ProfilesClient::Route53ProfilesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<Route53ProfilesEndpointProviderBase> endpointProvider,
                                             const Route53Profiles::Route53ProfilesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ProfilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53ProfilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
Route53ProfilesClient::Route53ProfilesClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ProfilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53ProfilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53ProfilesClient::Route53ProfilesClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ProfilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53ProfilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53ProfilesClient::Route53ProfilesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ProfilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53ProfilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
Route53ProfilesClient::~Route53ProfilesClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<Route53ProfilesEndpointProviderBase>& Route53ProfilesClient::accessEndpointProvider() { return m_endpointProvider; }

void Route53ProfilesClient::init(const Route53Profiles::Route53ProfilesClientConfiguration& config) {
  AWSClient::SetServiceClientName("Route53Profiles");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "route53profiles");
}

void Route53ProfilesClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
Route53ProfilesClient::InvokeOperationOutcome Route53ProfilesClient::InvokeServiceOperation(
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

AssociateProfileOutcome Route53ProfilesClient::AssociateProfile(const AssociateProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileassociation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateProfileOutcome(result.GetResultWithOwnership())
                            : AssociateProfileOutcome(std::move(result.GetError()));
}

AssociateResourceToProfileOutcome Route53ProfilesClient::AssociateResourceToProfile(
    const AssociateResourceToProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileresourceassociation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateResourceToProfileOutcome(result.GetResultWithOwnership())
                            : AssociateResourceToProfileOutcome(std::move(result.GetError()));
}

CreateProfileOutcome Route53ProfilesClient::CreateProfile(const CreateProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profile");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProfileOutcome(result.GetResultWithOwnership()) : CreateProfileOutcome(std::move(result.GetError()));
}

DeleteProfileOutcome Route53ProfilesClient::DeleteProfile(const DeleteProfileRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProfile", "Required field: ProfileId, is not set");
    return DeleteProfileOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

DisassociateProfileOutcome Route53ProfilesClient::DisassociateProfile(const DisassociateProfileRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateProfile", "Required field: ProfileId, is not set");
    return DisassociateProfileOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(
        Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateProfile", "Required field: ResourceId, is not set");
    return DisassociateProfileOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(
        Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileassociation/Profileid/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourceid/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateProfileOutcome(result.GetResultWithOwnership())
                            : DisassociateProfileOutcome(std::move(result.GetError()));
}

DisassociateResourceFromProfileOutcome Route53ProfilesClient::DisassociateResourceFromProfile(
    const DisassociateResourceFromProfileRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateResourceFromProfile", "Required field: ProfileId, is not set");
    return DisassociateResourceFromProfileOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(
        Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateResourceFromProfile", "Required field: ResourceArn, is not set");
    return DisassociateResourceFromProfileOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(
        Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileresourceassociation/profileid/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
    endpointResolutionOutcome.GetResult().SetRfc3986Encoded(true);
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcearn/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateResourceFromProfileOutcome(result.GetResultWithOwnership())
                            : DisassociateResourceFromProfileOutcome(std::move(result.GetError()));
}

GetProfileOutcome Route53ProfilesClient::GetProfile(const GetProfileRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProfile", "Required field: ProfileId, is not set");
    return GetProfileOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

GetProfileAssociationOutcome Route53ProfilesClient::GetProfileAssociation(const GetProfileAssociationRequest& request) const {
  if (!request.ProfileAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProfileAssociation", "Required field: ProfileAssociationId, is not set");
    return GetProfileAssociationOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(
        Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileAssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileassociation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileAssociationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProfileAssociationOutcome(result.GetResultWithOwnership())
                            : GetProfileAssociationOutcome(std::move(result.GetError()));
}

GetProfileResourceAssociationOutcome Route53ProfilesClient::GetProfileResourceAssociation(
    const GetProfileResourceAssociationRequest& request) const {
  if (!request.ProfileResourceAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProfileResourceAssociation", "Required field: ProfileResourceAssociationId, is not set");
    return GetProfileResourceAssociationOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(
        Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileResourceAssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileresourceassociation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileResourceAssociationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProfileResourceAssociationOutcome(result.GetResultWithOwnership())
                            : GetProfileResourceAssociationOutcome(std::move(result.GetError()));
}

ListProfileAssociationsOutcome Route53ProfilesClient::ListProfileAssociations(const ListProfileAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileassociations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProfileAssociationsOutcome(result.GetResultWithOwnership())
                            : ListProfileAssociationsOutcome(std::move(result.GetError()));
}

ListProfileResourceAssociationsOutcome Route53ProfilesClient::ListProfileResourceAssociations(
    const ListProfileResourceAssociationsRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProfileResourceAssociations", "Required field: ProfileId, is not set");
    return ListProfileResourceAssociationsOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(
        Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileresourceassociations/profileid/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProfileResourceAssociationsOutcome(result.GetResultWithOwnership())
                            : ListProfileResourceAssociationsOutcome(std::move(result.GetError()));
}

ListProfilesOutcome Route53ProfilesClient::ListProfiles(const ListProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProfilesOutcome(result.GetResultWithOwnership()) : ListProfilesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome Route53ProfilesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(
        Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

TagResourceOutcome Route53ProfilesClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UntagResourceOutcome Route53ProfilesClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UpdateProfileResourceAssociationOutcome Route53ProfilesClient::UpdateProfileResourceAssociation(
    const UpdateProfileResourceAssociationRequest& request) const {
  if (!request.ProfileResourceAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProfileResourceAssociation", "Required field: ProfileResourceAssociationId, is not set");
    return UpdateProfileResourceAssociationOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(
        Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileResourceAssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileresourceassociation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileResourceAssociationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateProfileResourceAssociationOutcome(result.GetResultWithOwnership())
                            : UpdateProfileResourceAssociationOutcome(std::move(result.GetError()));
}
