/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FindingScopes.h>
#include <aws/securityhub/model/GroupByRule.h>
#include <aws/securityhub/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace SecurityHub {
namespace Model {

/**
 */
class GetFindingStatisticsV2Request : public SecurityHubRequest {
 public:
  AWS_SECURITYHUB_API GetFindingStatisticsV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetFindingStatisticsV2"; }

  AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Specifies how security findings should be aggregated and organized in the
   * statistical analysis. It can accept up to 5 <code>groupBy</code> fields in a
   * single call.</p>
   */
  inline const Aws::Vector<GroupByRule>& GetGroupByRules() const { return m_groupByRules; }
  inline bool GroupByRulesHasBeenSet() const { return m_groupByRulesHasBeenSet; }
  template <typename GroupByRulesT = Aws::Vector<GroupByRule>>
  void SetGroupByRules(GroupByRulesT&& value) {
    m_groupByRulesHasBeenSet = true;
    m_groupByRules = std::forward<GroupByRulesT>(value);
  }
  template <typename GroupByRulesT = Aws::Vector<GroupByRule>>
  GetFindingStatisticsV2Request& WithGroupByRules(GroupByRulesT&& value) {
    SetGroupByRules(std::forward<GroupByRulesT>(value));
    return *this;
  }
  template <typename GroupByRulesT = GroupByRule>
  GetFindingStatisticsV2Request& AddGroupByRules(GroupByRulesT&& value) {
    m_groupByRulesHasBeenSet = true;
    m_groupByRules.emplace_back(std::forward<GroupByRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Limits the results to findings from specific organizational units or from the
   * delegated administrator's organization. Only the delegated administrator account
   * can use this parameter. Other accounts receive an
   * <code>AccessDeniedException</code>.</p> <p>This parameter is optional. If you
   * omit it, the delegated administrator sees statistics from all accounts across
   * the entire organization. Other accounts see only statistics for their own
   * findings.</p> <p>You can specify up to 10 entries in
   * <code>Scopes.AwsOrganizations</code>. If multiple entries are specified, the
   * entries are combined using OR logic.</p>
   */
  inline const FindingScopes& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = FindingScopes>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = FindingScopes>
  GetFindingStatisticsV2Request& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Orders the aggregation count in descending or ascending order. Descending
   * order is the default.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline GetFindingStatisticsV2Request& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to be returned.</p>
   */
  inline int GetMaxStatisticResults() const { return m_maxStatisticResults; }
  inline bool MaxStatisticResultsHasBeenSet() const { return m_maxStatisticResultsHasBeenSet; }
  inline void SetMaxStatisticResults(int value) {
    m_maxStatisticResultsHasBeenSet = true;
    m_maxStatisticResults = value;
  }
  inline GetFindingStatisticsV2Request& WithMaxStatisticResults(int value) {
    SetMaxStatisticResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GroupByRule> m_groupByRules;

  FindingScopes m_scopes;

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  int m_maxStatisticResults{0};
  bool m_groupByRulesHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_maxStatisticResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
