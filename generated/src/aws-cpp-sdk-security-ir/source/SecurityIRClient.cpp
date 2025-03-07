/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>


#include <aws/security-ir/SecurityIRClient.h>
#include <aws/security-ir/SecurityIRErrorMarshaller.h>
#include <aws/security-ir/SecurityIREndpointProvider.h>
#include <aws/security-ir/model/BatchGetMemberAccountDetailsRequest.h>
#include <aws/security-ir/model/CancelMembershipRequest.h>
#include <aws/security-ir/model/CloseCaseRequest.h>
#include <aws/security-ir/model/CreateCaseRequest.h>
#include <aws/security-ir/model/CreateCaseCommentRequest.h>
#include <aws/security-ir/model/CreateMembershipRequest.h>
#include <aws/security-ir/model/GetCaseRequest.h>
#include <aws/security-ir/model/GetCaseAttachmentDownloadUrlRequest.h>
#include <aws/security-ir/model/GetCaseAttachmentUploadUrlRequest.h>
#include <aws/security-ir/model/GetMembershipRequest.h>
#include <aws/security-ir/model/ListCaseEditsRequest.h>
#include <aws/security-ir/model/ListCasesRequest.h>
#include <aws/security-ir/model/ListCommentsRequest.h>
#include <aws/security-ir/model/ListMembershipsRequest.h>
#include <aws/security-ir/model/ListTagsForResourceRequest.h>
#include <aws/security-ir/model/TagResourceRequest.h>
#include <aws/security-ir/model/UntagResourceRequest.h>
#include <aws/security-ir/model/UpdateCaseRequest.h>
#include <aws/security-ir/model/UpdateCaseCommentRequest.h>
#include <aws/security-ir/model/UpdateCaseStatusRequest.h>
#include <aws/security-ir/model/UpdateMembershipRequest.h>
#include <aws/security-ir/model/UpdateResolverTypeRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SecurityIR;
using namespace Aws::SecurityIR::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace SecurityIR
  {
    const char ALLOCATION_TAG[] = "SecurityIRClient";
    const char SERVICE_NAME[] = "security-ir";
  }
}
const char* SecurityIRClient::GetServiceName() {return SERVICE_NAME;}
const char* SecurityIRClient::GetAllocationTag() {return ALLOCATION_TAG;}

SecurityIRClient::SecurityIRClient(const SecurityIR::SecurityIRClientConfiguration& clientConfiguration,
                           std::shared_ptr<SecurityIREndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Security IR",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SecurityIRErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<SecurityIREndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

SecurityIRClient::SecurityIRClient(const AWSCredentials& credentials,
                           std::shared_ptr<SecurityIREndpointProviderBase> endpointProvider,
                           const SecurityIR::SecurityIRClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Security IR",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SecurityIRErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<SecurityIREndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

SecurityIRClient::SecurityIRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<SecurityIREndpointProviderBase> endpointProvider,
                           const SecurityIR::SecurityIRClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Security IR",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SecurityIRErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<SecurityIREndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
SecurityIRClient::SecurityIRClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Security IR",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<SecurityIRErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<SecurityIREndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

SecurityIRClient::SecurityIRClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Security IR",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SecurityIRErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<SecurityIREndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

SecurityIRClient::SecurityIRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Security IR",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SecurityIRErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<SecurityIREndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

SecurityIRClient::~SecurityIRClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<SecurityIREndpointProviderBase>& SecurityIRClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SecurityIRClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
BatchGetMemberAccountDetailsOutcome SecurityIRClient::BatchGetMemberAccountDetails(const BatchGetMemberAccountDetailsRequest& request) const
{
  AWS_OPERATION_GUARD(BatchGetMemberAccountDetails);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetMemberAccountDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetMemberAccountDetails", "Required field: MembershipId, is not set");
    return BatchGetMemberAccountDetailsOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchGetMemberAccountDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetMemberAccountDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetMemberAccountDetails",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetMemberAccountDetailsOutcome>(
    [&]()-> BatchGetMemberAccountDetailsOutcome {
      return BatchGetMemberAccountDetailsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/membership/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipId());
      resolvedEndpoint.AddPathSegments("/batch-member-details");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelMembershipOutcome SecurityIRClient::CancelMembership(const CancelMembershipRequest& request) const
{
  AWS_OPERATION_GUARD(CancelMembership);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelMembership", "Required field: MembershipId, is not set");
    return CancelMembershipOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelMembershipOutcome>(
    [&]()-> CancelMembershipOutcome {
      return CancelMembershipOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/membership/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CloseCaseOutcome SecurityIRClient::CloseCase(const CloseCaseRequest& request) const
{
  AWS_OPERATION_GUARD(CloseCase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CloseCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CloseCase", "Required field: CaseId, is not set");
    return CloseCaseOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CloseCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CloseCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CloseCase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CloseCaseOutcome>(
    [&]()-> CloseCaseOutcome {
      return CloseCaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/cases/");
      resolvedEndpoint.AddPathSegment(request.GetCaseId());
      resolvedEndpoint.AddPathSegments("/close-case");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCaseOutcome SecurityIRClient::CreateCase(const CreateCaseRequest& request) const
{
  AWS_OPERATION_GUARD(CreateCase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateCase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateCaseOutcome>(
    [&]()-> CreateCaseOutcome {
      return CreateCaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/create-case");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCaseCommentOutcome SecurityIRClient::CreateCaseComment(const CreateCaseCommentRequest& request) const
{
  AWS_OPERATION_GUARD(CreateCaseComment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCaseComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCaseComment", "Required field: CaseId, is not set");
    return CreateCaseCommentOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateCaseComment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateCaseComment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateCaseComment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateCaseCommentOutcome>(
    [&]()-> CreateCaseCommentOutcome {
      return CreateCaseCommentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/cases/");
      resolvedEndpoint.AddPathSegment(request.GetCaseId());
      resolvedEndpoint.AddPathSegments("/create-comment");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMembershipOutcome SecurityIRClient::CreateMembership(const CreateMembershipRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMembership);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMembershipOutcome>(
    [&]()-> CreateMembershipOutcome {
      return CreateMembershipOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/membership");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCaseOutcome SecurityIRClient::GetCase(const GetCaseRequest& request) const
{
  AWS_OPERATION_GUARD(GetCase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCase", "Required field: CaseId, is not set");
    return GetCaseOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCaseOutcome>(
    [&]()-> GetCaseOutcome {
      return GetCaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/cases/");
      resolvedEndpoint.AddPathSegment(request.GetCaseId());
      resolvedEndpoint.AddPathSegments("/get-case");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCaseAttachmentDownloadUrlOutcome SecurityIRClient::GetCaseAttachmentDownloadUrl(const GetCaseAttachmentDownloadUrlRequest& request) const
{
  AWS_OPERATION_GUARD(GetCaseAttachmentDownloadUrl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCaseAttachmentDownloadUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCaseAttachmentDownloadUrl", "Required field: CaseId, is not set");
    return GetCaseAttachmentDownloadUrlOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  if (!request.AttachmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCaseAttachmentDownloadUrl", "Required field: AttachmentId, is not set");
    return GetCaseAttachmentDownloadUrlOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCaseAttachmentDownloadUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCaseAttachmentDownloadUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCaseAttachmentDownloadUrl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCaseAttachmentDownloadUrlOutcome>(
    [&]()-> GetCaseAttachmentDownloadUrlOutcome {
      return GetCaseAttachmentDownloadUrlOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/cases/");
      resolvedEndpoint.AddPathSegment(request.GetCaseId());
      resolvedEndpoint.AddPathSegments("/get-presigned-url/");
      resolvedEndpoint.AddPathSegment(request.GetAttachmentId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCaseAttachmentUploadUrlOutcome SecurityIRClient::GetCaseAttachmentUploadUrl(const GetCaseAttachmentUploadUrlRequest& request) const
{
  AWS_OPERATION_GUARD(GetCaseAttachmentUploadUrl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCaseAttachmentUploadUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCaseAttachmentUploadUrl", "Required field: CaseId, is not set");
    return GetCaseAttachmentUploadUrlOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCaseAttachmentUploadUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCaseAttachmentUploadUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCaseAttachmentUploadUrl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCaseAttachmentUploadUrlOutcome>(
    [&]()-> GetCaseAttachmentUploadUrlOutcome {
      return GetCaseAttachmentUploadUrlOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/cases/");
      resolvedEndpoint.AddPathSegment(request.GetCaseId());
      resolvedEndpoint.AddPathSegments("/get-presigned-url");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMembershipOutcome SecurityIRClient::GetMembership(const GetMembershipRequest& request) const
{
  AWS_OPERATION_GUARD(GetMembership);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMembership", "Required field: MembershipId, is not set");
    return GetMembershipOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMembershipOutcome>(
    [&]()-> GetMembershipOutcome {
      return GetMembershipOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/membership/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCaseEditsOutcome SecurityIRClient::ListCaseEdits(const ListCaseEditsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCaseEdits);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCaseEdits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCaseEdits", "Required field: CaseId, is not set");
    return ListCaseEditsOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCaseEdits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCaseEdits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCaseEdits",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCaseEditsOutcome>(
    [&]()-> ListCaseEditsOutcome {
      return ListCaseEditsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/cases/");
      resolvedEndpoint.AddPathSegment(request.GetCaseId());
      resolvedEndpoint.AddPathSegments("/list-case-edits");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCasesOutcome SecurityIRClient::ListCases(const ListCasesRequest& request) const
{
  AWS_OPERATION_GUARD(ListCases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCases",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCasesOutcome>(
    [&]()-> ListCasesOutcome {
      return ListCasesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/list-cases");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCommentsOutcome SecurityIRClient::ListComments(const ListCommentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListComments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListComments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListComments", "Required field: CaseId, is not set");
    return ListCommentsOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListComments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListComments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListComments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCommentsOutcome>(
    [&]()-> ListCommentsOutcome {
      return ListCommentsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/cases/");
      resolvedEndpoint.AddPathSegment(request.GetCaseId());
      resolvedEndpoint.AddPathSegments("/list-comments");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMembershipsOutcome SecurityIRClient::ListMemberships(const ListMembershipsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMemberships);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMemberships, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMemberships, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMemberships",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMembershipsOutcome>(
    [&]()-> ListMembershipsOutcome {
      return ListMembershipsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/memberships");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome SecurityIRClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome SecurityIRClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome SecurityIRClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateCaseOutcome SecurityIRClient::UpdateCase(const UpdateCaseRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateCase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCase", "Required field: CaseId, is not set");
    return UpdateCaseOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateCase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateCaseOutcome>(
    [&]()-> UpdateCaseOutcome {
      return UpdateCaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/cases/");
      resolvedEndpoint.AddPathSegment(request.GetCaseId());
      resolvedEndpoint.AddPathSegments("/update-case");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateCaseCommentOutcome SecurityIRClient::UpdateCaseComment(const UpdateCaseCommentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateCaseComment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCaseComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCaseComment", "Required field: CaseId, is not set");
    return UpdateCaseCommentOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  if (!request.CommentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCaseComment", "Required field: CommentId, is not set");
    return UpdateCaseCommentOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CommentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateCaseComment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateCaseComment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateCaseComment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateCaseCommentOutcome>(
    [&]()-> UpdateCaseCommentOutcome {
      return UpdateCaseCommentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/cases/");
      resolvedEndpoint.AddPathSegment(request.GetCaseId());
      resolvedEndpoint.AddPathSegments("/update-case-comment/");
      resolvedEndpoint.AddPathSegment(request.GetCommentId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateCaseStatusOutcome SecurityIRClient::UpdateCaseStatus(const UpdateCaseStatusRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateCaseStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCaseStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCaseStatus", "Required field: CaseId, is not set");
    return UpdateCaseStatusOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateCaseStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateCaseStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateCaseStatus",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateCaseStatusOutcome>(
    [&]()-> UpdateCaseStatusOutcome {
      return UpdateCaseStatusOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/cases/");
      resolvedEndpoint.AddPathSegment(request.GetCaseId());
      resolvedEndpoint.AddPathSegments("/update-case-status");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMembershipOutcome SecurityIRClient::UpdateMembership(const UpdateMembershipRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMembership);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMembership", "Required field: MembershipId, is not set");
    return UpdateMembershipOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMembershipOutcome>(
    [&]()-> UpdateMembershipOutcome {
      return UpdateMembershipOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/membership/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipId());
      resolvedEndpoint.AddPathSegments("/update-membership");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateResolverTypeOutcome SecurityIRClient::UpdateResolverType(const UpdateResolverTypeRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateResolverType);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResolverType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResolverType", "Required field: CaseId, is not set");
    return UpdateResolverTypeOutcome(Aws::Client::AWSError<SecurityIRErrors>(SecurityIRErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateResolverType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateResolverType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateResolverType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateResolverTypeOutcome>(
    [&]()-> UpdateResolverTypeOutcome {
      return UpdateResolverTypeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/cases/");
      resolvedEndpoint.AddPathSegment(request.GetCaseId());
      resolvedEndpoint.AddPathSegments("/update-resolver-type");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


