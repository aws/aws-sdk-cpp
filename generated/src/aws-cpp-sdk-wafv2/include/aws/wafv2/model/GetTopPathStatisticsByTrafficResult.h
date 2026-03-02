/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/PathStatistics.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {
class GetTopPathStatisticsByTrafficResult {
 public:
  AWS_WAFV2_API GetTopPathStatisticsByTrafficResult() = default;
  AWS_WAFV2_API GetTopPathStatisticsByTrafficResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WAFV2_API GetTopPathStatisticsByTrafficResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of path statistics, ordered by request count. Each entry includes
   * the path, request count, percentage of total traffic, and the top bots accessing
   * that path.</p>
   */
  inline const Aws::Vector<PathStatistics>& GetPathStatistics() const { return m_pathStatistics; }
  template <typename PathStatisticsT = Aws::Vector<PathStatistics>>
  void SetPathStatistics(PathStatisticsT&& value) {
    m_pathStatisticsHasBeenSet = true;
    m_pathStatistics = std::forward<PathStatisticsT>(value);
  }
  template <typename PathStatisticsT = Aws::Vector<PathStatistics>>
  GetTopPathStatisticsByTrafficResult& WithPathStatistics(PathStatisticsT&& value) {
    SetPathStatistics(std::forward<PathStatisticsT>(value));
    return *this;
  }
  template <typename PathStatisticsT = PathStatistics>
  GetTopPathStatisticsByTrafficResult& AddPathStatistics(PathStatisticsT&& value) {
    m_pathStatisticsHasBeenSet = true;
    m_pathStatistics.emplace_back(std::forward<PathStatisticsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of requests that match the query criteria within the
   * specified time window.</p>
   */
  inline long long GetTotalRequestCount() const { return m_totalRequestCount; }
  inline void SetTotalRequestCount(long long value) {
    m_totalRequestCountHasBeenSet = true;
    m_totalRequestCount = value;
  }
  inline GetTopPathStatisticsByTrafficResult& WithTotalRequestCount(long long value) {
    SetTotalRequestCount(value);
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
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  GetTopPathStatisticsByTrafficResult& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Category-level aggregations for visualizing bot category to path
   * relationships. This field is only populated when no bot filters are applied to
   * the request. Each entry includes the bot category and the paths accessed by bots
   * in that category.</p>
   */
  inline const Aws::Vector<PathStatistics>& GetTopCategories() const { return m_topCategories; }
  template <typename TopCategoriesT = Aws::Vector<PathStatistics>>
  void SetTopCategories(TopCategoriesT&& value) {
    m_topCategoriesHasBeenSet = true;
    m_topCategories = std::forward<TopCategoriesT>(value);
  }
  template <typename TopCategoriesT = Aws::Vector<PathStatistics>>
  GetTopPathStatisticsByTrafficResult& WithTopCategories(TopCategoriesT&& value) {
    SetTopCategories(std::forward<TopCategoriesT>(value));
    return *this;
  }
  template <typename TopCategoriesT = PathStatistics>
  GetTopPathStatisticsByTrafficResult& AddTopCategories(TopCategoriesT&& value) {
    m_topCategoriesHasBeenSet = true;
    m_topCategories.emplace_back(std::forward<TopCategoriesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetTopPathStatisticsByTrafficResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PathStatistics> m_pathStatistics;

  long long m_totalRequestCount{0};

  Aws::String m_nextMarker;

  Aws::Vector<PathStatistics> m_topCategories;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_pathStatisticsHasBeenSet = false;
  bool m_totalRequestCountHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
  bool m_topCategoriesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
