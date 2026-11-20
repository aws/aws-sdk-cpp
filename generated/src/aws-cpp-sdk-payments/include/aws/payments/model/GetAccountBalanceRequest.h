/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/PaymentsRequest.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/BalanceType.h>

#include <utility>

namespace Aws {
namespace Payments {
namespace Model {

/**
 */
class GetAccountBalanceRequest : public PaymentsRequest {
 public:
  AWS_PAYMENTS_API GetAccountBalanceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAccountBalance"; }

  AWS_PAYMENTS_API Aws::String SerializePayload() const override;

  AWS_PAYMENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The balance to retrieve. You can specify only one balance type in a single
   * request. Each balance adds up the <code>outstanding</code> balance of the
   * records that have the status <code>OUTSTANDING</code>. A record that is
   * <code>PROCESSING</code>, <code>SETTLED</code>, or <code>CANCELED</code> isn't
   * included, even when part of its amount is outstanding. The following values are
   * valid:</p> <ul> <li> <p> <code>INVOICES_DUE</code> – The outstanding balance of
   * your <code>OUTSTANDING</code> invoices that aren't past their due date, where
   * <code>dueStatus</code> is <code>DUE</code>.</p> </li> <li> <p>
   * <code>INVOICES_PAST_DUE</code> – The outstanding balance of your
   * <code>OUTSTANDING</code> invoices that are past their due date, where
   * <code>dueStatus</code> is <code>PAST_DUE</code>.</p> </li> <li> <p>
   * <code>OUTSTANDING_CREDIT_MEMOS</code> – The outstanding balance of your
   * <code>OUTSTANDING</code> credit memos: the credit that isn't yet applied to an
   * invoice.</p> </li> </ul>
   */
  inline BalanceType GetBalanceType() const { return m_balanceType; }
  inline bool BalanceTypeHasBeenSet() const { return m_balanceTypeHasBeenSet; }
  inline void SetBalanceType(BalanceType value) {
    m_balanceTypeHasBeenSet = true;
    m_balanceType = value;
  }
  inline GetAccountBalanceRequest& WithBalanceType(BalanceType value) {
    SetBalanceType(value);
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
  GetAccountBalanceRequest& WithNextToken(NextTokenT&& value) {
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
  inline GetAccountBalanceRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  BalanceType m_balanceType{BalanceType::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_balanceTypeHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
