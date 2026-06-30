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
#include <aws/supportauthz/SupportAuthZClient.h>
#include <aws/supportauthz/SupportAuthZEndpointProvider.h>
#include <aws/supportauthz/SupportAuthZErrorMarshaller.h>
#include <aws/supportauthz/model/CreateSupportPermitRequest.h>
#include <aws/supportauthz/model/DeleteSupportPermitRequest.h>
#include <aws/supportauthz/model/GetActionRequest.h>
#include <aws/supportauthz/model/GetSupportPermitRequest.h>
#include <aws/supportauthz/model/ListActionsRequest.h>
#include <aws/supportauthz/model/ListSupportPermitRequestsRequest.h>
#include <aws/supportauthz/model/ListSupportPermitsRequest.h>
#include <aws/supportauthz/model/ListTagsForResourceRequest.h>
#include <aws/supportauthz/model/RejectSupportPermitRequestRequest.h>
#include <aws/supportauthz/model/TagResourceRequest.h>
#include <aws/supportauthz/model/UntagResourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SupportAuthZ;
using namespace Aws::SupportAuthZ::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SupportAuthZ {
const char SERVICE_NAME[] = "supportauthz";
const char ALLOCATION_TAG[] = "SupportAuthZClient";
}  // namespace SupportAuthZ
}  // namespace Aws
const char* SupportAuthZClient::GetServiceName() { return SERVICE_NAME; }
const char* SupportAuthZClient::GetAllocationTag() { return ALLOCATION_TAG; }

SupportAuthZClient::SupportAuthZClient(const SupportAuthZ::SupportAuthZClientConfiguration& clientConfiguration,
                                       std::shared_ptr<SupportAuthZEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupportAuthZErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SupportAuthZEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SupportAuthZClient::SupportAuthZClient(const AWSCredentials& credentials,
                                       std::shared_ptr<SupportAuthZEndpointProviderBase> endpointProvider,
                                       const SupportAuthZ::SupportAuthZClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupportAuthZErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SupportAuthZEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SupportAuthZClient::SupportAuthZClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<SupportAuthZEndpointProviderBase> endpointProvider,
                                       const SupportAuthZ::SupportAuthZClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupportAuthZErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SupportAuthZEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SupportAuthZClient::SupportAuthZClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupportAuthZErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SupportAuthZEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SupportAuthZClient::SupportAuthZClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupportAuthZErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SupportAuthZEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SupportAuthZClient::SupportAuthZClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupportAuthZErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SupportAuthZEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SupportAuthZClient::~SupportAuthZClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SupportAuthZEndpointProviderBase>& SupportAuthZClient::accessEndpointProvider() { return m_endpointProvider; }

void SupportAuthZClient::init(const SupportAuthZ::SupportAuthZClientConfiguration& config) {
  AWSClient::SetServiceClientName("SupportAuthZ");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "supportauthz");
}

void SupportAuthZClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SupportAuthZClient::InvokeOperationOutcome SupportAuthZClient::InvokeServiceOperation(
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

CreateSupportPermitOutcome SupportAuthZClient::CreateSupportPermit(const CreateSupportPermitRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/support-permits");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSupportPermitOutcome(result.GetResultWithOwnership())
                            : CreateSupportPermitOutcome(std::move(result.GetError()));
}

DeleteSupportPermitOutcome SupportAuthZClient::DeleteSupportPermit(const DeleteSupportPermitRequest& request) const {
  if (!request.SupportPermitIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSupportPermit", "Required field: SupportPermitIdentifier, is not set");
    return DeleteSupportPermitOutcome(Aws::Client::AWSError<SupportAuthZErrors>(SupportAuthZErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [SupportPermitIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/support-permits/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSupportPermitIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSupportPermitOutcome(result.GetResultWithOwnership())
                            : DeleteSupportPermitOutcome(std::move(result.GetError()));
}

GetActionOutcome SupportAuthZClient::GetAction(const GetActionRequest& request) const {
  if (!request.ActionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAction", "Required field: Action, is not set");
    return GetActionOutcome(Aws::Client::AWSError<SupportAuthZErrors>(SupportAuthZErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Action]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAction());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetActionOutcome(result.GetResultWithOwnership()) : GetActionOutcome(std::move(result.GetError()));
}

GetSupportPermitOutcome SupportAuthZClient::GetSupportPermit(const GetSupportPermitRequest& request) const {
  if (!request.SupportPermitIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSupportPermit", "Required field: SupportPermitIdentifier, is not set");
    return GetSupportPermitOutcome(Aws::Client::AWSError<SupportAuthZErrors>(SupportAuthZErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SupportPermitIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/support-permits/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSupportPermitIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSupportPermitOutcome(result.GetResultWithOwnership())
                            : GetSupportPermitOutcome(std::move(result.GetError()));
}

ListActionsOutcome SupportAuthZClient::ListActions(const ListActionsRequest& request) const {
  if (!request.ServiceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListActions", "Required field: Service, is not set");
    return ListActionsOutcome(Aws::Client::AWSError<SupportAuthZErrors>(SupportAuthZErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Service]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListActionsOutcome(result.GetResultWithOwnership()) : ListActionsOutcome(std::move(result.GetError()));
}

ListSupportPermitRequestsOutcome SupportAuthZClient::ListSupportPermitRequests(const ListSupportPermitRequestsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/support-permit-requests");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSupportPermitRequestsOutcome(result.GetResultWithOwnership())
                            : ListSupportPermitRequestsOutcome(std::move(result.GetError()));
}

ListSupportPermitsOutcome SupportAuthZClient::ListSupportPermits(const ListSupportPermitsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/support-permits");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSupportPermitsOutcome(result.GetResultWithOwnership())
                            : ListSupportPermitsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome SupportAuthZClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SupportAuthZErrors>(SupportAuthZErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
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

RejectSupportPermitRequestOutcome SupportAuthZClient::RejectSupportPermitRequest(const RejectSupportPermitRequestRequest& request) const {
  if (!request.RequestArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectSupportPermitRequest", "Required field: RequestArn, is not set");
    return RejectSupportPermitRequestOutcome(Aws::Client::AWSError<SupportAuthZErrors>(
        SupportAuthZErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/support-permit-requests/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRequestArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reject");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? RejectSupportPermitRequestOutcome(result.GetResultWithOwnership())
                            : RejectSupportPermitRequestOutcome(std::move(result.GetError()));
}

TagResourceOutcome SupportAuthZClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SupportAuthZErrors>(SupportAuthZErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UntagResourceOutcome SupportAuthZClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SupportAuthZErrors>(SupportAuthZErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SupportAuthZErrors>(SupportAuthZErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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
