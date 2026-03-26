/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/PaymentRequestStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Summary view of a payment request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/PaymentRequestSummary">AWS
 * API Reference</a></p>
 */
class PaymentRequestSummary {
 public:
  AWS_AGREEMENTSERVICE_API PaymentRequestSummary() = default;
  AWS_AGREEMENTSERVICE_API PaymentRequestSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API PaymentRequestSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the payment request.</p>
   */
  inline const Aws::String& GetPaymentRequestId() const { return m_paymentRequestId; }
  inline bool PaymentRequestIdHasBeenSet() const { return m_paymentRequestIdHasBeenSet; }
  template <typename PaymentRequestIdT = Aws::String>
  void SetPaymentRequestId(PaymentRequestIdT&& value) {
    m_paymentRequestIdHasBeenSet = true;
    m_paymentRequestId = std::forward<PaymentRequestIdT>(value);
  }
  template <typename PaymentRequestIdT = Aws::String>
  PaymentRequestSummary& WithPaymentRequestId(PaymentRequestIdT&& value) {
    SetPaymentRequestId(std::forward<PaymentRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agreement associated with this payment
   * request.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  PaymentRequestSummary& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the payment request. Possible values include
   * <code>VALIDATING</code>, <code>VALIDATION_FAILED</code>,
   * <code>PENDING_APPROVAL</code>, <code>APPROVED</code>, <code>REJECTED</code>, and
   * <code>CANCELLED</code>.</p>
   */
  inline PaymentRequestStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(PaymentRequestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PaymentRequestSummary& WithStatus(PaymentRequestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive name of the payment request.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  PaymentRequestSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the charge created after the payment request is
   * approved. This field is only present for approved payment requests.</p>
   */
  inline const Aws::String& GetChargeId() const { return m_chargeId; }
  inline bool ChargeIdHasBeenSet() const { return m_chargeIdHasBeenSet; }
  template <typename ChargeIdT = Aws::String>
  void SetChargeId(ChargeIdT&& value) {
    m_chargeIdHasBeenSet = true;
    m_chargeId = std::forward<ChargeIdT>(value);
  }
  template <typename ChargeIdT = Aws::String>
  PaymentRequestSummary& WithChargeId(ChargeIdT&& value) {
    SetChargeId(std::forward<ChargeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount charged or to be charged to the buyer.</p>
   */
  inline const Aws::String& GetChargeAmount() const { return m_chargeAmount; }
  inline bool ChargeAmountHasBeenSet() const { return m_chargeAmountHasBeenSet; }
  template <typename ChargeAmountT = Aws::String>
  void SetChargeAmount(ChargeAmountT&& value) {
    m_chargeAmountHasBeenSet = true;
    m_chargeAmount = std::forward<ChargeAmountT>(value);
  }
  template <typename ChargeAmountT = Aws::String>
  PaymentRequestSummary& WithChargeAmount(ChargeAmountT&& value) {
    SetChargeAmount(std::forward<ChargeAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency code for the charge amount.</p>
   */
  inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
  inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
  template <typename CurrencyCodeT = Aws::String>
  void SetCurrencyCode(CurrencyCodeT&& value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = std::forward<CurrencyCodeT>(value);
  }
  template <typename CurrencyCodeT = Aws::String>
  PaymentRequestSummary& WithCurrencyCode(CurrencyCodeT&& value) {
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
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  PaymentRequestSummary& WithCreatedAt(CreatedAtT&& value) {
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
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  PaymentRequestSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_paymentRequestId;

  Aws::String m_agreementId;

  PaymentRequestStatus m_status{PaymentRequestStatus::NOT_SET};

  Aws::String m_name;

  Aws::String m_chargeId;

  Aws::String m_chargeAmount;

  Aws::String m_currencyCode;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_paymentRequestIdHasBeenSet = false;
  bool m_agreementIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_chargeIdHasBeenSet = false;
  bool m_chargeAmountHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
