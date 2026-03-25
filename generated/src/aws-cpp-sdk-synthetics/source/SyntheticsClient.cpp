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
#include <aws/synthetics/SyntheticsClient.h>
#include <aws/synthetics/SyntheticsEndpointProvider.h>
#include <aws/synthetics/SyntheticsErrorMarshaller.h>
#include <aws/synthetics/model/AssociateResourceRequest.h>
#include <aws/synthetics/model/CreateCanaryRequest.h>
#include <aws/synthetics/model/CreateGroupRequest.h>
#include <aws/synthetics/model/DeleteCanaryRequest.h>
#include <aws/synthetics/model/DeleteGroupRequest.h>
#include <aws/synthetics/model/DescribeCanariesLastRunRequest.h>
#include <aws/synthetics/model/DescribeCanariesRequest.h>
#include <aws/synthetics/model/DescribeRuntimeVersionsRequest.h>
#include <aws/synthetics/model/DisassociateResourceRequest.h>
#include <aws/synthetics/model/GetCanaryRequest.h>
#include <aws/synthetics/model/GetCanaryRunsRequest.h>
#include <aws/synthetics/model/GetGroupRequest.h>
#include <aws/synthetics/model/ListAssociatedGroupsRequest.h>
#include <aws/synthetics/model/ListGroupResourcesRequest.h>
#include <aws/synthetics/model/ListGroupsRequest.h>
#include <aws/synthetics/model/ListTagsForResourceRequest.h>
#include <aws/synthetics/model/StartCanaryDryRunRequest.h>
#include <aws/synthetics/model/StartCanaryRequest.h>
#include <aws/synthetics/model/StopCanaryRequest.h>
#include <aws/synthetics/model/TagResourceRequest.h>
#include <aws/synthetics/model/UntagResourceRequest.h>
#include <aws/synthetics/model/UpdateCanaryRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Synthetics;
using namespace Aws::Synthetics::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Synthetics {
const char SERVICE_NAME[] = "synthetics";
const char ALLOCATION_TAG[] = "SyntheticsClient";
}  // namespace Synthetics
}  // namespace Aws
const char* SyntheticsClient::GetServiceName() { return SERVICE_NAME; }
const char* SyntheticsClient::GetAllocationTag() { return ALLOCATION_TAG; }

SyntheticsClient::SyntheticsClient(const Synthetics::SyntheticsClientConfiguration& clientConfiguration,
                                   std::shared_ptr<SyntheticsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SyntheticsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SyntheticsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SyntheticsClient::SyntheticsClient(const AWSCredentials& credentials, std::shared_ptr<SyntheticsEndpointProviderBase> endpointProvider,
                                   const Synthetics::SyntheticsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SyntheticsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SyntheticsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SyntheticsClient::SyntheticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<SyntheticsEndpointProviderBase> endpointProvider,
                                   const Synthetics::SyntheticsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SyntheticsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SyntheticsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SyntheticsClient::SyntheticsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SyntheticsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SyntheticsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SyntheticsClient::SyntheticsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SyntheticsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SyntheticsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SyntheticsClient::SyntheticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SyntheticsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SyntheticsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SyntheticsClient::~SyntheticsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SyntheticsEndpointProviderBase>& SyntheticsClient::accessEndpointProvider() { return m_endpointProvider; }

void SyntheticsClient::init(const Synthetics::SyntheticsClientConfiguration& config) {
  AWSClient::SetServiceClientName("synthetics");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "synthetics");
}

void SyntheticsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SyntheticsClient::InvokeOperationOutcome SyntheticsClient::InvokeServiceOperation(
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

AssociateResourceOutcome SyntheticsClient::AssociateResource(const AssociateResourceRequest& request) const {
  if (!request.GroupIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateResource", "Required field: GroupIdentifier, is not set");
    return AssociateResourceOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [GroupIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate");
  };

  return AssociateResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

CreateCanaryOutcome SyntheticsClient::CreateCanary(const CreateCanaryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/canary");
  };

  return CreateCanaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGroupOutcome SyntheticsClient::CreateGroup(const CreateGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/group");
  };

  return CreateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCanaryOutcome SyntheticsClient::DeleteCanary(const DeleteCanaryRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCanary", "Required field: Name, is not set");
    return DeleteCanaryOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/canary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteCanaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteGroupOutcome SyntheticsClient::DeleteGroup(const DeleteGroupRequest& request) const {
  if (!request.GroupIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: GroupIdentifier, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [GroupIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupIdentifier());
  };

  return DeleteGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeCanariesOutcome SyntheticsClient::DescribeCanaries(const DescribeCanariesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/canaries");
  };

  return DescribeCanariesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCanariesLastRunOutcome SyntheticsClient::DescribeCanariesLastRun(const DescribeCanariesLastRunRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/canaries/last-run");
  };

  return DescribeCanariesLastRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRuntimeVersionsOutcome SyntheticsClient::DescribeRuntimeVersions(const DescribeRuntimeVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime-versions");
  };

  return DescribeRuntimeVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateResourceOutcome SyntheticsClient::DisassociateResource(const DisassociateResourceRequest& request) const {
  if (!request.GroupIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateResource", "Required field: GroupIdentifier, is not set");
    return DisassociateResourceOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [GroupIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate");
  };

  return DisassociateResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

GetCanaryOutcome SyntheticsClient::GetCanary(const GetCanaryRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCanary", "Required field: Name, is not set");
    return GetCanaryOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/canary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetCanaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCanaryRunsOutcome SyntheticsClient::GetCanaryRuns(const GetCanaryRunsRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCanaryRuns", "Required field: Name, is not set");
    return GetCanaryRunsOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/canary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runs");
  };

  return GetCanaryRunsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGroupOutcome SyntheticsClient::GetGroup(const GetGroupRequest& request) const {
  if (!request.GroupIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGroup", "Required field: GroupIdentifier, is not set");
    return GetGroupOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [GroupIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupIdentifier());
  };

  return GetGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssociatedGroupsOutcome SyntheticsClient::ListAssociatedGroups(const ListAssociatedGroupsRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssociatedGroups", "Required field: ResourceArn, is not set");
    return ListAssociatedGroupsOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
  };

  return ListAssociatedGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupResourcesOutcome SyntheticsClient::ListGroupResources(const ListGroupResourcesRequest& request) const {
  if (!request.GroupIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGroupResources", "Required field: GroupIdentifier, is not set");
    return ListGroupResourcesOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [GroupIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources");
  };

  return ListGroupResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupsOutcome SyntheticsClient::ListGroups(const ListGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
  };

  return ListGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome SyntheticsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

StartCanaryOutcome SyntheticsClient::StartCanary(const StartCanaryRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartCanary", "Required field: Name, is not set");
    return StartCanaryOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/canary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  return StartCanaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartCanaryDryRunOutcome SyntheticsClient::StartCanaryDryRun(const StartCanaryDryRunRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartCanaryDryRun", "Required field: Name, is not set");
    return StartCanaryDryRunOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/canary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dry-run/start");
  };

  return StartCanaryDryRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopCanaryOutcome SyntheticsClient::StopCanary(const StopCanaryRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopCanary", "Required field: Name, is not set");
    return StopCanaryOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/canary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  return StopCanaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome SyntheticsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome SyntheticsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateCanaryOutcome SyntheticsClient::UpdateCanary(const UpdateCanaryRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCanary", "Required field: Name, is not set");
    return UpdateCanaryOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/canary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateCanaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
