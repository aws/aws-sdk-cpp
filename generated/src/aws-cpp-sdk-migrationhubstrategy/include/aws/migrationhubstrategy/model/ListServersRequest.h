/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/ServerCriteria.h>
#include <aws/migrationhubstrategy/model/SortOrder.h>
#include <aws/migrationhubstrategy/model/Group.h>
#include <utility>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   */
  class ListServersRequest : public MigrationHubStrategyRecommendationsRequest
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListServersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServers"; }

    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Specifies the filter value, which is based on the type of server criteria.
     * For example, if <code>serverCriteria</code> is <code>OS_NAME</code>, and the
     * <code>filterValue</code> is equal to <code>WindowsServer</code>, then
     * <code>ListServers</code> returns all of the servers matching the OS name
     * <code>WindowsServer</code>. </p>
     */
    inline const Aws::String& GetFilterValue() const { return m_filterValue; }
    inline bool FilterValueHasBeenSet() const { return m_filterValueHasBeenSet; }
    template<typename FilterValueT = Aws::String>
    void SetFilterValue(FilterValueT&& value) { m_filterValueHasBeenSet = true; m_filterValue = std::forward<FilterValueT>(value); }
    template<typename FilterValueT = Aws::String>
    ListServersRequest& WithFilterValue(FilterValueT&& value) { SetFilterValue(std::forward<FilterValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the group ID to filter on. </p>
     */
    inline const Aws::Vector<Group>& GetGroupIdFilter() const { return m_groupIdFilter; }
    inline bool GroupIdFilterHasBeenSet() const { return m_groupIdFilterHasBeenSet; }
    template<typename GroupIdFilterT = Aws::Vector<Group>>
    void SetGroupIdFilter(GroupIdFilterT&& value) { m_groupIdFilterHasBeenSet = true; m_groupIdFilter = std::forward<GroupIdFilterT>(value); }
    template<typename GroupIdFilterT = Aws::Vector<Group>>
    ListServersRequest& WithGroupIdFilter(GroupIdFilterT&& value) { SetGroupIdFilter(std::forward<GroupIdFilterT>(value)); return *this;}
    template<typename GroupIdFilterT = Group>
    ListServersRequest& AddGroupIdFilter(GroupIdFilterT&& value) { m_groupIdFilterHasBeenSet = true; m_groupIdFilter.emplace_back(std::forward<GroupIdFilterT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The maximum number of items to include in the response. The maximum value is
     * 100. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListServersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Criteria for filtering servers. </p>
     */
    inline ServerCriteria GetServerCriteria() const { return m_serverCriteria; }
    inline bool ServerCriteriaHasBeenSet() const { return m_serverCriteriaHasBeenSet; }
    inline void SetServerCriteria(ServerCriteria value) { m_serverCriteriaHasBeenSet = true; m_serverCriteria = value; }
    inline ListServersRequest& WithServerCriteria(ServerCriteria value) { SetServerCriteria(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether to sort by ascending (<code>ASC</code>) or descending
     * (<code>DESC</code>) order. </p>
     */
    inline SortOrder GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(SortOrder value) { m_sortHasBeenSet = true; m_sort = value; }
    inline ListServersRequest& WithSort(SortOrder value) { SetSort(value); return *this;}
    ///@}
  private:

    Aws::String m_filterValue;
    bool m_filterValueHasBeenSet = false;

    Aws::Vector<Group> m_groupIdFilter;
    bool m_groupIdFilterHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ServerCriteria m_serverCriteria{ServerCriteria::NOT_SET};
    bool m_serverCriteriaHasBeenSet = false;

    SortOrder m_sort{SortOrder::NOT_SET};
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
