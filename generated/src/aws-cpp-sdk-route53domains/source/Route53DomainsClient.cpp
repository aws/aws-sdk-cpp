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

#include <aws/route53domains/Route53DomainsClient.h>
#include <aws/route53domains/Route53DomainsErrorMarshaller.h>
#include <aws/route53domains/Route53DomainsEndpointProvider.h>
#include <aws/route53domains/model/AcceptDomainTransferFromAnotherAwsAccountRequest.h>
#include <aws/route53domains/model/AssociateDelegationSignerToDomainRequest.h>
#include <aws/route53domains/model/CancelDomainTransferToAnotherAwsAccountRequest.h>
#include <aws/route53domains/model/CheckDomainAvailabilityRequest.h>
#include <aws/route53domains/model/CheckDomainTransferabilityRequest.h>
#include <aws/route53domains/model/DeleteDomainRequest.h>
#include <aws/route53domains/model/DeleteTagsForDomainRequest.h>
#include <aws/route53domains/model/DisableDomainAutoRenewRequest.h>
#include <aws/route53domains/model/DisableDomainTransferLockRequest.h>
#include <aws/route53domains/model/DisassociateDelegationSignerFromDomainRequest.h>
#include <aws/route53domains/model/EnableDomainAutoRenewRequest.h>
#include <aws/route53domains/model/EnableDomainTransferLockRequest.h>
#include <aws/route53domains/model/GetContactReachabilityStatusRequest.h>
#include <aws/route53domains/model/GetDomainDetailRequest.h>
#include <aws/route53domains/model/GetDomainSuggestionsRequest.h>
#include <aws/route53domains/model/GetOperationDetailRequest.h>
#include <aws/route53domains/model/ListDomainsRequest.h>
#include <aws/route53domains/model/ListOperationsRequest.h>
#include <aws/route53domains/model/ListPricesRequest.h>
#include <aws/route53domains/model/ListTagsForDomainRequest.h>
#include <aws/route53domains/model/PushDomainRequest.h>
#include <aws/route53domains/model/RegisterDomainRequest.h>
#include <aws/route53domains/model/RejectDomainTransferFromAnotherAwsAccountRequest.h>
#include <aws/route53domains/model/RenewDomainRequest.h>
#include <aws/route53domains/model/ResendContactReachabilityEmailRequest.h>
#include <aws/route53domains/model/ResendOperationAuthorizationRequest.h>
#include <aws/route53domains/model/RetrieveDomainAuthCodeRequest.h>
#include <aws/route53domains/model/TransferDomainRequest.h>
#include <aws/route53domains/model/TransferDomainToAnotherAwsAccountRequest.h>
#include <aws/route53domains/model/UpdateDomainContactRequest.h>
#include <aws/route53domains/model/UpdateDomainContactPrivacyRequest.h>
#include <aws/route53domains/model/UpdateDomainNameserversRequest.h>
#include <aws/route53domains/model/UpdateTagsForDomainRequest.h>
#include <aws/route53domains/model/ViewBillingRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53Domains;
using namespace Aws::Route53Domains::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* Route53DomainsClient::SERVICE_NAME = "route53domains";
const char* Route53DomainsClient::ALLOCATION_TAG = "Route53DomainsClient";

Route53DomainsClient::Route53DomainsClient(const Route53Domains::Route53DomainsClientConfiguration& clientConfiguration,
                                           std::shared_ptr<Route53DomainsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

Route53DomainsClient::Route53DomainsClient(const AWSCredentials& credentials,
                                           std::shared_ptr<Route53DomainsEndpointProviderBase> endpointProvider,
                                           const Route53Domains::Route53DomainsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

Route53DomainsClient::Route53DomainsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<Route53DomainsEndpointProviderBase> endpointProvider,
                                           const Route53Domains::Route53DomainsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  Route53DomainsClient::Route53DomainsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<Route53DomainsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Route53DomainsClient::Route53DomainsClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<Route53DomainsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Route53DomainsClient::Route53DomainsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<Route53DomainsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
Route53DomainsClient::~Route53DomainsClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<Route53DomainsEndpointProviderBase>& Route53DomainsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void Route53DomainsClient::init(const Route53Domains::Route53DomainsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Route 53 Domains");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void Route53DomainsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AcceptDomainTransferFromAnotherAwsAccountOutcome Route53DomainsClient::AcceptDomainTransferFromAnotherAwsAccount(const AcceptDomainTransferFromAnotherAwsAccountRequest& request) const
{
  AWS_OPERATION_GUARD(AcceptDomainTransferFromAnotherAwsAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptDomainTransferFromAnotherAwsAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptDomainTransferFromAnotherAwsAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptDomainTransferFromAnotherAwsAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateDelegationSignerToDomainOutcome Route53DomainsClient::AssociateDelegationSignerToDomain(const AssociateDelegationSignerToDomainRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateDelegationSignerToDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateDelegationSignerToDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateDelegationSignerToDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateDelegationSignerToDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelDomainTransferToAnotherAwsAccountOutcome Route53DomainsClient::CancelDomainTransferToAnotherAwsAccount(const CancelDomainTransferToAnotherAwsAccountRequest& request) const
{
  AWS_OPERATION_GUARD(CancelDomainTransferToAnotherAwsAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelDomainTransferToAnotherAwsAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelDomainTransferToAnotherAwsAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelDomainTransferToAnotherAwsAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CheckDomainAvailabilityOutcome Route53DomainsClient::CheckDomainAvailability(const CheckDomainAvailabilityRequest& request) const
{
  AWS_OPERATION_GUARD(CheckDomainAvailability);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CheckDomainAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CheckDomainAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CheckDomainAvailabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CheckDomainTransferabilityOutcome Route53DomainsClient::CheckDomainTransferability(const CheckDomainTransferabilityRequest& request) const
{
  AWS_OPERATION_GUARD(CheckDomainTransferability);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CheckDomainTransferability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CheckDomainTransferability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CheckDomainTransferabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainOutcome Route53DomainsClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTagsForDomainOutcome Route53DomainsClient::DeleteTagsForDomain(const DeleteTagsForDomainRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTagsForDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTagsForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTagsForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTagsForDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableDomainAutoRenewOutcome Route53DomainsClient::DisableDomainAutoRenew(const DisableDomainAutoRenewRequest& request) const
{
  AWS_OPERATION_GUARD(DisableDomainAutoRenew);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableDomainAutoRenew, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableDomainAutoRenew, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableDomainAutoRenewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableDomainTransferLockOutcome Route53DomainsClient::DisableDomainTransferLock(const DisableDomainTransferLockRequest& request) const
{
  AWS_OPERATION_GUARD(DisableDomainTransferLock);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableDomainTransferLock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableDomainTransferLock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableDomainTransferLockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateDelegationSignerFromDomainOutcome Route53DomainsClient::DisassociateDelegationSignerFromDomain(const DisassociateDelegationSignerFromDomainRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateDelegationSignerFromDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateDelegationSignerFromDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateDelegationSignerFromDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateDelegationSignerFromDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableDomainAutoRenewOutcome Route53DomainsClient::EnableDomainAutoRenew(const EnableDomainAutoRenewRequest& request) const
{
  AWS_OPERATION_GUARD(EnableDomainAutoRenew);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableDomainAutoRenew, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableDomainAutoRenew, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableDomainAutoRenewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableDomainTransferLockOutcome Route53DomainsClient::EnableDomainTransferLock(const EnableDomainTransferLockRequest& request) const
{
  AWS_OPERATION_GUARD(EnableDomainTransferLock);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableDomainTransferLock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableDomainTransferLock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableDomainTransferLockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContactReachabilityStatusOutcome Route53DomainsClient::GetContactReachabilityStatus(const GetContactReachabilityStatusRequest& request) const
{
  AWS_OPERATION_GUARD(GetContactReachabilityStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContactReachabilityStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContactReachabilityStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContactReachabilityStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDomainDetailOutcome Route53DomainsClient::GetDomainDetail(const GetDomainDetailRequest& request) const
{
  AWS_OPERATION_GUARD(GetDomainDetail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomainDetail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDomainDetail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDomainDetailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDomainSuggestionsOutcome Route53DomainsClient::GetDomainSuggestions(const GetDomainSuggestionsRequest& request) const
{
  AWS_OPERATION_GUARD(GetDomainSuggestions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomainSuggestions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDomainSuggestions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDomainSuggestionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOperationDetailOutcome Route53DomainsClient::GetOperationDetail(const GetOperationDetailRequest& request) const
{
  AWS_OPERATION_GUARD(GetOperationDetail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOperationDetail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOperationDetail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOperationDetailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDomainsOutcome Route53DomainsClient::ListDomains(const ListDomainsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDomains);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOperationsOutcome Route53DomainsClient::ListOperations(const ListOperationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListOperations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListOperationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPricesOutcome Route53DomainsClient::ListPrices(const ListPricesRequest& request) const
{
  AWS_OPERATION_GUARD(ListPrices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPrices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPrices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPricesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForDomainOutcome Route53DomainsClient::ListTagsForDomain(const ListTagsForDomainRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PushDomainOutcome Route53DomainsClient::PushDomain(const PushDomainRequest& request) const
{
  AWS_OPERATION_GUARD(PushDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PushDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PushDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PushDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterDomainOutcome Route53DomainsClient::RegisterDomain(const RegisterDomainRequest& request) const
{
  AWS_OPERATION_GUARD(RegisterDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectDomainTransferFromAnotherAwsAccountOutcome Route53DomainsClient::RejectDomainTransferFromAnotherAwsAccount(const RejectDomainTransferFromAnotherAwsAccountRequest& request) const
{
  AWS_OPERATION_GUARD(RejectDomainTransferFromAnotherAwsAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectDomainTransferFromAnotherAwsAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectDomainTransferFromAnotherAwsAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectDomainTransferFromAnotherAwsAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RenewDomainOutcome Route53DomainsClient::RenewDomain(const RenewDomainRequest& request) const
{
  AWS_OPERATION_GUARD(RenewDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RenewDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RenewDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RenewDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResendContactReachabilityEmailOutcome Route53DomainsClient::ResendContactReachabilityEmail(const ResendContactReachabilityEmailRequest& request) const
{
  AWS_OPERATION_GUARD(ResendContactReachabilityEmail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResendContactReachabilityEmail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResendContactReachabilityEmail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResendContactReachabilityEmailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResendOperationAuthorizationOutcome Route53DomainsClient::ResendOperationAuthorization(const ResendOperationAuthorizationRequest& request) const
{
  AWS_OPERATION_GUARD(ResendOperationAuthorization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResendOperationAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResendOperationAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResendOperationAuthorizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetrieveDomainAuthCodeOutcome Route53DomainsClient::RetrieveDomainAuthCode(const RetrieveDomainAuthCodeRequest& request) const
{
  AWS_OPERATION_GUARD(RetrieveDomainAuthCode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetrieveDomainAuthCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RetrieveDomainAuthCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RetrieveDomainAuthCodeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TransferDomainOutcome Route53DomainsClient::TransferDomain(const TransferDomainRequest& request) const
{
  AWS_OPERATION_GUARD(TransferDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TransferDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TransferDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TransferDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TransferDomainToAnotherAwsAccountOutcome Route53DomainsClient::TransferDomainToAnotherAwsAccount(const TransferDomainToAnotherAwsAccountRequest& request) const
{
  AWS_OPERATION_GUARD(TransferDomainToAnotherAwsAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TransferDomainToAnotherAwsAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TransferDomainToAnotherAwsAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TransferDomainToAnotherAwsAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainContactOutcome Route53DomainsClient::UpdateDomainContact(const UpdateDomainContactRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDomainContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomainContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDomainContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDomainContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainContactPrivacyOutcome Route53DomainsClient::UpdateDomainContactPrivacy(const UpdateDomainContactPrivacyRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDomainContactPrivacy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomainContactPrivacy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDomainContactPrivacy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDomainContactPrivacyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainNameserversOutcome Route53DomainsClient::UpdateDomainNameservers(const UpdateDomainNameserversRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDomainNameservers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomainNameservers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDomainNameservers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDomainNameserversOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTagsForDomainOutcome Route53DomainsClient::UpdateTagsForDomain(const UpdateTagsForDomainRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTagsForDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTagsForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTagsForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTagsForDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ViewBillingOutcome Route53DomainsClient::ViewBilling(const ViewBillingRequest& request) const
{
  AWS_OPERATION_GUARD(ViewBilling);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ViewBilling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ViewBilling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ViewBillingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

