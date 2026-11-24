/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/BillingPeriod.h>
#include <aws/payments/model/DueStatus.h>
#include <aws/payments/model/InvoiceFrequency.h>

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
 * <p>The details of an invoice: the invoice ID that Amazon Web Services Invoicing
 * issued, the billing period that the invoice covers, its due date and due status,
 * its payment terms, and its frequency.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/InvoiceDetails">AWS
 * API Reference</a></p>
 */
class InvoiceDetails {
 public:
  AWS_PAYMENTS_API InvoiceDetails() = default;
  AWS_PAYMENTS_API InvoiceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API InvoiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The invoice ID that Amazon Web Services Invoicing issued for the invoice: the
   * document number printed on it, shown in the Amazon Web Services Billing and Cost
   * Management console and returned by the Amazon Web Services Invoicing API as
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
  InvoiceDetails& WithInvoiceId(InvoiceIdT&& value) {
    SetInvoiceId(std::forward<InvoiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the invoice is due or past its due date. This member is present only
   * while the invoice's <code>status</code> is <code>OUTSTANDING</code>. It's absent
   * when the <code>status</code> is <code>PROCESSING</code>, <code>SETTLED</code>,
   * or <code>CANCELED</code>. The following values are valid:</p> <ul> <li> <p>
   * <code>DUE</code> – The due date hasn't passed.</p> </li> <li> <p>
   * <code>PAST_DUE</code> – The due date has passed, and the invoice is still
   * outstanding.</p> </li> </ul>
   */
  inline DueStatus GetDueStatus() const { return m_dueStatus; }
  inline bool DueStatusHasBeenSet() const { return m_dueStatusHasBeenSet; }
  inline void SetDueStatus(DueStatus value) {
    m_dueStatusHasBeenSet = true;
    m_dueStatus = value;
  }
  inline InvoiceDetails& WithDueStatus(DueStatus value) {
    SetDueStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The billing period the invoice covers: the period of the usage it bills.</p>
   */
  inline const BillingPeriod& GetBillingPeriod() const { return m_billingPeriod; }
  inline bool BillingPeriodHasBeenSet() const { return m_billingPeriodHasBeenSet; }
  template <typename BillingPeriodT = BillingPeriod>
  void SetBillingPeriod(BillingPeriodT&& value) {
    m_billingPeriodHasBeenSet = true;
    m_billingPeriod = std::forward<BillingPeriodT>(value);
  }
  template <typename BillingPeriodT = BillingPeriod>
  InvoiceDetails& WithBillingPeriod(BillingPeriodT&& value) {
    SetBillingPeriod(std::forward<BillingPeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The calendar date by which the invoice must be paid, as the timestamp of
   * 00:00:00 UTC on that day. The invoice is past due from the following day.</p>
   */
  inline const Aws::Utils::DateTime& GetDueDate() const { return m_dueDate; }
  inline bool DueDateHasBeenSet() const { return m_dueDateHasBeenSet; }
  template <typename DueDateT = Aws::Utils::DateTime>
  void SetDueDate(DueDateT&& value) {
    m_dueDateHasBeenSet = true;
    m_dueDate = std::forward<DueDateT>(value);
  }
  template <typename DueDateT = Aws::Utils::DateTime>
  InvoiceDetails& WithDueDate(DueDateT&& value) {
    SetDueDate(std::forward<DueDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment terms for the invoice, as Amazon Web Services Invoicing issued
   * them, such as <code>Net30</code>. The due date follows from these terms. This
   * member is absent when Amazon Web Services Invoicing didn't issue payment terms
   * for the invoice.</p>
   */
  inline const Aws::String& GetPaymentTerms() const { return m_paymentTerms; }
  inline bool PaymentTermsHasBeenSet() const { return m_paymentTermsHasBeenSet; }
  template <typename PaymentTermsT = Aws::String>
  void SetPaymentTerms(PaymentTermsT&& value) {
    m_paymentTermsHasBeenSet = true;
    m_paymentTerms = std::forward<PaymentTermsT>(value);
  }
  template <typename PaymentTermsT = Aws::String>
  InvoiceDetails& WithPaymentTerms(PaymentTermsT&& value) {
    SetPaymentTerms(std::forward<PaymentTermsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the invoice was issued once or as part of a billing cycle. The
   * following values are valid:</p> <ul> <li> <p> <code>ONE_TIME</code> – A single
   * invoice that isn't part of a billing cycle.</p> </li> <li> <p>
   * <code>RECURRING</code> – One invoice of a billing cycle, such as your monthly
   * invoice.</p> </li> </ul>
   */
  inline InvoiceFrequency GetInvoiceFrequency() const { return m_invoiceFrequency; }
  inline bool InvoiceFrequencyHasBeenSet() const { return m_invoiceFrequencyHasBeenSet; }
  inline void SetInvoiceFrequency(InvoiceFrequency value) {
    m_invoiceFrequencyHasBeenSet = true;
    m_invoiceFrequency = value;
  }
  inline InvoiceDetails& WithInvoiceFrequency(InvoiceFrequency value) {
    SetInvoiceFrequency(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_invoiceId;

  DueStatus m_dueStatus{DueStatus::NOT_SET};

  BillingPeriod m_billingPeriod;

  Aws::Utils::DateTime m_dueDate{};

  Aws::String m_paymentTerms;

  InvoiceFrequency m_invoiceFrequency{InvoiceFrequency::NOT_SET};
  bool m_invoiceIdHasBeenSet = false;
  bool m_dueStatusHasBeenSet = false;
  bool m_billingPeriodHasBeenSet = false;
  bool m_dueDateHasBeenSet = false;
  bool m_paymentTermsHasBeenSet = false;
  bool m_invoiceFrequencyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
