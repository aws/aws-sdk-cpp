/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/payments/PaymentsRequest.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/FinancialRecordSortField.h>
#include <aws/payments/model/FinancialRecordType.h>
#include <aws/payments/model/SettlementStatus.h>
#include <aws/payments/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace Payments {
namespace Model {

/**
 */
class ListFinancialRecordsRequest : public PaymentsRequest {
 public:
  AWS_PAYMENTS_API ListFinancialRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListFinancialRecords"; }

  AWS_PAYMENTS_API Aws::String SerializePayload() const override;

  AWS_PAYMENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The financial record types to return. The following values are valid:</p>
   * <ul> <li> <p> <code>INVOICE</code> – An invoice: a bill from Amazon Web
   * Services. Payments and credit memos applied to the invoice settle it.</p> </li>
   * <li> <p> <code>CREDIT_MEMO</code> – A credit memo: a credit issued to your
   * account, for example for a billing correction or a service credit. Applying it
   * to one or more invoices settles it.</p> </li> </ul>
   */
  inline const Aws::Vector<FinancialRecordType>& GetTypes() const { return m_types; }
  inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
  template <typename TypesT = Aws::Vector<FinancialRecordType>>
  void SetTypes(TypesT&& value) {
    m_typesHasBeenSet = true;
    m_types = std::forward<TypesT>(value);
  }
  template <typename TypesT = Aws::Vector<FinancialRecordType>>
  ListFinancialRecordsRequest& WithTypes(TypesT&& value) {
    SetTypes(std::forward<TypesT>(value));
    return *this;
  }
  inline ListFinancialRecordsRequest& AddTypes(FinancialRecordType value) {
    m_typesHasBeenSet = true;
    m_types.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The settlement statuses to filter by. <code>OPEN</code> returns records whose
   * <code>status</code> is <code>OUTSTANDING</code> or <code>PROCESSING</code>.
   * <code>CLOSED</code> returns records whose <code>status</code> is
   * <code>SETTLED</code> or <code>CANCELED</code>. When you omit this member, the
   * operation returns records with both settlement statuses.</p>
   */
  inline const Aws::Vector<SettlementStatus>& GetSettlementStatuses() const { return m_settlementStatuses; }
  inline bool SettlementStatusesHasBeenSet() const { return m_settlementStatusesHasBeenSet; }
  template <typename SettlementStatusesT = Aws::Vector<SettlementStatus>>
  void SetSettlementStatuses(SettlementStatusesT&& value) {
    m_settlementStatusesHasBeenSet = true;
    m_settlementStatuses = std::forward<SettlementStatusesT>(value);
  }
  template <typename SettlementStatusesT = Aws::Vector<SettlementStatus>>
  ListFinancialRecordsRequest& WithSettlementStatuses(SettlementStatusesT&& value) {
    SetSettlementStatuses(std::forward<SettlementStatusesT>(value));
    return *this;
  }
  inline ListFinancialRecordsRequest& AddSettlementStatuses(SettlementStatus value) {
    m_settlementStatusesHasBeenSet = true;
    m_settlementStatuses.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest date and time to return records for, inclusive. The operation
   * returns the records that were issued at or after this time.</p>
   */
  inline const Aws::Utils::DateTime& GetIssuedAfter() const { return m_issuedAfter; }
  inline bool IssuedAfterHasBeenSet() const { return m_issuedAfterHasBeenSet; }
  template <typename IssuedAfterT = Aws::Utils::DateTime>
  void SetIssuedAfter(IssuedAfterT&& value) {
    m_issuedAfterHasBeenSet = true;
    m_issuedAfter = std::forward<IssuedAfterT>(value);
  }
  template <typename IssuedAfterT = Aws::Utils::DateTime>
  ListFinancialRecordsRequest& WithIssuedAfter(IssuedAfterT&& value) {
    SetIssuedAfter(std::forward<IssuedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest date and time to return records for, exclusive. The operation
   * returns the records that were issued before this time. When you specify both
   * <code>issuedAfter</code> and <code>issuedBefore</code>,
   * <code>issuedBefore</code> must be later than <code>issuedAfter</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetIssuedBefore() const { return m_issuedBefore; }
  inline bool IssuedBeforeHasBeenSet() const { return m_issuedBeforeHasBeenSet; }
  template <typename IssuedBeforeT = Aws::Utils::DateTime>
  void SetIssuedBefore(IssuedBeforeT&& value) {
    m_issuedBeforeHasBeenSet = true;
    m_issuedBefore = std::forward<IssuedBeforeT>(value);
  }
  template <typename IssuedBeforeT = Aws::Utils::DateTime>
  ListFinancialRecordsRequest& WithIssuedBefore(IssuedBeforeT&& value) {
    SetIssuedBefore(std::forward<IssuedBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort the results by. The default is <code>ISSUED_AT</code>, the
   * date and time when the record was issued.</p>
   */
  inline FinancialRecordSortField GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(FinancialRecordSortField value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListFinancialRecordsRequest& WithSortBy(FinancialRecordSortField value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The order to sort the results in. The default is <code>DESCENDING</code>,
   * which returns the newest records first. <code>ASCENDING</code> returns the
   * oldest records first.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListFinancialRecordsRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token from the <code>nextToken</code> of the previous
   * response. Omit it to get the first page. Tokens expire. If the token is
   * malformed or expired, or doesn't match the original request, the request fails
   * with <code>ValidationException</code> and the reason
   * <code>INVALID_PAGINATION_TOKEN</code>. In that case, start again from the first
   * page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFinancialRecordsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in one page. The default is 100. A
   * page can contain fewer results even when more remain. Use <code>nextToken</code>
   * to find out whether more results are available.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListFinancialRecordsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FinancialRecordType> m_types;

  Aws::Vector<SettlementStatus> m_settlementStatuses;

  Aws::Utils::DateTime m_issuedAfter{};

  Aws::Utils::DateTime m_issuedBefore{};

  FinancialRecordSortField m_sortBy{FinancialRecordSortField::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_typesHasBeenSet = false;
  bool m_settlementStatusesHasBeenSet = false;
  bool m_issuedAfterHasBeenSet = false;
  bool m_issuedBeforeHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
