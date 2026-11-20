/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeHistorySortOrder.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Route53 {
namespace Model {

/**
 */
class ListHostedZoneChangeBatchesRequest : public Route53Request {
 public:
  AWS_ROUTE53_API ListHostedZoneChangeBatchesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListHostedZoneChangeBatches"; }

  AWS_ROUTE53_API Aws::String SerializePayload() const override;

  AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the hosted zone that you want to list change batches for.</p>
   */
  inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
  inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
  template <typename HostedZoneIdT = Aws::String>
  void SetHostedZoneId(HostedZoneIdT&& value) {
    m_hostedZoneIdHasBeenSet = true;
    m_hostedZoneId = std::forward<HostedZoneIdT>(value);
  }
  template <typename HostedZoneIdT = Aws::String>
  ListHostedZoneChangeBatchesRequest& WithHostedZoneId(HostedZoneIdT&& value) {
    SetHostedZoneId(std::forward<HostedZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start of the time range, in ISO 8601 format with a UTC offset, for
   * example <code>2026-12-01T00:00:00Z</code> or
   * <code>2026-12-01T05:30:00.123+05:30</code>. You can specify up to nine
   * fractional digits. Route 53 rounds a value with more than millisecond precision
   * up to the next millisecond. The range includes <code>SubmittedAfter</code>.</p>
   * <p>If you don't specify a value, the range starts at
   * <code>RetentionStartsAt</code>. If you specify a value that's earlier than
   * <code>RetentionStartsAt</code>, Route 53 returns an <code>InvalidInput</code>
   * error that includes the earliest time that you can specify.</p> <p>Because
   * submit times can be slightly out of order, a returned <code>SubmittedAt</code>
   * can fall just outside the range that you requested.</p>
   */
  inline const Aws::String& GetSubmittedAfter() const { return m_submittedAfter; }
  inline bool SubmittedAfterHasBeenSet() const { return m_submittedAfterHasBeenSet; }
  template <typename SubmittedAfterT = Aws::String>
  void SetSubmittedAfter(SubmittedAfterT&& value) {
    m_submittedAfterHasBeenSet = true;
    m_submittedAfter = std::forward<SubmittedAfterT>(value);
  }
  template <typename SubmittedAfterT = Aws::String>
  ListHostedZoneChangeBatchesRequest& WithSubmittedAfter(SubmittedAfterT&& value) {
    SetSubmittedAfter(std::forward<SubmittedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the time range, in ISO 8601 format with a UTC offset, for example
   * <code>2026-12-02T00:00:00Z</code> or <code>2026-12-02T05:30:00.123+05:30</code>.
   * You can specify up to nine fractional digits. Route 53 rounds a value with more
   * than millisecond precision up to the next millisecond. The range excludes
   * <code>SubmittedBefore</code>. The value must be at least one millisecond later
   * than <code>SubmittedAfter</code>, or later than <code>RetentionStartsAt</code>
   * if you omit <code>SubmittedAfter</code>.</p> <p>If the range ends within a few
   * seconds of the current time, a later request for the same range might return
   * more change batches.</p>
   */
  inline const Aws::String& GetSubmittedBefore() const { return m_submittedBefore; }
  inline bool SubmittedBeforeHasBeenSet() const { return m_submittedBeforeHasBeenSet; }
  template <typename SubmittedBeforeT = Aws::String>
  void SetSubmittedBefore(SubmittedBeforeT&& value) {
    m_submittedBeforeHasBeenSet = true;
    m_submittedBefore = std::forward<SubmittedBeforeT>(value);
  }
  template <typename SubmittedBeforeT = Aws::String>
  ListHostedZoneChangeBatchesRequest& WithSubmittedBefore(SubmittedBeforeT&& value) {
    SetSubmittedBefore(std::forward<SubmittedBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns the change batches after the specified change batch, not including
   * it. Use this to read new change batches since the last change batch that you
   * processed.</p> <p>If you specify <code>StartAfterChangeId</code>, you must also
   * specify <code>SortOrder</code> <code>ASCENDING</code>, and you can't specify
   * <code>SubmittedAfter</code> or <code>SubmittedBefore</code>. If the change batch
   * has expired, is from before <code>RetentionStartsAt</code>, or isn't in the
   * hosted zone, Route 53 returns an <code>InvalidInput</code> error.</p>
   */
  inline const Aws::String& GetStartAfterChangeId() const { return m_startAfterChangeId; }
  inline bool StartAfterChangeIdHasBeenSet() const { return m_startAfterChangeIdHasBeenSet; }
  template <typename StartAfterChangeIdT = Aws::String>
  void SetStartAfterChangeId(StartAfterChangeIdT&& value) {
    m_startAfterChangeIdHasBeenSet = true;
    m_startAfterChangeId = std::forward<StartAfterChangeIdT>(value);
  }
  template <typename StartAfterChangeIdT = Aws::String>
  ListHostedZoneChangeBatchesRequest& WithStartAfterChangeId(StartAfterChangeIdT&& value) {
    SetStartAfterChangeId(std::forward<StartAfterChangeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The order in which you want Route 53 to return change batches. Valid
   * values:</p> <ul> <li> <p> <code>DESCENDING</code> – Newest first. This is the
   * default.</p> </li> <li> <p> <code>ASCENDING</code> – Oldest first.</p> </li>
   * </ul>
   */
  inline ChangeHistorySortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(ChangeHistorySortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListHostedZoneChangeBatchesRequest& WithSortOrder(ChangeHistorySortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of change batches that you want Route 53 to return in this
   * response. Specify a value from 1 to 1,000. If you don't specify a value, Route
   * 53 returns up to 100 change batches.</p>
   */
  inline const Aws::String& GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  template <typename MaxResultsT = Aws::String>
  void SetMaxResults(MaxResultsT&& value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = std::forward<MaxResultsT>(value);
  }
  template <typename MaxResultsT = Aws::String>
  ListHostedZoneChangeBatchesRequest& WithMaxResults(MaxResultsT&& value) {
    SetMaxResults(std::forward<MaxResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the response to a previous <code>ListHostedZoneChangeBatches</code>
   * request included a <code>NextToken</code> element, specify that value here to
   * get the next page of results. If the previous request included any of the
   * following parameters, include them with exactly the same values:
   * <code>SubmittedAfter</code>, <code>SubmittedBefore</code>,
   * <code>SortOrder</code>, and <code>StartAfterChangeId</code>. If you don't, Route
   * 53 returns an <code>InvalidInput</code> error. If you don't specify
   * <code>NextToken</code>, Route 53 returns the first page of results.</p> <p>A
   * <code>NextToken</code> expires 24 hours after Route 53 returns it, and you can
   * use it only with the hosted zone that it was returned for.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListHostedZoneChangeBatchesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hostedZoneId;

  Aws::String m_submittedAfter;

  Aws::String m_submittedBefore;

  Aws::String m_startAfterChangeId;

  ChangeHistorySortOrder m_sortOrder{ChangeHistorySortOrder::NOT_SET};

  Aws::String m_maxResults;

  Aws::String m_nextToken;
  bool m_hostedZoneIdHasBeenSet = false;
  bool m_submittedAfterHasBeenSet = false;
  bool m_submittedBeforeHasBeenSet = false;
  bool m_startAfterChangeIdHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
