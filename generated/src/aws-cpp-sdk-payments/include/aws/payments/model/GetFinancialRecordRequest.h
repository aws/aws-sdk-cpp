/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/PaymentsRequest.h>
#include <aws/payments/Payments_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Payments {
namespace Model {

/**
 */
class GetFinancialRecordRequest : public PaymentsRequest {
 public:
  AWS_PAYMENTS_API GetFinancialRecordRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetFinancialRecord"; }

  AWS_PAYMENTS_API Aws::String SerializePayload() const override;

  AWS_PAYMENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID that Amazon Web Services Payments issued for the financial record, as
   * returned in <code>id</code>.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  GetFinancialRecordRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The invoice ID that Amazon Web Services Invoicing issued for an invoice or a
   * credit memo. The operation returns the record that has this invoice ID.</p>
   */
  inline const Aws::String& GetInvoiceIdentifier() const { return m_invoiceIdentifier; }
  inline bool InvoiceIdentifierHasBeenSet() const { return m_invoiceIdentifierHasBeenSet; }
  template <typename InvoiceIdentifierT = Aws::String>
  void SetInvoiceIdentifier(InvoiceIdentifierT&& value) {
    m_invoiceIdentifierHasBeenSet = true;
    m_invoiceIdentifier = std::forward<InvoiceIdentifierT>(value);
  }
  template <typename InvoiceIdentifierT = Aws::String>
  GetFinancialRecordRequest& WithInvoiceIdentifier(InvoiceIdentifierT&& value) {
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
