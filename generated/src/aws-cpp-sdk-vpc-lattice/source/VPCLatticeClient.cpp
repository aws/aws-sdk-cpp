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
#include <aws/vpc-lattice/VPCLatticeClient.h>
#include <aws/vpc-lattice/VPCLatticeEndpointProvider.h>
#include <aws/vpc-lattice/VPCLatticeErrorMarshaller.h>
#include <aws/vpc-lattice/model/BatchUpdateRuleRequest.h>
#include <aws/vpc-lattice/model/CreateAccessLogSubscriptionRequest.h>
#include <aws/vpc-lattice/model/CreateListenerRequest.h>
#include <aws/vpc-lattice/model/CreateResourceConfigurationRequest.h>
#include <aws/vpc-lattice/model/CreateResourceGatewayRequest.h>
#include <aws/vpc-lattice/model/CreateRuleRequest.h>
#include <aws/vpc-lattice/model/CreateServiceNetworkRequest.h>
#include <aws/vpc-lattice/model/CreateServiceNetworkResourceAssociationRequest.h>
#include <aws/vpc-lattice/model/CreateServiceNetworkServiceAssociationRequest.h>
#include <aws/vpc-lattice/model/CreateServiceNetworkVpcAssociationRequest.h>
#include <aws/vpc-lattice/model/CreateServiceRequest.h>
#include <aws/vpc-lattice/model/CreateTargetGroupRequest.h>
#include <aws/vpc-lattice/model/DeleteAccessLogSubscriptionRequest.h>
#include <aws/vpc-lattice/model/DeleteAuthPolicyRequest.h>
#include <aws/vpc-lattice/model/DeleteDomainVerificationRequest.h>
#include <aws/vpc-lattice/model/DeleteListenerRequest.h>
#include <aws/vpc-lattice/model/DeleteResourceConfigurationRequest.h>
#include <aws/vpc-lattice/model/DeleteResourceEndpointAssociationRequest.h>
#include <aws/vpc-lattice/model/DeleteResourceGatewayRequest.h>
#include <aws/vpc-lattice/model/DeleteResourcePolicyRequest.h>
#include <aws/vpc-lattice/model/DeleteRuleRequest.h>
#include <aws/vpc-lattice/model/DeleteServiceNetworkRequest.h>
#include <aws/vpc-lattice/model/DeleteServiceNetworkResourceAssociationRequest.h>
#include <aws/vpc-lattice/model/DeleteServiceNetworkServiceAssociationRequest.h>
#include <aws/vpc-lattice/model/DeleteServiceNetworkVpcAssociationRequest.h>
#include <aws/vpc-lattice/model/DeleteServiceRequest.h>
#include <aws/vpc-lattice/model/DeleteTargetGroupRequest.h>
#include <aws/vpc-lattice/model/DeregisterTargetsRequest.h>
#include <aws/vpc-lattice/model/GetAccessLogSubscriptionRequest.h>
#include <aws/vpc-lattice/model/GetAuthPolicyRequest.h>
#include <aws/vpc-lattice/model/GetDomainVerificationRequest.h>
#include <aws/vpc-lattice/model/GetListenerRequest.h>
#include <aws/vpc-lattice/model/GetResourceConfigurationRequest.h>
#include <aws/vpc-lattice/model/GetResourceGatewayRequest.h>
#include <aws/vpc-lattice/model/GetResourcePolicyRequest.h>
#include <aws/vpc-lattice/model/GetRuleRequest.h>
#include <aws/vpc-lattice/model/GetServiceNetworkRequest.h>
#include <aws/vpc-lattice/model/GetServiceNetworkResourceAssociationRequest.h>
#include <aws/vpc-lattice/model/GetServiceNetworkServiceAssociationRequest.h>
#include <aws/vpc-lattice/model/GetServiceNetworkVpcAssociationRequest.h>
#include <aws/vpc-lattice/model/GetServiceRequest.h>
#include <aws/vpc-lattice/model/GetTargetGroupRequest.h>
#include <aws/vpc-lattice/model/ListAccessLogSubscriptionsRequest.h>
#include <aws/vpc-lattice/model/ListDomainVerificationsRequest.h>
#include <aws/vpc-lattice/model/ListListenersRequest.h>
#include <aws/vpc-lattice/model/ListResourceConfigurationsRequest.h>
#include <aws/vpc-lattice/model/ListResourceEndpointAssociationsRequest.h>
#include <aws/vpc-lattice/model/ListResourceGatewaysRequest.h>
#include <aws/vpc-lattice/model/ListRulesRequest.h>
#include <aws/vpc-lattice/model/ListServiceNetworkResourceAssociationsRequest.h>
#include <aws/vpc-lattice/model/ListServiceNetworkServiceAssociationsRequest.h>
#include <aws/vpc-lattice/model/ListServiceNetworkVpcAssociationsRequest.h>
#include <aws/vpc-lattice/model/ListServiceNetworkVpcEndpointAssociationsRequest.h>
#include <aws/vpc-lattice/model/ListServiceNetworksRequest.h>
#include <aws/vpc-lattice/model/ListServicesRequest.h>
#include <aws/vpc-lattice/model/ListTagsForResourceRequest.h>
#include <aws/vpc-lattice/model/ListTargetGroupsRequest.h>
#include <aws/vpc-lattice/model/ListTargetsRequest.h>
#include <aws/vpc-lattice/model/PutAuthPolicyRequest.h>
#include <aws/vpc-lattice/model/PutResourcePolicyRequest.h>
#include <aws/vpc-lattice/model/RegisterTargetsRequest.h>
#include <aws/vpc-lattice/model/StartDomainVerificationRequest.h>
#include <aws/vpc-lattice/model/TagResourceRequest.h>
#include <aws/vpc-lattice/model/UntagResourceRequest.h>
#include <aws/vpc-lattice/model/UpdateAccessLogSubscriptionRequest.h>
#include <aws/vpc-lattice/model/UpdateListenerRequest.h>
#include <aws/vpc-lattice/model/UpdateResourceConfigurationRequest.h>
#include <aws/vpc-lattice/model/UpdateResourceGatewayRequest.h>
#include <aws/vpc-lattice/model/UpdateRuleRequest.h>
#include <aws/vpc-lattice/model/UpdateServiceNetworkRequest.h>
#include <aws/vpc-lattice/model/UpdateServiceNetworkVpcAssociationRequest.h>
#include <aws/vpc-lattice/model/UpdateServiceRequest.h>
#include <aws/vpc-lattice/model/UpdateTargetGroupRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::VPCLattice;
using namespace Aws::VPCLattice::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace VPCLattice {
const char SERVICE_NAME[] = "vpc-lattice";
const char ALLOCATION_TAG[] = "VPCLatticeClient";
}  // namespace VPCLattice
}  // namespace Aws
const char* VPCLatticeClient::GetServiceName() { return SERVICE_NAME; }
const char* VPCLatticeClient::GetAllocationTag() { return ALLOCATION_TAG; }

VPCLatticeClient::VPCLatticeClient(const VPCLattice::VPCLatticeClientConfiguration& clientConfiguration,
                                   std::shared_ptr<VPCLatticeEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VPCLatticeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<VPCLatticeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

VPCLatticeClient::VPCLatticeClient(const AWSCredentials& credentials, std::shared_ptr<VPCLatticeEndpointProviderBase> endpointProvider,
                                   const VPCLattice::VPCLatticeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VPCLatticeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<VPCLatticeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

VPCLatticeClient::VPCLatticeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<VPCLatticeEndpointProviderBase> endpointProvider,
                                   const VPCLattice::VPCLatticeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VPCLatticeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<VPCLatticeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
VPCLatticeClient::VPCLatticeClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VPCLatticeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<VPCLatticeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

VPCLatticeClient::VPCLatticeClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VPCLatticeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<VPCLatticeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

VPCLatticeClient::VPCLatticeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VPCLatticeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<VPCLatticeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
VPCLatticeClient::~VPCLatticeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<VPCLatticeEndpointProviderBase>& VPCLatticeClient::accessEndpointProvider() { return m_endpointProvider; }

void VPCLatticeClient::init(const VPCLattice::VPCLatticeClientConfiguration& config) {
  AWSClient::SetServiceClientName("VPC Lattice");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "vpc-lattice");
}

void VPCLatticeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
VPCLatticeClient::InvokeOperationOutcome VPCLatticeClient::InvokeServiceOperation(
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

BatchUpdateRuleOutcome VPCLatticeClient::BatchUpdateRule(const BatchUpdateRuleRequest& request) const {
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchUpdateRule", "Required field: ServiceIdentifier, is not set");
    return BatchUpdateRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ServiceIdentifier]", false));
  }
  if (!request.ListenerIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchUpdateRule", "Required field: ListenerIdentifier, is not set");
    return BatchUpdateRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ListenerIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  };

  return BatchUpdateRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

CreateAccessLogSubscriptionOutcome VPCLatticeClient::CreateAccessLogSubscription(const CreateAccessLogSubscriptionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accesslogsubscriptions");
  };

  return CreateAccessLogSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateListenerOutcome VPCLatticeClient::CreateListener(const CreateListenerRequest& request) const {
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateListener", "Required field: ServiceIdentifier, is not set");
    return CreateListenerOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ServiceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listeners");
  };

  return CreateListenerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResourceConfigurationOutcome VPCLatticeClient::CreateResourceConfiguration(const CreateResourceConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourceconfigurations");
  };

  return CreateResourceConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResourceGatewayOutcome VPCLatticeClient::CreateResourceGateway(const CreateResourceGatewayRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcegateways");
  };

  return CreateResourceGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRuleOutcome VPCLatticeClient::CreateRule(const CreateRuleRequest& request) const {
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRule", "Required field: ServiceIdentifier, is not set");
    return CreateRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ServiceIdentifier]", false));
  }
  if (!request.ListenerIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRule", "Required field: ListenerIdentifier, is not set");
    return CreateRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ListenerIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  };

  return CreateRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateServiceOutcome VPCLatticeClient::CreateService(const CreateServiceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services");
  };

  return CreateServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateServiceNetworkOutcome VPCLatticeClient::CreateServiceNetwork(const CreateServiceNetworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworks");
  };

  return CreateServiceNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateServiceNetworkResourceAssociationOutcome VPCLatticeClient::CreateServiceNetworkResourceAssociation(
    const CreateServiceNetworkResourceAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkresourceassociations");
  };

  return CreateServiceNetworkResourceAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateServiceNetworkServiceAssociationOutcome VPCLatticeClient::CreateServiceNetworkServiceAssociation(
    const CreateServiceNetworkServiceAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkserviceassociations");
  };

  return CreateServiceNetworkServiceAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateServiceNetworkVpcAssociationOutcome VPCLatticeClient::CreateServiceNetworkVpcAssociation(
    const CreateServiceNetworkVpcAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkvpcassociations");
  };

  return CreateServiceNetworkVpcAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTargetGroupOutcome VPCLatticeClient::CreateTargetGroup(const CreateTargetGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups");
  };

  return CreateTargetGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccessLogSubscriptionOutcome VPCLatticeClient::DeleteAccessLogSubscription(const DeleteAccessLogSubscriptionRequest& request) const {
  if (!request.AccessLogSubscriptionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessLogSubscription", "Required field: AccessLogSubscriptionIdentifier, is not set");
    return DeleteAccessLogSubscriptionOutcome(Aws::Client::AWSError<VPCLatticeErrors>(
        VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessLogSubscriptionIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accesslogsubscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessLogSubscriptionIdentifier());
  };

  return DeleteAccessLogSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAuthPolicyOutcome VPCLatticeClient::DeleteAuthPolicy(const DeleteAuthPolicyRequest& request) const {
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAuthPolicy", "Required field: ResourceIdentifier, is not set");
    return DeleteAuthPolicyOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/authpolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  };

  return DeleteAuthPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDomainVerificationOutcome VPCLatticeClient::DeleteDomainVerification(const DeleteDomainVerificationRequest& request) const {
  if (!request.DomainVerificationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainVerification", "Required field: DomainVerificationIdentifier, is not set");
    return DeleteDomainVerificationOutcome(Aws::Client::AWSError<VPCLatticeErrors>(
        VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainVerificationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainverifications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainVerificationIdentifier());
  };

  return DeleteDomainVerificationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteListenerOutcome VPCLatticeClient::DeleteListener(const DeleteListenerRequest& request) const {
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteListener", "Required field: ServiceIdentifier, is not set");
    return DeleteListenerOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ServiceIdentifier]", false));
  }
  if (!request.ListenerIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteListener", "Required field: ListenerIdentifier, is not set");
    return DeleteListenerOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ListenerIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
  };

  return DeleteListenerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResourceConfigurationOutcome VPCLatticeClient::DeleteResourceConfiguration(const DeleteResourceConfigurationRequest& request) const {
  if (!request.ResourceConfigurationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourceConfiguration", "Required field: ResourceConfigurationIdentifier, is not set");
    return DeleteResourceConfigurationOutcome(Aws::Client::AWSError<VPCLatticeErrors>(
        VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceConfigurationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourceconfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceConfigurationIdentifier());
  };

  return DeleteResourceConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResourceEndpointAssociationOutcome VPCLatticeClient::DeleteResourceEndpointAssociation(
    const DeleteResourceEndpointAssociationRequest& request) const {
  if (!request.ResourceEndpointAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourceEndpointAssociation", "Required field: ResourceEndpointAssociationIdentifier, is not set");
    return DeleteResourceEndpointAssociationOutcome(Aws::Client::AWSError<VPCLatticeErrors>(
        VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceEndpointAssociationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourceendpointassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceEndpointAssociationIdentifier());
  };

  return DeleteResourceEndpointAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResourceGatewayOutcome VPCLatticeClient::DeleteResourceGateway(const DeleteResourceGatewayRequest& request) const {
  if (!request.ResourceGatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourceGateway", "Required field: ResourceGatewayIdentifier, is not set");
    return DeleteResourceGatewayOutcome(Aws::Client::AWSError<VPCLatticeErrors>(
        VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceGatewayIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcegateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceGatewayIdentifier());
  };

  return DeleteResourceGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResourcePolicyOutcome VPCLatticeClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRuleOutcome VPCLatticeClient::DeleteRule(const DeleteRuleRequest& request) const {
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: ServiceIdentifier, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ServiceIdentifier]", false));
  }
  if (!request.ListenerIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: ListenerIdentifier, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ListenerIdentifier]", false));
  }
  if (!request.RuleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: RuleIdentifier, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [RuleIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleIdentifier());
  };

  return DeleteRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteServiceOutcome VPCLatticeClient::DeleteService(const DeleteServiceRequest& request) const {
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteService", "Required field: ServiceIdentifier, is not set");
    return DeleteServiceOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ServiceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  };

  return DeleteServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteServiceNetworkOutcome VPCLatticeClient::DeleteServiceNetwork(const DeleteServiceNetworkRequest& request) const {
  if (!request.ServiceNetworkIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteServiceNetwork", "Required field: ServiceNetworkIdentifier, is not set");
    return DeleteServiceNetworkOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ServiceNetworkIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkIdentifier());
  };

  return DeleteServiceNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteServiceNetworkResourceAssociationOutcome VPCLatticeClient::DeleteServiceNetworkResourceAssociation(
    const DeleteServiceNetworkResourceAssociationRequest& request) const {
  if (!request.ServiceNetworkResourceAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteServiceNetworkResourceAssociation",
                        "Required field: ServiceNetworkResourceAssociationIdentifier, is not set");
    return DeleteServiceNetworkResourceAssociationOutcome(
        Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                "Missing required field [ServiceNetworkResourceAssociationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkresourceassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkResourceAssociationIdentifier());
  };

  return DeleteServiceNetworkResourceAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteServiceNetworkServiceAssociationOutcome VPCLatticeClient::DeleteServiceNetworkServiceAssociation(
    const DeleteServiceNetworkServiceAssociationRequest& request) const {
  if (!request.ServiceNetworkServiceAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteServiceNetworkServiceAssociation", "Required field: ServiceNetworkServiceAssociationIdentifier, is not set");
    return DeleteServiceNetworkServiceAssociationOutcome(
        Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                "Missing required field [ServiceNetworkServiceAssociationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkserviceassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkServiceAssociationIdentifier());
  };

  return DeleteServiceNetworkServiceAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteServiceNetworkVpcAssociationOutcome VPCLatticeClient::DeleteServiceNetworkVpcAssociation(
    const DeleteServiceNetworkVpcAssociationRequest& request) const {
  if (!request.ServiceNetworkVpcAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteServiceNetworkVpcAssociation", "Required field: ServiceNetworkVpcAssociationIdentifier, is not set");
    return DeleteServiceNetworkVpcAssociationOutcome(
        Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                "Missing required field [ServiceNetworkVpcAssociationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkvpcassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkVpcAssociationIdentifier());
  };

  return DeleteServiceNetworkVpcAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTargetGroupOutcome VPCLatticeClient::DeleteTargetGroup(const DeleteTargetGroupRequest& request) const {
  if (!request.TargetGroupIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTargetGroup", "Required field: TargetGroupIdentifier, is not set");
    return DeleteTargetGroupOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TargetGroupIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetGroupIdentifier());
  };

  return DeleteTargetGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeregisterTargetsOutcome VPCLatticeClient::DeregisterTargets(const DeregisterTargetsRequest& request) const {
  if (!request.TargetGroupIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterTargets", "Required field: TargetGroupIdentifier, is not set");
    return DeregisterTargetsOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TargetGroupIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetGroupIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deregistertargets");
  };

  return DeregisterTargetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccessLogSubscriptionOutcome VPCLatticeClient::GetAccessLogSubscription(const GetAccessLogSubscriptionRequest& request) const {
  if (!request.AccessLogSubscriptionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessLogSubscription", "Required field: AccessLogSubscriptionIdentifier, is not set");
    return GetAccessLogSubscriptionOutcome(Aws::Client::AWSError<VPCLatticeErrors>(
        VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessLogSubscriptionIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accesslogsubscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessLogSubscriptionIdentifier());
  };

  return GetAccessLogSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAuthPolicyOutcome VPCLatticeClient::GetAuthPolicy(const GetAuthPolicyRequest& request) const {
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAuthPolicy", "Required field: ResourceIdentifier, is not set");
    return GetAuthPolicyOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/authpolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  };

  return GetAuthPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainVerificationOutcome VPCLatticeClient::GetDomainVerification(const GetDomainVerificationRequest& request) const {
  if (!request.DomainVerificationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainVerification", "Required field: DomainVerificationIdentifier, is not set");
    return GetDomainVerificationOutcome(Aws::Client::AWSError<VPCLatticeErrors>(
        VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainVerificationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainverifications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainVerificationIdentifier());
  };

  return GetDomainVerificationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetListenerOutcome VPCLatticeClient::GetListener(const GetListenerRequest& request) const {
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetListener", "Required field: ServiceIdentifier, is not set");
    return GetListenerOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ServiceIdentifier]", false));
  }
  if (!request.ListenerIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetListener", "Required field: ListenerIdentifier, is not set");
    return GetListenerOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ListenerIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
  };

  return GetListenerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourceConfigurationOutcome VPCLatticeClient::GetResourceConfiguration(const GetResourceConfigurationRequest& request) const {
  if (!request.ResourceConfigurationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceConfiguration", "Required field: ResourceConfigurationIdentifier, is not set");
    return GetResourceConfigurationOutcome(Aws::Client::AWSError<VPCLatticeErrors>(
        VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceConfigurationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourceconfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceConfigurationIdentifier());
  };

  return GetResourceConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourceGatewayOutcome VPCLatticeClient::GetResourceGateway(const GetResourceGatewayRequest& request) const {
  if (!request.ResourceGatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceGateway", "Required field: ResourceGatewayIdentifier, is not set");
    return GetResourceGatewayOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceGatewayIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcegateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceGatewayIdentifier());
  };

  return GetResourceGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourcePolicyOutcome VPCLatticeClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: ResourceArn, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return GetResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRuleOutcome VPCLatticeClient::GetRule(const GetRuleRequest& request) const {
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRule", "Required field: ServiceIdentifier, is not set");
    return GetRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ServiceIdentifier]", false));
  }
  if (!request.ListenerIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRule", "Required field: ListenerIdentifier, is not set");
    return GetRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ListenerIdentifier]", false));
  }
  if (!request.RuleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRule", "Required field: RuleIdentifier, is not set");
    return GetRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [RuleIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleIdentifier());
  };

  return GetRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetServiceOutcome VPCLatticeClient::GetService(const GetServiceRequest& request) const {
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: ServiceIdentifier, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ServiceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  };

  return GetServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetServiceNetworkOutcome VPCLatticeClient::GetServiceNetwork(const GetServiceNetworkRequest& request) const {
  if (!request.ServiceNetworkIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetServiceNetwork", "Required field: ServiceNetworkIdentifier, is not set");
    return GetServiceNetworkOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ServiceNetworkIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkIdentifier());
  };

  return GetServiceNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetServiceNetworkResourceAssociationOutcome VPCLatticeClient::GetServiceNetworkResourceAssociation(
    const GetServiceNetworkResourceAssociationRequest& request) const {
  if (!request.ServiceNetworkResourceAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetServiceNetworkResourceAssociation", "Required field: ServiceNetworkResourceAssociationIdentifier, is not set");
    return GetServiceNetworkResourceAssociationOutcome(
        Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                "Missing required field [ServiceNetworkResourceAssociationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkresourceassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkResourceAssociationIdentifier());
  };

  return GetServiceNetworkResourceAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetServiceNetworkServiceAssociationOutcome VPCLatticeClient::GetServiceNetworkServiceAssociation(
    const GetServiceNetworkServiceAssociationRequest& request) const {
  if (!request.ServiceNetworkServiceAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetServiceNetworkServiceAssociation", "Required field: ServiceNetworkServiceAssociationIdentifier, is not set");
    return GetServiceNetworkServiceAssociationOutcome(
        Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                "Missing required field [ServiceNetworkServiceAssociationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkserviceassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkServiceAssociationIdentifier());
  };

  return GetServiceNetworkServiceAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetServiceNetworkVpcAssociationOutcome VPCLatticeClient::GetServiceNetworkVpcAssociation(
    const GetServiceNetworkVpcAssociationRequest& request) const {
  if (!request.ServiceNetworkVpcAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetServiceNetworkVpcAssociation", "Required field: ServiceNetworkVpcAssociationIdentifier, is not set");
    return GetServiceNetworkVpcAssociationOutcome(
        Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                "Missing required field [ServiceNetworkVpcAssociationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkvpcassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkVpcAssociationIdentifier());
  };

  return GetServiceNetworkVpcAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTargetGroupOutcome VPCLatticeClient::GetTargetGroup(const GetTargetGroupRequest& request) const {
  if (!request.TargetGroupIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTargetGroup", "Required field: TargetGroupIdentifier, is not set");
    return GetTargetGroupOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TargetGroupIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetGroupIdentifier());
  };

  return GetTargetGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAccessLogSubscriptionsOutcome VPCLatticeClient::ListAccessLogSubscriptions(const ListAccessLogSubscriptionsRequest& request) const {
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAccessLogSubscriptions", "Required field: ResourceIdentifier, is not set");
    return ListAccessLogSubscriptionsOutcome(Aws::Client::AWSError<VPCLatticeErrors>(
        VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accesslogsubscriptions");
  };

  return ListAccessLogSubscriptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainVerificationsOutcome VPCLatticeClient::ListDomainVerifications(const ListDomainVerificationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainverifications");
  };

  return ListDomainVerificationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListListenersOutcome VPCLatticeClient::ListListeners(const ListListenersRequest& request) const {
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListListeners", "Required field: ServiceIdentifier, is not set");
    return ListListenersOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ServiceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listeners");
  };

  return ListListenersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListResourceConfigurationsOutcome VPCLatticeClient::ListResourceConfigurations(const ListResourceConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourceconfigurations");
  };

  return ListResourceConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListResourceEndpointAssociationsOutcome VPCLatticeClient::ListResourceEndpointAssociations(
    const ListResourceEndpointAssociationsRequest& request) const {
  if (!request.ResourceConfigurationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListResourceEndpointAssociations", "Required field: ResourceConfigurationIdentifier, is not set");
    return ListResourceEndpointAssociationsOutcome(Aws::Client::AWSError<VPCLatticeErrors>(
        VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceConfigurationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourceendpointassociations");
  };

  return ListResourceEndpointAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListResourceGatewaysOutcome VPCLatticeClient::ListResourceGateways(const ListResourceGatewaysRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcegateways");
  };

  return ListResourceGatewaysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRulesOutcome VPCLatticeClient::ListRules(const ListRulesRequest& request) const {
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRules", "Required field: ServiceIdentifier, is not set");
    return ListRulesOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ServiceIdentifier]", false));
  }
  if (!request.ListenerIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRules", "Required field: ListenerIdentifier, is not set");
    return ListRulesOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ListenerIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  };

  return ListRulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListServiceNetworkResourceAssociationsOutcome VPCLatticeClient::ListServiceNetworkResourceAssociations(
    const ListServiceNetworkResourceAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkresourceassociations");
  };

  return ListServiceNetworkResourceAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListServiceNetworkServiceAssociationsOutcome VPCLatticeClient::ListServiceNetworkServiceAssociations(
    const ListServiceNetworkServiceAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkserviceassociations");
  };

  return ListServiceNetworkServiceAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListServiceNetworkVpcAssociationsOutcome VPCLatticeClient::ListServiceNetworkVpcAssociations(
    const ListServiceNetworkVpcAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkvpcassociations");
  };

  return ListServiceNetworkVpcAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListServiceNetworkVpcEndpointAssociationsOutcome VPCLatticeClient::ListServiceNetworkVpcEndpointAssociations(
    const ListServiceNetworkVpcEndpointAssociationsRequest& request) const {
  if (!request.ServiceNetworkIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServiceNetworkVpcEndpointAssociations", "Required field: ServiceNetworkIdentifier, is not set");
    return ListServiceNetworkVpcEndpointAssociationsOutcome(Aws::Client::AWSError<VPCLatticeErrors>(
        VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceNetworkIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkvpcendpointassociations");
  };

  return ListServiceNetworkVpcEndpointAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListServiceNetworksOutcome VPCLatticeClient::ListServiceNetworks(const ListServiceNetworksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworks");
  };

  return ListServiceNetworksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListServicesOutcome VPCLatticeClient::ListServices(const ListServicesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services");
  };

  return ListServicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome VPCLatticeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTargetGroupsOutcome VPCLatticeClient::ListTargetGroups(const ListTargetGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups");
  };

  return ListTargetGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTargetsOutcome VPCLatticeClient::ListTargets(const ListTargetsRequest& request) const {
  if (!request.TargetGroupIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTargets", "Required field: TargetGroupIdentifier, is not set");
    return ListTargetsOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TargetGroupIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetGroupIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listtargets");
  };

  return ListTargetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAuthPolicyOutcome VPCLatticeClient::PutAuthPolicy(const PutAuthPolicyRequest& request) const {
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutAuthPolicy", "Required field: ResourceIdentifier, is not set");
    return PutAuthPolicyOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/authpolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  };

  return PutAuthPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutResourcePolicyOutcome VPCLatticeClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutResourcePolicy", "Required field: ResourceArn, is not set");
    return PutResourcePolicyOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return PutResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RegisterTargetsOutcome VPCLatticeClient::RegisterTargets(const RegisterTargetsRequest& request) const {
  if (!request.TargetGroupIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterTargets", "Required field: TargetGroupIdentifier, is not set");
    return RegisterTargetsOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TargetGroupIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetGroupIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/registertargets");
  };

  return RegisterTargetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDomainVerificationOutcome VPCLatticeClient::StartDomainVerification(const StartDomainVerificationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainverifications");
  };

  return StartDomainVerificationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome VPCLatticeClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome VPCLatticeClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAccessLogSubscriptionOutcome VPCLatticeClient::UpdateAccessLogSubscription(const UpdateAccessLogSubscriptionRequest& request) const {
  if (!request.AccessLogSubscriptionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccessLogSubscription", "Required field: AccessLogSubscriptionIdentifier, is not set");
    return UpdateAccessLogSubscriptionOutcome(Aws::Client::AWSError<VPCLatticeErrors>(
        VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessLogSubscriptionIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accesslogsubscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessLogSubscriptionIdentifier());
  };

  return UpdateAccessLogSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateListenerOutcome VPCLatticeClient::UpdateListener(const UpdateListenerRequest& request) const {
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateListener", "Required field: ServiceIdentifier, is not set");
    return UpdateListenerOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ServiceIdentifier]", false));
  }
  if (!request.ListenerIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateListener", "Required field: ListenerIdentifier, is not set");
    return UpdateListenerOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ListenerIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
  };

  return UpdateListenerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateResourceConfigurationOutcome VPCLatticeClient::UpdateResourceConfiguration(const UpdateResourceConfigurationRequest& request) const {
  if (!request.ResourceConfigurationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResourceConfiguration", "Required field: ResourceConfigurationIdentifier, is not set");
    return UpdateResourceConfigurationOutcome(Aws::Client::AWSError<VPCLatticeErrors>(
        VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceConfigurationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourceconfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceConfigurationIdentifier());
  };

  return UpdateResourceConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateResourceGatewayOutcome VPCLatticeClient::UpdateResourceGateway(const UpdateResourceGatewayRequest& request) const {
  if (!request.ResourceGatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResourceGateway", "Required field: ResourceGatewayIdentifier, is not set");
    return UpdateResourceGatewayOutcome(Aws::Client::AWSError<VPCLatticeErrors>(
        VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceGatewayIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcegateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceGatewayIdentifier());
  };

  return UpdateResourceGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateRuleOutcome VPCLatticeClient::UpdateRule(const UpdateRuleRequest& request) const {
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRule", "Required field: ServiceIdentifier, is not set");
    return UpdateRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ServiceIdentifier]", false));
  }
  if (!request.ListenerIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRule", "Required field: ListenerIdentifier, is not set");
    return UpdateRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ListenerIdentifier]", false));
  }
  if (!request.RuleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRule", "Required field: RuleIdentifier, is not set");
    return UpdateRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [RuleIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleIdentifier());
  };

  return UpdateRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateServiceOutcome VPCLatticeClient::UpdateService(const UpdateServiceRequest& request) const {
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateService", "Required field: ServiceIdentifier, is not set");
    return UpdateServiceOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ServiceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  };

  return UpdateServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateServiceNetworkOutcome VPCLatticeClient::UpdateServiceNetwork(const UpdateServiceNetworkRequest& request) const {
  if (!request.ServiceNetworkIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateServiceNetwork", "Required field: ServiceNetworkIdentifier, is not set");
    return UpdateServiceNetworkOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ServiceNetworkIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkIdentifier());
  };

  return UpdateServiceNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateServiceNetworkVpcAssociationOutcome VPCLatticeClient::UpdateServiceNetworkVpcAssociation(
    const UpdateServiceNetworkVpcAssociationRequest& request) const {
  if (!request.ServiceNetworkVpcAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateServiceNetworkVpcAssociation", "Required field: ServiceNetworkVpcAssociationIdentifier, is not set");
    return UpdateServiceNetworkVpcAssociationOutcome(
        Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                "Missing required field [ServiceNetworkVpcAssociationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkvpcassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkVpcAssociationIdentifier());
  };

  return UpdateServiceNetworkVpcAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateTargetGroupOutcome VPCLatticeClient::UpdateTargetGroup(const UpdateTargetGroupRequest& request) const {
  if (!request.TargetGroupIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTargetGroup", "Required field: TargetGroupIdentifier, is not set");
    return UpdateTargetGroupOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TargetGroupIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetGroupIdentifier());
  };

  return UpdateTargetGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
