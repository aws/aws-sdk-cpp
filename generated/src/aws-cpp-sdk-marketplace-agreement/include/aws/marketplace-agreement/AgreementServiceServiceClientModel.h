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
#include <aws/marketplace-agreement/model/BatchCreateBillingAdjustmentRequestResult.h>
#include <aws/marketplace-agreement/model/CancelAgreementCancellationRequestResult.h>
#include <aws/marketplace-agreement/model/CancelAgreementPaymentRequestResult.h>
#include <aws/marketplace-agreement/model/DescribeAgreementResult.h>
#include <aws/marketplace-agreement/model/GetAgreementCancellationRequestResult.h>
#include <aws/marketplace-agreement/model/GetAgreementPaymentRequestResult.h>
#include <aws/marketplace-agreement/model/GetAgreementTermsResult.h>
#include <aws/marketplace-agreement/model/GetBillingAdjustmentRequestResult.h>
#include <aws/marketplace-agreement/model/ListAgreementCancellationRequestsResult.h>
#include <aws/marketplace-agreement/model/ListAgreementInvoiceLineItemsResult.h>
#include <aws/marketplace-agreement/model/ListAgreementPaymentRequestsResult.h>
#include <aws/marketplace-agreement/model/ListBillingAdjustmentRequestsRequest.h>
#include <aws/marketplace-agreement/model/ListBillingAdjustmentRequestsResult.h>
#include <aws/marketplace-agreement/model/SearchAgreementsRequest.h>
#include <aws/marketplace-agreement/model/SearchAgreementsResult.h>
#include <aws/marketplace-agreement/model/SendAgreementCancellationRequestResult.h>
#include <aws/marketplace-agreement/model/SendAgreementPaymentRequestResult.h>
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
class BatchCreateBillingAdjustmentRequestRequest;
class CancelAgreementCancellationRequestRequest;
class CancelAgreementPaymentRequestRequest;
class DescribeAgreementRequest;
class GetAgreementCancellationRequestRequest;
class GetAgreementPaymentRequestRequest;
class GetAgreementTermsRequest;
class GetBillingAdjustmentRequestRequest;
class ListAgreementCancellationRequestsRequest;
class ListAgreementInvoiceLineItemsRequest;
class ListAgreementPaymentRequestsRequest;
class ListBillingAdjustmentRequestsRequest;
class SearchAgreementsRequest;
class SendAgreementCancellationRequestRequest;
class SendAgreementPaymentRequestRequest;
/* End of service model forward declarations required in AgreementServiceClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<BatchCreateBillingAdjustmentRequestResult, AgreementServiceError> BatchCreateBillingAdjustmentRequestOutcome;
typedef Aws::Utils::Outcome<CancelAgreementCancellationRequestResult, AgreementServiceError> CancelAgreementCancellationRequestOutcome;
typedef Aws::Utils::Outcome<CancelAgreementPaymentRequestResult, AgreementServiceError> CancelAgreementPaymentRequestOutcome;
typedef Aws::Utils::Outcome<DescribeAgreementResult, AgreementServiceError> DescribeAgreementOutcome;
typedef Aws::Utils::Outcome<GetAgreementCancellationRequestResult, AgreementServiceError> GetAgreementCancellationRequestOutcome;
typedef Aws::Utils::Outcome<GetAgreementPaymentRequestResult, AgreementServiceError> GetAgreementPaymentRequestOutcome;
typedef Aws::Utils::Outcome<GetAgreementTermsResult, AgreementServiceError> GetAgreementTermsOutcome;
typedef Aws::Utils::Outcome<GetBillingAdjustmentRequestResult, AgreementServiceError> GetBillingAdjustmentRequestOutcome;
typedef Aws::Utils::Outcome<ListAgreementCancellationRequestsResult, AgreementServiceError> ListAgreementCancellationRequestsOutcome;
typedef Aws::Utils::Outcome<ListAgreementInvoiceLineItemsResult, AgreementServiceError> ListAgreementInvoiceLineItemsOutcome;
typedef Aws::Utils::Outcome<ListAgreementPaymentRequestsResult, AgreementServiceError> ListAgreementPaymentRequestsOutcome;
typedef Aws::Utils::Outcome<ListBillingAdjustmentRequestsResult, AgreementServiceError> ListBillingAdjustmentRequestsOutcome;
typedef Aws::Utils::Outcome<SearchAgreementsResult, AgreementServiceError> SearchAgreementsOutcome;
typedef Aws::Utils::Outcome<SendAgreementCancellationRequestResult, AgreementServiceError> SendAgreementCancellationRequestOutcome;
typedef Aws::Utils::Outcome<SendAgreementPaymentRequestResult, AgreementServiceError> SendAgreementPaymentRequestOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<BatchCreateBillingAdjustmentRequestOutcome> BatchCreateBillingAdjustmentRequestOutcomeCallable;
typedef std::future<CancelAgreementCancellationRequestOutcome> CancelAgreementCancellationRequestOutcomeCallable;
typedef std::future<CancelAgreementPaymentRequestOutcome> CancelAgreementPaymentRequestOutcomeCallable;
typedef std::future<DescribeAgreementOutcome> DescribeAgreementOutcomeCallable;
typedef std::future<GetAgreementCancellationRequestOutcome> GetAgreementCancellationRequestOutcomeCallable;
typedef std::future<GetAgreementPaymentRequestOutcome> GetAgreementPaymentRequestOutcomeCallable;
typedef std::future<GetAgreementTermsOutcome> GetAgreementTermsOutcomeCallable;
typedef std::future<GetBillingAdjustmentRequestOutcome> GetBillingAdjustmentRequestOutcomeCallable;
typedef std::future<ListAgreementCancellationRequestsOutcome> ListAgreementCancellationRequestsOutcomeCallable;
typedef std::future<ListAgreementInvoiceLineItemsOutcome> ListAgreementInvoiceLineItemsOutcomeCallable;
typedef std::future<ListAgreementPaymentRequestsOutcome> ListAgreementPaymentRequestsOutcomeCallable;
typedef std::future<ListBillingAdjustmentRequestsOutcome> ListBillingAdjustmentRequestsOutcomeCallable;
typedef std::future<SearchAgreementsOutcome> SearchAgreementsOutcomeCallable;
typedef std::future<SendAgreementCancellationRequestOutcome> SendAgreementCancellationRequestOutcomeCallable;
typedef std::future<SendAgreementPaymentRequestOutcome> SendAgreementPaymentRequestOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class AgreementServiceClient;

/* Service model async handlers definitions */
typedef std::function<void(const AgreementServiceClient*, const Model::BatchCreateBillingAdjustmentRequestRequest&,
                           const Model::BatchCreateBillingAdjustmentRequestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchCreateBillingAdjustmentRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::CancelAgreementCancellationRequestRequest&,
                           const Model::CancelAgreementCancellationRequestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelAgreementCancellationRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::CancelAgreementPaymentRequestRequest&,
                           const Model::CancelAgreementPaymentRequestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelAgreementPaymentRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::DescribeAgreementRequest&, const Model::DescribeAgreementOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeAgreementResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::GetAgreementCancellationRequestRequest&,
                           const Model::GetAgreementCancellationRequestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgreementCancellationRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::GetAgreementPaymentRequestRequest&,
                           const Model::GetAgreementPaymentRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgreementPaymentRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::GetAgreementTermsRequest&, const Model::GetAgreementTermsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgreementTermsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::GetBillingAdjustmentRequestRequest&,
                           const Model::GetBillingAdjustmentRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBillingAdjustmentRequestResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::ListAgreementCancellationRequestsRequest&,
                           const Model::ListAgreementCancellationRequestsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAgreementCancellationRequestsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::ListAgreementInvoiceLineItemsRequest&,
                           const Model::ListAgreementInvoiceLineItemsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAgreementInvoiceLineItemsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::ListAgreementPaymentRequestsRequest&,
                           const Model::ListAgreementPaymentRequestsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAgreementPaymentRequestsResponseReceivedHandler;
typedef std::function<void(const AgreementServiceClient*, const Model::ListBillingAdjustmentRequestsRequest&,
                           const Model::ListBillingAdjustmentRequestsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBillingAdjustmentRequestsResponseReceivedHandler;
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
/* End of service model async handlers definitions */
}  // namespace AgreementService
}  // namespace Aws
