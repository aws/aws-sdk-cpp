/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementServiceEndpointProvider.h>
#include <aws/marketplace-agreement/AgreementServiceErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in AgreementServiceClient header */
#include <aws/marketplace-agreement/model/AcceptAgreementApprovalRequest.h>
#include <aws/marketplace-agreement/model/AcceptAgreementApprovalResult.h>
#include <aws/marketplace-agreement/model/AcceptAgreementCancellationRequestResult.h>
#include <aws/marketplace-agreement/model/AcceptAgreementPaymentRequestResult.h>
#include <aws/marketplace-agreement/model/AcceptAgreementRequestResult.h>
#include <aws/marketplace-agreement/model/BatchCreateBillingAdjustmentRequestResult.h>
#include <aws/marketplace-agreement/model/CancelAgreementCancellationRequestResult.h>
#include <aws/marketplace-agreement/model/CancelAgreementPaymentRequestResult.h>
#include <aws/marketplace-agreement/model/CancelAgreementRequestResult.h>
#include <aws/marketplace-agreement/model/CancelAgreementResult.h>
#include <aws/marketplace-agreement/model/CreateAgreementRequestResult.h>
#include <aws/marketplace-agreement/model/DescribeAgreementResult.h>
#include <aws/marketplace-agreement/model/GetAgreementApprovalResult.h>
#include <aws/marketplace-agreement/model/GetAgreementCancellationRequestResult.h>
#include <aws/marketplace-agreement/model/GetAgreementContactsResult.h>
#include <aws/marketplace-agreement/model/GetAgreementEntitlementsResult.h>
#include <aws/marketplace-agreement/model/GetAgreementPaymentRequestResult.h>
#include <aws/marketplace-agreement/model/GetAgreementRequestApprovalPlansResult.h>
#include <aws/marketplace-agreement/model/GetAgreementRequestResult.h>
#include <aws/marketplace-agreement/model/GetAgreementRequestTermsResult.h>
#include <aws/marketplace-agreement/model/GetAgreementTermsResult.h>
#include <aws/marketplace-agreement/model/GetBillingAdjustmentRequestResult.h>
#include <aws/marketplace-agreement/model/ListAgreementApprovalsResult.h>
#include <aws/marketplace-agreement/model/ListAgreementCancellationRequestsResult.h>
#include <aws/marketplace-agreement/model/ListAgreementChargesRequest.h>
#include <aws/marketplace-agreement/model/ListAgreementChargesResult.h>
#include <aws/marketplace-agreement/model/ListAgreementInvoiceLineItemsResult.h>
#include <aws/marketplace-agreement/model/ListAgreementPaymentRequestsResult.h>
#include <aws/marketplace-agreement/model/ListAgreementRequestsRequest.h>
#include <aws/marketplace-agreement/model/ListAgreementRequestsResult.h>
#include <aws/marketplace-agreement/model/ListBillingAdjustmentRequestsRequest.h>
#include <aws/marketplace-agreement/model/ListBillingAdjustmentRequestsResult.h>
#include <aws/marketplace-agreement/model/RejectAgreementApprovalRequest.h>
#include <aws/marketplace-agreement/model/RejectAgreementApprovalResult.h>
#include <aws/marketplace-agreement/model/RejectAgreementCancellationRequestResult.h>
#include <aws/marketplace-agreement/model/RejectAgreementPaymentRequestResult.h>
#include <aws/marketplace-agreement/model/SearchAgreementsRequest.h>
#include <aws/marketplace-agreement/model/SearchAgreementsResult.h>
#include <aws/marketplace-agreement/model/SendAgreementCancellationRequestResult.h>
#include <aws/marketplace-agreement/model/SendAgreementPaymentRequestResult.h>
#include <aws/marketplace-agreement/model/StartAgreementApprovalsResult.h>
#include <aws/marketplace-agreement/model/UpdatePurchaseOrdersResult.h>
/* End of service model headers required in AgreementServiceClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace AgreementService {
using AgreementServiceClientConfiguration = Aws::Client::GenericClientConfiguration;
using AgreementServiceEndpointProviderBase = Aws::AgreementService::Endpoint::AgreementServiceEndpointProviderBase;
using AgreementServiceEndpointProvider = Aws::AgreementService::Endpoint::AgreementServiceEndpointProvider;

namespace Model {
/* Service model forward declarations required in AgreementServiceClient header */
class AcceptAgreementApprovalRequest;
class AcceptAgreementCancellationRequestRequest;
class AcceptAgreementPaymentRequestRequest;
class AcceptAgreementRequestRequest;
class BatchCreateBillingAdjustmentRequestRequest;
class CancelAgreementRequest;
class CancelAgreementCancellationRequestRequest;
class CancelAgreementPaymentRequestRequest;
class CancelAgreementRequestRequest;
class CreateAgreementRequestRequest;
class DescribeAgreementRequest;
class GetAgreementApprovalRequest;
class GetAgreementCancellationRequestRequest;
class GetAgreementContactsRequest;
class GetAgreementEntitlementsRequest;
class GetAgreementPaymentRequestRequest;
class GetAgreementRequestRequest;
class GetAgreementRequestApprovalPlansRequest;
class GetAgreementRequestTermsRequest;
class GetAgreementTermsRequest;
class GetBillingAdjustmentRequestRequest;
class ListAgreementApprovalsRequest;
class ListAgreementCancellationRequestsRequest;
class ListAgreementChargesRequest;
class ListAgreementInvoiceLineItemsRequest;
class ListAgreementPaymentRequestsRequest;
class ListAgreementRequestsRequest;
class ListBillingAdjustmentRequestsRequest;
class RejectAgreementApprovalRequest;
class RejectAgreementCancellationRequestRequest;
class RejectAgreementPaymentRequestRequest;
class SearchAgreementsRequest;
class SendAgreementCancellationRequestRequest;
class SendAgreementPaymentRequestRequest;
class StartAgreementApprovalsRequest;
class UpdatePurchaseOrdersRequest;
/* End of service model forward declarations required in AgreementServiceClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AcceptAgreementApprovalResult, AgreementServiceError> AcceptAgreementApprovalOutcome;
typedef Aws::Utils::Outcome<AcceptAgreementCancellationRequestResult, AgreementServiceError> AcceptAgreementCancellationRequestOutcome;
typedef Aws::Utils::Outcome<AcceptAgreementPaymentRequestResult, AgreementServiceError> AcceptAgreementPaymentRequestOutcome;
typedef Aws::Utils::Outcome<AcceptAgreementRequestResult, AgreementServiceError> AcceptAgreementRequestOutcome;
typedef Aws::Utils::Outcome<BatchCreateBillingAdjustmentRequestResult, AgreementServiceError> BatchCreateBillingAdjustmentRequestOutcome;
typedef Aws::Utils::Outcome<CancelAgreementResult, AgreementServiceError> CancelAgreementOutcome;
typedef Aws::Utils::Outcome<CancelAgreementCancellationRequestResult, AgreementServiceError> CancelAgreementCancellationRequestOutcome;
typedef Aws::Utils::Outcome<CancelAgreementPaymentRequestResult, AgreementServiceError> CancelAgreementPaymentRequestOutcome;
typedef Aws::Utils::Outcome<CancelAgreementRequestResult, AgreementServiceError> CancelAgreementRequestOutcome;
typedef Aws::Utils::Outcome<CreateAgreementRequestResult, AgreementServiceError> CreateAgreementRequestOutcome;
typedef Aws::Utils::Outcome<DescribeAgreementResult, AgreementServiceError> DescribeAgreementOutcome;
typedef Aws::Utils::Outcome<GetAgreementApprovalResult, AgreementServiceError> GetAgreementApprovalOutcome;
typedef Aws::Utils::Outcome<GetAgreementCancellationRequestResult, AgreementServiceError> GetAgreementCancellationRequestOutcome;
typedef Aws::Utils::Outcome<GetAgreementContactsResult, AgreementServiceError> GetAgreementContactsOutcome;
typedef Aws::Utils::Outcome<GetAgreementEntitlementsResult, AgreementServiceError> GetAgreementEntitlementsOutcome;
typedef Aws::Utils::Outcome<GetAgreementPaymentRequestResult, AgreementServiceError> GetAgreementPaymentRequestOutcome;
typedef Aws::Utils::Outcome<GetAgreementRequestResult, AgreementServiceError> GetAgreementRequestOutcome;
typedef Aws::Utils::Outcome<GetAgreementRequestApprovalPlansResult, AgreementServiceError> GetAgreementRequestApprovalPlansOutcome;
typedef Aws::Utils::Outcome<GetAgreementRequestTermsResult, AgreementServiceError> GetAgreementRequestTermsOutcome;
typedef Aws::Utils::Outcome<GetAgreementTermsResult, AgreementServiceError> GetAgreementTermsOutcome;
typedef Aws::Utils::Outcome<GetBillingAdjustmentRequestResult, AgreementServiceError> GetBillingAdjustmentRequestOutcome;
typedef Aws::Utils::Outcome<ListAgreementApprovalsResult, AgreementServiceError> ListAgreementApprovalsOutcome;
typedef Aws::Utils::Outcome<ListAgreementCancellationRequestsResult, AgreementServiceError> ListAgreementCancellationRequestsOutcome;
typedef Aws::Utils::Outcome<ListAgreementChargesResult, AgreementServiceError> ListAgreementChargesOutcome;
typedef Aws::Utils::Outcome<ListAgreementInvoiceLineItemsResult, AgreementServiceError> ListAgreementInvoiceLineItemsOutcome;
typedef Aws::Utils::Outcome<ListAgreementPaymentRequestsResult, AgreementServiceError> ListAgreementPaymentRequestsOutcome;
typedef Aws::Utils::Outcome<ListAgreementRequestsResult, AgreementServiceError> ListAgreementRequestsOutcome;
typedef Aws::Utils::Outcome<ListBillingAdjustmentRequestsResult, AgreementServiceError> ListBillingAdjustmentRequestsOutcome;
typedef Aws::Utils::Outcome<RejectAgreementApprovalResult, AgreementServiceError> RejectAgreementApprovalOutcome;
typedef Aws::Utils::Outcome<RejectAgreementCancellationRequestResult, AgreementServiceError> RejectAgreementCancellationRequestOutcome;
typedef Aws::Utils::Outcome<RejectAgreementPaymentRequestResult, AgreementServiceError> RejectAgreementPaymentRequestOutcome;
typedef Aws::Utils::Outcome<SearchAgreementsResult, AgreementServiceError> SearchAgreementsOutcome;
typedef Aws::Utils::Outcome<SendAgreementCancellationRequestResult, AgreementServiceError> SendAgreementCancellationRequestOutcome;
typedef Aws::Utils::Outcome<SendAgreementPaymentRequestResult, AgreementServiceError> SendAgreementPaymentRequestOutcome;
typedef Aws::Utils::Outcome<StartAgreementApprovalsResult, AgreementServiceError> StartAgreementApprovalsOutcome;
typedef Aws::Utils::Outcome<UpdatePurchaseOrdersResult, AgreementServiceError> UpdatePurchaseOrdersOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AcceptAgreementApprovalOutcome> AcceptAgreementApprovalOutcomeCallable;
typedef std::future<AcceptAgreementCancellationRequestOutcome> AcceptAgreementCancellationRequestOutcomeCallable;
typedef std::future<AcceptAgreementPaymentRequestOutcome> AcceptAgreementPaymentRequestOutcomeCallable;
typedef std::future<AcceptAgreementRequestOutcome> AcceptAgreementRequestOutcomeCallable;
typedef std::future<BatchCreateBillingAdjustmentRequestOutcome> BatchCreateBillingAdjustmentRequestOutcomeCallable;
typedef std::future<CancelAgreementOutcome> CancelAgreementOutcomeCallable;
typedef std::future<CancelAgreementCancellationRequestOutcome> CancelAgreementCancellationRequestOutcomeCallable;
typedef std::future<CancelAgreementPaymentRequestOutcome> CancelAgreementPaymentRequestOutcomeCallable;
typedef std::future<CancelAgreementRequestOutcome> CancelAgreementRequestOutcomeCallable;
typedef std::future<CreateAgreementRequestOutcome> CreateAgreementRequestOutcomeCallable;
typedef std::future<DescribeAgreementOutcome> DescribeAgreementOutcomeCallable;
typedef std::future<GetAgreementApprovalOutcome> GetAgreementApprovalOutcomeCallable;
typedef std::future<GetAgreementCancellationRequestOutcome> GetAgreementCancellationRequestOutcomeCallable;
typedef std::future<GetAgreementContactsOutcome> GetAgreementContactsOutcomeCallable;
typedef std::future<GetAgreementEntitlementsOutcome> GetAgreementEntitlementsOutcomeCallable;
typedef std::future<GetAgreementPaymentRequestOutcome> GetAgreementPaymentRequestOutcomeCallable;
typedef std::future<GetAgreementRequestOutcome> GetAgreementRequestOutcomeCallable;
typedef std::future<GetAgreementRequestApprovalPlansOutcome> GetAgreementRequestApprovalPlansOutcomeCallable;
typedef std::future<GetAgreementRequestTermsOutcome> GetAgreementRequestTermsOutcomeCallable;
typedef std::future<GetAgreementTermsOutcome> GetAgreementTermsOutcomeCallable;
typedef std::future<GetBillingAdjustmentRequestOutcome> GetBillingAdjustmentRequestOutcomeCallable;
typedef std::future<ListAgreementApprovalsOutcome> ListAgreementApprovalsOutcomeCallable;
typedef std::future<ListAgreementCancellationRequestsOutcome> ListAgreementCancellationRequestsOutcomeCallable;
typedef std::future<ListAgreementChargesOutcome> ListAgreementChargesOutcomeCallable;
typedef std::future<ListAgreementInvoiceLineItemsOutcome> ListAgreementInvoiceLineItemsOutcomeCallable;
typedef std::future<ListAgreementPaymentRequestsOutcome> ListAgreementPaymentRequestsOutcomeCallable;
typedef std::future<ListAgreementRequestsOutcome> ListAgreementRequestsOutcomeCallable;
typedef std::future<ListBillingAdjustmentRequestsOutcome> ListBillingAdjustmentRequestsOutcomeCallable;
typedef std::future<RejectAgreementApprovalOutcome> RejectAgreementApprovalOutcomeCallable;
typedef std::future<RejectAgreementCancellationRequestOutcome> RejectAgreementCancellationRequestOutcomeCallable;
typedef std::future<RejectAgreementPaymentRequestOutcome> RejectAgreementPaymentRequestOutcomeCallable;
typedef std::future<SearchAgreementsOutcome> SearchAgreementsOutcomeCallable;
typedef std::future<SendAgreementCancellationRequestOutcome> SendAgreementCancellationRequestOutcomeCallable;
typedef std::future<SendAgreementPaymentRequestOutcome> SendAgreementPaymentRequestOutcomeCallable;
typedef std::future<StartAgreementApprovalsOutcome> StartAgreementApprovalsOutcomeCallable;
typedef std::future<UpdatePurchaseOrdersOutcome> UpdatePurchaseOrdersOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class AgreementServiceClient;

/* Service model async handlers definitions */
typedef std::function<void(const AgreementServiceClient*, const Model::AcceptAgreementApprovalRequest&,
                           const Model::AcceptAgreementApprovalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AcceptAgreementApprovalResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::AcceptAgreementCancellationRequestRequest&,
                           const Model::AcceptAgreementCancellationRequestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AcceptAgreementCancellationRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::AcceptAgreementPaymentRequestRequest&,
                           const Model::AcceptAgreementPaymentRequestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AcceptAgreementPaymentRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::AcceptAgreementRequestRequest&,
                           const Model::AcceptAgreementRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AcceptAgreementRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::BatchCreateBillingAdjustmentRequestRequest&,
                           const Model::BatchCreateBillingAdjustmentRequestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchCreateBillingAdjustmentRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::CancelAgreementRequest&, const Model::CancelAgreementOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelAgreementResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::CancelAgreementCancellationRequestRequest&,
                           const Model::CancelAgreementCancellationRequestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelAgreementCancellationRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::CancelAgreementPaymentRequestRequest&,
                           const Model::CancelAgreementPaymentRequestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelAgreementPaymentRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::CancelAgreementRequestRequest&,
                           const Model::CancelAgreementRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelAgreementRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::CreateAgreementRequestRequest&,
                           const Model::CreateAgreementRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAgreementRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::DescribeAgreementRequest&, const Model::DescribeAgreementOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeAgreementResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::GetAgreementApprovalRequest&,
                           const Model::GetAgreementApprovalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgreementApprovalResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::GetAgreementCancellationRequestRequest&,
                           const Model::GetAgreementCancellationRequestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgreementCancellationRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::GetAgreementContactsRequest&,
                           const Model::GetAgreementContactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgreementContactsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::GetAgreementEntitlementsRequest&,
                           const Model::GetAgreementEntitlementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgreementEntitlementsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::GetAgreementPaymentRequestRequest&,
                           const Model::GetAgreementPaymentRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgreementPaymentRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::GetAgreementRequestRequest&,
                           const Model::GetAgreementRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgreementRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::GetAgreementRequestApprovalPlansRequest&,
                           const Model::GetAgreementRequestApprovalPlansOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgreementRequestApprovalPlansResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::GetAgreementRequestTermsRequest&,
                           const Model::GetAgreementRequestTermsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgreementRequestTermsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::GetAgreementTermsRequest&, const Model::GetAgreementTermsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgreementTermsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::GetBillingAdjustmentRequestRequest&,
                           const Model::GetBillingAdjustmentRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBillingAdjustmentRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::ListAgreementApprovalsRequest&,
                           const Model::ListAgreementApprovalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAgreementApprovalsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::ListAgreementCancellationRequestsRequest&,
                           const Model::ListAgreementCancellationRequestsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAgreementCancellationRequestsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::ListAgreementChargesRequest&,
                           const Model::ListAgreementChargesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAgreementChargesResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::ListAgreementInvoiceLineItemsRequest&,
                           const Model::ListAgreementInvoiceLineItemsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAgreementInvoiceLineItemsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::ListAgreementPaymentRequestsRequest&,
                           const Model::ListAgreementPaymentRequestsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAgreementPaymentRequestsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::ListAgreementRequestsRequest&,
                           const Model::ListAgreementRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAgreementRequestsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::ListBillingAdjustmentRequestsRequest&,
                           const Model::ListBillingAdjustmentRequestsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBillingAdjustmentRequestsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::RejectAgreementApprovalRequest&,
                           const Model::RejectAgreementApprovalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RejectAgreementApprovalResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::RejectAgreementCancellationRequestRequest&,
                           const Model::RejectAgreementCancellationRequestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RejectAgreementCancellationRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::RejectAgreementPaymentRequestRequest&,
                           const Model::RejectAgreementPaymentRequestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RejectAgreementPaymentRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::SearchAgreementsRequest&, const Model::SearchAgreementsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SearchAgreementsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::SendAgreementCancellationRequestRequest&,
                           const Model::SendAgreementCancellationRequestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SendAgreementCancellationRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::SendAgreementPaymentRequestRequest&,
                           const Model::SendAgreementPaymentRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SendAgreementPaymentRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::StartAgreementApprovalsRequest&,
                           const Model::StartAgreementApprovalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartAgreementApprovalsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::UpdatePurchaseOrdersRequest&,
                           const Model::UpdatePurchaseOrdersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdatePurchaseOrdersResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace AgreementService
}  // namespace Aws
