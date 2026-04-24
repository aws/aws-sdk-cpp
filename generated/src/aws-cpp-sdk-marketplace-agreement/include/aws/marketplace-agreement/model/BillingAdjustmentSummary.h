/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/BillingAdjustmentStatus.h>

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
 * <p>Summary view of a billing adjustment request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/BillingAdjustmentSummary">AWS
 * API Reference</a></p>
 */
class BillingAdjustmentSummary {
 public:
  AWS_AGREEMENTSERVICE_API BillingAdjustmentSummary() = default;
  AWS_AGREEMENTSERVICE_API BillingAdjustmentSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API BillingAdjustmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the billing adjustment request.</p>
   */
  inline const Aws::String& GetBillingAdjustmentRequestId() const { return m_billingAdjustmentRequestId; }
  inline bool BillingAdjustmentRequestIdHasBeenSet() const { return m_billingAdjustmentRequestIdHasBeenSet; }
  template <typename BillingAdjustmentRequestIdT = Aws::String>
  void SetBillingAdjustmentRequestId(BillingAdjustmentRequestIdT&& value) {
    m_billingAdjustmentRequestIdHasBeenSet = true;
    m_billingAdjustmentRequestId = std::forward<BillingAdjustmentRequestIdT>(value);
  }
  template <typename BillingAdjustmentRequestIdT = Aws::String>
  BillingAdjustmentSummary& WithBillingAdjustmentRequestId(BillingAdjustmentRequestIdT&& value) {
    SetBillingAdjustmentRequestId(std::forward<BillingAdjustmentRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the original invoice being adjusted.</p>
   */
  inline const Aws::String& GetOriginalInvoiceId() const { return m_originalInvoiceId; }
  inline bool OriginalInvoiceIdHasBeenSet() const { return m_originalInvoiceIdHasBeenSet; }
  template <typename OriginalInvoiceIdT = Aws::String>
  void SetOriginalInvoiceId(OriginalInvoiceIdT&& value) {
    m_originalInvoiceIdHasBeenSet = true;
    m_originalInvoiceId = std::forward<OriginalInvoiceIdT>(value);
  }
  template <typename OriginalInvoiceIdT = Aws::String>
  BillingAdjustmentSummary& WithOriginalInvoiceId(OriginalInvoiceIdT&& value) {
    SetOriginalInvoiceId(std::forward<OriginalInvoiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The adjustment amount as a string representation of a decimal number.</p>
   */
  inline const Aws::String& GetAdjustmentAmount() const { return m_adjustmentAmount; }
  inline bool AdjustmentAmountHasBeenSet() const { return m_adjustmentAmountHasBeenSet; }
  template <typename AdjustmentAmountT = Aws::String>
  void SetAdjustmentAmount(AdjustmentAmountT&& value) {
    m_adjustmentAmountHasBeenSet = true;
    m_adjustmentAmount = std::forward<AdjustmentAmountT>(value);
  }
  template <typename AdjustmentAmountT = Aws::String>
  BillingAdjustmentSummary& WithAdjustmentAmount(AdjustmentAmountT&& value) {
    SetAdjustmentAmount(std::forward<AdjustmentAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency code for the adjustment amount.</p>
   */
  inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
  inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
  template <typename CurrencyCodeT = Aws::String>
  void SetCurrencyCode(CurrencyCodeT&& value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = std::forward<CurrencyCodeT>(value);
  }
  template <typename CurrencyCodeT = Aws::String>
  BillingAdjustmentSummary& WithCurrencyCode(CurrencyCodeT&& value) {
    SetCurrencyCode(std::forward<CurrencyCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the billing adjustment request.</p>
   */
  inline BillingAdjustmentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BillingAdjustmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline BillingAdjustmentSummary& WithStatus(BillingAdjustmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agreement associated with this billing
   * adjustment request.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  BillingAdjustmentSummary& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the billing adjustment request was created, as a POSIX
   * timestamp (Unix epoch seconds).</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  BillingAdjustmentSummary& WithCreatedAt(CreatedAtT&& value) {
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
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  BillingAdjustmentSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of agreement.</p>
   */
  inline const Aws::String& GetAgreementType() const { return m_agreementType; }
  inline bool AgreementTypeHasBeenSet() const { return m_agreementTypeHasBeenSet; }
  template <typename AgreementTypeT = Aws::String>
  void SetAgreementType(AgreementTypeT&& value) {
    m_agreementTypeHasBeenSet = true;
    m_agreementType = std::forward<AgreementTypeT>(value);
  }
  template <typename AgreementTypeT = Aws::String>
  BillingAdjustmentSummary& WithAgreementType(AgreementTypeT&& value) {
    SetAgreementType(std::forward<AgreementTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog in which the agreement was created.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  BillingAdjustmentSummary& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_billingAdjustmentRequestId;

  Aws::String m_originalInvoiceId;

  Aws::String m_adjustmentAmount;

  Aws::String m_currencyCode;

  BillingAdjustmentStatus m_status{BillingAdjustmentStatus::NOT_SET};

  Aws::String m_agreementId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_agreementType;

  Aws::String m_catalog;
  bool m_billingAdjustmentRequestIdHasBeenSet = false;
  bool m_originalInvoiceIdHasBeenSet = false;
  bool m_adjustmentAmountHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_agreementIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_agreementTypeHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
