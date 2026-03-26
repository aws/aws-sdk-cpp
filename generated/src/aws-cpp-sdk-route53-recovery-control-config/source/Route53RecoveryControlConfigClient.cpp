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
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigClient.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigEndpointProvider.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigErrorMarshaller.h>
#include <aws/route53-recovery-control-config/model/CreateClusterRequest.h>
#include <aws/route53-recovery-control-config/model/CreateControlPanelRequest.h>
#include <aws/route53-recovery-control-config/model/CreateRoutingControlRequest.h>
#include <aws/route53-recovery-control-config/model/CreateSafetyRuleRequest.h>
#include <aws/route53-recovery-control-config/model/DeleteClusterRequest.h>
#include <aws/route53-recovery-control-config/model/DeleteControlPanelRequest.h>
#include <aws/route53-recovery-control-config/model/DeleteRoutingControlRequest.h>
#include <aws/route53-recovery-control-config/model/DeleteSafetyRuleRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeClusterRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeControlPanelRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeRoutingControlRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeSafetyRuleRequest.h>
#include <aws/route53-recovery-control-config/model/GetResourcePolicyRequest.h>
#include <aws/route53-recovery-control-config/model/ListAssociatedRoute53HealthChecksRequest.h>
#include <aws/route53-recovery-control-config/model/ListClustersRequest.h>
#include <aws/route53-recovery-control-config/model/ListControlPanelsRequest.h>
#include <aws/route53-recovery-control-config/model/ListRoutingControlsRequest.h>
#include <aws/route53-recovery-control-config/model/ListSafetyRulesRequest.h>
#include <aws/route53-recovery-control-config/model/ListTagsForResourceRequest.h>
#include <aws/route53-recovery-control-config/model/TagResourceRequest.h>
#include <aws/route53-recovery-control-config/model/UntagResourceRequest.h>
#include <aws/route53-recovery-control-config/model/UpdateClusterRequest.h>
#include <aws/route53-recovery-control-config/model/UpdateControlPanelRequest.h>
#include <aws/route53-recovery-control-config/model/UpdateRoutingControlRequest.h>
#include <aws/route53-recovery-control-config/model/UpdateSafetyRuleRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53RecoveryControlConfig;
using namespace Aws::Route53RecoveryControlConfig::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Route53RecoveryControlConfig {
const char SERVICE_NAME[] = "route53-recovery-control-config";
const char ALLOCATION_TAG[] = "Route53RecoveryControlConfigClient";
}  // namespace Route53RecoveryControlConfig
}  // namespace Aws
const char* Route53RecoveryControlConfigClient::GetServiceName() { return SERVICE_NAME; }
const char* Route53RecoveryControlConfigClient::GetAllocationTag() { return ALLOCATION_TAG; }

Route53RecoveryControlConfigClient::Route53RecoveryControlConfigClient(
    const Route53RecoveryControlConfig::Route53RecoveryControlConfigClientConfiguration& clientConfiguration,
    std::shared_ptr<Route53RecoveryControlConfigEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53RecoveryControlConfigErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53RecoveryControlConfigEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53RecoveryControlConfigClient::Route53RecoveryControlConfigClient(
    const AWSCredentials& credentials, std::shared_ptr<Route53RecoveryControlConfigEndpointProviderBase> endpointProvider,
    const Route53RecoveryControlConfig::Route53RecoveryControlConfigClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53RecoveryControlConfigErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53RecoveryControlConfigEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53RecoveryControlConfigClient::Route53RecoveryControlConfigClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<Route53RecoveryControlConfigEndpointProviderBase> endpointProvider,
    const Route53RecoveryControlConfig::Route53RecoveryControlConfigClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53RecoveryControlConfigErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53RecoveryControlConfigEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
Route53RecoveryControlConfigClient::Route53RecoveryControlConfigClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53RecoveryControlConfigErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53RecoveryControlConfigEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53RecoveryControlConfigClient::Route53RecoveryControlConfigClient(const AWSCredentials& credentials,
                                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53RecoveryControlConfigErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53RecoveryControlConfigEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53RecoveryControlConfigClient::Route53RecoveryControlConfigClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53RecoveryControlConfigErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53RecoveryControlConfigEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
Route53RecoveryControlConfigClient::~Route53RecoveryControlConfigClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<Route53RecoveryControlConfigEndpointProviderBase>& Route53RecoveryControlConfigClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void Route53RecoveryControlConfigClient::init(const Route53RecoveryControlConfig::Route53RecoveryControlConfigClientConfiguration& config) {
  AWSClient::SetServiceClientName("Route53 Recovery Control Config");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "route53-recovery-control-config");
}

void Route53RecoveryControlConfigClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
Route53RecoveryControlConfigClient::InvokeOperationOutcome Route53RecoveryControlConfigClient::InvokeServiceOperation(
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

CreateClusterOutcome Route53RecoveryControlConfigClient::CreateCluster(const CreateClusterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClusterOutcome(result.GetResultWithOwnership()) : CreateClusterOutcome(std::move(result.GetError()));
}

CreateControlPanelOutcome Route53RecoveryControlConfigClient::CreateControlPanel(const CreateControlPanelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/controlpanel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateControlPanelOutcome(result.GetResultWithOwnership())
                            : CreateControlPanelOutcome(std::move(result.GetError()));
}

CreateRoutingControlOutcome Route53RecoveryControlConfigClient::CreateRoutingControl(const CreateRoutingControlRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routingcontrol");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRoutingControlOutcome(result.GetResultWithOwnership())
                            : CreateRoutingControlOutcome(std::move(result.GetError()));
}

CreateSafetyRuleOutcome Route53RecoveryControlConfigClient::CreateSafetyRule(const CreateSafetyRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/safetyrule");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSafetyRuleOutcome(result.GetResultWithOwnership())
                            : CreateSafetyRuleOutcome(std::move(result.GetError()));
}

DeleteClusterOutcome Route53RecoveryControlConfigClient::DeleteCluster(const DeleteClusterRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCluster", "Required field: ClusterArn, is not set");
    return DeleteClusterOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteClusterOutcome(result.GetResultWithOwnership()) : DeleteClusterOutcome(std::move(result.GetError()));
}

DeleteControlPanelOutcome Route53RecoveryControlConfigClient::DeleteControlPanel(const DeleteControlPanelRequest& request) const {
  if (!request.ControlPanelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteControlPanel", "Required field: ControlPanelArn, is not set");
    return DeleteControlPanelOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlPanelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/controlpanel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlPanelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteControlPanelOutcome(result.GetResultWithOwnership())
                            : DeleteControlPanelOutcome(std::move(result.GetError()));
}

DeleteRoutingControlOutcome Route53RecoveryControlConfigClient::DeleteRoutingControl(const DeleteRoutingControlRequest& request) const {
  if (!request.RoutingControlArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoutingControl", "Required field: RoutingControlArn, is not set");
    return DeleteRoutingControlOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingControlArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routingcontrol/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingControlArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRoutingControlOutcome(result.GetResultWithOwnership())
                            : DeleteRoutingControlOutcome(std::move(result.GetError()));
}

DeleteSafetyRuleOutcome Route53RecoveryControlConfigClient::DeleteSafetyRule(const DeleteSafetyRuleRequest& request) const {
  if (!request.SafetyRuleArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSafetyRule", "Required field: SafetyRuleArn, is not set");
    return DeleteSafetyRuleOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SafetyRuleArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/safetyrule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSafetyRuleArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSafetyRuleOutcome(result.GetResultWithOwnership())
                            : DeleteSafetyRuleOutcome(std::move(result.GetError()));
}

DescribeClusterOutcome Route53RecoveryControlConfigClient::DescribeCluster(const DescribeClusterRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCluster", "Required field: ClusterArn, is not set");
    return DescribeClusterOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeClusterOutcome(result.GetResultWithOwnership())
                            : DescribeClusterOutcome(std::move(result.GetError()));
}

DescribeControlPanelOutcome Route53RecoveryControlConfigClient::DescribeControlPanel(const DescribeControlPanelRequest& request) const {
  if (!request.ControlPanelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeControlPanel", "Required field: ControlPanelArn, is not set");
    return DescribeControlPanelOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlPanelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/controlpanel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlPanelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeControlPanelOutcome(result.GetResultWithOwnership())
                            : DescribeControlPanelOutcome(std::move(result.GetError()));
}

DescribeRoutingControlOutcome Route53RecoveryControlConfigClient::DescribeRoutingControl(
    const DescribeRoutingControlRequest& request) const {
  if (!request.RoutingControlArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRoutingControl", "Required field: RoutingControlArn, is not set");
    return DescribeRoutingControlOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingControlArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routingcontrol/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingControlArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeRoutingControlOutcome(result.GetResultWithOwnership())
                            : DescribeRoutingControlOutcome(std::move(result.GetError()));
}

DescribeSafetyRuleOutcome Route53RecoveryControlConfigClient::DescribeSafetyRule(const DescribeSafetyRuleRequest& request) const {
  if (!request.SafetyRuleArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSafetyRule", "Required field: SafetyRuleArn, is not set");
    return DescribeSafetyRuleOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SafetyRuleArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/safetyrule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSafetyRuleArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeSafetyRuleOutcome(result.GetResultWithOwnership())
                            : DescribeSafetyRuleOutcome(std::move(result.GetError()));
}

GetResourcePolicyOutcome Route53RecoveryControlConfigClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: ResourceArn, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcePolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}

ListAssociatedRoute53HealthChecksOutcome Route53RecoveryControlConfigClient::ListAssociatedRoute53HealthChecks(
    const ListAssociatedRoute53HealthChecksRequest& request) const {
  if (!request.RoutingControlArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssociatedRoute53HealthChecks", "Required field: RoutingControlArn, is not set");
    return ListAssociatedRoute53HealthChecksOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingControlArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routingcontrol/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingControlArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associatedRoute53HealthChecks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAssociatedRoute53HealthChecksOutcome(result.GetResultWithOwnership())
                            : ListAssociatedRoute53HealthChecksOutcome(std::move(result.GetError()));
}

ListClustersOutcome Route53RecoveryControlConfigClient::ListClusters(const ListClustersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListClustersOutcome(result.GetResultWithOwnership()) : ListClustersOutcome(std::move(result.GetError()));
}

ListControlPanelsOutcome Route53RecoveryControlConfigClient::ListControlPanels(const ListControlPanelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/controlpanels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListControlPanelsOutcome(result.GetResultWithOwnership())
                            : ListControlPanelsOutcome(std::move(result.GetError()));
}

ListRoutingControlsOutcome Route53RecoveryControlConfigClient::ListRoutingControls(const ListRoutingControlsRequest& request) const {
  if (!request.ControlPanelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoutingControls", "Required field: ControlPanelArn, is not set");
    return ListRoutingControlsOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlPanelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/controlpanel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlPanelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routingcontrols");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRoutingControlsOutcome(result.GetResultWithOwnership())
                            : ListRoutingControlsOutcome(std::move(result.GetError()));
}

ListSafetyRulesOutcome Route53RecoveryControlConfigClient::ListSafetyRules(const ListSafetyRulesRequest& request) const {
  if (!request.ControlPanelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSafetyRules", "Required field: ControlPanelArn, is not set");
    return ListSafetyRulesOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlPanelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/controlpanel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlPanelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/safetyrules");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSafetyRulesOutcome(result.GetResultWithOwnership())
                            : ListSafetyRulesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome Route53RecoveryControlConfigClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

TagResourceOutcome Route53RecoveryControlConfigClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome Route53RecoveryControlConfigClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(
        Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateClusterOutcome Route53RecoveryControlConfigClient::UpdateCluster(const UpdateClusterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateClusterOutcome(result.GetResultWithOwnership()) : UpdateClusterOutcome(std::move(result.GetError()));
}

UpdateControlPanelOutcome Route53RecoveryControlConfigClient::UpdateControlPanel(const UpdateControlPanelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/controlpanel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateControlPanelOutcome(result.GetResultWithOwnership())
                            : UpdateControlPanelOutcome(std::move(result.GetError()));
}

UpdateRoutingControlOutcome Route53RecoveryControlConfigClient::UpdateRoutingControl(const UpdateRoutingControlRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routingcontrol");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateRoutingControlOutcome(result.GetResultWithOwnership())
                            : UpdateRoutingControlOutcome(std::move(result.GetError()));
}

UpdateSafetyRuleOutcome Route53RecoveryControlConfigClient::UpdateSafetyRule(const UpdateSafetyRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/safetyrule");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSafetyRuleOutcome(result.GetResultWithOwnership())
                            : UpdateSafetyRuleOutcome(std::move(result.GetError()));
}
