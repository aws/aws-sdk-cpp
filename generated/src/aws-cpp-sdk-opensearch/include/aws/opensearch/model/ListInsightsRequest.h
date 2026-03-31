/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/InsightEntity.h>
#include <aws/opensearch/model/InsightSortOrder.h>
#include <aws/opensearch/model/InsightTimeRange.h>

#include <utility>

namespace Aws {
namespace OpenSearchService {
namespace Model {

/**
 * <p>Container for the parameters to the <code>ListInsights</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListInsightsRequest">AWS
 * API Reference</a></p>
 */
class ListInsightsRequest : public OpenSearchServiceRequest {
 public:
  AWS_OPENSEARCHSERVICE_API ListInsightsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListInsights"; }

  AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The entity for which to list insights. Specifies the type and value of the
   * entity, such as a domain name or Amazon Web Services account ID.</p>
   */
  inline const InsightEntity& GetEntity() const { return m_entity; }
  inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
  template <typename EntityT = InsightEntity>
  void SetEntity(EntityT&& value) {
    m_entityHasBeenSet = true;
    m_entity = std::forward<EntityT>(value);
  }
  template <typename EntityT = InsightEntity>
  ListInsightsRequest& WithEntity(EntityT&& value) {
    SetEntity(std::forward<EntityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time range for filtering insights, specified as epoch millisecond
   * timestamps.</p>
   */
  inline const InsightTimeRange& GetTimeRange() const { return m_timeRange; }
  inline bool TimeRangeHasBeenSet() const { return m_timeRangeHasBeenSet; }
  template <typename TimeRangeT = InsightTimeRange>
  void SetTimeRange(TimeRangeT&& value) {
    m_timeRangeHasBeenSet = true;
    m_timeRange = std::forward<TimeRangeT>(value);
  }
  template <typename TimeRangeT = InsightTimeRange>
  ListInsightsRequest& WithTimeRange(TimeRangeT&& value) {
    SetTimeRange(std::forward<TimeRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order for the results. Possible values are <code>ASC</code>
   * (ascending) and <code>DESC</code> (descending).</p>
   */
  inline InsightSortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(InsightSortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListInsightsRequest& WithSortOrder(InsightSortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional parameter that specifies the maximum number of results to return.
   * You can use <code>NextToken</code> to get the next page of results. Valid values
   * are 1 to 500.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListInsightsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If your initial <code>ListInsights</code> operation returns a
   * <code>NextToken</code>, include the returned <code>NextToken</code> in
   * subsequent <code>ListInsights</code> operations to retrieve the next page of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInsightsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  InsightEntity m_entity;

  InsightTimeRange m_timeRange;

  InsightSortOrder m_sortOrder{InsightSortOrder::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_entityHasBeenSet = false;
  bool m_timeRangeHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
