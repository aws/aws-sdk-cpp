/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/CreditMemoDetails.h>
#include <aws/payments/model/InvoiceDetails.h>

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
 * <p>The attributes that exist only for one type of financial record. The
 * populated member matches the record's <code>type</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/FinancialRecordDetails">AWS
 * API Reference</a></p>
 */
class FinancialRecordDetails {
 public:
  AWS_PAYMENTS_API FinancialRecordDetails() = default;
  AWS_PAYMENTS_API FinancialRecordDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API FinancialRecordDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The details of an invoice. Populated when <code>type</code> is
   * <code>INVOICE</code>.</p>
   */
  inline const InvoiceDetails& GetInvoiceDetails() const { return m_invoiceDetails; }
  inline bool InvoiceDetailsHasBeenSet() const { return m_invoiceDetailsHasBeenSet; }
  template <typename InvoiceDetailsT = InvoiceDetails>
  void SetInvoiceDetails(InvoiceDetailsT&& value) {
    m_invoiceDetailsHasBeenSet = true;
    m_invoiceDetails = std::forward<InvoiceDetailsT>(value);
  }
  template <typename InvoiceDetailsT = InvoiceDetails>
  FinancialRecordDetails& WithInvoiceDetails(InvoiceDetailsT&& value) {
    SetInvoiceDetails(std::forward<InvoiceDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of a credit memo. Populated when <code>type</code> is
   * <code>CREDIT_MEMO</code>.</p>
   */
  inline const CreditMemoDetails& GetCreditMemoDetails() const { return m_creditMemoDetails; }
  inline bool CreditMemoDetailsHasBeenSet() const { return m_creditMemoDetailsHasBeenSet; }
  template <typename CreditMemoDetailsT = CreditMemoDetails>
  void SetCreditMemoDetails(CreditMemoDetailsT&& value) {
    m_creditMemoDetailsHasBeenSet = true;
    m_creditMemoDetails = std::forward<CreditMemoDetailsT>(value);
  }
  template <typename CreditMemoDetailsT = CreditMemoDetails>
  FinancialRecordDetails& WithCreditMemoDetails(CreditMemoDetailsT&& value) {
    SetCreditMemoDetails(std::forward<CreditMemoDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  InvoiceDetails m_invoiceDetails;

  CreditMemoDetails m_creditMemoDetails;
  bool m_invoiceDetailsHasBeenSet = false;
  bool m_creditMemoDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
