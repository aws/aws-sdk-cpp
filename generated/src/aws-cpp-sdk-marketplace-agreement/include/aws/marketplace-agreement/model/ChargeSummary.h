/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/EstimatedTaxes.h>
#include <aws/marketplace-agreement/model/ExpectedCharge.h>
#include <aws/marketplace-agreement/model/InvoicingEntity.h>
#include <aws/marketplace-agreement/model/ItemizedCharge.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>The <code>ChargeSummary</code> provides a detailed breakdown of charges that
 * are associated with an agreement request. This is applicable only when a request
 * is created for a <code>PurchaseAgreement</code>.</p>  <p>Tax and invoicing
 * fields (such as <code>estimatedTaxes</code>, <code>amountAfterTax</code>,
 * <code>newAgreementValueAfterTax</code>, and <code>invoicingEntity</code>) are
 * returned on a best-effort basis and do not cause the request to fail if
 * unavailable.</p> <p>A <code>null</code> tax amount can have two meanings:</p>
 * <ul> <li> <p>Tax estimation was unavailable at the time of the request.</p>
 * </li> <li> <p>The charge timing is <code>BILLING_PERIOD</code>, so the charge
 * amount is not determined at request time. In this case, the tax breakdown may
 * still include the tax <code>rate</code> and <code>type</code>.</p> </li> </ul>
 * <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/ChargeSummary">AWS
 * API Reference</a></p>
 */
class ChargeSummary {
 public:
  AWS_AGREEMENTSERVICE_API ChargeSummary() = default;
  AWS_AGREEMENTSERVICE_API ChargeSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API ChargeSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The three-letter currency code for all charges (e.g., USD).</p>
   */
  inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
  inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
  template <typename CurrencyCodeT = Aws::String>
  void SetCurrencyCode(CurrencyCodeT&& value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = std::forward<CurrencyCodeT>(value);
  }
  template <typename CurrencyCodeT = Aws::String>
  ChargeSummary& WithCurrencyCode(CurrencyCodeT&& value) {
    SetCurrencyCode(std::forward<CurrencyCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total value of the agreement, which includes any amendments.</p>
   */
  inline const Aws::String& GetNewAgreementValue() const { return m_newAgreementValue; }
  inline bool NewAgreementValueHasBeenSet() const { return m_newAgreementValueHasBeenSet; }
  template <typename NewAgreementValueT = Aws::String>
  void SetNewAgreementValue(NewAgreementValueT&& value) {
    m_newAgreementValueHasBeenSet = true;
    m_newAgreementValue = std::forward<NewAgreementValueT>(value);
  }
  template <typename NewAgreementValueT = Aws::String>
  ChargeSummary& WithNewAgreementValue(NewAgreementValueT&& value) {
    SetNewAgreementValue(std::forward<NewAgreementValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Expected new agreement value after estimated taxes are applied.</p>
   */
  inline const Aws::String& GetNewAgreementValueAfterTax() const { return m_newAgreementValueAfterTax; }
  inline bool NewAgreementValueAfterTaxHasBeenSet() const { return m_newAgreementValueAfterTaxHasBeenSet; }
  template <typename NewAgreementValueAfterTaxT = Aws::String>
  void SetNewAgreementValueAfterTax(NewAgreementValueAfterTaxT&& value) {
    m_newAgreementValueAfterTaxHasBeenSet = true;
    m_newAgreementValueAfterTax = std::forward<NewAgreementValueAfterTaxT>(value);
  }
  template <typename NewAgreementValueAfterTaxT = Aws::String>
  ChargeSummary& WithNewAgreementValueAfterTax(NewAgreementValueAfterTaxT&& value) {
    SetNewAgreementValueAfterTax(std::forward<NewAgreementValueAfterTaxT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of expected charges for the agreement request.</p>
   */
  inline const Aws::Vector<ExpectedCharge>& GetExpectedCharges() const { return m_expectedCharges; }
  inline bool ExpectedChargesHasBeenSet() const { return m_expectedChargesHasBeenSet; }
  template <typename ExpectedChargesT = Aws::Vector<ExpectedCharge>>
  void SetExpectedCharges(ExpectedChargesT&& value) {
    m_expectedChargesHasBeenSet = true;
    m_expectedCharges = std::forward<ExpectedChargesT>(value);
  }
  template <typename ExpectedChargesT = Aws::Vector<ExpectedCharge>>
  ChargeSummary& WithExpectedCharges(ExpectedChargesT&& value) {
    SetExpectedCharges(std::forward<ExpectedChargesT>(value));
    return *this;
  }
  template <typename ExpectedChargesT = ExpectedCharge>
  ChargeSummary& AddExpectedCharges(ExpectedChargesT&& value) {
    m_expectedChargesHasBeenSet = true;
    m_expectedCharges.emplace_back(std::forward<ExpectedChargesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides an aggregated view of estimated tax information for the
   * agreement.</p>
   */
  inline const EstimatedTaxes& GetEstimatedTaxes() const { return m_estimatedTaxes; }
  inline bool EstimatedTaxesHasBeenSet() const { return m_estimatedTaxesHasBeenSet; }
  template <typename EstimatedTaxesT = EstimatedTaxes>
  void SetEstimatedTaxes(EstimatedTaxesT&& value) {
    m_estimatedTaxesHasBeenSet = true;
    m_estimatedTaxes = std::forward<EstimatedTaxesT>(value);
  }
  template <typename EstimatedTaxesT = EstimatedTaxes>
  ChargeSummary& WithEstimatedTaxes(EstimatedTaxesT&& value) {
    SetEstimatedTaxes(std::forward<EstimatedTaxesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An itemized list of charges for the agreement request.</p>
   */
  inline const Aws::Vector<ItemizedCharge>& GetItemizedCharges() const { return m_itemizedCharges; }
  inline bool ItemizedChargesHasBeenSet() const { return m_itemizedChargesHasBeenSet; }
  template <typename ItemizedChargesT = Aws::Vector<ItemizedCharge>>
  void SetItemizedCharges(ItemizedChargesT&& value) {
    m_itemizedChargesHasBeenSet = true;
    m_itemizedCharges = std::forward<ItemizedChargesT>(value);
  }
  template <typename ItemizedChargesT = Aws::Vector<ItemizedCharge>>
  ChargeSummary& WithItemizedCharges(ItemizedChargesT&& value) {
    SetItemizedCharges(std::forward<ItemizedChargesT>(value));
    return *this;
  }
  template <typename ItemizedChargesT = ItemizedCharge>
  ChargeSummary& AddItemizedCharges(ItemizedChargesT&& value) {
    m_itemizedChargesHasBeenSet = true;
    m_itemizedCharges.emplace_back(std::forward<ItemizedChargesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity responsible for issuing the invoice.</p>
   */
  inline const InvoicingEntity& GetInvoicingEntity() const { return m_invoicingEntity; }
  inline bool InvoicingEntityHasBeenSet() const { return m_invoicingEntityHasBeenSet; }
  template <typename InvoicingEntityT = InvoicingEntity>
  void SetInvoicingEntity(InvoicingEntityT&& value) {
    m_invoicingEntityHasBeenSet = true;
    m_invoicingEntity = std::forward<InvoicingEntityT>(value);
  }
  template <typename InvoicingEntityT = InvoicingEntity>
  ChargeSummary& WithInvoicingEntity(InvoicingEntityT&& value) {
    SetInvoicingEntity(std::forward<InvoicingEntityT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_currencyCode;

  Aws::String m_newAgreementValue;

  Aws::String m_newAgreementValueAfterTax;

  Aws::Vector<ExpectedCharge> m_expectedCharges;

  EstimatedTaxes m_estimatedTaxes;

  Aws::Vector<ItemizedCharge> m_itemizedCharges;

  InvoicingEntity m_invoicingEntity;
  bool m_currencyCodeHasBeenSet = false;
  bool m_newAgreementValueHasBeenSet = false;
  bool m_newAgreementValueAfterTaxHasBeenSet = false;
  bool m_expectedChargesHasBeenSet = false;
  bool m_estimatedTaxesHasBeenSet = false;
  bool m_itemizedChargesHasBeenSet = false;
  bool m_invoicingEntityHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
