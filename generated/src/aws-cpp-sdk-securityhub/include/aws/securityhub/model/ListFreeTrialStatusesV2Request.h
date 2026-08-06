/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FreeTrialStatusValue.h>

#include <utility>

namespace Aws {
namespace SecurityHub {
namespace Model {

/**
 */
class ListFreeTrialStatusesV2Request : public SecurityHubRequest {
 public:
  AWS_SECURITYHUB_API ListFreeTrialStatusesV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListFreeTrialStatusesV2"; }

  AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Web Services account identifiers to list free trial status for.
   * You can specify accounts other than your own only if you are a delegated
   * Security Hub administrator.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
  inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  void SetAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds = std::forward<AccountIdsT>(value);
  }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  ListFreeTrialStatusesV2Request& WithAccountIds(AccountIdsT&& value) {
    SetAccountIds(std::forward<AccountIdsT>(value));
    return *this;
  }
  template <typename AccountIdsT = Aws::String>
  ListFreeTrialStatusesV2Request& AddAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds.emplace_back(std::forward<AccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The free trial statuses to filter the results by. Valid values:</p> <ul> <li>
   * <p> <code>ACTIVE</code> returns only features with an ongoing free trial
   * period.</p> </li> <li> <p> <code>INACTIVE</code> returns only features whose
   * free trial period has ended, or that never started.</p> </li> </ul>
   */
  inline const Aws::Vector<FreeTrialStatusValue>& GetStatuses() const { return m_statuses; }
  inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
  template <typename StatusesT = Aws::Vector<FreeTrialStatusValue>>
  void SetStatuses(StatusesT&& value) {
    m_statusesHasBeenSet = true;
    m_statuses = std::forward<StatusesT>(value);
  }
  template <typename StatusesT = Aws::Vector<FreeTrialStatusValue>>
  ListFreeTrialStatusesV2Request& WithStatuses(StatusesT&& value) {
    SetStatuses(std::forward<StatusesT>(value));
    return *this;
  }
  inline ListFreeTrialStatusesV2Request& AddStatuses(FreeTrialStatusValue value) {
    m_statusesHasBeenSet = true;
    m_statuses.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return. If you don't specify a value,
   * Security Hub returns up to 100 results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListFreeTrialStatusesV2Request& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to request the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFreeTrialStatusesV2Request& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_accountIds;

  Aws::Vector<FreeTrialStatusValue> m_statuses;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_accountIdsHasBeenSet = false;
  bool m_statusesHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
