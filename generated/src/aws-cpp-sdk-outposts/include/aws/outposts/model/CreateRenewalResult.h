/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/PaymentOption.h>
#include <aws/outposts/model/PaymentTerm.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {
class CreateRenewalResult {
 public:
  AWS_OUTPOSTS_API CreateRenewalResult() = default;
  AWS_OUTPOSTS_API CreateRenewalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OUTPOSTS_API CreateRenewalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The payment option.</p>
   */
  inline PaymentOption GetPaymentOption() const { return m_paymentOption; }
  inline void SetPaymentOption(PaymentOption value) {
    m_paymentOptionHasBeenSet = true;
    m_paymentOption = value;
  }
  inline CreateRenewalResult& WithPaymentOption(PaymentOption value) {
    SetPaymentOption(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment term.</p>
   */
  inline PaymentTerm GetPaymentTerm() const { return m_paymentTerm; }
  inline void SetPaymentTerm(PaymentTerm value) {
    m_paymentTermHasBeenSet = true;
    m_paymentTerm = value;
  }
  inline CreateRenewalResult& WithPaymentTerm(PaymentTerm value) {
    SetPaymentTerm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Outpost.</p>
   */
  inline const Aws::String& GetOutpostId() const { return m_outpostId; }
  template <typename OutpostIdT = Aws::String>
  void SetOutpostId(OutpostIdT&& value) {
    m_outpostIdHasBeenSet = true;
    m_outpostId = std::forward<OutpostIdT>(value);
  }
  template <typename OutpostIdT = Aws::String>
  CreateRenewalResult& WithOutpostId(OutpostIdT&& value) {
    SetOutpostId(std::forward<OutpostIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The upfront price of the renewal.</p>
   */
  inline double GetUpfrontPrice() const { return m_upfrontPrice; }
  inline void SetUpfrontPrice(double value) {
    m_upfrontPriceHasBeenSet = true;
    m_upfrontPrice = value;
  }
  inline CreateRenewalResult& WithUpfrontPrice(double value) {
    SetUpfrontPrice(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The monthly recurring price of the renewal.</p>
   */
  inline double GetMonthlyRecurringPrice() const { return m_monthlyRecurringPrice; }
  inline void SetMonthlyRecurringPrice(double value) {
    m_monthlyRecurringPriceHasBeenSet = true;
    m_monthlyRecurringPrice = value;
  }
  inline CreateRenewalResult& WithMonthlyRecurringPrice(double value) {
    SetMonthlyRecurringPrice(value);
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
  CreateRenewalResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  PaymentOption m_paymentOption{PaymentOption::NOT_SET};

  PaymentTerm m_paymentTerm{PaymentTerm::NOT_SET};

  Aws::String m_outpostId;

  double m_upfrontPrice{0.0};

  double m_monthlyRecurringPrice{0.0};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_paymentOptionHasBeenSet = false;
  bool m_paymentTermHasBeenSet = false;
  bool m_outpostIdHasBeenSet = false;
  bool m_upfrontPriceHasBeenSet = false;
  bool m_monthlyRecurringPriceHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
