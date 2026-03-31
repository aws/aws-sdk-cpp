/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/BillingAdjustmentReasonCode.h>

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
 * <p>An individual entry in a batch billing adjustment request, specifying the
 * invoice and adjustment details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/BatchCreateBillingAdjustmentRequestEntry">AWS
 * API Reference</a></p>
 */
class BatchCreateBillingAdjustmentRequestEntry {
 public:
  AWS_AGREEMENTSERVICE_API BatchCreateBillingAdjustmentRequestEntry() = default;
  AWS_AGREEMENTSERVICE_API BatchCreateBillingAdjustmentRequestEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API BatchCreateBillingAdjustmentRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the agreement associated with the invoice.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  BatchCreateBillingAdjustmentRequestEntry& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the original invoice to adjust.</p>
   */
  inline const Aws::String& GetOriginalInvoiceId() const { return m_originalInvoiceId; }
  inline bool OriginalInvoiceIdHasBeenSet() const { return m_originalInvoiceIdHasBeenSet; }
  template <typename OriginalInvoiceIdT = Aws::String>
  void SetOriginalInvoiceId(OriginalInvoiceIdT&& value) {
    m_originalInvoiceIdHasBeenSet = true;
    m_originalInvoiceId = std::forward<OriginalInvoiceIdT>(value);
  }
  template <typename OriginalInvoiceIdT = Aws::String>
  BatchCreateBillingAdjustmentRequestEntry& WithOriginalInvoiceId(OriginalInvoiceIdT&& value) {
    SetOriginalInvoiceId(std::forward<OriginalInvoiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The adjustment amount as a string representation of a decimal number in the
   * currency of the invoice.</p>
   */
  inline const Aws::String& GetAdjustmentAmount() const { return m_adjustmentAmount; }
  inline bool AdjustmentAmountHasBeenSet() const { return m_adjustmentAmountHasBeenSet; }
  template <typename AdjustmentAmountT = Aws::String>
  void SetAdjustmentAmount(AdjustmentAmountT&& value) {
    m_adjustmentAmountHasBeenSet = true;
    m_adjustmentAmount = std::forward<AdjustmentAmountT>(value);
  }
  template <typename AdjustmentAmountT = Aws::String>
  BatchCreateBillingAdjustmentRequestEntry& WithAdjustmentAmount(AdjustmentAmountT&& value) {
    SetAdjustmentAmount(std::forward<AdjustmentAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 3-letter ISO 4217 currency code for the adjustment amount (e.g.,
   * <code>USD</code>).</p>
   */
  inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
  inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
  template <typename CurrencyCodeT = Aws::String>
  void SetCurrencyCode(CurrencyCodeT&& value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = std::forward<CurrencyCodeT>(value);
  }
  template <typename CurrencyCodeT = Aws::String>
  BatchCreateBillingAdjustmentRequestEntry& WithCurrencyCode(CurrencyCodeT&& value) {
    SetCurrencyCode(std::forward<CurrencyCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason code for the billing adjustment. Valid values include
   * <code>INCORRECT_TERMS_ACCEPTED</code>, <code>INCORRECT_METERING</code>,
   * <code>TEST_ENVIRONMENT_CHARGES</code>,
   * <code>ALTERNATIVE_PROCUREMENT_CHANNEL</code>, <code>UNINTENDED_RENEWAL</code>,
   * <code>BUYER_DISSATISFACTION</code>, and <code>OTHER</code>.</p>
   */
  inline BillingAdjustmentReasonCode GetAdjustmentReasonCode() const { return m_adjustmentReasonCode; }
  inline bool AdjustmentReasonCodeHasBeenSet() const { return m_adjustmentReasonCodeHasBeenSet; }
  inline void SetAdjustmentReasonCode(BillingAdjustmentReasonCode value) {
    m_adjustmentReasonCodeHasBeenSet = true;
    m_adjustmentReasonCode = value;
  }
  inline BatchCreateBillingAdjustmentRequestEntry& WithAdjustmentReasonCode(BillingAdjustmentReasonCode value) {
    SetAdjustmentReasonCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional detailed description of the adjustment reason.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  BatchCreateBillingAdjustmentRequestEntry& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  BatchCreateBillingAdjustmentRequestEntry& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agreementId;

  Aws::String m_originalInvoiceId;

  Aws::String m_adjustmentAmount;

  Aws::String m_currencyCode;

  BillingAdjustmentReasonCode m_adjustmentReasonCode{BillingAdjustmentReasonCode::NOT_SET};

  Aws::String m_description;

  Aws::String m_clientToken;
  bool m_agreementIdHasBeenSet = false;
  bool m_originalInvoiceIdHasBeenSet = false;
  bool m_adjustmentAmountHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
  bool m_adjustmentReasonCodeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
