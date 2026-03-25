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
#include <aws/signer/SignerClient.h>
#include <aws/signer/SignerEndpointProvider.h>
#include <aws/signer/SignerErrorMarshaller.h>
#include <aws/signer/model/AddProfilePermissionRequest.h>
#include <aws/signer/model/CancelSigningProfileRequest.h>
#include <aws/signer/model/DescribeSigningJobRequest.h>
#include <aws/signer/model/GetRevocationStatusRequest.h>
#include <aws/signer/model/GetSigningPlatformRequest.h>
#include <aws/signer/model/GetSigningProfileRequest.h>
#include <aws/signer/model/ListProfilePermissionsRequest.h>
#include <aws/signer/model/ListSigningJobsRequest.h>
#include <aws/signer/model/ListSigningPlatformsRequest.h>
#include <aws/signer/model/ListSigningProfilesRequest.h>
#include <aws/signer/model/ListTagsForResourceRequest.h>
#include <aws/signer/model/PutSigningProfileRequest.h>
#include <aws/signer/model/RemoveProfilePermissionRequest.h>
#include <aws/signer/model/RevokeSignatureRequest.h>
#include <aws/signer/model/RevokeSigningProfileRequest.h>
#include <aws/signer/model/SignPayloadRequest.h>
#include <aws/signer/model/StartSigningJobRequest.h>
#include <aws/signer/model/TagResourceRequest.h>
#include <aws/signer/model/UntagResourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::signer;
using namespace Aws::signer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace signer {
const char SERVICE_NAME[] = "signer";
const char ALLOCATION_TAG[] = "SignerClient";
}  // namespace signer
}  // namespace Aws
const char* SignerClient::GetServiceName() { return SERVICE_NAME; }
const char* SignerClient::GetAllocationTag() { return ALLOCATION_TAG; }

SignerClient::SignerClient(const signer::SignerClientConfiguration& clientConfiguration,
                           std::shared_ptr<SignerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SignerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SignerClient::SignerClient(const AWSCredentials& credentials, std::shared_ptr<SignerEndpointProviderBase> endpointProvider,
                           const signer::SignerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SignerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SignerClient::SignerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<SignerEndpointProviderBase> endpointProvider,
                           const signer::SignerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SignerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SignerClient::SignerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SignerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SignerClient::SignerClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SignerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SignerClient::SignerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SignerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SignerClient::~SignerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SignerEndpointProviderBase>& SignerClient::accessEndpointProvider() { return m_endpointProvider; }

void SignerClient::init(const signer::SignerClientConfiguration& config) {
  AWSClient::SetServiceClientName("signer");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "signer");
}

void SignerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SignerClient::InvokeOperationOutcome SignerClient::InvokeServiceOperation(
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

AddProfilePermissionOutcome SignerClient::AddProfilePermission(const AddProfilePermissionRequest& request) const {
  if (!request.ProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddProfilePermission", "Required field: ProfileName, is not set");
    return AddProfilePermissionOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProfileName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  return AddProfilePermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelSigningProfileOutcome SignerClient::CancelSigningProfile(const CancelSigningProfileRequest& request) const {
  if (!request.ProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelSigningProfile", "Required field: ProfileName, is not set");
    return CancelSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProfileName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileName());
  };

  return CancelSigningProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeSigningJobOutcome SignerClient::DescribeSigningJob(const DescribeSigningJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSigningJob", "Required field: JobId, is not set");
    return DescribeSigningJobOutcome(
        Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return DescribeSigningJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRevocationStatusOutcome SignerClient::GetRevocationStatus(const GetRevocationStatusRequest& request) const {
  if (!request.SignatureTimestampHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRevocationStatus", "Required field: SignatureTimestamp, is not set");
    return GetRevocationStatusOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SignatureTimestamp]", false));
  }
  if (!request.PlatformIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRevocationStatus", "Required field: PlatformId, is not set");
    return GetRevocationStatusOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [PlatformId]", false));
  }
  if (!request.ProfileVersionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRevocationStatus", "Required field: ProfileVersionArn, is not set");
    return GetRevocationStatusOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ProfileVersionArn]", false));
  }
  if (!request.JobArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRevocationStatus", "Required field: JobArn, is not set");
    return GetRevocationStatusOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [JobArn]", false));
  }
  if (!request.CertificateHashesHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRevocationStatus", "Required field: CertificateHashes, is not set");
    return GetRevocationStatusOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [CertificateHashes]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/revocations");
  };

  return GetRevocationStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSigningPlatformOutcome SignerClient::GetSigningPlatform(const GetSigningPlatformRequest& request) const {
  if (!request.PlatformIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSigningPlatform", "Required field: PlatformId, is not set");
    return GetSigningPlatformOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [PlatformId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-platforms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlatformId());
  };

  return GetSigningPlatformOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSigningProfileOutcome SignerClient::GetSigningProfile(const GetSigningProfileRequest& request) const {
  if (!request.ProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSigningProfile", "Required field: ProfileName, is not set");
    return GetSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ProfileName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileName());
  };

  return GetSigningProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProfilePermissionsOutcome SignerClient::ListProfilePermissions(const ListProfilePermissionsRequest& request) const {
  if (!request.ProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProfilePermissions", "Required field: ProfileName, is not set");
    return ListProfilePermissionsOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ProfileName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  return ListProfilePermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSigningJobsOutcome SignerClient::ListSigningJobs(const ListSigningJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-jobs");
  };

  return ListSigningJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSigningPlatformsOutcome SignerClient::ListSigningPlatforms(const ListSigningPlatformsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-platforms");
  };

  return ListSigningPlatformsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSigningProfilesOutcome SignerClient::ListSigningProfiles(const ListSigningProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles");
  };

  return ListSigningProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome SignerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutSigningProfileOutcome SignerClient::PutSigningProfile(const PutSigningProfileRequest& request) const {
  if (!request.ProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSigningProfile", "Required field: ProfileName, is not set");
    return PutSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ProfileName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileName());
  };

  return PutSigningProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RemoveProfilePermissionOutcome SignerClient::RemoveProfilePermission(const RemoveProfilePermissionRequest& request) const {
  if (!request.ProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveProfilePermission", "Required field: ProfileName, is not set");
    return RemoveProfilePermissionOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ProfileName]", false));
  }
  if (!request.RevisionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveProfilePermission", "Required field: RevisionId, is not set");
    return RemoveProfilePermissionOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [RevisionId]", false));
  }
  if (!request.StatementIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveProfilePermission", "Required field: StatementId, is not set");
    return RemoveProfilePermissionOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [StatementId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatementId());
  };

  return RemoveProfilePermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

RevokeSignatureOutcome SignerClient::RevokeSignature(const RevokeSignatureRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RevokeSignature", "Required field: JobId, is not set");
    return RevokeSignatureOutcome(
        Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revoke");
  };

  return RevokeSignatureOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RevokeSigningProfileOutcome SignerClient::RevokeSigningProfile(const RevokeSigningProfileRequest& request) const {
  if (!request.ProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RevokeSigningProfile", "Required field: ProfileName, is not set");
    return RevokeSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProfileName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revoke");
  };

  return RevokeSigningProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SignPayloadOutcome SignerClient::SignPayload(const SignPayloadRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-jobs/with-payload");
  };

  return SignPayloadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSigningJobOutcome SignerClient::StartSigningJob(const StartSigningJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signing-jobs");
  };

  return StartSigningJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome SignerClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome SignerClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}
