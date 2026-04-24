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
#include <aws/security-ir/SecurityIRClient.h>
#include <aws/security-ir/SecurityIREndpointProvider.h>
#include <aws/security-ir/SecurityIRErrorMarshaller.h>
#include <aws/security-ir/model/BatchGetMemberAccountDetailsRequest.h>
#include <aws/security-ir/model/CancelMembershipRequest.h>
#include <aws/security-ir/model/CloseCaseRequest.h>
#include <aws/security-ir/model/CreateCaseCommentRequest.h>
#include <aws/security-ir/model/CreateCaseRequest.h>
#include <aws/security-ir/model/CreateMembershipRequest.h>
#include <aws/security-ir/model/GetCaseAttachmentDownloadUrlRequest.h>
#include <aws/security-ir/model/GetCaseAttachmentUploadUrlRequest.h>
#include <aws/security-ir/model/GetCaseRequest.h>
#include <aws/security-ir/model/GetMembershipRequest.h>
#include <aws/security-ir/model/ListCaseEditsRequest.h>
#include <aws/security-ir/model/ListCasesRequest.h>
#include <aws/security-ir/model/ListCommentsRequest.h>
#include <aws/security-ir/model/ListInvestigationsRequest.h>
#include <aws/security-ir/model/ListMembershipsRequest.h>
#include <aws/security-ir/model/ListTagsForResourceRequest.h>
#include <aws/security-ir/model/SendFeedbackRequest.h>
#include <aws/security-ir/model/TagResourceRequest.h>
#include <aws/security-ir/model/UntagResourceRequest.h>
#include <aws/security-ir/model/UpdateCaseCommentRequest.h>
#include <aws/security-ir/model/UpdateCaseRequest.h>
#include <aws/security-ir/model/UpdateCaseStatusRequest.h>
#include <aws/security-ir/model/UpdateMembershipRequest.h>
#include <aws/security-ir/model/UpdateResolverTypeRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SecurityIR;
using namespace Aws::SecurityIR::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SecurityIR {
const char SERVICE_NAME[] = "security-ir";
const char ALLOCATION_TAG[] = "SecurityIRClient";
}  // namespace SecurityIR
}  // namespace Aws
const char* SecurityIRClient::GetServiceName() { return SERVICE_NAME; }
const char* SecurityIRClient::GetAllocationTag() { return ALLOCATION_TAG; }

SecurityIRClient::SecurityIRClient(const SecurityIR::SecurityIRClientConfiguration& clientConfiguration,
                                   std::shared_ptr<SecurityIREndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityIRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecurityIREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityIRClient::SecurityIRClient(const AWSCredentials& credentials, std::shared_ptr<SecurityIREndpointProviderBase> endpointProvider,
                                   const SecurityIR::SecurityIRClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityIRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecurityIREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityIRClient::SecurityIRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<SecurityIREndpointProviderBase> endpointProvider,
                                   const SecurityIR::SecurityIRClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityIRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecurityIREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SecurityIRClient::SecurityIRClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityIRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecurityIREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityIRClient::SecurityIRClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityIRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecurityIREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityIRClient::SecurityIRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityIRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecurityIREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SecurityIRClient::~SecurityIRClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SecurityIREndpointProviderBase>& SecurityIRClient::accessEndpointProvider() { return m_endpointProvider; }

void SecurityIRClient::init(const SecurityIR::SecurityIRClientConfiguration& config) {
  AWSClient::SetServiceClientName("Security IR");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "security-ir");
}

void SecurityIRClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SecurityIRClient::InvokeOperationOutcome SecurityIRClient::InvokeServiceOperation(
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

BatchGetMemberAccountDetailsOutcome SecurityIRClient::BatchGetMemberAccountDetails(
    const BatchGetMemberAccountDetailsRequest& request) const {
  if (!request.MembershipIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetMemberAccountDetails", "Required field: MembershipId, is not set");
    return BatchGetMemberAccountDetailsOutcome(Aws::Client::AWSError<SecurityIRErrors>(
        SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/membership/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-member-details");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetMemberAccountDetailsOutcome(result.GetResultWithOwnership())
                            : BatchGetMemberAccountDetailsOutcome(std::move(result.GetError()));
}

CancelMembershipOutcome SecurityIRClient::CancelMembership(const CancelMembershipRequest& request) const {
  if (!request.MembershipIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelMembership", "Required field: MembershipId, is not set");
    return CancelMembershipOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MembershipId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/membership/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CancelMembershipOutcome(result.GetResultWithOwnership())
                            : CancelMembershipOutcome(std::move(result.GetError()));
}

CloseCaseOutcome SecurityIRClient::CloseCase(const CloseCaseRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CloseCase", "Required field: CaseId, is not set");
    return CloseCaseOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [CaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/close-case");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CloseCaseOutcome(result.GetResultWithOwnership()) : CloseCaseOutcome(std::move(result.GetError()));
}

CreateCaseOutcome SecurityIRClient::CreateCase(const CreateCaseRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/create-case");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCaseOutcome(result.GetResultWithOwnership()) : CreateCaseOutcome(std::move(result.GetError()));
}

CreateCaseCommentOutcome SecurityIRClient::CreateCaseComment(const CreateCaseCommentRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCaseComment", "Required field: CaseId, is not set");
    return CreateCaseCommentOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [CaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-comment");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCaseCommentOutcome(result.GetResultWithOwnership())
                            : CreateCaseCommentOutcome(std::move(result.GetError()));
}

CreateMembershipOutcome SecurityIRClient::CreateMembership(const CreateMembershipRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/membership");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMembershipOutcome(result.GetResultWithOwnership())
                            : CreateMembershipOutcome(std::move(result.GetError()));
}

GetCaseOutcome SecurityIRClient::GetCase(const GetCaseRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCase", "Required field: CaseId, is not set");
    return GetCaseOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [CaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-case");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCaseOutcome(result.GetResultWithOwnership()) : GetCaseOutcome(std::move(result.GetError()));
}

GetCaseAttachmentDownloadUrlOutcome SecurityIRClient::GetCaseAttachmentDownloadUrl(
    const GetCaseAttachmentDownloadUrlRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCaseAttachmentDownloadUrl", "Required field: CaseId, is not set");
    return GetCaseAttachmentDownloadUrlOutcome(Aws::Client::AWSError<SecurityIRErrors>(
        SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  if (!request.AttachmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCaseAttachmentDownloadUrl", "Required field: AttachmentId, is not set");
    return GetCaseAttachmentDownloadUrlOutcome(Aws::Client::AWSError<SecurityIRErrors>(
        SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-presigned-url/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCaseAttachmentDownloadUrlOutcome(result.GetResultWithOwnership())
                            : GetCaseAttachmentDownloadUrlOutcome(std::move(result.GetError()));
}

GetCaseAttachmentUploadUrlOutcome SecurityIRClient::GetCaseAttachmentUploadUrl(const GetCaseAttachmentUploadUrlRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCaseAttachmentUploadUrl", "Required field: CaseId, is not set");
    return GetCaseAttachmentUploadUrlOutcome(Aws::Client::AWSError<SecurityIRErrors>(
        SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-presigned-url");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCaseAttachmentUploadUrlOutcome(result.GetResultWithOwnership())
                            : GetCaseAttachmentUploadUrlOutcome(std::move(result.GetError()));
}

GetMembershipOutcome SecurityIRClient::GetMembership(const GetMembershipRequest& request) const {
  if (!request.MembershipIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMembership", "Required field: MembershipId, is not set");
    return GetMembershipOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [MembershipId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/membership/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMembershipOutcome(result.GetResultWithOwnership()) : GetMembershipOutcome(std::move(result.GetError()));
}

ListCaseEditsOutcome SecurityIRClient::ListCaseEdits(const ListCaseEditsRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCaseEdits", "Required field: CaseId, is not set");
    return ListCaseEditsOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [CaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-case-edits");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCaseEditsOutcome(result.GetResultWithOwnership()) : ListCaseEditsOutcome(std::move(result.GetError()));
}

ListCasesOutcome SecurityIRClient::ListCases(const ListCasesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/list-cases");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCasesOutcome(result.GetResultWithOwnership()) : ListCasesOutcome(std::move(result.GetError()));
}

ListCommentsOutcome SecurityIRClient::ListComments(const ListCommentsRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListComments", "Required field: CaseId, is not set");
    return ListCommentsOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-comments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCommentsOutcome(result.GetResultWithOwnership()) : ListCommentsOutcome(std::move(result.GetError()));
}

ListInvestigationsOutcome SecurityIRClient::ListInvestigations(const ListInvestigationsRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInvestigations", "Required field: CaseId, is not set");
    return ListInvestigationsOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [CaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-investigations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInvestigationsOutcome(result.GetResultWithOwnership())
                            : ListInvestigationsOutcome(std::move(result.GetError()));
}

ListMembershipsOutcome SecurityIRClient::ListMemberships(const ListMembershipsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/memberships");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMembershipsOutcome(result.GetResultWithOwnership())
                            : ListMembershipsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome SecurityIRClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

SendFeedbackOutcome SecurityIRClient::SendFeedback(const SendFeedbackRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendFeedback", "Required field: CaseId, is not set");
    return SendFeedbackOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CaseId]", false));
  }
  if (!request.ResultIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendFeedback", "Required field: ResultId, is not set");
    return SendFeedbackOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResultId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/feedback/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResultId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/send-feedback");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendFeedbackOutcome(result.GetResultWithOwnership()) : SendFeedbackOutcome(std::move(result.GetError()));
}

TagResourceOutcome SecurityIRClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome SecurityIRClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateCaseOutcome SecurityIRClient::UpdateCase(const UpdateCaseRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCase", "Required field: CaseId, is not set");
    return UpdateCaseOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [CaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-case");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCaseOutcome(result.GetResultWithOwnership()) : UpdateCaseOutcome(std::move(result.GetError()));
}

UpdateCaseCommentOutcome SecurityIRClient::UpdateCaseComment(const UpdateCaseCommentRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCaseComment", "Required field: CaseId, is not set");
    return UpdateCaseCommentOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [CaseId]", false));
  }
  if (!request.CommentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCaseComment", "Required field: CommentId, is not set");
    return UpdateCaseCommentOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [CommentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-case-comment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCommentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateCaseCommentOutcome(result.GetResultWithOwnership())
                            : UpdateCaseCommentOutcome(std::move(result.GetError()));
}

UpdateCaseStatusOutcome SecurityIRClient::UpdateCaseStatus(const UpdateCaseStatusRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCaseStatus", "Required field: CaseId, is not set");
    return UpdateCaseStatusOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [CaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-case-status");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCaseStatusOutcome(result.GetResultWithOwnership())
                            : UpdateCaseStatusOutcome(std::move(result.GetError()));
}

UpdateMembershipOutcome SecurityIRClient::UpdateMembership(const UpdateMembershipRequest& request) const {
  if (!request.MembershipIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMembership", "Required field: MembershipId, is not set");
    return UpdateMembershipOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MembershipId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/membership/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-membership");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateMembershipOutcome(result.GetResultWithOwnership())
                            : UpdateMembershipOutcome(std::move(result.GetError()));
}

UpdateResolverTypeOutcome SecurityIRClient::UpdateResolverType(const UpdateResolverTypeRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResolverType", "Required field: CaseId, is not set");
    return UpdateResolverTypeOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [CaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-resolver-type");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateResolverTypeOutcome(result.GetResultWithOwnership())
                            : UpdateResolverTypeOutcome(std::move(result.GetError()));
}
