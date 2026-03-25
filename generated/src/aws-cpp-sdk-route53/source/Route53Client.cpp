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
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/Route53Client.h>
#include <aws/route53/Route53EndpointProvider.h>
#include <aws/route53/Route53ErrorMarshaller.h>
#include <aws/route53/model/ActivateKeySigningKeyRequest.h>
#include <aws/route53/model/AssociateVPCWithHostedZoneRequest.h>
#include <aws/route53/model/ChangeCidrCollectionRequest.h>
#include <aws/route53/model/ChangeResourceRecordSetsRequest.h>
#include <aws/route53/model/ChangeTagsForResourceRequest.h>
#include <aws/route53/model/CreateCidrCollectionRequest.h>
#include <aws/route53/model/CreateHealthCheckRequest.h>
#include <aws/route53/model/CreateHostedZoneRequest.h>
#include <aws/route53/model/CreateKeySigningKeyRequest.h>
#include <aws/route53/model/CreateQueryLoggingConfigRequest.h>
#include <aws/route53/model/CreateReusableDelegationSetRequest.h>
#include <aws/route53/model/CreateTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/CreateTrafficPolicyRequest.h>
#include <aws/route53/model/CreateTrafficPolicyVersionRequest.h>
#include <aws/route53/model/CreateVPCAssociationAuthorizationRequest.h>
#include <aws/route53/model/DeactivateKeySigningKeyRequest.h>
#include <aws/route53/model/DeleteCidrCollectionRequest.h>
#include <aws/route53/model/DeleteHealthCheckRequest.h>
#include <aws/route53/model/DeleteHostedZoneRequest.h>
#include <aws/route53/model/DeleteKeySigningKeyRequest.h>
#include <aws/route53/model/DeleteQueryLoggingConfigRequest.h>
#include <aws/route53/model/DeleteReusableDelegationSetRequest.h>
#include <aws/route53/model/DeleteTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/DeleteTrafficPolicyRequest.h>
#include <aws/route53/model/DeleteVPCAssociationAuthorizationRequest.h>
#include <aws/route53/model/DisableHostedZoneDNSSECRequest.h>
#include <aws/route53/model/DisassociateVPCFromHostedZoneRequest.h>
#include <aws/route53/model/EnableHostedZoneDNSSECRequest.h>
#include <aws/route53/model/GetAccountLimitRequest.h>
#include <aws/route53/model/GetChangeRequest.h>
#include <aws/route53/model/GetCheckerIpRangesRequest.h>
#include <aws/route53/model/GetDNSSECRequest.h>
#include <aws/route53/model/GetGeoLocationRequest.h>
#include <aws/route53/model/GetHealthCheckCountRequest.h>
#include <aws/route53/model/GetHealthCheckLastFailureReasonRequest.h>
#include <aws/route53/model/GetHealthCheckRequest.h>
#include <aws/route53/model/GetHealthCheckStatusRequest.h>
#include <aws/route53/model/GetHostedZoneCountRequest.h>
#include <aws/route53/model/GetHostedZoneLimitRequest.h>
#include <aws/route53/model/GetHostedZoneRequest.h>
#include <aws/route53/model/GetQueryLoggingConfigRequest.h>
#include <aws/route53/model/GetReusableDelegationSetLimitRequest.h>
#include <aws/route53/model/GetReusableDelegationSetRequest.h>
#include <aws/route53/model/GetTrafficPolicyInstanceCountRequest.h>
#include <aws/route53/model/GetTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/GetTrafficPolicyRequest.h>
#include <aws/route53/model/ListCidrBlocksRequest.h>
#include <aws/route53/model/ListCidrCollectionsRequest.h>
#include <aws/route53/model/ListCidrLocationsRequest.h>
#include <aws/route53/model/ListGeoLocationsRequest.h>
#include <aws/route53/model/ListHealthChecksRequest.h>
#include <aws/route53/model/ListHostedZonesByNameRequest.h>
#include <aws/route53/model/ListHostedZonesByVPCRequest.h>
#include <aws/route53/model/ListHostedZonesRequest.h>
#include <aws/route53/model/ListQueryLoggingConfigsRequest.h>
#include <aws/route53/model/ListResourceRecordSetsRequest.h>
#include <aws/route53/model/ListReusableDelegationSetsRequest.h>
#include <aws/route53/model/ListTagsForResourceRequest.h>
#include <aws/route53/model/ListTagsForResourcesRequest.h>
#include <aws/route53/model/ListTrafficPoliciesRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesByHostedZoneRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesByPolicyRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesRequest.h>
#include <aws/route53/model/ListTrafficPolicyVersionsRequest.h>
#include <aws/route53/model/ListVPCAssociationAuthorizationsRequest.h>
#include <aws/route53/model/TestDNSAnswerRequest.h>
#include <aws/route53/model/UpdateHealthCheckRequest.h>
#include <aws/route53/model/UpdateHostedZoneCommentRequest.h>
#include <aws/route53/model/UpdateHostedZoneFeaturesRequest.h>
#include <aws/route53/model/UpdateTrafficPolicyCommentRequest.h>
#include <aws/route53/model/UpdateTrafficPolicyInstanceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53;
using namespace Aws::Route53::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Route53 {
const char SERVICE_NAME[] = "route53";
const char ALLOCATION_TAG[] = "Route53Client";
}  // namespace Route53
}  // namespace Aws
const char* Route53Client::GetServiceName() { return SERVICE_NAME; }
const char* Route53Client::GetAllocationTag() { return ALLOCATION_TAG; }

Route53Client::Route53Client(const Route53::Route53ClientConfiguration& clientConfiguration,
                             std::shared_ptr<Route53EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Route53EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53Client::Route53Client(const AWSCredentials& credentials, std::shared_ptr<Route53EndpointProviderBase> endpointProvider,
                             const Route53::Route53ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Route53EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53Client::Route53Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<Route53EndpointProviderBase> endpointProvider,
                             const Route53::Route53ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Route53EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
Route53Client::Route53Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53Client::Route53Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53Client::Route53Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
Route53Client::~Route53Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<Route53EndpointProviderBase>& Route53Client::accessEndpointProvider() { return m_endpointProvider; }

void Route53Client::init(const Route53::Route53ClientConfiguration& config) {
  AWSClient::SetServiceClientName("Route 53");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "route53");
}

void Route53Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Route53Client::InvokeOperationOutcome Route53Client::InvokeServiceOperation(
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
ActivateKeySigningKeyOutcome Route53Client::ActivateKeySigningKey(const ActivateKeySigningKeyRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ActivateKeySigningKey", "Required field: HostedZoneId, is not set");
    return ActivateKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [HostedZoneId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ActivateKeySigningKey", "Required field: Name, is not set");
    return ActivateKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/keysigningkey/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/activate");
  };

  return ActivateKeySigningKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateVPCWithHostedZoneOutcome Route53Client::AssociateVPCWithHostedZone(const AssociateVPCWithHostedZoneRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateVPCWithHostedZone", "Required field: HostedZoneId, is not set");
    return AssociateVPCWithHostedZoneOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [HostedZoneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associatevpc");
  };

  return AssociateVPCWithHostedZoneOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ChangeCidrCollectionOutcome Route53Client::ChangeCidrCollection(const ChangeCidrCollectionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ChangeCidrCollection", "Required field: Id, is not set");
    return ChangeCidrCollectionOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/cidrcollection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return ChangeCidrCollectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ChangeResourceRecordSetsOutcome Route53Client::ChangeResourceRecordSets(const ChangeResourceRecordSetsRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ChangeResourceRecordSets", "Required field: HostedZoneId, is not set");
    return ChangeResourceRecordSetsOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [HostedZoneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rrset/");
  };

  return ChangeResourceRecordSetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ChangeTagsForResourceOutcome Route53Client::ChangeTagsForResource(const ChangeTagsForResourceRequest& request) const {
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ChangeTagsForResource", "Required field: ResourceType, is not set");
    return ChangeTagsForResourceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ChangeTagsForResource", "Required field: ResourceId, is not set");
    return ChangeTagsForResourceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(TagResourceTypeMapper::GetNameForTagResourceType(request.GetResourceType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  };

  return ChangeTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCidrCollectionOutcome Route53Client::CreateCidrCollection(const CreateCidrCollectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/cidrcollection");
  };

  return CreateCidrCollectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateHealthCheckOutcome Route53Client::CreateHealthCheck(const CreateHealthCheckRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheck");
  };

  return CreateHealthCheckOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateHostedZoneOutcome Route53Client::CreateHostedZone(const CreateHostedZoneRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone");
  };

  return CreateHostedZoneOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateKeySigningKeyOutcome Route53Client::CreateKeySigningKey(const CreateKeySigningKeyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/keysigningkey");
  };

  return CreateKeySigningKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateQueryLoggingConfigOutcome Route53Client::CreateQueryLoggingConfig(const CreateQueryLoggingConfigRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/queryloggingconfig");
  };

  return CreateQueryLoggingConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReusableDelegationSetOutcome Route53Client::CreateReusableDelegationSet(const CreateReusableDelegationSetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/delegationset");
  };

  return CreateReusableDelegationSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrafficPolicyOutcome Route53Client::CreateTrafficPolicy(const CreateTrafficPolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicy");
  };

  return CreateTrafficPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrafficPolicyInstanceOutcome Route53Client::CreateTrafficPolicyInstance(const CreateTrafficPolicyInstanceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstance");
  };

  return CreateTrafficPolicyInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrafficPolicyVersionOutcome Route53Client::CreateTrafficPolicyVersion(const CreateTrafficPolicyVersionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTrafficPolicyVersion", "Required field: Id, is not set");
    return CreateTrafficPolicyVersionOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return CreateTrafficPolicyVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVPCAssociationAuthorizationOutcome Route53Client::CreateVPCAssociationAuthorization(
    const CreateVPCAssociationAuthorizationRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateVPCAssociationAuthorization", "Required field: HostedZoneId, is not set");
    return CreateVPCAssociationAuthorizationOutcome(Aws::Client::AWSError<Route53Errors>(
        Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizevpcassociation");
  };

  return CreateVPCAssociationAuthorizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeactivateKeySigningKeyOutcome Route53Client::DeactivateKeySigningKey(const DeactivateKeySigningKeyRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeactivateKeySigningKey", "Required field: HostedZoneId, is not set");
    return DeactivateKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [HostedZoneId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeactivateKeySigningKey", "Required field: Name, is not set");
    return DeactivateKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/keysigningkey/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deactivate");
  };

  return DeactivateKeySigningKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCidrCollectionOutcome Route53Client::DeleteCidrCollection(const DeleteCidrCollectionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCidrCollection", "Required field: Id, is not set");
    return DeleteCidrCollectionOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/cidrcollection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteCidrCollectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteHealthCheckOutcome Route53Client::DeleteHealthCheck(const DeleteHealthCheckRequest& request) const {
  if (!request.HealthCheckIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteHealthCheck", "Required field: HealthCheckId, is not set");
    return DeleteHealthCheckOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [HealthCheckId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheck/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHealthCheckId());
  };

  return DeleteHealthCheckOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteHostedZoneOutcome Route53Client::DeleteHostedZone(const DeleteHostedZoneRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteHostedZone", "Required field: Id, is not set");
    return DeleteHostedZoneOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteHostedZoneOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteKeySigningKeyOutcome Route53Client::DeleteKeySigningKey(const DeleteKeySigningKeyRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKeySigningKey", "Required field: HostedZoneId, is not set");
    return DeleteKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [HostedZoneId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKeySigningKey", "Required field: Name, is not set");
    return DeleteKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/keysigningkey/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteKeySigningKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteQueryLoggingConfigOutcome Route53Client::DeleteQueryLoggingConfig(const DeleteQueryLoggingConfigRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueryLoggingConfig", "Required field: Id, is not set");
    return DeleteQueryLoggingConfigOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/queryloggingconfig/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteQueryLoggingConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteReusableDelegationSetOutcome Route53Client::DeleteReusableDelegationSet(const DeleteReusableDelegationSetRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteReusableDelegationSet", "Required field: Id, is not set");
    return DeleteReusableDelegationSetOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/delegationset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteReusableDelegationSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTrafficPolicyOutcome Route53Client::DeleteTrafficPolicy(const DeleteTrafficPolicyRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTrafficPolicy", "Required field: Id, is not set");
    return DeleteTrafficPolicyOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTrafficPolicy", "Required field: Version, is not set");
    return DeleteTrafficPolicyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Version]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  };

  return DeleteTrafficPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTrafficPolicyInstanceOutcome Route53Client::DeleteTrafficPolicyInstance(const DeleteTrafficPolicyInstanceRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTrafficPolicyInstance", "Required field: Id, is not set");
    return DeleteTrafficPolicyInstanceOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteTrafficPolicyInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVPCAssociationAuthorizationOutcome Route53Client::DeleteVPCAssociationAuthorization(
    const DeleteVPCAssociationAuthorizationRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVPCAssociationAuthorization", "Required field: HostedZoneId, is not set");
    return DeleteVPCAssociationAuthorizationOutcome(Aws::Client::AWSError<Route53Errors>(
        Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deauthorizevpcassociation");
  };

  return DeleteVPCAssociationAuthorizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableHostedZoneDNSSECOutcome Route53Client::DisableHostedZoneDNSSEC(const DisableHostedZoneDNSSECRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisableHostedZoneDNSSEC", "Required field: HostedZoneId, is not set");
    return DisableHostedZoneDNSSECOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [HostedZoneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disable-dnssec");
  };

  return DisableHostedZoneDNSSECOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateVPCFromHostedZoneOutcome Route53Client::DisassociateVPCFromHostedZone(
    const DisassociateVPCFromHostedZoneRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateVPCFromHostedZone", "Required field: HostedZoneId, is not set");
    return DisassociateVPCFromHostedZoneOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [HostedZoneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociatevpc");
  };

  return DisassociateVPCFromHostedZoneOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableHostedZoneDNSSECOutcome Route53Client::EnableHostedZoneDNSSEC(const EnableHostedZoneDNSSECRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("EnableHostedZoneDNSSEC", "Required field: HostedZoneId, is not set");
    return EnableHostedZoneDNSSECOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [HostedZoneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/enable-dnssec");
  };

  return EnableHostedZoneDNSSECOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccountLimitOutcome Route53Client::GetAccountLimit(const GetAccountLimitRequest& request) const {
  if (!request.TypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccountLimit", "Required field: Type, is not set");
    return GetAccountLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Type]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/accountlimit/");
    endpointResolutionOutcome.GetResult().AddPathSegment(AccountLimitTypeMapper::GetNameForAccountLimitType(request.GetType()));
  };

  return GetAccountLimitOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetChangeOutcome Route53Client::GetChange(const GetChangeRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChange", "Required field: Id, is not set");
    return GetChangeOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/change/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetChangeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCheckerIpRangesOutcome Route53Client::GetCheckerIpRanges(const GetCheckerIpRangesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/checkeripranges");
  };

  return GetCheckerIpRangesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDNSSECOutcome Route53Client::GetDNSSEC(const GetDNSSECRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDNSSEC", "Required field: HostedZoneId, is not set");
    return GetDNSSECOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [HostedZoneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dnssec");
  };

  return GetDNSSECOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGeoLocationOutcome Route53Client::GetGeoLocation(const GetGeoLocationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/geolocation");
  };

  return GetGeoLocationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetHealthCheckOutcome Route53Client::GetHealthCheck(const GetHealthCheckRequest& request) const {
  if (!request.HealthCheckIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHealthCheck", "Required field: HealthCheckId, is not set");
    return GetHealthCheckOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [HealthCheckId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheck/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHealthCheckId());
  };

  return GetHealthCheckOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetHealthCheckCountOutcome Route53Client::GetHealthCheckCount(const GetHealthCheckCountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheckcount");
  };

  return GetHealthCheckCountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetHealthCheckLastFailureReasonOutcome Route53Client::GetHealthCheckLastFailureReason(
    const GetHealthCheckLastFailureReasonRequest& request) const {
  if (!request.HealthCheckIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHealthCheckLastFailureReason", "Required field: HealthCheckId, is not set");
    return GetHealthCheckLastFailureReasonOutcome(Aws::Client::AWSError<Route53Errors>(
        Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HealthCheckId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheck/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHealthCheckId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lastfailurereason");
  };

  return GetHealthCheckLastFailureReasonOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetHealthCheckStatusOutcome Route53Client::GetHealthCheckStatus(const GetHealthCheckStatusRequest& request) const {
  if (!request.HealthCheckIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHealthCheckStatus", "Required field: HealthCheckId, is not set");
    return GetHealthCheckStatusOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [HealthCheckId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheck/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHealthCheckId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  return GetHealthCheckStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetHostedZoneOutcome Route53Client::GetHostedZone(const GetHostedZoneRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHostedZone", "Required field: Id, is not set");
    return GetHostedZoneOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetHostedZoneOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetHostedZoneCountOutcome Route53Client::GetHostedZoneCount(const GetHostedZoneCountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzonecount");
  };

  return GetHostedZoneCountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetHostedZoneLimitOutcome Route53Client::GetHostedZoneLimit(const GetHostedZoneLimitRequest& request) const {
  if (!request.TypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHostedZoneLimit", "Required field: Type, is not set");
    return GetHostedZoneLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Type]", false));
  }
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHostedZoneLimit", "Required field: HostedZoneId, is not set");
    return GetHostedZoneLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [HostedZoneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzonelimit/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegment(HostedZoneLimitTypeMapper::GetNameForHostedZoneLimitType(request.GetType()));
  };

  return GetHostedZoneLimitOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetQueryLoggingConfigOutcome Route53Client::GetQueryLoggingConfig(const GetQueryLoggingConfigRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryLoggingConfig", "Required field: Id, is not set");
    return GetQueryLoggingConfigOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/queryloggingconfig/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetQueryLoggingConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReusableDelegationSetOutcome Route53Client::GetReusableDelegationSet(const GetReusableDelegationSetRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReusableDelegationSet", "Required field: Id, is not set");
    return GetReusableDelegationSetOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/delegationset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetReusableDelegationSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReusableDelegationSetLimitOutcome Route53Client::GetReusableDelegationSetLimit(
    const GetReusableDelegationSetLimitRequest& request) const {
  if (!request.TypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReusableDelegationSetLimit", "Required field: Type, is not set");
    return GetReusableDelegationSetLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [Type]", false));
  }
  if (!request.DelegationSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReusableDelegationSetLimit", "Required field: DelegationSetId, is not set");
    return GetReusableDelegationSetLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [DelegationSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/reusabledelegationsetlimit/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDelegationSetId());
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ReusableDelegationSetLimitTypeMapper::GetNameForReusableDelegationSetLimitType(request.GetType()));
  };

  return GetReusableDelegationSetLimitOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTrafficPolicyOutcome Route53Client::GetTrafficPolicy(const GetTrafficPolicyRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrafficPolicy", "Required field: Id, is not set");
    return GetTrafficPolicyOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrafficPolicy", "Required field: Version, is not set");
    return GetTrafficPolicyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Version]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  };

  return GetTrafficPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTrafficPolicyInstanceOutcome Route53Client::GetTrafficPolicyInstance(const GetTrafficPolicyInstanceRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrafficPolicyInstance", "Required field: Id, is not set");
    return GetTrafficPolicyInstanceOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetTrafficPolicyInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTrafficPolicyInstanceCountOutcome Route53Client::GetTrafficPolicyInstanceCount(
    const GetTrafficPolicyInstanceCountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstancecount");
  };

  return GetTrafficPolicyInstanceCountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCidrBlocksOutcome Route53Client::ListCidrBlocks(const ListCidrBlocksRequest& request) const {
  if (!request.CollectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCidrBlocks", "Required field: CollectionId, is not set");
    return ListCidrBlocksOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [CollectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/cidrcollection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cidrblocks");
  };

  return ListCidrBlocksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCidrCollectionsOutcome Route53Client::ListCidrCollections(const ListCidrCollectionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/cidrcollection");
  };

  return ListCidrCollectionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCidrLocationsOutcome Route53Client::ListCidrLocations(const ListCidrLocationsRequest& request) const {
  if (!request.CollectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCidrLocations", "Required field: CollectionId, is not set");
    return ListCidrLocationsOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [CollectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/cidrcollection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectionId());
  };

  return ListCidrLocationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListGeoLocationsOutcome Route53Client::ListGeoLocations(const ListGeoLocationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/geolocations");
  };

  return ListGeoLocationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListHealthChecksOutcome Route53Client::ListHealthChecks(const ListHealthChecksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheck");
  };

  return ListHealthChecksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListHostedZonesOutcome Route53Client::ListHostedZones(const ListHostedZonesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone");
  };

  return ListHostedZonesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListHostedZonesByNameOutcome Route53Client::ListHostedZonesByName(const ListHostedZonesByNameRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzonesbyname");
  };

  return ListHostedZonesByNameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListHostedZonesByVPCOutcome Route53Client::ListHostedZonesByVPC(const ListHostedZonesByVPCRequest& request) const {
  if (!request.VPCIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListHostedZonesByVPC", "Required field: VPCId, is not set");
    return ListHostedZonesByVPCOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [VPCId]", false));
  }
  if (!request.VPCRegionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListHostedZonesByVPC", "Required field: VPCRegion, is not set");
    return ListHostedZonesByVPCOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [VPCRegion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzonesbyvpc");
  };

  return ListHostedZonesByVPCOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListQueryLoggingConfigsOutcome Route53Client::ListQueryLoggingConfigs(const ListQueryLoggingConfigsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/queryloggingconfig");
  };

  return ListQueryLoggingConfigsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListResourceRecordSetsOutcome Route53Client::ListResourceRecordSets(const ListResourceRecordSetsRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListResourceRecordSets", "Required field: HostedZoneId, is not set");
    return ListResourceRecordSetsOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [HostedZoneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rrset");
  };

  return ListResourceRecordSetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListReusableDelegationSetsOutcome Route53Client::ListReusableDelegationSets(const ListReusableDelegationSetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/delegationset");
  };

  return ListReusableDelegationSetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome Route53Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceType, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceId, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(TagResourceTypeMapper::GetNameForTagResourceType(request.GetResourceType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourcesOutcome Route53Client::ListTagsForResources(const ListTagsForResourcesRequest& request) const {
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResources", "Required field: ResourceType, is not set");
    return ListTagsForResourcesOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(TagResourceTypeMapper::GetNameForTagResourceType(request.GetResourceType()));
  };

  return ListTagsForResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTrafficPoliciesOutcome Route53Client::ListTrafficPolicies(const ListTrafficPoliciesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicies");
  };

  return ListTrafficPoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTrafficPolicyInstancesOutcome Route53Client::ListTrafficPolicyInstances(const ListTrafficPolicyInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstances");
  };

  return ListTrafficPolicyInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTrafficPolicyInstancesByHostedZoneOutcome Route53Client::ListTrafficPolicyInstancesByHostedZone(
    const ListTrafficPolicyInstancesByHostedZoneRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTrafficPolicyInstancesByHostedZone", "Required field: HostedZoneId, is not set");
    return ListTrafficPolicyInstancesByHostedZoneOutcome(Aws::Client::AWSError<Route53Errors>(
        Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstances/hostedzone");
  };

  return ListTrafficPolicyInstancesByHostedZoneOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTrafficPolicyInstancesByPolicyOutcome Route53Client::ListTrafficPolicyInstancesByPolicy(
    const ListTrafficPolicyInstancesByPolicyRequest& request) const {
  if (!request.TrafficPolicyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTrafficPolicyInstancesByPolicy", "Required field: TrafficPolicyId, is not set");
    return ListTrafficPolicyInstancesByPolicyOutcome(Aws::Client::AWSError<Route53Errors>(
        Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficPolicyId]", false));
  }
  if (!request.TrafficPolicyVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTrafficPolicyInstancesByPolicy", "Required field: TrafficPolicyVersion, is not set");
    return ListTrafficPolicyInstancesByPolicyOutcome(Aws::Client::AWSError<Route53Errors>(
        Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficPolicyVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstances/trafficpolicy");
  };

  return ListTrafficPolicyInstancesByPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTrafficPolicyVersionsOutcome Route53Client::ListTrafficPolicyVersions(const ListTrafficPolicyVersionsRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTrafficPolicyVersions", "Required field: Id, is not set");
    return ListTrafficPolicyVersionsOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListTrafficPolicyVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVPCAssociationAuthorizationsOutcome Route53Client::ListVPCAssociationAuthorizations(
    const ListVPCAssociationAuthorizationsRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVPCAssociationAuthorizations", "Required field: HostedZoneId, is not set");
    return ListVPCAssociationAuthorizationsOutcome(Aws::Client::AWSError<Route53Errors>(
        Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizevpcassociation");
  };

  return ListVPCAssociationAuthorizationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

TestDNSAnswerOutcome Route53Client::TestDNSAnswer(const TestDNSAnswerRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestDNSAnswer", "Required field: HostedZoneId, is not set");
    return TestDNSAnswerOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [HostedZoneId]", false));
  }
  if (!request.RecordNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestDNSAnswer", "Required field: RecordName, is not set");
    return TestDNSAnswerOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [RecordName]", false));
  }
  if (!request.RecordTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestDNSAnswer", "Required field: RecordType, is not set");
    return TestDNSAnswerOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [RecordType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/testdnsanswer");
  };

  return TestDNSAnswerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

UpdateHealthCheckOutcome Route53Client::UpdateHealthCheck(const UpdateHealthCheckRequest& request) const {
  if (!request.HealthCheckIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateHealthCheck", "Required field: HealthCheckId, is not set");
    return UpdateHealthCheckOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [HealthCheckId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheck/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHealthCheckId());
  };

  return UpdateHealthCheckOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateHostedZoneCommentOutcome Route53Client::UpdateHostedZoneComment(const UpdateHostedZoneCommentRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateHostedZoneComment", "Required field: Id, is not set");
    return UpdateHostedZoneCommentOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateHostedZoneCommentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateHostedZoneFeaturesOutcome Route53Client::UpdateHostedZoneFeatures(const UpdateHostedZoneFeaturesRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateHostedZoneFeatures", "Required field: HostedZoneId, is not set");
    return UpdateHostedZoneFeaturesOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [HostedZoneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/features");
  };

  return UpdateHostedZoneFeaturesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTrafficPolicyCommentOutcome Route53Client::UpdateTrafficPolicyComment(const UpdateTrafficPolicyCommentRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTrafficPolicyComment", "Required field: Id, is not set");
    return UpdateTrafficPolicyCommentOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTrafficPolicyComment", "Required field: Version, is not set");
    return UpdateTrafficPolicyCommentOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Version]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  };

  return UpdateTrafficPolicyCommentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTrafficPolicyInstanceOutcome Route53Client::UpdateTrafficPolicyInstance(const UpdateTrafficPolicyInstanceRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTrafficPolicyInstance", "Required field: Id, is not set");
    return UpdateTrafficPolicyInstanceOutcome(
        Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateTrafficPolicyInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
