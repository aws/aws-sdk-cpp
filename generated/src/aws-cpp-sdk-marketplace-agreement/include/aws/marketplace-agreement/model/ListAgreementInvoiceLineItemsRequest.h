/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/InvoiceBillingPeriod.h>
#include <aws/marketplace-agreement/model/InvoiceType.h>
#include <aws/marketplace-agreement/model/LineItemGroupBy.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class ListAgreementInvoiceLineItemsRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API ListAgreementInvoiceLineItemsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAgreementInvoiceLineItems"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

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
  ListAgreementInvoiceLineItemsRequest& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies a grouping strategy for line items. Currently supports
   * <code>INVOICE_ID</code>.</p>
   */
  inline LineItemGroupBy GetGroupBy() const { return m_groupBy; }
  inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
  inline void SetGroupBy(LineItemGroupBy value) {
    m_groupByHasBeenSet = true;
    m_groupBy = value;
  }
  inline ListAgreementInvoiceLineItemsRequest& WithGroupBy(LineItemGroupBy value) {
    SetGroupBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter to retrieve invoice information for a specific
   * invoice.</p>
   */
  inline const Aws::String& GetInvoiceId() const { return m_invoiceId; }
  inline bool InvoiceIdHasBeenSet() const { return m_invoiceIdHasBeenSet; }
  template <typename InvoiceIdT = Aws::String>
  void SetInvoiceId(InvoiceIdT&& value) {
    m_invoiceIdHasBeenSet = true;
    m_invoiceId = std::forward<InvoiceIdT>(value);
  }
  template <typename InvoiceIdT = Aws::String>
  ListAgreementInvoiceLineItemsRequest& WithInvoiceId(InvoiceIdT&& value) {
    SetInvoiceId(std::forward<InvoiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter for the type of invoice. Valid values are
   * <code>INVOICE</code> and <code>CREDIT_MEMO</code>.</p>
   */
  inline InvoiceType GetInvoiceType() const { return m_invoiceType; }
  inline bool InvoiceTypeHasBeenSet() const { return m_invoiceTypeHasBeenSet; }
  inline void SetInvoiceType(InvoiceType value) {
    m_invoiceTypeHasBeenSet = true;
    m_invoiceType = value;
  }
  inline ListAgreementInvoiceLineItemsRequest& WithInvoiceType(InvoiceType value) {
    SetInvoiceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter for the billing period associated with the invoice.</p>
   */
  inline const InvoiceBillingPeriod& GetInvoiceBillingPeriod() const { return m_invoiceBillingPeriod; }
  inline bool InvoiceBillingPeriodHasBeenSet() const { return m_invoiceBillingPeriodHasBeenSet; }
  template <typename InvoiceBillingPeriodT = InvoiceBillingPeriod>
  void SetInvoiceBillingPeriod(InvoiceBillingPeriodT&& value) {
    m_invoiceBillingPeriodHasBeenSet = true;
    m_invoiceBillingPeriod = std::forward<InvoiceBillingPeriodT>(value);
  }
  template <typename InvoiceBillingPeriodT = InvoiceBillingPeriod>
  ListAgreementInvoiceLineItemsRequest& WithInvoiceBillingPeriod(InvoiceBillingPeriodT&& value) {
    SetInvoiceBillingPeriod(std::forward<InvoiceBillingPeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter for invoices issued before the specified timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetBeforeIssuedTime() const { return m_beforeIssuedTime; }
  inline bool BeforeIssuedTimeHasBeenSet() const { return m_beforeIssuedTimeHasBeenSet; }
  template <typename BeforeIssuedTimeT = Aws::Utils::DateTime>
  void SetBeforeIssuedTime(BeforeIssuedTimeT&& value) {
    m_beforeIssuedTimeHasBeenSet = true;
    m_beforeIssuedTime = std::forward<BeforeIssuedTimeT>(value);
  }
  template <typename BeforeIssuedTimeT = Aws::Utils::DateTime>
  ListAgreementInvoiceLineItemsRequest& WithBeforeIssuedTime(BeforeIssuedTimeT&& value) {
    SetBeforeIssuedTime(std::forward<BeforeIssuedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter for invoices issued after the specified timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetAfterIssuedTime() const { return m_afterIssuedTime; }
  inline bool AfterIssuedTimeHasBeenSet() const { return m_afterIssuedTimeHasBeenSet; }
  template <typename AfterIssuedTimeT = Aws::Utils::DateTime>
  void SetAfterIssuedTime(AfterIssuedTimeT&& value) {
    m_afterIssuedTimeHasBeenSet = true;
    m_afterIssuedTime = std::forward<AfterIssuedTimeT>(value);
  }
  template <typename AfterIssuedTimeT = Aws::Utils::DateTime>
  ListAgreementInvoiceLineItemsRequest& WithAfterIssuedTime(AfterIssuedTimeT&& value) {
    SetAfterIssuedTime(std::forward<AfterIssuedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in the response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAgreementInvoiceLineItemsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to specify where to start pagination.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAgreementInvoiceLineItemsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agreementId;

  LineItemGroupBy m_groupBy{LineItemGroupBy::NOT_SET};

  Aws::String m_invoiceId;

  InvoiceType m_invoiceType{InvoiceType::NOT_SET};

  InvoiceBillingPeriod m_invoiceBillingPeriod;

  Aws::Utils::DateTime m_beforeIssuedTime{};

  Aws::Utils::DateTime m_afterIssuedTime{};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_agreementIdHasBeenSet = false;
  bool m_groupByHasBeenSet = false;
  bool m_invoiceIdHasBeenSet = false;
  bool m_invoiceTypeHasBeenSet = false;
  bool m_invoiceBillingPeriodHasBeenSet = false;
  bool m_beforeIssuedTimeHasBeenSet = false;
  bool m_afterIssuedTimeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
