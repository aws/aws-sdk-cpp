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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/route53/Route53Client.h>
#include <aws/route53/Route53ErrorMarshaller.h>
#include <aws/route53/Route53EndpointProvider.h>
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
#include <aws/route53/model/CreateTrafficPolicyRequest.h>
#include <aws/route53/model/CreateTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/CreateTrafficPolicyVersionRequest.h>
#include <aws/route53/model/CreateVPCAssociationAuthorizationRequest.h>
#include <aws/route53/model/DeactivateKeySigningKeyRequest.h>
#include <aws/route53/model/DeleteCidrCollectionRequest.h>
#include <aws/route53/model/DeleteHealthCheckRequest.h>
#include <aws/route53/model/DeleteHostedZoneRequest.h>
#include <aws/route53/model/DeleteKeySigningKeyRequest.h>
#include <aws/route53/model/DeleteQueryLoggingConfigRequest.h>
#include <aws/route53/model/DeleteReusableDelegationSetRequest.h>
#include <aws/route53/model/DeleteTrafficPolicyRequest.h>
#include <aws/route53/model/DeleteTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/DeleteVPCAssociationAuthorizationRequest.h>
#include <aws/route53/model/DisableHostedZoneDNSSECRequest.h>
#include <aws/route53/model/DisassociateVPCFromHostedZoneRequest.h>
#include <aws/route53/model/EnableHostedZoneDNSSECRequest.h>
#include <aws/route53/model/GetAccountLimitRequest.h>
#include <aws/route53/model/GetChangeRequest.h>
#include <aws/route53/model/GetCheckerIpRangesRequest.h>
#include <aws/route53/model/GetDNSSECRequest.h>
#include <aws/route53/model/GetGeoLocationRequest.h>
#include <aws/route53/model/GetHealthCheckRequest.h>
#include <aws/route53/model/GetHealthCheckCountRequest.h>
#include <aws/route53/model/GetHealthCheckLastFailureReasonRequest.h>
#include <aws/route53/model/GetHealthCheckStatusRequest.h>
#include <aws/route53/model/GetHostedZoneRequest.h>
#include <aws/route53/model/GetHostedZoneCountRequest.h>
#include <aws/route53/model/GetHostedZoneLimitRequest.h>
#include <aws/route53/model/GetQueryLoggingConfigRequest.h>
#include <aws/route53/model/GetReusableDelegationSetRequest.h>
#include <aws/route53/model/GetReusableDelegationSetLimitRequest.h>
#include <aws/route53/model/GetTrafficPolicyRequest.h>
#include <aws/route53/model/GetTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/GetTrafficPolicyInstanceCountRequest.h>
#include <aws/route53/model/ListCidrBlocksRequest.h>
#include <aws/route53/model/ListCidrCollectionsRequest.h>
#include <aws/route53/model/ListCidrLocationsRequest.h>
#include <aws/route53/model/ListGeoLocationsRequest.h>
#include <aws/route53/model/ListHealthChecksRequest.h>
#include <aws/route53/model/ListHostedZonesRequest.h>
#include <aws/route53/model/ListHostedZonesByNameRequest.h>
#include <aws/route53/model/ListHostedZonesByVPCRequest.h>
#include <aws/route53/model/ListQueryLoggingConfigsRequest.h>
#include <aws/route53/model/ListResourceRecordSetsRequest.h>
#include <aws/route53/model/ListReusableDelegationSetsRequest.h>
#include <aws/route53/model/ListTagsForResourceRequest.h>
#include <aws/route53/model/ListTagsForResourcesRequest.h>
#include <aws/route53/model/ListTrafficPoliciesRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesByHostedZoneRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesByPolicyRequest.h>
#include <aws/route53/model/ListTrafficPolicyVersionsRequest.h>
#include <aws/route53/model/ListVPCAssociationAuthorizationsRequest.h>
#include <aws/route53/model/TestDNSAnswerRequest.h>
#include <aws/route53/model/UpdateHealthCheckRequest.h>
#include <aws/route53/model/UpdateHostedZoneCommentRequest.h>
#include <aws/route53/model/UpdateTrafficPolicyCommentRequest.h>
#include <aws/route53/model/UpdateTrafficPolicyInstanceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53;
using namespace Aws::Route53::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* Route53Client::SERVICE_NAME = "route53";
const char* Route53Client::ALLOCATION_TAG = "Route53Client";

Route53Client::Route53Client(const Route53::Route53ClientConfiguration& clientConfiguration,
                             std::shared_ptr<Route53EndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

Route53Client::Route53Client(const AWSCredentials& credentials,
                             std::shared_ptr<Route53EndpointProviderBase> endpointProvider,
                             const Route53::Route53ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

Route53Client::Route53Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<Route53EndpointProviderBase> endpointProvider,
                             const Route53::Route53ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  Route53Client::Route53Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<Route53EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Route53Client::Route53Client(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<Route53EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Route53Client::Route53Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<Route53EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
Route53Client::~Route53Client()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<Route53EndpointProviderBase>& Route53Client::accessEndpointProvider()
{
  return m_endpointProvider;
}

void Route53Client::init(const Route53::Route53ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Route 53");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void Route53Client::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

ActivateKeySigningKeyOutcome Route53Client::ActivateKeySigningKey(const ActivateKeySigningKeyRequest& request) const
{
  AWS_OPERATION_GUARD(ActivateKeySigningKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ActivateKeySigningKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ActivateKeySigningKey", "Required field: HostedZoneId, is not set");
    return ActivateKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ActivateKeySigningKey", "Required field: Name, is not set");
    return ActivateKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ActivateKeySigningKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/keysigningkey/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/activate");
  return ActivateKeySigningKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateVPCWithHostedZoneOutcome Route53Client::AssociateVPCWithHostedZone(const AssociateVPCWithHostedZoneRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateVPCWithHostedZone);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateVPCWithHostedZone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateVPCWithHostedZone", "Required field: HostedZoneId, is not set");
    return AssociateVPCWithHostedZoneOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateVPCWithHostedZone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associatevpc");
  return AssociateVPCWithHostedZoneOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ChangeCidrCollectionOutcome Route53Client::ChangeCidrCollection(const ChangeCidrCollectionRequest& request) const
{
  AWS_OPERATION_GUARD(ChangeCidrCollection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ChangeCidrCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ChangeCidrCollection", "Required field: Id, is not set");
    return ChangeCidrCollectionOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ChangeCidrCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/cidrcollection/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return ChangeCidrCollectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ChangeResourceRecordSetsOutcome Route53Client::ChangeResourceRecordSets(const ChangeResourceRecordSetsRequest& request) const
{
  AWS_OPERATION_GUARD(ChangeResourceRecordSets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ChangeResourceRecordSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ChangeResourceRecordSets", "Required field: HostedZoneId, is not set");
    return ChangeResourceRecordSetsOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ChangeResourceRecordSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rrset/");
  return ChangeResourceRecordSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ChangeTagsForResourceOutcome Route53Client::ChangeTagsForResource(const ChangeTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ChangeTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ChangeTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ChangeTagsForResource", "Required field: ResourceType, is not set");
    return ChangeTagsForResourceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ChangeTagsForResource", "Required field: ResourceId, is not set");
    return ChangeTagsForResourceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ChangeTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(TagResourceTypeMapper::GetNameForTagResourceType(request.GetResourceType()));
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  return ChangeTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCidrCollectionOutcome Route53Client::CreateCidrCollection(const CreateCidrCollectionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateCidrCollection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCidrCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCidrCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/cidrcollection");
  return CreateCidrCollectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateHealthCheckOutcome Route53Client::CreateHealthCheck(const CreateHealthCheckRequest& request) const
{
  AWS_OPERATION_GUARD(CreateHealthCheck);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateHealthCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateHealthCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheck");
  return CreateHealthCheckOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateHostedZoneOutcome Route53Client::CreateHostedZone(const CreateHostedZoneRequest& request) const
{
  AWS_OPERATION_GUARD(CreateHostedZone);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateHostedZone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateHostedZone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone");
  return CreateHostedZoneOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateKeySigningKeyOutcome Route53Client::CreateKeySigningKey(const CreateKeySigningKeyRequest& request) const
{
  AWS_OPERATION_GUARD(CreateKeySigningKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKeySigningKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKeySigningKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/keysigningkey");
  return CreateKeySigningKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateQueryLoggingConfigOutcome Route53Client::CreateQueryLoggingConfig(const CreateQueryLoggingConfigRequest& request) const
{
  AWS_OPERATION_GUARD(CreateQueryLoggingConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateQueryLoggingConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateQueryLoggingConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/queryloggingconfig");
  return CreateQueryLoggingConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateReusableDelegationSetOutcome Route53Client::CreateReusableDelegationSet(const CreateReusableDelegationSetRequest& request) const
{
  AWS_OPERATION_GUARD(CreateReusableDelegationSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReusableDelegationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReusableDelegationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/delegationset");
  return CreateReusableDelegationSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTrafficPolicyOutcome Route53Client::CreateTrafficPolicy(const CreateTrafficPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTrafficPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrafficPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrafficPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicy");
  return CreateTrafficPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTrafficPolicyInstanceOutcome Route53Client::CreateTrafficPolicyInstance(const CreateTrafficPolicyInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTrafficPolicyInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrafficPolicyInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrafficPolicyInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstance");
  return CreateTrafficPolicyInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTrafficPolicyVersionOutcome Route53Client::CreateTrafficPolicyVersion(const CreateTrafficPolicyVersionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTrafficPolicyVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrafficPolicyVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTrafficPolicyVersion", "Required field: Id, is not set");
    return CreateTrafficPolicyVersionOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrafficPolicyVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return CreateTrafficPolicyVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVPCAssociationAuthorizationOutcome Route53Client::CreateVPCAssociationAuthorization(const CreateVPCAssociationAuthorizationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVPCAssociationAuthorization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVPCAssociationAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVPCAssociationAuthorization", "Required field: HostedZoneId, is not set");
    return CreateVPCAssociationAuthorizationOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVPCAssociationAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/authorizevpcassociation");
  return CreateVPCAssociationAuthorizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeactivateKeySigningKeyOutcome Route53Client::DeactivateKeySigningKey(const DeactivateKeySigningKeyRequest& request) const
{
  AWS_OPERATION_GUARD(DeactivateKeySigningKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeactivateKeySigningKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeactivateKeySigningKey", "Required field: HostedZoneId, is not set");
    return DeactivateKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeactivateKeySigningKey", "Required field: Name, is not set");
    return DeactivateKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeactivateKeySigningKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/keysigningkey/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deactivate");
  return DeactivateKeySigningKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCidrCollectionOutcome Route53Client::DeleteCidrCollection(const DeleteCidrCollectionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteCidrCollection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCidrCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCidrCollection", "Required field: Id, is not set");
    return DeleteCidrCollectionOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCidrCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/cidrcollection/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteCidrCollectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteHealthCheckOutcome Route53Client::DeleteHealthCheck(const DeleteHealthCheckRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteHealthCheck);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteHealthCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HealthCheckIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteHealthCheck", "Required field: HealthCheckId, is not set");
    return DeleteHealthCheckOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HealthCheckId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteHealthCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheck/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHealthCheckId());
  return DeleteHealthCheckOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteHostedZoneOutcome Route53Client::DeleteHostedZone(const DeleteHostedZoneRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteHostedZone);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteHostedZone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteHostedZone", "Required field: Id, is not set");
    return DeleteHostedZoneOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteHostedZone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteHostedZoneOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteKeySigningKeyOutcome Route53Client::DeleteKeySigningKey(const DeleteKeySigningKeyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteKeySigningKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKeySigningKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKeySigningKey", "Required field: HostedZoneId, is not set");
    return DeleteKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKeySigningKey", "Required field: Name, is not set");
    return DeleteKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKeySigningKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/keysigningkey/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteKeySigningKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteQueryLoggingConfigOutcome Route53Client::DeleteQueryLoggingConfig(const DeleteQueryLoggingConfigRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteQueryLoggingConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteQueryLoggingConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueryLoggingConfig", "Required field: Id, is not set");
    return DeleteQueryLoggingConfigOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteQueryLoggingConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/queryloggingconfig/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteQueryLoggingConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteReusableDelegationSetOutcome Route53Client::DeleteReusableDelegationSet(const DeleteReusableDelegationSetRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteReusableDelegationSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReusableDelegationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteReusableDelegationSet", "Required field: Id, is not set");
    return DeleteReusableDelegationSetOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReusableDelegationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/delegationset/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteReusableDelegationSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteTrafficPolicyOutcome Route53Client::DeleteTrafficPolicy(const DeleteTrafficPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTrafficPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrafficPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrafficPolicy", "Required field: Id, is not set");
    return DeleteTrafficPolicyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrafficPolicy", "Required field: Version, is not set");
    return DeleteTrafficPolicyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrafficPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  return DeleteTrafficPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteTrafficPolicyInstanceOutcome Route53Client::DeleteTrafficPolicyInstance(const DeleteTrafficPolicyInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTrafficPolicyInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrafficPolicyInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrafficPolicyInstance", "Required field: Id, is not set");
    return DeleteTrafficPolicyInstanceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrafficPolicyInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteTrafficPolicyInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteVPCAssociationAuthorizationOutcome Route53Client::DeleteVPCAssociationAuthorization(const DeleteVPCAssociationAuthorizationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVPCAssociationAuthorization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVPCAssociationAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVPCAssociationAuthorization", "Required field: HostedZoneId, is not set");
    return DeleteVPCAssociationAuthorizationOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVPCAssociationAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deauthorizevpcassociation");
  return DeleteVPCAssociationAuthorizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableHostedZoneDNSSECOutcome Route53Client::DisableHostedZoneDNSSEC(const DisableHostedZoneDNSSECRequest& request) const
{
  AWS_OPERATION_GUARD(DisableHostedZoneDNSSEC);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableHostedZoneDNSSEC, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableHostedZoneDNSSEC", "Required field: HostedZoneId, is not set");
    return DisableHostedZoneDNSSECOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableHostedZoneDNSSEC, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disable-dnssec");
  return DisableHostedZoneDNSSECOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateVPCFromHostedZoneOutcome Route53Client::DisassociateVPCFromHostedZone(const DisassociateVPCFromHostedZoneRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateVPCFromHostedZone);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateVPCFromHostedZone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateVPCFromHostedZone", "Required field: HostedZoneId, is not set");
    return DisassociateVPCFromHostedZoneOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateVPCFromHostedZone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disassociatevpc");
  return DisassociateVPCFromHostedZoneOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableHostedZoneDNSSECOutcome Route53Client::EnableHostedZoneDNSSEC(const EnableHostedZoneDNSSECRequest& request) const
{
  AWS_OPERATION_GUARD(EnableHostedZoneDNSSEC);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableHostedZoneDNSSEC, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EnableHostedZoneDNSSEC", "Required field: HostedZoneId, is not set");
    return EnableHostedZoneDNSSECOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableHostedZoneDNSSEC, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/enable-dnssec");
  return EnableHostedZoneDNSSECOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetAccountLimitOutcome Route53Client::GetAccountLimit(const GetAccountLimitRequest& request) const
{
  AWS_OPERATION_GUARD(GetAccountLimit);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccountLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccountLimit", "Required field: Type, is not set");
    return GetAccountLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccountLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/accountlimit/");
  endpointResolutionOutcome.GetResult().AddPathSegment(AccountLimitTypeMapper::GetNameForAccountLimitType(request.GetType()));
  return GetAccountLimitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetChangeOutcome Route53Client::GetChange(const GetChangeRequest& request) const
{
  AWS_OPERATION_GUARD(GetChange);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChange, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChange", "Required field: Id, is not set");
    return GetChangeOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChange, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/change/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetChangeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetCheckerIpRangesOutcome Route53Client::GetCheckerIpRanges(const GetCheckerIpRangesRequest& request) const
{
  AWS_OPERATION_GUARD(GetCheckerIpRanges);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCheckerIpRanges, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCheckerIpRanges, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/checkeripranges");
  return GetCheckerIpRangesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetDNSSECOutcome Route53Client::GetDNSSEC(const GetDNSSECRequest& request) const
{
  AWS_OPERATION_GUARD(GetDNSSEC);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDNSSEC, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDNSSEC", "Required field: HostedZoneId, is not set");
    return GetDNSSECOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDNSSEC, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dnssec");
  return GetDNSSECOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetGeoLocationOutcome Route53Client::GetGeoLocation(const GetGeoLocationRequest& request) const
{
  AWS_OPERATION_GUARD(GetGeoLocation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGeoLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGeoLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/geolocation");
  return GetGeoLocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetHealthCheckOutcome Route53Client::GetHealthCheck(const GetHealthCheckRequest& request) const
{
  AWS_OPERATION_GUARD(GetHealthCheck);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHealthCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HealthCheckIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHealthCheck", "Required field: HealthCheckId, is not set");
    return GetHealthCheckOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HealthCheckId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHealthCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheck/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHealthCheckId());
  return GetHealthCheckOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetHealthCheckCountOutcome Route53Client::GetHealthCheckCount(const GetHealthCheckCountRequest& request) const
{
  AWS_OPERATION_GUARD(GetHealthCheckCount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHealthCheckCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHealthCheckCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheckcount");
  return GetHealthCheckCountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetHealthCheckLastFailureReasonOutcome Route53Client::GetHealthCheckLastFailureReason(const GetHealthCheckLastFailureReasonRequest& request) const
{
  AWS_OPERATION_GUARD(GetHealthCheckLastFailureReason);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHealthCheckLastFailureReason, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HealthCheckIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHealthCheckLastFailureReason", "Required field: HealthCheckId, is not set");
    return GetHealthCheckLastFailureReasonOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HealthCheckId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHealthCheckLastFailureReason, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheck/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHealthCheckId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lastfailurereason");
  return GetHealthCheckLastFailureReasonOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetHealthCheckStatusOutcome Route53Client::GetHealthCheckStatus(const GetHealthCheckStatusRequest& request) const
{
  AWS_OPERATION_GUARD(GetHealthCheckStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHealthCheckStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HealthCheckIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHealthCheckStatus", "Required field: HealthCheckId, is not set");
    return GetHealthCheckStatusOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HealthCheckId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHealthCheckStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheck/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHealthCheckId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return GetHealthCheckStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetHostedZoneOutcome Route53Client::GetHostedZone(const GetHostedZoneRequest& request) const
{
  AWS_OPERATION_GUARD(GetHostedZone);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHostedZone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHostedZone", "Required field: Id, is not set");
    return GetHostedZoneOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHostedZone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetHostedZoneOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetHostedZoneCountOutcome Route53Client::GetHostedZoneCount(const GetHostedZoneCountRequest& request) const
{
  AWS_OPERATION_GUARD(GetHostedZoneCount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHostedZoneCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHostedZoneCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzonecount");
  return GetHostedZoneCountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetHostedZoneLimitOutcome Route53Client::GetHostedZoneLimit(const GetHostedZoneLimitRequest& request) const
{
  AWS_OPERATION_GUARD(GetHostedZoneLimit);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHostedZoneLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHostedZoneLimit", "Required field: Type, is not set");
    return GetHostedZoneLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHostedZoneLimit", "Required field: HostedZoneId, is not set");
    return GetHostedZoneLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHostedZoneLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzonelimit/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  endpointResolutionOutcome.GetResult().AddPathSegment(HostedZoneLimitTypeMapper::GetNameForHostedZoneLimitType(request.GetType()));
  return GetHostedZoneLimitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetQueryLoggingConfigOutcome Route53Client::GetQueryLoggingConfig(const GetQueryLoggingConfigRequest& request) const
{
  AWS_OPERATION_GUARD(GetQueryLoggingConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueryLoggingConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueryLoggingConfig", "Required field: Id, is not set");
    return GetQueryLoggingConfigOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueryLoggingConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/queryloggingconfig/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetQueryLoggingConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetReusableDelegationSetOutcome Route53Client::GetReusableDelegationSet(const GetReusableDelegationSetRequest& request) const
{
  AWS_OPERATION_GUARD(GetReusableDelegationSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReusableDelegationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReusableDelegationSet", "Required field: Id, is not set");
    return GetReusableDelegationSetOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReusableDelegationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/delegationset/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetReusableDelegationSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetReusableDelegationSetLimitOutcome Route53Client::GetReusableDelegationSetLimit(const GetReusableDelegationSetLimitRequest& request) const
{
  AWS_OPERATION_GUARD(GetReusableDelegationSetLimit);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReusableDelegationSetLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReusableDelegationSetLimit", "Required field: Type, is not set");
    return GetReusableDelegationSetLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  if (!request.DelegationSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReusableDelegationSetLimit", "Required field: DelegationSetId, is not set");
    return GetReusableDelegationSetLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DelegationSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReusableDelegationSetLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/reusabledelegationsetlimit/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDelegationSetId());
  endpointResolutionOutcome.GetResult().AddPathSegment(ReusableDelegationSetLimitTypeMapper::GetNameForReusableDelegationSetLimitType(request.GetType()));
  return GetReusableDelegationSetLimitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetTrafficPolicyOutcome Route53Client::GetTrafficPolicy(const GetTrafficPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetTrafficPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTrafficPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrafficPolicy", "Required field: Id, is not set");
    return GetTrafficPolicyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrafficPolicy", "Required field: Version, is not set");
    return GetTrafficPolicyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTrafficPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  return GetTrafficPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetTrafficPolicyInstanceOutcome Route53Client::GetTrafficPolicyInstance(const GetTrafficPolicyInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(GetTrafficPolicyInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTrafficPolicyInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrafficPolicyInstance", "Required field: Id, is not set");
    return GetTrafficPolicyInstanceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTrafficPolicyInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetTrafficPolicyInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetTrafficPolicyInstanceCountOutcome Route53Client::GetTrafficPolicyInstanceCount(const GetTrafficPolicyInstanceCountRequest& request) const
{
  AWS_OPERATION_GUARD(GetTrafficPolicyInstanceCount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTrafficPolicyInstanceCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTrafficPolicyInstanceCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstancecount");
  return GetTrafficPolicyInstanceCountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListCidrBlocksOutcome Route53Client::ListCidrBlocks(const ListCidrBlocksRequest& request) const
{
  AWS_OPERATION_GUARD(ListCidrBlocks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCidrBlocks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCidrBlocks", "Required field: CollectionId, is not set");
    return ListCidrBlocksOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCidrBlocks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/cidrcollection/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cidrblocks");
  return ListCidrBlocksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListCidrCollectionsOutcome Route53Client::ListCidrCollections(const ListCidrCollectionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCidrCollections);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCidrCollections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCidrCollections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/cidrcollection");
  return ListCidrCollectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListCidrLocationsOutcome Route53Client::ListCidrLocations(const ListCidrLocationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCidrLocations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCidrLocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCidrLocations", "Required field: CollectionId, is not set");
    return ListCidrLocationsOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCidrLocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/cidrcollection/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectionId());
  return ListCidrLocationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListGeoLocationsOutcome Route53Client::ListGeoLocations(const ListGeoLocationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListGeoLocations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGeoLocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGeoLocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/geolocations");
  return ListGeoLocationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListHealthChecksOutcome Route53Client::ListHealthChecks(const ListHealthChecksRequest& request) const
{
  AWS_OPERATION_GUARD(ListHealthChecks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHealthChecks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHealthChecks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheck");
  return ListHealthChecksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListHostedZonesOutcome Route53Client::ListHostedZones(const ListHostedZonesRequest& request) const
{
  AWS_OPERATION_GUARD(ListHostedZones);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHostedZones, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHostedZones, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone");
  return ListHostedZonesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListHostedZonesByNameOutcome Route53Client::ListHostedZonesByName(const ListHostedZonesByNameRequest& request) const
{
  AWS_OPERATION_GUARD(ListHostedZonesByName);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHostedZonesByName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHostedZonesByName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzonesbyname");
  return ListHostedZonesByNameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListHostedZonesByVPCOutcome Route53Client::ListHostedZonesByVPC(const ListHostedZonesByVPCRequest& request) const
{
  AWS_OPERATION_GUARD(ListHostedZonesByVPC);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHostedZonesByVPC, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VPCIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListHostedZonesByVPC", "Required field: VPCId, is not set");
    return ListHostedZonesByVPCOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VPCId]", false));
  }
  if (!request.VPCRegionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListHostedZonesByVPC", "Required field: VPCRegion, is not set");
    return ListHostedZonesByVPCOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VPCRegion]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHostedZonesByVPC, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzonesbyvpc");
  return ListHostedZonesByVPCOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListQueryLoggingConfigsOutcome Route53Client::ListQueryLoggingConfigs(const ListQueryLoggingConfigsRequest& request) const
{
  AWS_OPERATION_GUARD(ListQueryLoggingConfigs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueryLoggingConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQueryLoggingConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/queryloggingconfig");
  return ListQueryLoggingConfigsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListResourceRecordSetsOutcome Route53Client::ListResourceRecordSets(const ListResourceRecordSetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListResourceRecordSets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceRecordSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListResourceRecordSets", "Required field: HostedZoneId, is not set");
    return ListResourceRecordSetsOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceRecordSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rrset");
  return ListResourceRecordSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListReusableDelegationSetsOutcome Route53Client::ListReusableDelegationSets(const ListReusableDelegationSetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListReusableDelegationSets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReusableDelegationSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReusableDelegationSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/delegationset");
  return ListReusableDelegationSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListTagsForResourceOutcome Route53Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceType, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceId, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(TagResourceTypeMapper::GetNameForTagResourceType(request.GetResourceType()));
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListTagsForResourcesOutcome Route53Client::ListTagsForResources(const ListTagsForResourcesRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResources", "Required field: ResourceType, is not set");
    return ListTagsForResourcesOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(TagResourceTypeMapper::GetNameForTagResourceType(request.GetResourceType()));
  return ListTagsForResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListTrafficPoliciesOutcome Route53Client::ListTrafficPolicies(const ListTrafficPoliciesRequest& request) const
{
  AWS_OPERATION_GUARD(ListTrafficPolicies);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrafficPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrafficPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicies");
  return ListTrafficPoliciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListTrafficPolicyInstancesOutcome Route53Client::ListTrafficPolicyInstances(const ListTrafficPolicyInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(ListTrafficPolicyInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrafficPolicyInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrafficPolicyInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstances");
  return ListTrafficPolicyInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListTrafficPolicyInstancesByHostedZoneOutcome Route53Client::ListTrafficPolicyInstancesByHostedZone(const ListTrafficPolicyInstancesByHostedZoneRequest& request) const
{
  AWS_OPERATION_GUARD(ListTrafficPolicyInstancesByHostedZone);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrafficPolicyInstancesByHostedZone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTrafficPolicyInstancesByHostedZone", "Required field: HostedZoneId, is not set");
    return ListTrafficPolicyInstancesByHostedZoneOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrafficPolicyInstancesByHostedZone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstances/hostedzone");
  return ListTrafficPolicyInstancesByHostedZoneOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListTrafficPolicyInstancesByPolicyOutcome Route53Client::ListTrafficPolicyInstancesByPolicy(const ListTrafficPolicyInstancesByPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(ListTrafficPolicyInstancesByPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrafficPolicyInstancesByPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrafficPolicyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTrafficPolicyInstancesByPolicy", "Required field: TrafficPolicyId, is not set");
    return ListTrafficPolicyInstancesByPolicyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficPolicyId]", false));
  }
  if (!request.TrafficPolicyVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTrafficPolicyInstancesByPolicy", "Required field: TrafficPolicyVersion, is not set");
    return ListTrafficPolicyInstancesByPolicyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficPolicyVersion]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrafficPolicyInstancesByPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstances/trafficpolicy");
  return ListTrafficPolicyInstancesByPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListTrafficPolicyVersionsOutcome Route53Client::ListTrafficPolicyVersions(const ListTrafficPolicyVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTrafficPolicyVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrafficPolicyVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTrafficPolicyVersions", "Required field: Id, is not set");
    return ListTrafficPolicyVersionsOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrafficPolicyVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicies/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListTrafficPolicyVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListVPCAssociationAuthorizationsOutcome Route53Client::ListVPCAssociationAuthorizations(const ListVPCAssociationAuthorizationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListVPCAssociationAuthorizations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVPCAssociationAuthorizations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVPCAssociationAuthorizations", "Required field: HostedZoneId, is not set");
    return ListVPCAssociationAuthorizationsOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVPCAssociationAuthorizations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/authorizevpcassociation");
  return ListVPCAssociationAuthorizationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

TestDNSAnswerOutcome Route53Client::TestDNSAnswer(const TestDNSAnswerRequest& request) const
{
  AWS_OPERATION_GUARD(TestDNSAnswer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestDNSAnswer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestDNSAnswer", "Required field: HostedZoneId, is not set");
    return TestDNSAnswerOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  if (!request.RecordNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestDNSAnswer", "Required field: RecordName, is not set");
    return TestDNSAnswerOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordName]", false));
  }
  if (!request.RecordTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestDNSAnswer", "Required field: RecordType, is not set");
    return TestDNSAnswerOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestDNSAnswer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/testdnsanswer");
  return TestDNSAnswerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

UpdateHealthCheckOutcome Route53Client::UpdateHealthCheck(const UpdateHealthCheckRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateHealthCheck);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateHealthCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HealthCheckIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateHealthCheck", "Required field: HealthCheckId, is not set");
    return UpdateHealthCheckOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HealthCheckId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateHealthCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/healthcheck/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHealthCheckId());
  return UpdateHealthCheckOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateHostedZoneCommentOutcome Route53Client::UpdateHostedZoneComment(const UpdateHostedZoneCommentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateHostedZoneComment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateHostedZoneComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateHostedZoneComment", "Required field: Id, is not set");
    return UpdateHostedZoneCommentOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateHostedZoneComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/hostedzone/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateHostedZoneCommentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateTrafficPolicyCommentOutcome Route53Client::UpdateTrafficPolicyComment(const UpdateTrafficPolicyCommentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTrafficPolicyComment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTrafficPolicyComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTrafficPolicyComment", "Required field: Id, is not set");
    return UpdateTrafficPolicyCommentOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTrafficPolicyComment", "Required field: Version, is not set");
    return UpdateTrafficPolicyCommentOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTrafficPolicyComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  return UpdateTrafficPolicyCommentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateTrafficPolicyInstanceOutcome Route53Client::UpdateTrafficPolicyInstance(const UpdateTrafficPolicyInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTrafficPolicyInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTrafficPolicyInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTrafficPolicyInstance", "Required field: Id, is not set");
    return UpdateTrafficPolicyInstanceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTrafficPolicyInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2013-04-01/trafficpolicyinstance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateTrafficPolicyInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

