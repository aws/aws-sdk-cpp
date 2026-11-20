/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/PaymentInstrument.h>

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
class GetPaymentInstrumentResult {
 public:
  AWS_PAYMENTS_API GetPaymentInstrumentResult() = default;
  AWS_PAYMENTS_API GetPaymentInstrumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PAYMENTS_API GetPaymentInstrumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The payment instrument, including the details that are specific to its
   * payment method.</p>
   */
  inline const PaymentInstrument& GetPaymentInstrument() const { return m_paymentInstrument; }
  template <typename PaymentInstrumentT = PaymentInstrument>
  void SetPaymentInstrument(PaymentInstrumentT&& value) {
    m_paymentInstrumentHasBeenSet = true;
    m_paymentInstrument = std::forward<PaymentInstrumentT>(value);
  }
  template <typename PaymentInstrumentT = PaymentInstrument>
  GetPaymentInstrumentResult& WithPaymentInstrument(PaymentInstrumentT&& value) {
    SetPaymentInstrument(std::forward<PaymentInstrumentT>(value));
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
  GetPaymentInstrumentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  PaymentInstrument m_paymentInstrument;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_paymentInstrumentHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
