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
#include <aws/mpa/MPAClient.h>
#include <aws/mpa/MPAEndpointProvider.h>
#include <aws/mpa/MPAErrorMarshaller.h>
#include <aws/mpa/model/CancelSessionRequest.h>
#include <aws/mpa/model/CreateApprovalTeamRequest.h>
#include <aws/mpa/model/CreateIdentitySourceRequest.h>
#include <aws/mpa/model/DeleteIdentitySourceRequest.h>
#include <aws/mpa/model/DeleteInactiveApprovalTeamVersionRequest.h>
#include <aws/mpa/model/GetApprovalTeamRequest.h>
#include <aws/mpa/model/GetIdentitySourceRequest.h>
#include <aws/mpa/model/GetPolicyVersionRequest.h>
#include <aws/mpa/model/GetResourcePolicyRequest.h>
#include <aws/mpa/model/GetSessionRequest.h>
#include <aws/mpa/model/ListApprovalTeamsRequest.h>
#include <aws/mpa/model/ListIdentitySourcesRequest.h>
#include <aws/mpa/model/ListPoliciesRequest.h>
#include <aws/mpa/model/ListPolicyVersionsRequest.h>
#include <aws/mpa/model/ListResourcePoliciesRequest.h>
#include <aws/mpa/model/ListSessionsRequest.h>
#include <aws/mpa/model/ListTagsForResourceRequest.h>
#include <aws/mpa/model/StartActiveApprovalTeamDeletionRequest.h>
#include <aws/mpa/model/StartApprovalTeamBaselineRequest.h>
#include <aws/mpa/model/TagResourceRequest.h>
#include <aws/mpa/model/UntagResourceRequest.h>
#include <aws/mpa/model/UpdateApprovalTeamRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MPA;
using namespace Aws::MPA::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MPA {
const char SERVICE_NAME[] = "mpa";
const char ALLOCATION_TAG[] = "MPAClient";
}  // namespace MPA
}  // namespace Aws
const char* MPAClient::GetServiceName() { return SERVICE_NAME; }
const char* MPAClient::GetAllocationTag() { return ALLOCATION_TAG; }

MPAClient::MPAClient(const MPA::MPAClientConfiguration& clientConfiguration, std::shared_ptr<MPAEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MPAErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MPAEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MPAClient::MPAClient(const AWSCredentials& credentials, std::shared_ptr<MPAEndpointProviderBase> endpointProvider,
                     const MPA::MPAClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MPAErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MPAEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MPAClient::MPAClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<MPAEndpointProviderBase> endpointProvider, const MPA::MPAClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MPAErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MPAEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MPAClient::MPAClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MPAErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MPAEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MPAClient::MPAClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MPAErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MPAEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MPAClient::MPAClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MPAErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MPAEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MPAClient::~MPAClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MPAEndpointProviderBase>& MPAClient::accessEndpointProvider() { return m_endpointProvider; }

void MPAClient::init(const MPA::MPAClientConfiguration& config) {
  AWSClient::SetServiceClientName("MPA");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "mpa");
}

void MPAClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MPAClient::InvokeOperationOutcome MPAClient::InvokeServiceOperation(
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

CancelSessionOutcome MPAClient::CancelSession(const CancelSessionRequest& request) const {
  if (!request.SessionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelSession", "Required field: SessionArn, is not set");
    return CancelSessionOutcome(
        Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CancelSessionOutcome(result.GetResultWithOwnership()) : CancelSessionOutcome(std::move(result.GetError()));
}

CreateApprovalTeamOutcome MPAClient::CreateApprovalTeam(const CreateApprovalTeamRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/approval-teams");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateApprovalTeamOutcome(result.GetResultWithOwnership())
                            : CreateApprovalTeamOutcome(std::move(result.GetError()));
}

CreateIdentitySourceOutcome MPAClient::CreateIdentitySource(const CreateIdentitySourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-sources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIdentitySourceOutcome(result.GetResultWithOwnership())
                            : CreateIdentitySourceOutcome(std::move(result.GetError()));
}

DeleteIdentitySourceOutcome MPAClient::DeleteIdentitySource(const DeleteIdentitySourceRequest& request) const {
  if (!request.IdentitySourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIdentitySource", "Required field: IdentitySourceArn, is not set");
    return DeleteIdentitySourceOutcome(Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [IdentitySourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentitySourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteIdentitySourceOutcome(result.GetResultWithOwnership())
                            : DeleteIdentitySourceOutcome(std::move(result.GetError()));
}

DeleteInactiveApprovalTeamVersionOutcome MPAClient::DeleteInactiveApprovalTeamVersion(
    const DeleteInactiveApprovalTeamVersionRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInactiveApprovalTeamVersion", "Required field: Arn, is not set");
    return DeleteInactiveApprovalTeamVersionOutcome(
        Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  if (!request.VersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInactiveApprovalTeamVersion", "Required field: VersionId, is not set");
    return DeleteInactiveApprovalTeamVersionOutcome(
        Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/approval-teams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteInactiveApprovalTeamVersionOutcome(result.GetResultWithOwnership())
                            : DeleteInactiveApprovalTeamVersionOutcome(std::move(result.GetError()));
}

GetApprovalTeamOutcome MPAClient::GetApprovalTeam(const GetApprovalTeamRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApprovalTeam", "Required field: Arn, is not set");
    return GetApprovalTeamOutcome(
        Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/approval-teams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetApprovalTeamOutcome(result.GetResultWithOwnership())
                            : GetApprovalTeamOutcome(std::move(result.GetError()));
}

GetIdentitySourceOutcome MPAClient::GetIdentitySource(const GetIdentitySourceRequest& request) const {
  if (!request.IdentitySourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIdentitySource", "Required field: IdentitySourceArn, is not set");
    return GetIdentitySourceOutcome(Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [IdentitySourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentitySourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetIdentitySourceOutcome(result.GetResultWithOwnership())
                            : GetIdentitySourceOutcome(std::move(result.GetError()));
}

GetPolicyVersionOutcome MPAClient::GetPolicyVersion(const GetPolicyVersionRequest& request) const {
  if (!request.PolicyVersionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicyVersion", "Required field: PolicyVersionArn, is not set");
    return GetPolicyVersionOutcome(Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [PolicyVersionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyVersionArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPolicyVersionOutcome(result.GetResultWithOwnership())
                            : GetPolicyVersionOutcome(std::move(result.GetError()));
}

GetResourcePolicyOutcome MPAClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetResourcePolicy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}

GetSessionOutcome MPAClient::GetSession(const GetSessionRequest& request) const {
  if (!request.SessionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: SessionArn, is not set");
    return GetSessionOutcome(
        Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSessionOutcome(result.GetResultWithOwnership()) : GetSessionOutcome(std::move(result.GetError()));
}

ListApprovalTeamsOutcome MPAClient::ListApprovalTeams(const ListApprovalTeamsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/approval-teams/");
    ss.str("?List");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListApprovalTeamsOutcome(result.GetResultWithOwnership())
                            : ListApprovalTeamsOutcome(std::move(result.GetError()));
}

ListIdentitySourcesOutcome MPAClient::ListIdentitySources(const ListIdentitySourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-sources/");
    ss.str("?List");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIdentitySourcesOutcome(result.GetResultWithOwnership())
                            : ListIdentitySourcesOutcome(std::move(result.GetError()));
}

ListPoliciesOutcome MPAClient::ListPolicies(const ListPoliciesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    ss.str("?List");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPoliciesOutcome(result.GetResultWithOwnership()) : ListPoliciesOutcome(std::move(result.GetError()));
}

ListPolicyVersionsOutcome MPAClient::ListPolicyVersions(const ListPolicyVersionsRequest& request) const {
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPolicyVersions", "Required field: PolicyArn, is not set");
    return ListPolicyVersionsOutcome(
        Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/");
    ss.str("?List");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPolicyVersionsOutcome(result.GetResultWithOwnership())
                            : ListPolicyVersionsOutcome(std::move(result.GetError()));
}

ListResourcePoliciesOutcome MPAClient::ListResourcePolicies(const ListResourcePoliciesRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListResourcePolicies", "Required field: ResourceArn, is not set");
    return ListResourcePoliciesOutcome(
        Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/");
    ss.str("?List");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourcePoliciesOutcome(result.GetResultWithOwnership())
                            : ListResourcePoliciesOutcome(std::move(result.GetError()));
}

ListSessionsOutcome MPAClient::ListSessions(const ListSessionsRequest& request) const {
  if (!request.ApprovalTeamArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessions", "Required field: ApprovalTeamArn, is not set");
    return ListSessionsOutcome(Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [ApprovalTeamArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/approval-teams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApprovalTeamArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    ss.str("?List");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSessionsOutcome(result.GetResultWithOwnership()) : ListSessionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome MPAClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(
        Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

StartActiveApprovalTeamDeletionOutcome MPAClient::StartActiveApprovalTeamDeletion(
    const StartActiveApprovalTeamDeletionRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartActiveApprovalTeamDeletion", "Required field: Arn, is not set");
    return StartActiveApprovalTeamDeletionOutcome(
        Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/approval-teams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    ss.str("?Delete");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartActiveApprovalTeamDeletionOutcome(result.GetResultWithOwnership())
                            : StartActiveApprovalTeamDeletionOutcome(std::move(result.GetError()));
}

StartApprovalTeamBaselineOutcome MPAClient::StartApprovalTeamBaseline(const StartApprovalTeamBaselineRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartApprovalTeamBaseline", "Required field: Arn, is not set");
    return StartApprovalTeamBaselineOutcome(
        Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/approval-teams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/baseline");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartApprovalTeamBaselineOutcome(result.GetResultWithOwnership())
                            : StartApprovalTeamBaselineOutcome(std::move(result.GetError()));
}

TagResourceOutcome MPAClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(
        Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome MPAClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateApprovalTeamOutcome MPAClient::UpdateApprovalTeam(const UpdateApprovalTeamRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApprovalTeam", "Required field: Arn, is not set");
    return UpdateApprovalTeamOutcome(
        Aws::Client::AWSError<MPAErrors>(MPAErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/approval-teams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateApprovalTeamOutcome(result.GetResultWithOwnership())
                            : UpdateApprovalTeamOutcome(std::move(result.GetError()));
}
