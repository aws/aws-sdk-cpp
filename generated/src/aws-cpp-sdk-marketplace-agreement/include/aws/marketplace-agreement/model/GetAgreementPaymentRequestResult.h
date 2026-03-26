/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/PaymentRequestStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace AgreementService {
namespace Model {
class GetAgreementPaymentRequestResult {
 public:
  AWS_AGREEMENTSERVICE_API GetAgreementPaymentRequestResult() = default;
  AWS_AGREEMENTSERVICE_API GetAgreementPaymentRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_AGREEMENTSERVICE_API GetAgreementPaymentRequestResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the payment request.</p>
   */
  inline const Aws::String& GetPaymentRequestId() const { return m_paymentRequestId; }
  template <typename PaymentRequestIdT = Aws::String>
  void SetPaymentRequestId(PaymentRequestIdT&& value) {
    m_paymentRequestIdHasBeenSet = true;
    m_paymentRequestId = std::forward<PaymentRequestIdT>(value);
  }
  template <typename PaymentRequestIdT = Aws::String>
  GetAgreementPaymentRequestResult& WithPaymentRequestId(PaymentRequestIdT&& value) {
    SetPaymentRequestId(std::forward<PaymentRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agreement associated with this payment request.
   * Use <code>DescribeAgreement</code> to retrieve full agreement details.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  GetAgreementPaymentRequestResult& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the payment request. Possible values include:</p> <ul>
   * <li> <p> <code>VALIDATING</code> – The payment request is being validated
   * against agreement terms.</p> </li> <li> <p> <code>VALIDATION_FAILED</code> – The
   * payment request failed validation.</p> </li> <li> <p>
   * <code>PENDING_APPROVAL</code> – The payment request is awaiting buyer
   * action.</p> </li> <li> <p> <code>APPROVED</code> – The buyer has approved the
   * payment request.</p> </li> <li> <p> <code>REJECTED</code> – The buyer has
   * rejected the payment request.</p> </li> <li> <p> <code>CANCELLED</code> – The
   * seller has cancelled the payment request.</p> </li> </ul>
   */
  inline PaymentRequestStatus GetStatus() const { return m_status; }
  inline void SetStatus(PaymentRequestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetAgreementPaymentRequestResult& WithStatus(PaymentRequestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional message providing additional context about the payment request
   * status, such as a rejection reason or validation failure details.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  GetAgreementPaymentRequestResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive name of the payment request.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetAgreementPaymentRequestResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The detailed description of the payment request, if provided.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetAgreementPaymentRequestResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the charge created after the payment request is
   * approved. This field is only present for approved payment requests and follows
   * the pattern <code>ch-[a-zA-Z0-9]+</code>.</p>
   */
  inline const Aws::String& GetChargeId() const { return m_chargeId; }
  template <typename ChargeIdT = Aws::String>
  void SetChargeId(ChargeIdT&& value) {
    m_chargeIdHasBeenSet = true;
    m_chargeId = std::forward<ChargeIdT>(value);
  }
  template <typename ChargeIdT = Aws::String>
  GetAgreementPaymentRequestResult& WithChargeId(ChargeIdT&& value) {
    SetChargeId(std::forward<ChargeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount charged or to be charged to the buyer.</p>
   */
  inline const Aws::String& GetChargeAmount() const { return m_chargeAmount; }
  template <typename ChargeAmountT = Aws::String>
  void SetChargeAmount(ChargeAmountT&& value) {
    m_chargeAmountHasBeenSet = true;
    m_chargeAmount = std::forward<ChargeAmountT>(value);
  }
  template <typename ChargeAmountT = Aws::String>
  GetAgreementPaymentRequestResult& WithChargeAmount(ChargeAmountT&& value) {
    SetChargeAmount(std::forward<ChargeAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency code for the charge amount.</p>
   */
  inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
  template <typename CurrencyCodeT = Aws::String>
  void SetCurrencyCode(CurrencyCodeT&& value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = std::forward<CurrencyCodeT>(value);
  }
  template <typename CurrencyCodeT = Aws::String>
  GetAgreementPaymentRequestResult& WithCurrencyCode(CurrencyCodeT&& value) {
    SetCurrencyCode(std::forward<CurrencyCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the payment request was created, in ISO 8601
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetAgreementPaymentRequestResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the payment request was last updated, in ISO 8601
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetAgreementPaymentRequestResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  GetAgreementPaymentRequestResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_paymentRequestId;

  Aws::String m_agreementId;

  PaymentRequestStatus m_status{PaymentRequestStatus::NOT_SET};

  Aws::String m_statusMessage;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_chargeId;

  Aws::String m_chargeAmount;

  Aws::String m_currencyCode;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_paymentRequestIdHasBeenSet = false;
  bool m_agreementIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_chargeIdHasBeenSet = false;
  bool m_chargeAmountHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
