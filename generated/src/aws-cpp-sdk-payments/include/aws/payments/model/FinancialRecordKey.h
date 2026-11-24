/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>

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
 * <p>A way to identify a financial record. Specify exactly one member: the ID that
 * Amazon Web Services Payments issued, in <code>identifier</code>, or the invoice
 * ID that Amazon Web Services Invoicing issued, in <code>invoiceIdentifier</code>.
 * If you specify both or neither, the request fails with
 * <code>ValidationException</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/FinancialRecordKey">AWS
 * API Reference</a></p>
 */
class FinancialRecordKey {
 public:
  AWS_PAYMENTS_API FinancialRecordKey() = default;
  AWS_PAYMENTS_API FinancialRecordKey(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API FinancialRecordKey& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID that Amazon Web Services Payments issued for the record.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  FinancialRecordKey& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The invoice ID that Amazon Web Services Invoicing issued for an invoice or a
   * credit memo.</p>
   */
  inline const Aws::String& GetInvoiceIdentifier() const { return m_invoiceIdentifier; }
  inline bool InvoiceIdentifierHasBeenSet() const { return m_invoiceIdentifierHasBeenSet; }
  template <typename InvoiceIdentifierT = Aws::String>
  void SetInvoiceIdentifier(InvoiceIdentifierT&& value) {
    m_invoiceIdentifierHasBeenSet = true;
    m_invoiceIdentifier = std::forward<InvoiceIdentifierT>(value);
  }
  template <typename InvoiceIdentifierT = Aws::String>
  FinancialRecordKey& WithInvoiceIdentifier(InvoiceIdentifierT&& value) {
    SetInvoiceIdentifier(std::forward<InvoiceIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  Aws::String m_invoiceIdentifier;
  bool m_identifierHasBeenSet = false;
  bool m_invoiceIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
