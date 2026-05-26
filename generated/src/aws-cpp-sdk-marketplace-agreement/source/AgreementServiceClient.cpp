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
#include <aws/marketplace-agreement/AgreementServiceClient.h>
#include <aws/marketplace-agreement/AgreementServiceEndpointProvider.h>
#include <aws/marketplace-agreement/AgreementServiceErrorMarshaller.h>
#include <aws/marketplace-agreement/model/AcceptAgreementCancellationRequestRequest.h>
#include <aws/marketplace-agreement/model/AcceptAgreementPaymentRequestRequest.h>
#include <aws/marketplace-agreement/model/AcceptAgreementRequestRequest.h>
#include <aws/marketplace-agreement/model/BatchCreateBillingAdjustmentRequestRequest.h>
#include <aws/marketplace-agreement/model/CancelAgreementCancellationRequestRequest.h>
#include <aws/marketplace-agreement/model/CancelAgreementPaymentRequestRequest.h>
#include <aws/marketplace-agreement/model/CancelAgreementRequest.h>
#include <aws/marketplace-agreement/model/CreateAgreementRequestRequest.h>
#include <aws/marketplace-agreement/model/DescribeAgreementRequest.h>
#include <aws/marketplace-agreement/model/GetAgreementCancellationRequestRequest.h>
#include <aws/marketplace-agreement/model/GetAgreementEntitlementsRequest.h>
#include <aws/marketplace-agreement/model/GetAgreementPaymentRequestRequest.h>
#include <aws/marketplace-agreement/model/GetAgreementTermsRequest.h>
#include <aws/marketplace-agreement/model/GetBillingAdjustmentRequestRequest.h>
#include <aws/marketplace-agreement/model/ListAgreementCancellationRequestsRequest.h>
#include <aws/marketplace-agreement/model/ListAgreementChargesRequest.h>
#include <aws/marketplace-agreement/model/ListAgreementInvoiceLineItemsRequest.h>
#include <aws/marketplace-agreement/model/ListAgreementPaymentRequestsRequest.h>
#include <aws/marketplace-agreement/model/ListBillingAdjustmentRequestsRequest.h>
#include <aws/marketplace-agreement/model/RejectAgreementCancellationRequestRequest.h>
#include <aws/marketplace-agreement/model/RejectAgreementPaymentRequestRequest.h>
#include <aws/marketplace-agreement/model/SearchAgreementsRequest.h>
#include <aws/marketplace-agreement/model/SendAgreementCancellationRequestRequest.h>
#include <aws/marketplace-agreement/model/SendAgreementPaymentRequestRequest.h>
#include <aws/marketplace-agreement/model/UpdatePurchaseOrdersRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AgreementService;
using namespace Aws::AgreementService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AgreementService {
const char SERVICE_NAME[] = "aws-marketplace";
const char ALLOCATION_TAG[] = "AgreementServiceClient";
}  // namespace AgreementService
}  // namespace Aws
const char* AgreementServiceClient::GetServiceName() { return SERVICE_NAME; }
const char* AgreementServiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

AgreementServiceClient::AgreementServiceClient(const AgreementService::AgreementServiceClientConfiguration& clientConfiguration,
                                               std::shared_ptr<AgreementServiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AgreementServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AgreementServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AgreementServiceClient::AgreementServiceClient(const AWSCredentials& credentials,
                                               std::shared_ptr<AgreementServiceEndpointProviderBase> endpointProvider,
                                               const AgreementService::AgreementServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AgreementServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AgreementServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AgreementServiceClient::AgreementServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<AgreementServiceEndpointProviderBase> endpointProvider,
                                               const AgreementService::AgreementServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AgreementServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AgreementServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AgreementServiceClient::AgreementServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AgreementServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AgreementServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AgreementServiceClient::AgreementServiceClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AgreementServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AgreementServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AgreementServiceClient::AgreementServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AgreementServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AgreementServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AgreementServiceClient::~AgreementServiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AgreementServiceEndpointProviderBase>& AgreementServiceClient::accessEndpointProvider() { return m_endpointProvider; }

void AgreementServiceClient::init(const AgreementService::AgreementServiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("Marketplace Agreement");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "aws-marketplace");
}

void AgreementServiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AgreementServiceClient::InvokeOperationOutcome AgreementServiceClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AcceptAgreementCancellationRequestOutcome AgreementServiceClient::AcceptAgreementCancellationRequest(
    const AcceptAgreementCancellationRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptAgreementCancellationRequestOutcome(result.GetResultWithOwnership())
                            : AcceptAgreementCancellationRequestOutcome(std::move(result.GetError()));
}

AcceptAgreementPaymentRequestOutcome AgreementServiceClient::AcceptAgreementPaymentRequest(
    const AcceptAgreementPaymentRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptAgreementPaymentRequestOutcome(result.GetResultWithOwnership())
                            : AcceptAgreementPaymentRequestOutcome(std::move(result.GetError()));
}

AcceptAgreementRequestOutcome AgreementServiceClient::AcceptAgreementRequest(const AcceptAgreementRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptAgreementRequestOutcome(result.GetResultWithOwnership())
                            : AcceptAgreementRequestOutcome(std::move(result.GetError()));
}

BatchCreateBillingAdjustmentRequestOutcome AgreementServiceClient::BatchCreateBillingAdjustmentRequest(
    const BatchCreateBillingAdjustmentRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchCreateBillingAdjustmentRequestOutcome(result.GetResultWithOwnership())
                            : BatchCreateBillingAdjustmentRequestOutcome(std::move(result.GetError()));
}

CancelAgreementOutcome AgreementServiceClient::CancelAgreement(const CancelAgreementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelAgreementOutcome(result.GetResultWithOwnership())
                            : CancelAgreementOutcome(std::move(result.GetError()));
}

CancelAgreementCancellationRequestOutcome AgreementServiceClient::CancelAgreementCancellationRequest(
    const CancelAgreementCancellationRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelAgreementCancellationRequestOutcome(result.GetResultWithOwnership())
                            : CancelAgreementCancellationRequestOutcome(std::move(result.GetError()));
}

CancelAgreementPaymentRequestOutcome AgreementServiceClient::CancelAgreementPaymentRequest(
    const CancelAgreementPaymentRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelAgreementPaymentRequestOutcome(result.GetResultWithOwnership())
                            : CancelAgreementPaymentRequestOutcome(std::move(result.GetError()));
}

CreateAgreementRequestOutcome AgreementServiceClient::CreateAgreementRequest(const CreateAgreementRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAgreementRequestOutcome(result.GetResultWithOwnership())
                            : CreateAgreementRequestOutcome(std::move(result.GetError()));
}

DescribeAgreementOutcome AgreementServiceClient::DescribeAgreement(const DescribeAgreementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAgreementOutcome(result.GetResultWithOwnership())
                            : DescribeAgreementOutcome(std::move(result.GetError()));
}

GetAgreementCancellationRequestOutcome AgreementServiceClient::GetAgreementCancellationRequest(
    const GetAgreementCancellationRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAgreementCancellationRequestOutcome(result.GetResultWithOwnership())
                            : GetAgreementCancellationRequestOutcome(std::move(result.GetError()));
}

GetAgreementEntitlementsOutcome AgreementServiceClient::GetAgreementEntitlements(const GetAgreementEntitlementsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAgreementEntitlementsOutcome(result.GetResultWithOwnership())
                            : GetAgreementEntitlementsOutcome(std::move(result.GetError()));
}

GetAgreementPaymentRequestOutcome AgreementServiceClient::GetAgreementPaymentRequest(
    const GetAgreementPaymentRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAgreementPaymentRequestOutcome(result.GetResultWithOwnership())
                            : GetAgreementPaymentRequestOutcome(std::move(result.GetError()));
}

GetAgreementTermsOutcome AgreementServiceClient::GetAgreementTerms(const GetAgreementTermsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAgreementTermsOutcome(result.GetResultWithOwnership())
                            : GetAgreementTermsOutcome(std::move(result.GetError()));
}

GetBillingAdjustmentRequestOutcome AgreementServiceClient::GetBillingAdjustmentRequest(
    const GetBillingAdjustmentRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBillingAdjustmentRequestOutcome(result.GetResultWithOwnership())
                            : GetBillingAdjustmentRequestOutcome(std::move(result.GetError()));
}

ListAgreementCancellationRequestsOutcome AgreementServiceClient::ListAgreementCancellationRequests(
    const ListAgreementCancellationRequestsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgreementCancellationRequestsOutcome(result.GetResultWithOwnership())
                            : ListAgreementCancellationRequestsOutcome(std::move(result.GetError()));
}

ListAgreementChargesOutcome AgreementServiceClient::ListAgreementCharges(const ListAgreementChargesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgreementChargesOutcome(result.GetResultWithOwnership())
                            : ListAgreementChargesOutcome(std::move(result.GetError()));
}

ListAgreementInvoiceLineItemsOutcome AgreementServiceClient::ListAgreementInvoiceLineItems(
    const ListAgreementInvoiceLineItemsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgreementInvoiceLineItemsOutcome(result.GetResultWithOwnership())
                            : ListAgreementInvoiceLineItemsOutcome(std::move(result.GetError()));
}

ListAgreementPaymentRequestsOutcome AgreementServiceClient::ListAgreementPaymentRequests(
    const ListAgreementPaymentRequestsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgreementPaymentRequestsOutcome(result.GetResultWithOwnership())
                            : ListAgreementPaymentRequestsOutcome(std::move(result.GetError()));
}

ListBillingAdjustmentRequestsOutcome AgreementServiceClient::ListBillingAdjustmentRequests(
    const ListBillingAdjustmentRequestsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBillingAdjustmentRequestsOutcome(result.GetResultWithOwnership())
                            : ListBillingAdjustmentRequestsOutcome(std::move(result.GetError()));
}

RejectAgreementCancellationRequestOutcome AgreementServiceClient::RejectAgreementCancellationRequest(
    const RejectAgreementCancellationRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectAgreementCancellationRequestOutcome(result.GetResultWithOwnership())
                            : RejectAgreementCancellationRequestOutcome(std::move(result.GetError()));
}

RejectAgreementPaymentRequestOutcome AgreementServiceClient::RejectAgreementPaymentRequest(
    const RejectAgreementPaymentRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectAgreementPaymentRequestOutcome(result.GetResultWithOwnership())
                            : RejectAgreementPaymentRequestOutcome(std::move(result.GetError()));
}

SearchAgreementsOutcome AgreementServiceClient::SearchAgreements(const SearchAgreementsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchAgreementsOutcome(result.GetResultWithOwnership())
                            : SearchAgreementsOutcome(std::move(result.GetError()));
}

SendAgreementCancellationRequestOutcome AgreementServiceClient::SendAgreementCancellationRequest(
    const SendAgreementCancellationRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendAgreementCancellationRequestOutcome(result.GetResultWithOwnership())
                            : SendAgreementCancellationRequestOutcome(std::move(result.GetError()));
}

SendAgreementPaymentRequestOutcome AgreementServiceClient::SendAgreementPaymentRequest(
    const SendAgreementPaymentRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendAgreementPaymentRequestOutcome(result.GetResultWithOwnership())
                            : SendAgreementPaymentRequestOutcome(std::move(result.GetError()));
}

UpdatePurchaseOrdersOutcome AgreementServiceClient::UpdatePurchaseOrders(const UpdatePurchaseOrdersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePurchaseOrdersOutcome(result.GetResultWithOwnership())
                            : UpdatePurchaseOrdersOutcome(std::move(result.GetError()));
}
