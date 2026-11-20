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
#include <aws/payments/PaymentsEndpointProvider.h>
#include <aws/payments/PaymentsErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in PaymentsClient header */
#include <aws/payments/model/BatchGetFinancialRecordResult.h>
#include <aws/payments/model/GetAccountBalanceResult.h>
#include <aws/payments/model/GetFinancialRecordRequest.h>
#include <aws/payments/model/GetFinancialRecordResult.h>
#include <aws/payments/model/GetPaymentInstrumentResult.h>
#include <aws/payments/model/ListFinancialRecordsResult.h>
#include <aws/payments/model/ListPaymentInstrumentsRequest.h>
#include <aws/payments/model/ListPaymentInstrumentsResult.h>
/* End of service model headers required in PaymentsClient header */

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

namespace Payments {
using PaymentsClientConfiguration = Aws::Client::GenericClientConfiguration;
using PaymentsEndpointProviderBase = Aws::Payments::Endpoint::PaymentsEndpointProviderBase;
using PaymentsEndpointProvider = Aws::Payments::Endpoint::PaymentsEndpointProvider;

namespace Model {
/* Service model forward declarations required in PaymentsClient header */
class BatchGetFinancialRecordRequest;
class GetAccountBalanceRequest;
class GetFinancialRecordRequest;
class GetPaymentInstrumentRequest;
class ListFinancialRecordsRequest;
class ListPaymentInstrumentsRequest;
/* End of service model forward declarations required in PaymentsClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<BatchGetFinancialRecordResult, PaymentsError> BatchGetFinancialRecordOutcome;
typedef Aws::Utils::Outcome<GetAccountBalanceResult, PaymentsError> GetAccountBalanceOutcome;
typedef Aws::Utils::Outcome<GetFinancialRecordResult, PaymentsError> GetFinancialRecordOutcome;
typedef Aws::Utils::Outcome<GetPaymentInstrumentResult, PaymentsError> GetPaymentInstrumentOutcome;
typedef Aws::Utils::Outcome<ListFinancialRecordsResult, PaymentsError> ListFinancialRecordsOutcome;
typedef Aws::Utils::Outcome<ListPaymentInstrumentsResult, PaymentsError> ListPaymentInstrumentsOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<BatchGetFinancialRecordOutcome> BatchGetFinancialRecordOutcomeCallable;
typedef std::future<GetAccountBalanceOutcome> GetAccountBalanceOutcomeCallable;
typedef std::future<GetFinancialRecordOutcome> GetFinancialRecordOutcomeCallable;
typedef std::future<GetPaymentInstrumentOutcome> GetPaymentInstrumentOutcomeCallable;
typedef std::future<ListFinancialRecordsOutcome> ListFinancialRecordsOutcomeCallable;
typedef std::future<ListPaymentInstrumentsOutcome> ListPaymentInstrumentsOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class PaymentsClient;

/* Service model async handlers definitions */
typedef std::function<void(const PaymentsClient*, const Model::BatchGetFinancialRecordRequest&,
                           const Model::BatchGetFinancialRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetFinancialRecordResponseReceivedHandler;
typedef std::function<void(const PaymentsClient*, const Model::GetAccountBalanceRequest&, const Model::GetAccountBalanceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAccountBalanceResponseReceivedHandler;
typedef std::function<void(const PaymentsClient*, const Model::GetFinancialRecordRequest&, const Model::GetFinancialRecordOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetFinancialRecordResponseReceivedHandler;
typedef std::function<void(const PaymentsClient*, const Model::GetPaymentInstrumentRequest&, const Model::GetPaymentInstrumentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetPaymentInstrumentResponseReceivedHandler;
typedef std::function<void(const PaymentsClient*, const Model::ListFinancialRecordsRequest&, const Model::ListFinancialRecordsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFinancialRecordsResponseReceivedHandler;
typedef std::function<void(const PaymentsClient*, const Model::ListPaymentInstrumentsRequest&, const Model::ListPaymentInstrumentsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPaymentInstrumentsResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace Payments
}  // namespace Aws
