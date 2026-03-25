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
#include <aws/route53domains/Route53DomainsClient.h>
#include <aws/route53domains/Route53DomainsEndpointProvider.h>
#include <aws/route53domains/Route53DomainsErrorMarshaller.h>
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
#include <aws/route53domains/model/UpdateDomainContactPrivacyRequest.h>
#include <aws/route53domains/model/UpdateDomainContactRequest.h>
#include <aws/route53domains/model/UpdateDomainNameserversRequest.h>
#include <aws/route53domains/model/UpdateTagsForDomainRequest.h>
#include <aws/route53domains/model/ViewBillingRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53Domains;
using namespace Aws::Route53Domains::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Route53Domains {
const char SERVICE_NAME[] = "route53domains";
const char ALLOCATION_TAG[] = "Route53DomainsClient";
}  // namespace Route53Domains
}  // namespace Aws
const char* Route53DomainsClient::GetServiceName() { return SERVICE_NAME; }
const char* Route53DomainsClient::GetAllocationTag() { return ALLOCATION_TAG; }

Route53DomainsClient::Route53DomainsClient(const Route53Domains::Route53DomainsClientConfiguration& clientConfiguration,
                                           std::shared_ptr<Route53DomainsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Route53DomainsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53DomainsClient::Route53DomainsClient(const AWSCredentials& credentials,
                                           std::shared_ptr<Route53DomainsEndpointProviderBase> endpointProvider,
                                           const Route53Domains::Route53DomainsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Route53DomainsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53DomainsClient::Route53DomainsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<Route53DomainsEndpointProviderBase> endpointProvider,
                                           const Route53Domains::Route53DomainsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Route53DomainsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
Route53DomainsClient::Route53DomainsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53DomainsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53DomainsClient::Route53DomainsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53DomainsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53DomainsClient::Route53DomainsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53DomainsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
Route53DomainsClient::~Route53DomainsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<Route53DomainsEndpointProviderBase>& Route53DomainsClient::accessEndpointProvider() { return m_endpointProvider; }

void Route53DomainsClient::init(const Route53Domains::Route53DomainsClientConfiguration& config) {
  AWSClient::SetServiceClientName("Route 53 Domains");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "route53domains");
}

void Route53DomainsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
Route53DomainsClient::InvokeOperationOutcome Route53DomainsClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AcceptDomainTransferFromAnotherAwsAccountOutcome Route53DomainsClient::AcceptDomainTransferFromAnotherAwsAccount(
    const AcceptDomainTransferFromAnotherAwsAccountRequest& request) const {
  return AcceptDomainTransferFromAnotherAwsAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateDelegationSignerToDomainOutcome Route53DomainsClient::AssociateDelegationSignerToDomain(
    const AssociateDelegationSignerToDomainRequest& request) const {
  return AssociateDelegationSignerToDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelDomainTransferToAnotherAwsAccountOutcome Route53DomainsClient::CancelDomainTransferToAnotherAwsAccount(
    const CancelDomainTransferToAnotherAwsAccountRequest& request) const {
  return CancelDomainTransferToAnotherAwsAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CheckDomainAvailabilityOutcome Route53DomainsClient::CheckDomainAvailability(const CheckDomainAvailabilityRequest& request) const {
  return CheckDomainAvailabilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CheckDomainTransferabilityOutcome Route53DomainsClient::CheckDomainTransferability(const CheckDomainTransferabilityRequest& request) const {
  return CheckDomainTransferabilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDomainOutcome Route53DomainsClient::DeleteDomain(const DeleteDomainRequest& request) const {
  return DeleteDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTagsForDomainOutcome Route53DomainsClient::DeleteTagsForDomain(const DeleteTagsForDomainRequest& request) const {
  return DeleteTagsForDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableDomainAutoRenewOutcome Route53DomainsClient::DisableDomainAutoRenew(const DisableDomainAutoRenewRequest& request) const {
  return DisableDomainAutoRenewOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableDomainTransferLockOutcome Route53DomainsClient::DisableDomainTransferLock(const DisableDomainTransferLockRequest& request) const {
  return DisableDomainTransferLockOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateDelegationSignerFromDomainOutcome Route53DomainsClient::DisassociateDelegationSignerFromDomain(
    const DisassociateDelegationSignerFromDomainRequest& request) const {
  return DisassociateDelegationSignerFromDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableDomainAutoRenewOutcome Route53DomainsClient::EnableDomainAutoRenew(const EnableDomainAutoRenewRequest& request) const {
  return EnableDomainAutoRenewOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableDomainTransferLockOutcome Route53DomainsClient::EnableDomainTransferLock(const EnableDomainTransferLockRequest& request) const {
  return EnableDomainTransferLockOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetContactReachabilityStatusOutcome Route53DomainsClient::GetContactReachabilityStatus(
    const GetContactReachabilityStatusRequest& request) const {
  return GetContactReachabilityStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDomainDetailOutcome Route53DomainsClient::GetDomainDetail(const GetDomainDetailRequest& request) const {
  return GetDomainDetailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDomainSuggestionsOutcome Route53DomainsClient::GetDomainSuggestions(const GetDomainSuggestionsRequest& request) const {
  return GetDomainSuggestionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOperationDetailOutcome Route53DomainsClient::GetOperationDetail(const GetOperationDetailRequest& request) const {
  return GetOperationDetailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDomainsOutcome Route53DomainsClient::ListDomains(const ListDomainsRequest& request) const {
  return ListDomainsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOperationsOutcome Route53DomainsClient::ListOperations(const ListOperationsRequest& request) const {
  return ListOperationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPricesOutcome Route53DomainsClient::ListPrices(const ListPricesRequest& request) const {
  return ListPricesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForDomainOutcome Route53DomainsClient::ListTagsForDomain(const ListTagsForDomainRequest& request) const {
  return ListTagsForDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PushDomainOutcome Route53DomainsClient::PushDomain(const PushDomainRequest& request) const {
  return PushDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterDomainOutcome Route53DomainsClient::RegisterDomain(const RegisterDomainRequest& request) const {
  return RegisterDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectDomainTransferFromAnotherAwsAccountOutcome Route53DomainsClient::RejectDomainTransferFromAnotherAwsAccount(
    const RejectDomainTransferFromAnotherAwsAccountRequest& request) const {
  return RejectDomainTransferFromAnotherAwsAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RenewDomainOutcome Route53DomainsClient::RenewDomain(const RenewDomainRequest& request) const {
  return RenewDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResendContactReachabilityEmailOutcome Route53DomainsClient::ResendContactReachabilityEmail(
    const ResendContactReachabilityEmailRequest& request) const {
  return ResendContactReachabilityEmailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResendOperationAuthorizationOutcome Route53DomainsClient::ResendOperationAuthorization(
    const ResendOperationAuthorizationRequest& request) const {
  return ResendOperationAuthorizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RetrieveDomainAuthCodeOutcome Route53DomainsClient::RetrieveDomainAuthCode(const RetrieveDomainAuthCodeRequest& request) const {
  return RetrieveDomainAuthCodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TransferDomainOutcome Route53DomainsClient::TransferDomain(const TransferDomainRequest& request) const {
  return TransferDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TransferDomainToAnotherAwsAccountOutcome Route53DomainsClient::TransferDomainToAnotherAwsAccount(
    const TransferDomainToAnotherAwsAccountRequest& request) const {
  return TransferDomainToAnotherAwsAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDomainContactOutcome Route53DomainsClient::UpdateDomainContact(const UpdateDomainContactRequest& request) const {
  return UpdateDomainContactOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDomainContactPrivacyOutcome Route53DomainsClient::UpdateDomainContactPrivacy(const UpdateDomainContactPrivacyRequest& request) const {
  return UpdateDomainContactPrivacyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDomainNameserversOutcome Route53DomainsClient::UpdateDomainNameservers(const UpdateDomainNameserversRequest& request) const {
  return UpdateDomainNameserversOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTagsForDomainOutcome Route53DomainsClient::UpdateTagsForDomain(const UpdateTagsForDomainRequest& request) const {
  return UpdateTagsForDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ViewBillingOutcome Route53DomainsClient::ViewBilling(const ViewBillingRequest& request) const {
  return ViewBillingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
