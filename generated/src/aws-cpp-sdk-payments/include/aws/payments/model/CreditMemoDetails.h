/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/BillingPeriod.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Payments {
namespace Model {

/**
 * <p>The details of a credit memo: the invoice ID that Amazon Web Services
 * Invoicing issued for it and the billing period that it applies to.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/CreditMemoDetails">AWS
 * API Reference</a></p>
 */
class CreditMemoDetails {
 public:
  AWS_PAYMENTS_API CreditMemoDetails() = default;
  AWS_PAYMENTS_API CreditMemoDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API CreditMemoDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The invoice ID that Amazon Web Services Invoicing issued for the credit memo:
   * the document number printed on it, shown in the Amazon Web Services Billing and
   * Cost Management console and returned by the Amazon Web Services Invoicing API as
   * <code>InvoiceId</code>. <code>GetFinancialRecord</code> and
   * <code>BatchGetFinancialRecord</code> also accept it, as
   * <code>invoiceIdentifier</code>.</p>
   */
  inline const Aws::String& GetInvoiceId() const { return m_invoiceId; }
  inline bool InvoiceIdHasBeenSet() const { return m_invoiceIdHasBeenSet; }
  template <typename InvoiceIdT = Aws::String>
  void SetInvoiceId(InvoiceIdT&& value) {
    m_invoiceIdHasBeenSet = true;
    m_invoiceId = std::forward<InvoiceIdT>(value);
  }
  template <typename InvoiceIdT = Aws::String>
  CreditMemoDetails& WithInvoiceId(InvoiceIdT&& value) {
    SetInvoiceId(std::forward<InvoiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The billing period the credit memo applies to: the period of the usage it
   * credits.</p>
   */
  inline const BillingPeriod& GetBillingPeriod() const { return m_billingPeriod; }
  inline bool BillingPeriodHasBeenSet() const { return m_billingPeriodHasBeenSet; }
  template <typename BillingPeriodT = BillingPeriod>
  void SetBillingPeriod(BillingPeriodT&& value) {
    m_billingPeriodHasBeenSet = true;
    m_billingPeriod = std::forward<BillingPeriodT>(value);
  }
  template <typename BillingPeriodT = BillingPeriod>
  CreditMemoDetails& WithBillingPeriod(BillingPeriodT&& value) {
    SetBillingPeriod(std::forward<BillingPeriodT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_invoiceId;

  BillingPeriod m_billingPeriod;
  bool m_invoiceIdHasBeenSet = false;
  bool m_billingPeriodHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
