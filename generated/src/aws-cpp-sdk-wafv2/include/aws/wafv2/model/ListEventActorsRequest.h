/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/EventActorSortBy.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/wafv2/model/TimeWindow.h>

#include <utility>

namespace Aws {
namespace WAFV2 {
namespace Model {

/**
 */
class ListEventActorsRequest : public WAFV2Request {
 public:
  AWS_WAFV2_API ListEventActorsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListEventActors"; }

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
  inline ListEventActorsRequest& WithScope(Scope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time range for the event actors to return. The time window can't be
   * longer than one year.</p>
   */
  inline const TimeWindow& GetTimeWindow() const { return m_timeWindow; }
  inline bool TimeWindowHasBeenSet() const { return m_timeWindowHasBeenSet; }
  template <typename TimeWindowT = TimeWindow>
  void SetTimeWindow(TimeWindowT&& value) {
    m_timeWindowHasBeenSet = true;
    m_timeWindow = std::forward<TimeWindowT>(value);
  }
  template <typename TimeWindowT = TimeWindow>
  ListEventActorsRequest& WithTimeWindow(TimeWindowT&& value) {
    SetTimeWindow(std::forward<TimeWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort event actors by. The only supported value is
   * <code>EVENT_COUNT</code>.</p>
   */
  inline EventActorSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(EventActorSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListEventActorsRequest& WithSortBy(EventActorSortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of event actors that you want WAF to return for this
   * request. Valid values are 1 to 100. If more event actors are available, WAF
   * returns a <code>NextMarker</code> value in the response that you can use in a
   * subsequent call to get the next batch of event actors.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline ListEventActorsRequest& WithLimit(int value) {
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
   * request.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  ListEventActorsRequest& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
    return *this;
  }
  ///@}
 private:
  Scope m_scope{Scope::NOT_SET};

  TimeWindow m_timeWindow;

  EventActorSortBy m_sortBy{EventActorSortBy::NOT_SET};

  int m_limit{0};

  Aws::String m_nextMarker;
  bool m_scopeHasBeenSet = false;
  bool m_timeWindowHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
