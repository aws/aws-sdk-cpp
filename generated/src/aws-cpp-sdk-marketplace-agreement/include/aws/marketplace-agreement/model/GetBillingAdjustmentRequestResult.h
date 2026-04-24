/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/BillingAdjustmentReasonCode.h>
#include <aws/marketplace-agreement/model/BillingAdjustmentStatus.h>

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
class GetBillingAdjustmentRequestResult {
 public:
  AWS_AGREEMENTSERVICE_API GetBillingAdjustmentRequestResult() = default;
  AWS_AGREEMENTSERVICE_API GetBillingAdjustmentRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_AGREEMENTSERVICE_API GetBillingAdjustmentRequestResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the billing adjustment request.</p>
   */
  inline const Aws::String& GetBillingAdjustmentRequestId() const { return m_billingAdjustmentRequestId; }
  template <typename BillingAdjustmentRequestIdT = Aws::String>
  void SetBillingAdjustmentRequestId(BillingAdjustmentRequestIdT&& value) {
    m_billingAdjustmentRequestIdHasBeenSet = true;
    m_billingAdjustmentRequestId = std::forward<BillingAdjustmentRequestIdT>(value);
  }
  template <typename BillingAdjustmentRequestIdT = Aws::String>
  GetBillingAdjustmentRequestResult& WithBillingAdjustmentRequestId(BillingAdjustmentRequestIdT&& value) {
    SetBillingAdjustmentRequestId(std::forward<BillingAdjustmentRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agreement associated with this billing
   * adjustment request.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  GetBillingAdjustmentRequestResult& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason code for the billing adjustment.</p>
   */
  inline BillingAdjustmentReasonCode GetAdjustmentReasonCode() const { return m_adjustmentReasonCode; }
  inline void SetAdjustmentReasonCode(BillingAdjustmentReasonCode value) {
    m_adjustmentReasonCodeHasBeenSet = true;
    m_adjustmentReasonCode = value;
  }
  inline GetBillingAdjustmentRequestResult& WithAdjustmentReasonCode(BillingAdjustmentReasonCode value) {
    SetAdjustmentReasonCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The detailed description of the billing adjustment reason, if provided.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetBillingAdjustmentRequestResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the original invoice being adjusted.</p>
   */
  inline const Aws::String& GetOriginalInvoiceId() const { return m_originalInvoiceId; }
  template <typename OriginalInvoiceIdT = Aws::String>
  void SetOriginalInvoiceId(OriginalInvoiceIdT&& value) {
    m_originalInvoiceIdHasBeenSet = true;
    m_originalInvoiceId = std::forward<OriginalInvoiceIdT>(value);
  }
  template <typename OriginalInvoiceIdT = Aws::String>
  GetBillingAdjustmentRequestResult& WithOriginalInvoiceId(OriginalInvoiceIdT&& value) {
    SetOriginalInvoiceId(std::forward<OriginalInvoiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The adjustment amount as a string representation of a decimal number.</p>
   */
  inline const Aws::String& GetAdjustmentAmount() const { return m_adjustmentAmount; }
  template <typename AdjustmentAmountT = Aws::String>
  void SetAdjustmentAmount(AdjustmentAmountT&& value) {
    m_adjustmentAmountHasBeenSet = true;
    m_adjustmentAmount = std::forward<AdjustmentAmountT>(value);
  }
  template <typename AdjustmentAmountT = Aws::String>
  GetBillingAdjustmentRequestResult& WithAdjustmentAmount(AdjustmentAmountT&& value) {
    SetAdjustmentAmount(std::forward<AdjustmentAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency code for the adjustment amount (e.g., <code>USD</code>).</p>
   */
  inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
  template <typename CurrencyCodeT = Aws::String>
  void SetCurrencyCode(CurrencyCodeT&& value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = std::forward<CurrencyCodeT>(value);
  }
  template <typename CurrencyCodeT = Aws::String>
  GetBillingAdjustmentRequestResult& WithCurrencyCode(CurrencyCodeT&& value) {
    SetCurrencyCode(std::forward<CurrencyCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the billing adjustment request.</p>
   */
  inline BillingAdjustmentStatus GetStatus() const { return m_status; }
  inline void SetStatus(BillingAdjustmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetBillingAdjustmentRequestResult& WithStatus(BillingAdjustmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message providing additional context about the billing adjustment request
   * status. This field is populated only when the status is
   * <code>VALIDATION_FAILED</code>.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  GetBillingAdjustmentRequestResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the billing adjustment request was created, as a POSIX
   * timestamp (Unix epoch seconds).</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetBillingAdjustmentRequestResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the billing adjustment request was last updated, as a
   * POSIX timestamp (Unix epoch seconds).</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetBillingAdjustmentRequestResult& WithUpdatedAt(UpdatedAtT&& value) {
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
  GetBillingAdjustmentRequestResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_billingAdjustmentRequestId;

  Aws::String m_agreementId;

  BillingAdjustmentReasonCode m_adjustmentReasonCode{BillingAdjustmentReasonCode::NOT_SET};

  Aws::String m_description;

  Aws::String m_originalInvoiceId;

  Aws::String m_adjustmentAmount;

  Aws::String m_currencyCode;

  BillingAdjustmentStatus m_status{BillingAdjustmentStatus::NOT_SET};

  Aws::String m_statusMessage;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_billingAdjustmentRequestIdHasBeenSet = false;
  bool m_agreementIdHasBeenSet = false;
  bool m_adjustmentReasonCodeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_originalInvoiceIdHasBeenSet = false;
  bool m_adjustmentAmountHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
