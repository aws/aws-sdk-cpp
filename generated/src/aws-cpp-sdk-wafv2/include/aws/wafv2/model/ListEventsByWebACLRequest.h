/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ApiPatternFilter.h>
#include <aws/wafv2/model/EventFilter.h>
#include <aws/wafv2/model/EventIncludeField.h>
#include <aws/wafv2/model/EventSortBy.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/wafv2/model/SortOrder.h>
#include <aws/wafv2/model/TimeWindow.h>

#include <utility>

namespace Aws {
namespace WAFV2 {
namespace Model {

/**
 */
class ListEventsByWebACLRequest : public WAFV2Request {
 public:
  AWS_WAFV2_API ListEventsByWebACLRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListEventsByWebACL"; }

  AWS_WAFV2_API Aws::String SerializePayload() const override;

  AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies whether this is for a global resource type, such as a Amazon
   * CloudFront distribution. For an Amplify application, use
   * <code>CLOUDFRONT</code>.</p> <p>To work with CloudFront, you must also specify
   * the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
   * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
   * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
   * the Region endpoint us-east-1. </p> </li> </ul>
   */
  inline Scope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(Scope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline ListEventsByWebACLRequest& WithScope(Scope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the web ACL whose events you want to
   * retrieve.</p>
   */
  inline const Aws::String& GetWebAclArn() const { return m_webAclArn; }
  inline bool WebAclArnHasBeenSet() const { return m_webAclArnHasBeenSet; }
  template <typename WebAclArnT = Aws::String>
  void SetWebAclArn(WebAclArnT&& value) {
    m_webAclArnHasBeenSet = true;
    m_webAclArn = std::forward<WebAclArnT>(value);
  }
  template <typename WebAclArnT = Aws::String>
  ListEventsByWebACLRequest& WithWebAclArn(WebAclArnT&& value) {
    SetWebAclArn(std::forward<WebAclArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time range for the events to return. If you don't specify a time window,
   * WAF returns events from the past year. The time window can't be longer than one
   * year.</p>
   */
  inline const TimeWindow& GetTimeWindow() const { return m_timeWindow; }
  inline bool TimeWindowHasBeenSet() const { return m_timeWindowHasBeenSet; }
  template <typename TimeWindowT = TimeWindow>
  void SetTimeWindow(TimeWindowT&& value) {
    m_timeWindowHasBeenSet = true;
    m_timeWindow = std::forward<TimeWindowT>(value);
  }
  template <typename TimeWindowT = TimeWindow>
  ListEventsByWebACLRequest& WithTimeWindow(TimeWindowT&& value) {
    SetTimeWindow(std::forward<TimeWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters that narrow the results by event category or by the Amazon Resource
   * Name (ARN) of the protected resource. You can specify up to 8 filters.</p>
   */
  inline const Aws::Vector<EventFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<EventFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<EventFilter>>
  ListEventsByWebACLRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = EventFilter>
  ListEventsByWebACLRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters that narrow the results to events that involve the specified API
   * patterns. If you specify more than one API pattern filter, WAF returns the
   * events that match any of the filters. You can specify up to 20 API pattern
   * filters.</p>
   */
  inline const Aws::Vector<ApiPatternFilter>& GetApiPatternFilters() const { return m_apiPatternFilters; }
  inline bool ApiPatternFiltersHasBeenSet() const { return m_apiPatternFiltersHasBeenSet; }
  template <typename ApiPatternFiltersT = Aws::Vector<ApiPatternFilter>>
  void SetApiPatternFilters(ApiPatternFiltersT&& value) {
    m_apiPatternFiltersHasBeenSet = true;
    m_apiPatternFilters = std::forward<ApiPatternFiltersT>(value);
  }
  template <typename ApiPatternFiltersT = Aws::Vector<ApiPatternFilter>>
  ListEventsByWebACLRequest& WithApiPatternFilters(ApiPatternFiltersT&& value) {
    SetApiPatternFilters(std::forward<ApiPatternFiltersT>(value));
    return *this;
  }
  template <typename ApiPatternFiltersT = ApiPatternFilter>
  ListEventsByWebACLRequest& AddApiPatternFilters(ApiPatternFiltersT&& value) {
    m_apiPatternFiltersHasBeenSet = true;
    m_apiPatternFilters.emplace_back(std::forward<ApiPatternFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of events that you want WAF to return for this request.
   * Valid values are 1 to 20. If more events are available, WAF returns a
   * <code>NextMarker</code> value in the response that you can use in a subsequent
   * call to get the next batch of events.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline ListEventsByWebACLRequest& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When you request a list of objects with a <code>Limit</code> setting, if the
   * number of objects that are still available for retrieval exceeds the limit, WAF
   * returns a <code>NextMarker</code> value in the response. To retrieve the next
   * batch of objects, provide the marker from the prior call in your next
   * request.</p> <p>The marker is valid only for a request with the same
   * <code>WebAclArn</code>, <code>TimeWindow</code>, <code>Filters</code>,
   * <code>SortBy</code>, and <code>SortOrder</code> settings as the request that
   * returned it.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  ListEventsByWebACLRequest& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The order in which WAF sorts the events. Valid values:</p> <ul> <li> <p>
   * <code>ASC</code> - Sort in ascending order.</p> </li> <li> <p> <code>DESC</code>
   * - Sort in descending order. This is the default.</p> </li> </ul>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListEventsByWebACLRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field that WAF sorts the events by. Valid values:</p> <ul> <li> <p>
   * <code>CONFIDENCE</code> - Sort by the confidence level of the event
   * detection.</p> </li> <li> <p> <code>END_TIME</code> - Sort by the time that the
   * event ended.</p> </li> <li> <p> <code>START_TIME</code> - Sort by the time that
   * the event started.</p> </li> </ul>
   */
  inline EventSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(EventSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListEventsByWebACLRequest& WithSortBy(EventSortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional fields to return with each event summary. By default, the response
   * includes only the default summary fields.</p> <p>Specify <code>TIMELINE</code>
   * to return the timeline of each event in
   * <code>ApiSecurityEventDetail$Timeline</code>.</p>
   */
  inline const Aws::Vector<EventIncludeField>& GetInclude() const { return m_include; }
  inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
  template <typename IncludeT = Aws::Vector<EventIncludeField>>
  void SetInclude(IncludeT&& value) {
    m_includeHasBeenSet = true;
    m_include = std::forward<IncludeT>(value);
  }
  template <typename IncludeT = Aws::Vector<EventIncludeField>>
  ListEventsByWebACLRequest& WithInclude(IncludeT&& value) {
    SetInclude(std::forward<IncludeT>(value));
    return *this;
  }
  inline ListEventsByWebACLRequest& AddInclude(EventIncludeField value) {
    m_includeHasBeenSet = true;
    m_include.push_back(value);
    return *this;
  }
  ///@}
 private:
  Scope m_scope{Scope::NOT_SET};

  Aws::String m_webAclArn;

  TimeWindow m_timeWindow;

  Aws::Vector<EventFilter> m_filters;

  Aws::Vector<ApiPatternFilter> m_apiPatternFilters;

  int m_limit{0};

  Aws::String m_nextMarker;

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  EventSortBy m_sortBy{EventSortBy::NOT_SET};

  Aws::Vector<EventIncludeField> m_include;
  bool m_scopeHasBeenSet = false;
  bool m_webAclArnHasBeenSet = false;
  bool m_timeWindowHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_apiPatternFiltersHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_includeHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
