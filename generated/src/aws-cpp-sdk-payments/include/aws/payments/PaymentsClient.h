/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/PaymentsPaginationBase.h>
#include <aws/payments/PaymentsServiceClientModel.h>
#include <aws/payments/PaymentsWaiter.h>
#include <aws/payments/Payments_EXPORTS.h>

namespace Aws {
namespace Payments {
/**
 * <p>Amazon Web Services Payments manages how money moves between you and Amazon
 * Web Services. It holds the payment instruments you use to pay Amazon Web
 * Services and to receive money from Amazon Web Services, such as cards and bank
 * accounts. It collects payment for your Amazon Web Services invoices, applies
 * your payments and credit memos to them, and returns refunds.</p> <p>A payment
 * instrument is a channel that moves money between you and Amazon Web Services,
 * and its payment method is the kind of instrument, such as a card or a bank
 * account. A financial record is an invoice or credit memo. It shows how much of
 * its amount is outstanding, processing, settled, and canceled as Amazon Web
 * Services applies payments and credits.</p> <p>With the Amazon Web Services
 * Payments API, you can read your financial records and account balances, and read
 * your payment instruments and their status.</p> <p>The Amazon Web Services
 * Payments API provides the following endpoint:</p> <p>
 * <code>https://payments.us-east-1.api.aws</code> </p>
 */
class AWS_PAYMENTS_API PaymentsClient : public Aws::Client::AWSJsonClient,
                                        public Aws::Client::ClientWithAsyncTemplateMethods<PaymentsClient>,
                                        public PaymentsPaginationBase<PaymentsClient>,
                                        public PaymentsWaiter<PaymentsClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef PaymentsClientConfiguration ClientConfigurationType;
  typedef PaymentsEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PaymentsClient(const Aws::Payments::PaymentsClientConfiguration& clientConfiguration = Aws::Payments::PaymentsClientConfiguration(),
                 std::shared_ptr<PaymentsEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PaymentsClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<PaymentsEndpointProviderBase> endpointProvider = nullptr,
                 const Aws::Payments::PaymentsClientConfiguration& clientConfiguration = Aws::Payments::PaymentsClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PaymentsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 std::shared_ptr<PaymentsEndpointProviderBase> endpointProvider = nullptr,
                 const Aws::Payments::PaymentsClientConfiguration& clientConfiguration = Aws::Payments::PaymentsClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PaymentsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PaymentsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PaymentsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~PaymentsClient();

  /**
   * <p>Retrieves up to 100 financial records in one request, including the details
   * that are specific to each record's type. Identify each record by its ID or by
   * its invoice ID. Results can be partial: each key that you request appears once
   * in the response, either as a record in <code>financialRecords</code> or as an
   * error in <code>errors</code>. A key that matches no record on your account is
   * returned in <code>errors</code> and doesn't fail the request. This operation
   * provides strongly consistent reads.</p> <p>To use this operation, you must have
   * Amazon Web Services Identity and Access Management (IAM) permission for both
   * <code>payments:BatchGetFinancialRecord</code> and
   * <code>payments:GetPaymentStatus</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/BatchGetFinancialRecord">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetFinancialRecordOutcome BatchGetFinancialRecord(const Model::BatchGetFinancialRecordRequest& request) const;

  /**
   * A Callable wrapper for BatchGetFinancialRecord that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetFinancialRecordRequestT = Model::BatchGetFinancialRecordRequest>
  Model::BatchGetFinancialRecordOutcomeCallable BatchGetFinancialRecordCallable(const BatchGetFinancialRecordRequestT& request) const {
    return SubmitCallable(&PaymentsClient::BatchGetFinancialRecord, request);
  }

  /**
   * An Async wrapper for BatchGetFinancialRecord that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchGetFinancialRecordRequestT = Model::BatchGetFinancialRecordRequest>
  void BatchGetFinancialRecordAsync(const BatchGetFinancialRecordRequestT& request,
                                    const BatchGetFinancialRecordResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PaymentsClient::BatchGetFinancialRecord, request, handler, context);
  }

  /**
   * <p>Retrieves one balance of your account, selected by balance type, as one
   * amount for each merchant of record and currency. Each amount is the sum of the
   * outstanding balances of your invoices or credit memos that have the status
   * <code>OUTSTANDING</code>. Amounts are never added together across merchants of
   * record or currencies. This operation is eventually consistent. Results are
   * paginated. Use <code>nextToken</code> to retrieve more results.</p> <p>To use
   * this operation, you must have Amazon Web Services Identity and Access Management
   * (IAM) permission for both <code>payments:GetAccountBalance</code> and
   * <code>payments:GetPaymentStatus</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/GetAccountBalance">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAccountBalanceOutcome GetAccountBalance(const Model::GetAccountBalanceRequest& request) const;

  /**
   * A Callable wrapper for GetAccountBalance that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAccountBalanceRequestT = Model::GetAccountBalanceRequest>
  Model::GetAccountBalanceOutcomeCallable GetAccountBalanceCallable(const GetAccountBalanceRequestT& request) const {
    return SubmitCallable(&PaymentsClient::GetAccountBalance, request);
  }

  /**
   * An Async wrapper for GetAccountBalance that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetAccountBalanceRequestT = Model::GetAccountBalanceRequest>
  void GetAccountBalanceAsync(const GetAccountBalanceRequestT& request, const GetAccountBalanceResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PaymentsClient::GetAccountBalance, request, handler, context);
  }

  /**
   * <p>Retrieves a single financial record, including the details that are specific
   * to its type. Specify exactly one of the following:</p> <ul> <li> <p>The ID that
   * Amazon Web Services Payments issued for the record, in
   * <code>identifier</code>.</p> </li> <li> <p>The invoice ID that Amazon Web
   * Services Invoicing issued for an invoice or a credit memo, in
   * <code>invoiceIdentifier</code>.</p> </li> </ul> <p>If you specify both or
   * neither, the request fails with <code>ValidationException</code>. If no record
   * on your account matches, the request fails with
   * <code>ResourceNotFoundException</code>.</p> <p>This operation provides strongly
   * consistent reads.</p> <p>To use this operation, you must have Amazon Web
   * Services Identity and Access Management (IAM) permission for both
   * <code>payments:GetFinancialRecord</code> and
   * <code>payments:GetPaymentStatus</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/GetFinancialRecord">AWS
   * API Reference</a></p>
   */
  virtual Model::GetFinancialRecordOutcome GetFinancialRecord(const Model::GetFinancialRecordRequest& request = {}) const;

  /**
   * A Callable wrapper for GetFinancialRecord that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetFinancialRecordRequestT = Model::GetFinancialRecordRequest>
  Model::GetFinancialRecordOutcomeCallable GetFinancialRecordCallable(const GetFinancialRecordRequestT& request = {}) const {
    return SubmitCallable(&PaymentsClient::GetFinancialRecord, request);
  }

  /**
   * An Async wrapper for GetFinancialRecord that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetFinancialRecordRequestT = Model::GetFinancialRecordRequest>
  void GetFinancialRecordAsync(const GetFinancialRecordResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const GetFinancialRecordRequestT& request = {}) const {
    return SubmitAsync(&PaymentsClient::GetFinancialRecord, request, handler, context);
  }

  /**
   * <p>Retrieves a payment instrument on your account, including the details that
   * are specific to its payment method, such as a card's last four digits. Identify
   * the instrument by its Amazon Resource Name (ARN) or by its ID.
   * <code>ListPaymentInstruments</code> returns both.</p> <p>To use this operation,
   * you must have Amazon Web Services Identity and Access Management (IAM)
   * permission for <code>payments:GetPaymentInstrument</code>. You can scope this
   * permission to the instrument's ARN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/GetPaymentInstrument">AWS
   * API Reference</a></p>
   */
  virtual Model::GetPaymentInstrumentOutcome GetPaymentInstrument(const Model::GetPaymentInstrumentRequest& request) const;

  /**
   * A Callable wrapper for GetPaymentInstrument that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetPaymentInstrumentRequestT = Model::GetPaymentInstrumentRequest>
  Model::GetPaymentInstrumentOutcomeCallable GetPaymentInstrumentCallable(const GetPaymentInstrumentRequestT& request) const {
    return SubmitCallable(&PaymentsClient::GetPaymentInstrument, request);
  }

  /**
   * An Async wrapper for GetPaymentInstrument that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetPaymentInstrumentRequestT = Model::GetPaymentInstrumentRequest>
  void GetPaymentInstrumentAsync(const GetPaymentInstrumentRequestT& request, const GetPaymentInstrumentResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PaymentsClient::GetPaymentInstrument, request, handler, context);
  }

  /**
   * <p>Lists the financial records on your account, with the newest first by
   * default. A financial record is an invoice or a credit memo. You must specify at
   * least one record type in <code>types</code>. You can narrow the results further
   * by settlement status and issue date. This operation returns summaries. To get
   * the details that are specific to a record's type, use
   * <code>GetFinancialRecord</code> or <code>BatchGetFinancialRecord</code>. Results
   * are paginated. Use <code>nextToken</code> to retrieve more results.</p> <p>To
   * use this operation, you must have Amazon Web Services Identity and Access
   * Management (IAM) permission for both <code>payments:ListFinancialRecords</code>
   * and <code>payments:GetPaymentStatus</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/ListFinancialRecords">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFinancialRecordsOutcome ListFinancialRecords(const Model::ListFinancialRecordsRequest& request) const;

  /**
   * A Callable wrapper for ListFinancialRecords that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListFinancialRecordsRequestT = Model::ListFinancialRecordsRequest>
  Model::ListFinancialRecordsOutcomeCallable ListFinancialRecordsCallable(const ListFinancialRecordsRequestT& request) const {
    return SubmitCallable(&PaymentsClient::ListFinancialRecords, request);
  }

  /**
   * An Async wrapper for ListFinancialRecords that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListFinancialRecordsRequestT = Model::ListFinancialRecordsRequest>
  void ListFinancialRecordsAsync(const ListFinancialRecordsRequestT& request, const ListFinancialRecordsResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PaymentsClient::ListFinancialRecords, request, handler, context);
  }

  /**
   * <p>Lists the payment instruments on your account. This operation returns
   * summaries. To get the details that are specific to an instrument's payment
   * method, use <code>GetPaymentInstrument</code>. Results are paginated. Use
   * <code>nextToken</code> to retrieve more results.</p> <p>To use this operation,
   * you must have Amazon Web Services Identity and Access Management (IAM)
   * permission for <code>payments:ListPaymentInstruments</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/ListPaymentInstruments">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPaymentInstrumentsOutcome ListPaymentInstruments(const Model::ListPaymentInstrumentsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListPaymentInstruments that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPaymentInstrumentsRequestT = Model::ListPaymentInstrumentsRequest>
  Model::ListPaymentInstrumentsOutcomeCallable ListPaymentInstrumentsCallable(const ListPaymentInstrumentsRequestT& request = {}) const {
    return SubmitCallable(&PaymentsClient::ListPaymentInstruments, request);
  }

  /**
   * An Async wrapper for ListPaymentInstruments that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListPaymentInstrumentsRequestT = Model::ListPaymentInstrumentsRequest>
  void ListPaymentInstrumentsAsync(const ListPaymentInstrumentsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const ListPaymentInstrumentsRequestT& request = {}) const {
    return SubmitAsync(&PaymentsClient::ListPaymentInstruments, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<PaymentsEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<PaymentsClient>;
  void init(const PaymentsClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, PaymentsError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  PaymentsClientConfiguration m_clientConfiguration;
  std::shared_ptr<PaymentsEndpointProviderBase> m_endpointProvider;
};

}  // namespace Payments
}  // namespace Aws
