/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/InvoiceBillingPeriod.h>
#include <aws/marketplace-agreement/model/InvoiceType.h>
#include <aws/marketplace-agreement/model/InvoicingEntity.h>
#include <aws/marketplace-agreement/model/PricingCurrencyAmount.h>

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
 * <p>A summary of grouped billing data for an agreement invoice line
 * item.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AgreementInvoiceLineItemGroupSummary">AWS
 * API Reference</a></p>
 */
class AgreementInvoiceLineItemGroupSummary {
 public:
  AWS_AGREEMENTSERVICE_API AgreementInvoiceLineItemGroupSummary() = default;
  AWS_AGREEMENTSERVICE_API AgreementInvoiceLineItemGroupSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API AgreementInvoiceLineItemGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the agreement.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  AgreementInvoiceLineItemGroupSummary& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the invoice for this group.</p>
   */
  inline const Aws::String& GetInvoiceId() const { return m_invoiceId; }
  inline bool InvoiceIdHasBeenSet() const { return m_invoiceIdHasBeenSet; }
  template <typename InvoiceIdT = Aws::String>
  void SetInvoiceId(InvoiceIdT&& value) {
    m_invoiceIdHasBeenSet = true;
    m_invoiceId = std::forward<InvoiceIdT>(value);
  }
  template <typename InvoiceIdT = Aws::String>
  AgreementInvoiceLineItemGroupSummary& WithInvoiceId(InvoiceIdT&& value) {
    SetInvoiceId(std::forward<InvoiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Monetary amounts for this invoice group.</p>
   */
  inline const PricingCurrencyAmount& GetPricingCurrencyAmount() const { return m_pricingCurrencyAmount; }
  inline bool PricingCurrencyAmountHasBeenSet() const { return m_pricingCurrencyAmountHasBeenSet; }
  template <typename PricingCurrencyAmountT = PricingCurrencyAmount>
  void SetPricingCurrencyAmount(PricingCurrencyAmountT&& value) {
    m_pricingCurrencyAmountHasBeenSet = true;
    m_pricingCurrencyAmount = std::forward<PricingCurrencyAmountT>(value);
  }
  template <typename PricingCurrencyAmountT = PricingCurrencyAmount>
  AgreementInvoiceLineItemGroupSummary& WithPricingCurrencyAmount(PricingCurrencyAmountT&& value) {
    SetPricingCurrencyAmount(std::forward<PricingCurrencyAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The billing period associated with this group.</p>
   */
  inline const InvoiceBillingPeriod& GetInvoiceBillingPeriod() const { return m_invoiceBillingPeriod; }
  inline bool InvoiceBillingPeriodHasBeenSet() const { return m_invoiceBillingPeriodHasBeenSet; }
  template <typename InvoiceBillingPeriodT = InvoiceBillingPeriod>
  void SetInvoiceBillingPeriod(InvoiceBillingPeriodT&& value) {
    m_invoiceBillingPeriodHasBeenSet = true;
    m_invoiceBillingPeriod = std::forward<InvoiceBillingPeriodT>(value);
  }
  template <typename InvoiceBillingPeriodT = InvoiceBillingPeriod>
  AgreementInvoiceLineItemGroupSummary& WithInvoiceBillingPeriod(InvoiceBillingPeriodT&& value) {
    SetInvoiceBillingPeriod(std::forward<InvoiceBillingPeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the invoice containing this group was created.</p>
   */
  inline const Aws::Utils::DateTime& GetIssuedTime() const { return m_issuedTime; }
  inline bool IssuedTimeHasBeenSet() const { return m_issuedTimeHasBeenSet; }
  template <typename IssuedTimeT = Aws::Utils::DateTime>
  void SetIssuedTime(IssuedTimeT&& value) {
    m_issuedTimeHasBeenSet = true;
    m_issuedTime = std::forward<IssuedTimeT>(value);
  }
  template <typename IssuedTimeT = Aws::Utils::DateTime>
  AgreementInvoiceLineItemGroupSummary& WithIssuedTime(IssuedTimeT&& value) {
    SetIssuedTime(std::forward<IssuedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of invoice. Valid values are <code>INVOICE</code> and
   * <code>CREDIT_MEMO</code>.</p>
   */
  inline InvoiceType GetInvoiceType() const { return m_invoiceType; }
  inline bool InvoiceTypeHasBeenSet() const { return m_invoiceTypeHasBeenSet; }
  inline void SetInvoiceType(InvoiceType value) {
    m_invoiceTypeHasBeenSet = true;
    m_invoiceType = value;
  }
  inline AgreementInvoiceLineItemGroupSummary& WithInvoiceType(InvoiceType value) {
    SetInvoiceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity that issues the invoice.</p>
   */
  inline const InvoicingEntity& GetInvoicingEntity() const { return m_invoicingEntity; }
  inline bool InvoicingEntityHasBeenSet() const { return m_invoicingEntityHasBeenSet; }
  template <typename InvoicingEntityT = InvoicingEntity>
  void SetInvoicingEntity(InvoicingEntityT&& value) {
    m_invoicingEntityHasBeenSet = true;
    m_invoicingEntity = std::forward<InvoicingEntityT>(value);
  }
  template <typename InvoicingEntityT = InvoicingEntity>
  AgreementInvoiceLineItemGroupSummary& WithInvoicingEntity(InvoicingEntityT&& value) {
    SetInvoicingEntity(std::forward<InvoicingEntityT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agreementId;

  Aws::String m_invoiceId;

  PricingCurrencyAmount m_pricingCurrencyAmount;

  InvoiceBillingPeriod m_invoiceBillingPeriod;

  Aws::Utils::DateTime m_issuedTime{};

  InvoiceType m_invoiceType{InvoiceType::NOT_SET};

  InvoicingEntity m_invoicingEntity;
  bool m_agreementIdHasBeenSet = false;
  bool m_invoiceIdHasBeenSet = false;
  bool m_pricingCurrencyAmountHasBeenSet = false;
  bool m_invoiceBillingPeriodHasBeenSet = false;
  bool m_issuedTimeHasBeenSet = false;
  bool m_invoiceTypeHasBeenSet = false;
  bool m_invoicingEntityHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
