/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/PaymentInstrumentSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Payments {
namespace Model {
class ListPaymentInstrumentsResult {
 public:
  AWS_PAYMENTS_API ListPaymentInstrumentsResult() = default;
  AWS_PAYMENTS_API ListPaymentInstrumentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PAYMENTS_API ListPaymentInstrumentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The payment instruments on your account, one summary for each instrument.
   * This list is empty when your account has no payment instruments.</p>
   */
  inline const Aws::Vector<PaymentInstrumentSummary>& GetPaymentInstrumentSummaries() const { return m_paymentInstrumentSummaries; }
  template <typename PaymentInstrumentSummariesT = Aws::Vector<PaymentInstrumentSummary>>
  void SetPaymentInstrumentSummaries(PaymentInstrumentSummariesT&& value) {
    m_paymentInstrumentSummariesHasBeenSet = true;
    m_paymentInstrumentSummaries = std::forward<PaymentInstrumentSummariesT>(value);
  }
  template <typename PaymentInstrumentSummariesT = Aws::Vector<PaymentInstrumentSummary>>
  ListPaymentInstrumentsResult& WithPaymentInstrumentSummaries(PaymentInstrumentSummariesT&& value) {
    SetPaymentInstrumentSummaries(std::forward<PaymentInstrumentSummariesT>(value));
    return *this;
  }
  template <typename PaymentInstrumentSummariesT = PaymentInstrumentSummary>
  ListPaymentInstrumentsResult& AddPaymentInstrumentSummaries(PaymentInstrumentSummariesT&& value) {
    m_paymentInstrumentSummariesHasBeenSet = true;
    m_paymentInstrumentSummaries.emplace_back(std::forward<PaymentInstrumentSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token that indicates the next set of results to retrieve. This
   * value is absent when there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPaymentInstrumentsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListPaymentInstrumentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PaymentInstrumentSummary> m_paymentInstrumentSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_paymentInstrumentSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
