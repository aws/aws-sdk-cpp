/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/vpc-lattice/VPCLatticeClient.h>
#include <aws/vpc-lattice/VPCLatticeErrorMarshaller.h>
#include <aws/vpc-lattice/VPCLatticeEndpointProvider.h>
#include <aws/vpc-lattice/model/BatchUpdateRuleRequest.h>
#include <aws/vpc-lattice/model/CreateAccessLogSubscriptionRequest.h>
#include <aws/vpc-lattice/model/CreateListenerRequest.h>
#include <aws/vpc-lattice/model/CreateRuleRequest.h>
#include <aws/vpc-lattice/model/CreateServiceRequest.h>
#include <aws/vpc-lattice/model/CreateServiceNetworkRequest.h>
#include <aws/vpc-lattice/model/CreateServiceNetworkServiceAssociationRequest.h>
#include <aws/vpc-lattice/model/CreateServiceNetworkVpcAssociationRequest.h>
#include <aws/vpc-lattice/model/CreateTargetGroupRequest.h>
#include <aws/vpc-lattice/model/DeleteAccessLogSubscriptionRequest.h>
#include <aws/vpc-lattice/model/DeleteAuthPolicyRequest.h>
#include <aws/vpc-lattice/model/DeleteListenerRequest.h>
#include <aws/vpc-lattice/model/DeleteResourcePolicyRequest.h>
#include <aws/vpc-lattice/model/DeleteRuleRequest.h>
#include <aws/vpc-lattice/model/DeleteServiceRequest.h>
#include <aws/vpc-lattice/model/DeleteServiceNetworkRequest.h>
#include <aws/vpc-lattice/model/DeleteServiceNetworkServiceAssociationRequest.h>
#include <aws/vpc-lattice/model/DeleteServiceNetworkVpcAssociationRequest.h>
#include <aws/vpc-lattice/model/DeleteTargetGroupRequest.h>
#include <aws/vpc-lattice/model/DeregisterTargetsRequest.h>
#include <aws/vpc-lattice/model/GetAccessLogSubscriptionRequest.h>
#include <aws/vpc-lattice/model/GetAuthPolicyRequest.h>
#include <aws/vpc-lattice/model/GetListenerRequest.h>
#include <aws/vpc-lattice/model/GetResourcePolicyRequest.h>
#include <aws/vpc-lattice/model/GetRuleRequest.h>
#include <aws/vpc-lattice/model/GetServiceRequest.h>
#include <aws/vpc-lattice/model/GetServiceNetworkRequest.h>
#include <aws/vpc-lattice/model/GetServiceNetworkServiceAssociationRequest.h>
#include <aws/vpc-lattice/model/GetServiceNetworkVpcAssociationRequest.h>
#include <aws/vpc-lattice/model/GetTargetGroupRequest.h>
#include <aws/vpc-lattice/model/ListAccessLogSubscriptionsRequest.h>
#include <aws/vpc-lattice/model/ListListenersRequest.h>
#include <aws/vpc-lattice/model/ListRulesRequest.h>
#include <aws/vpc-lattice/model/ListServiceNetworkServiceAssociationsRequest.h>
#include <aws/vpc-lattice/model/ListServiceNetworkVpcAssociationsRequest.h>
#include <aws/vpc-lattice/model/ListServiceNetworksRequest.h>
#include <aws/vpc-lattice/model/ListServicesRequest.h>
#include <aws/vpc-lattice/model/ListTagsForResourceRequest.h>
#include <aws/vpc-lattice/model/ListTargetGroupsRequest.h>
#include <aws/vpc-lattice/model/ListTargetsRequest.h>
#include <aws/vpc-lattice/model/PutAuthPolicyRequest.h>
#include <aws/vpc-lattice/model/PutResourcePolicyRequest.h>
#include <aws/vpc-lattice/model/RegisterTargetsRequest.h>
#include <aws/vpc-lattice/model/TagResourceRequest.h>
#include <aws/vpc-lattice/model/UntagResourceRequest.h>
#include <aws/vpc-lattice/model/UpdateAccessLogSubscriptionRequest.h>
#include <aws/vpc-lattice/model/UpdateListenerRequest.h>
#include <aws/vpc-lattice/model/UpdateRuleRequest.h>
#include <aws/vpc-lattice/model/UpdateServiceRequest.h>
#include <aws/vpc-lattice/model/UpdateServiceNetworkRequest.h>
#include <aws/vpc-lattice/model/UpdateServiceNetworkVpcAssociationRequest.h>
#include <aws/vpc-lattice/model/UpdateTargetGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::VPCLattice;
using namespace Aws::VPCLattice::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* VPCLatticeClient::SERVICE_NAME = "vpc-lattice";
const char* VPCLatticeClient::ALLOCATION_TAG = "VPCLatticeClient";

VPCLatticeClient::VPCLatticeClient(const VPCLattice::VPCLatticeClientConfiguration& clientConfiguration,
                                   std::shared_ptr<VPCLatticeEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<VPCLatticeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

VPCLatticeClient::VPCLatticeClient(const AWSCredentials& credentials,
                                   std::shared_ptr<VPCLatticeEndpointProviderBase> endpointProvider,
                                   const VPCLattice::VPCLatticeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<VPCLatticeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

VPCLatticeClient::VPCLatticeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<VPCLatticeEndpointProviderBase> endpointProvider,
                                   const VPCLattice::VPCLatticeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<VPCLatticeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  VPCLatticeClient::VPCLatticeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<VPCLatticeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<VPCLatticeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

VPCLatticeClient::VPCLatticeClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<VPCLatticeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<VPCLatticeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

VPCLatticeClient::VPCLatticeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<VPCLatticeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<VPCLatticeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
VPCLatticeClient::~VPCLatticeClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<VPCLatticeEndpointProviderBase>& VPCLatticeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void VPCLatticeClient::init(const VPCLattice::VPCLatticeClientConfiguration& config)
{
  AWSClient::SetServiceClientName("VPC Lattice");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void VPCLatticeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchUpdateRuleOutcome VPCLatticeClient::BatchUpdateRule(const BatchUpdateRuleRequest& request) const
{
  AWS_OPERATION_GUARD(BatchUpdateRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUpdateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ListenerIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateRule", "Required field: ListenerIdentifier, is not set");
    return BatchUpdateRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ListenerIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateRule", "Required field: ServiceIdentifier, is not set");
    return BatchUpdateRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpdateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  return BatchUpdateRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

CreateAccessLogSubscriptionOutcome VPCLatticeClient::CreateAccessLogSubscription(const CreateAccessLogSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAccessLogSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccessLogSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccessLogSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accesslogsubscriptions");
  return CreateAccessLogSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateListenerOutcome VPCLatticeClient::CreateListener(const CreateListenerRequest& request) const
{
  AWS_OPERATION_GUARD(CreateListener);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateListener", "Required field: ServiceIdentifier, is not set");
    return CreateListenerOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listeners");
  return CreateListenerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRuleOutcome VPCLatticeClient::CreateRule(const CreateRuleRequest& request) const
{
  AWS_OPERATION_GUARD(CreateRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ListenerIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRule", "Required field: ListenerIdentifier, is not set");
    return CreateRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ListenerIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRule", "Required field: ServiceIdentifier, is not set");
    return CreateRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  return CreateRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceOutcome VPCLatticeClient::CreateService(const CreateServiceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateService);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services");
  return CreateServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceNetworkOutcome VPCLatticeClient::CreateServiceNetwork(const CreateServiceNetworkRequest& request) const
{
  AWS_OPERATION_GUARD(CreateServiceNetwork);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateServiceNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateServiceNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworks");
  return CreateServiceNetworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceNetworkServiceAssociationOutcome VPCLatticeClient::CreateServiceNetworkServiceAssociation(const CreateServiceNetworkServiceAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateServiceNetworkServiceAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateServiceNetworkServiceAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateServiceNetworkServiceAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkserviceassociations");
  return CreateServiceNetworkServiceAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceNetworkVpcAssociationOutcome VPCLatticeClient::CreateServiceNetworkVpcAssociation(const CreateServiceNetworkVpcAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateServiceNetworkVpcAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateServiceNetworkVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateServiceNetworkVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkvpcassociations");
  return CreateServiceNetworkVpcAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTargetGroupOutcome VPCLatticeClient::CreateTargetGroup(const CreateTargetGroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTargetGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTargetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTargetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups");
  return CreateTargetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccessLogSubscriptionOutcome VPCLatticeClient::DeleteAccessLogSubscription(const DeleteAccessLogSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAccessLogSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessLogSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccessLogSubscriptionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessLogSubscription", "Required field: AccessLogSubscriptionIdentifier, is not set");
    return DeleteAccessLogSubscriptionOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessLogSubscriptionIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccessLogSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accesslogsubscriptions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessLogSubscriptionIdentifier());
  return DeleteAccessLogSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAuthPolicyOutcome VPCLatticeClient::DeleteAuthPolicy(const DeleteAuthPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAuthPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAuthPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAuthPolicy", "Required field: ResourceIdentifier, is not set");
    return DeleteAuthPolicyOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAuthPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/authpolicy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  return DeleteAuthPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteListenerOutcome VPCLatticeClient::DeleteListener(const DeleteListenerRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteListener);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ListenerIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteListener", "Required field: ListenerIdentifier, is not set");
    return DeleteListenerOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ListenerIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteListener", "Required field: ServiceIdentifier, is not set");
    return DeleteListenerOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
  return DeleteListenerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcome VPCLatticeClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return DeleteResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleOutcome VPCLatticeClient::DeleteRule(const DeleteRuleRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ListenerIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: ListenerIdentifier, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ListenerIdentifier]", false));
  }
  if (!request.RuleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: RuleIdentifier, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: ServiceIdentifier, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleIdentifier());
  return DeleteRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceOutcome VPCLatticeClient::DeleteService(const DeleteServiceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteService);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteService", "Required field: ServiceIdentifier, is not set");
    return DeleteServiceOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  return DeleteServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceNetworkOutcome VPCLatticeClient::DeleteServiceNetwork(const DeleteServiceNetworkRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteServiceNetwork);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteServiceNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ServiceNetworkIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteServiceNetwork", "Required field: ServiceNetworkIdentifier, is not set");
    return DeleteServiceNetworkOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceNetworkIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteServiceNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkIdentifier());
  return DeleteServiceNetworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceNetworkServiceAssociationOutcome VPCLatticeClient::DeleteServiceNetworkServiceAssociation(const DeleteServiceNetworkServiceAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteServiceNetworkServiceAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteServiceNetworkServiceAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ServiceNetworkServiceAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteServiceNetworkServiceAssociation", "Required field: ServiceNetworkServiceAssociationIdentifier, is not set");
    return DeleteServiceNetworkServiceAssociationOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceNetworkServiceAssociationIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteServiceNetworkServiceAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkserviceassociations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkServiceAssociationIdentifier());
  return DeleteServiceNetworkServiceAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceNetworkVpcAssociationOutcome VPCLatticeClient::DeleteServiceNetworkVpcAssociation(const DeleteServiceNetworkVpcAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteServiceNetworkVpcAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteServiceNetworkVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ServiceNetworkVpcAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteServiceNetworkVpcAssociation", "Required field: ServiceNetworkVpcAssociationIdentifier, is not set");
    return DeleteServiceNetworkVpcAssociationOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceNetworkVpcAssociationIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteServiceNetworkVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkvpcassociations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkVpcAssociationIdentifier());
  return DeleteServiceNetworkVpcAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTargetGroupOutcome VPCLatticeClient::DeleteTargetGroup(const DeleteTargetGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTargetGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTargetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TargetGroupIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTargetGroup", "Required field: TargetGroupIdentifier, is not set");
    return DeleteTargetGroupOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetGroupIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTargetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetGroupIdentifier());
  return DeleteTargetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeregisterTargetsOutcome VPCLatticeClient::DeregisterTargets(const DeregisterTargetsRequest& request) const
{
  AWS_OPERATION_GUARD(DeregisterTargets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TargetGroupIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeregisterTargets", "Required field: TargetGroupIdentifier, is not set");
    return DeregisterTargetsOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetGroupIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetGroupIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deregistertargets");
  return DeregisterTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccessLogSubscriptionOutcome VPCLatticeClient::GetAccessLogSubscription(const GetAccessLogSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(GetAccessLogSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessLogSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccessLogSubscriptionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessLogSubscription", "Required field: AccessLogSubscriptionIdentifier, is not set");
    return GetAccessLogSubscriptionOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessLogSubscriptionIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessLogSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accesslogsubscriptions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessLogSubscriptionIdentifier());
  return GetAccessLogSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAuthPolicyOutcome VPCLatticeClient::GetAuthPolicy(const GetAuthPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetAuthPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAuthPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAuthPolicy", "Required field: ResourceIdentifier, is not set");
    return GetAuthPolicyOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAuthPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/authpolicy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  return GetAuthPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetListenerOutcome VPCLatticeClient::GetListener(const GetListenerRequest& request) const
{
  AWS_OPERATION_GUARD(GetListener);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ListenerIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetListener", "Required field: ListenerIdentifier, is not set");
    return GetListenerOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ListenerIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetListener", "Required field: ServiceIdentifier, is not set");
    return GetListenerOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
  return GetListenerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePolicyOutcome VPCLatticeClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: ResourceArn, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return GetResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRuleOutcome VPCLatticeClient::GetRule(const GetRuleRequest& request) const
{
  AWS_OPERATION_GUARD(GetRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ListenerIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRule", "Required field: ListenerIdentifier, is not set");
    return GetRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ListenerIdentifier]", false));
  }
  if (!request.RuleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRule", "Required field: RuleIdentifier, is not set");
    return GetRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRule", "Required field: ServiceIdentifier, is not set");
    return GetRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleIdentifier());
  return GetRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServiceOutcome VPCLatticeClient::GetService(const GetServiceRequest& request) const
{
  AWS_OPERATION_GUARD(GetService);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: ServiceIdentifier, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  return GetServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServiceNetworkOutcome VPCLatticeClient::GetServiceNetwork(const GetServiceNetworkRequest& request) const
{
  AWS_OPERATION_GUARD(GetServiceNetwork);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ServiceNetworkIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetServiceNetwork", "Required field: ServiceNetworkIdentifier, is not set");
    return GetServiceNetworkOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceNetworkIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServiceNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkIdentifier());
  return GetServiceNetworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServiceNetworkServiceAssociationOutcome VPCLatticeClient::GetServiceNetworkServiceAssociation(const GetServiceNetworkServiceAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetServiceNetworkServiceAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceNetworkServiceAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ServiceNetworkServiceAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetServiceNetworkServiceAssociation", "Required field: ServiceNetworkServiceAssociationIdentifier, is not set");
    return GetServiceNetworkServiceAssociationOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceNetworkServiceAssociationIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServiceNetworkServiceAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkserviceassociations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkServiceAssociationIdentifier());
  return GetServiceNetworkServiceAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServiceNetworkVpcAssociationOutcome VPCLatticeClient::GetServiceNetworkVpcAssociation(const GetServiceNetworkVpcAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetServiceNetworkVpcAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceNetworkVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ServiceNetworkVpcAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetServiceNetworkVpcAssociation", "Required field: ServiceNetworkVpcAssociationIdentifier, is not set");
    return GetServiceNetworkVpcAssociationOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceNetworkVpcAssociationIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServiceNetworkVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkvpcassociations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkVpcAssociationIdentifier());
  return GetServiceNetworkVpcAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTargetGroupOutcome VPCLatticeClient::GetTargetGroup(const GetTargetGroupRequest& request) const
{
  AWS_OPERATION_GUARD(GetTargetGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTargetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TargetGroupIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTargetGroup", "Required field: TargetGroupIdentifier, is not set");
    return GetTargetGroupOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetGroupIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTargetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetGroupIdentifier());
  return GetTargetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAccessLogSubscriptionsOutcome VPCLatticeClient::ListAccessLogSubscriptions(const ListAccessLogSubscriptionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAccessLogSubscriptions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessLogSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAccessLogSubscriptions", "Required field: ResourceIdentifier, is not set");
    return ListAccessLogSubscriptionsOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccessLogSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accesslogsubscriptions");
  return ListAccessLogSubscriptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListListenersOutcome VPCLatticeClient::ListListeners(const ListListenersRequest& request) const
{
  AWS_OPERATION_GUARD(ListListeners);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListListeners, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListListeners", "Required field: ServiceIdentifier, is not set");
    return ListListenersOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListListeners, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listeners");
  return ListListenersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRulesOutcome VPCLatticeClient::ListRules(const ListRulesRequest& request) const
{
  AWS_OPERATION_GUARD(ListRules);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ListenerIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRules", "Required field: ListenerIdentifier, is not set");
    return ListRulesOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ListenerIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRules", "Required field: ServiceIdentifier, is not set");
    return ListRulesOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  return ListRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListServiceNetworkServiceAssociationsOutcome VPCLatticeClient::ListServiceNetworkServiceAssociations(const ListServiceNetworkServiceAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListServiceNetworkServiceAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListServiceNetworkServiceAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListServiceNetworkServiceAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkserviceassociations");
  return ListServiceNetworkServiceAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListServiceNetworkVpcAssociationsOutcome VPCLatticeClient::ListServiceNetworkVpcAssociations(const ListServiceNetworkVpcAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListServiceNetworkVpcAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListServiceNetworkVpcAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListServiceNetworkVpcAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkvpcassociations");
  return ListServiceNetworkVpcAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListServiceNetworksOutcome VPCLatticeClient::ListServiceNetworks(const ListServiceNetworksRequest& request) const
{
  AWS_OPERATION_GUARD(ListServiceNetworks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListServiceNetworks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListServiceNetworks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworks");
  return ListServiceNetworksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListServicesOutcome VPCLatticeClient::ListServices(const ListServicesRequest& request) const
{
  AWS_OPERATION_GUARD(ListServices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services");
  return ListServicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome VPCLatticeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTargetGroupsOutcome VPCLatticeClient::ListTargetGroups(const ListTargetGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTargetGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTargetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTargetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups");
  return ListTargetGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTargetsOutcome VPCLatticeClient::ListTargets(const ListTargetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTargets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TargetGroupIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTargets", "Required field: TargetGroupIdentifier, is not set");
    return ListTargetsOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetGroupIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetGroupIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listtargets");
  return ListTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAuthPolicyOutcome VPCLatticeClient::PutAuthPolicy(const PutAuthPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutAuthPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAuthPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAuthPolicy", "Required field: ResourceIdentifier, is not set");
    return PutAuthPolicyOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAuthPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/authpolicy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  return PutAuthPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcome VPCLatticeClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutResourcePolicy", "Required field: ResourceArn, is not set");
    return PutResourcePolicyOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return PutResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RegisterTargetsOutcome VPCLatticeClient::RegisterTargets(const RegisterTargetsRequest& request) const
{
  AWS_OPERATION_GUARD(RegisterTargets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TargetGroupIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterTargets", "Required field: TargetGroupIdentifier, is not set");
    return RegisterTargetsOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetGroupIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetGroupIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/registertargets");
  return RegisterTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome VPCLatticeClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome VPCLatticeClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccessLogSubscriptionOutcome VPCLatticeClient::UpdateAccessLogSubscription(const UpdateAccessLogSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAccessLogSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccessLogSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccessLogSubscriptionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccessLogSubscription", "Required field: AccessLogSubscriptionIdentifier, is not set");
    return UpdateAccessLogSubscriptionOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessLogSubscriptionIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAccessLogSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accesslogsubscriptions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessLogSubscriptionIdentifier());
  return UpdateAccessLogSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateListenerOutcome VPCLatticeClient::UpdateListener(const UpdateListenerRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateListener);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ListenerIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateListener", "Required field: ListenerIdentifier, is not set");
    return UpdateListenerOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ListenerIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateListener", "Required field: ServiceIdentifier, is not set");
    return UpdateListenerOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
  return UpdateListenerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleOutcome VPCLatticeClient::UpdateRule(const UpdateRuleRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ListenerIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRule", "Required field: ListenerIdentifier, is not set");
    return UpdateRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ListenerIdentifier]", false));
  }
  if (!request.RuleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRule", "Required field: RuleIdentifier, is not set");
    return UpdateRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRule", "Required field: ServiceIdentifier, is not set");
    return UpdateRuleOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listeners/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetListenerIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleIdentifier());
  return UpdateRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceOutcome VPCLatticeClient::UpdateService(const UpdateServiceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateService);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateService", "Required field: ServiceIdentifier, is not set");
    return UpdateServiceOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  return UpdateServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceNetworkOutcome VPCLatticeClient::UpdateServiceNetwork(const UpdateServiceNetworkRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateServiceNetwork);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateServiceNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ServiceNetworkIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateServiceNetwork", "Required field: ServiceNetworkIdentifier, is not set");
    return UpdateServiceNetworkOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceNetworkIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateServiceNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkIdentifier());
  return UpdateServiceNetworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceNetworkVpcAssociationOutcome VPCLatticeClient::UpdateServiceNetworkVpcAssociation(const UpdateServiceNetworkVpcAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateServiceNetworkVpcAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateServiceNetworkVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ServiceNetworkVpcAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateServiceNetworkVpcAssociation", "Required field: ServiceNetworkVpcAssociationIdentifier, is not set");
    return UpdateServiceNetworkVpcAssociationOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceNetworkVpcAssociationIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateServiceNetworkVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/servicenetworkvpcassociations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceNetworkVpcAssociationIdentifier());
  return UpdateServiceNetworkVpcAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateTargetGroupOutcome VPCLatticeClient::UpdateTargetGroup(const UpdateTargetGroupRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTargetGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTargetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TargetGroupIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTargetGroup", "Required field: TargetGroupIdentifier, is not set");
    return UpdateTargetGroupOutcome(Aws::Client::AWSError<VPCLatticeErrors>(VPCLatticeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetGroupIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTargetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/targetgroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetGroupIdentifier());
  return UpdateTargetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

