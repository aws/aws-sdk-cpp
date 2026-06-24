/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/RevenuePathStatistics.h>
#include <aws/wafv2/model/SourceStatistics.h>

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
class GetRevenueStatisticsResult {
 public:
  AWS_WAFV2_API GetRevenueStatisticsResult() = default;
  AWS_WAFV2_API GetRevenueStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WAFV2_API GetRevenueStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Statistics for top revenue sources (AI bots). Populated when
   * <code>StatisticType</code> is <code>TOP_SOURCES_BY_REVENUE</code>.</p>
   */
  inline const Aws::Vector<SourceStatistics>& GetSourceStatistics() const { return m_sourceStatistics; }
  template <typename SourceStatisticsT = Aws::Vector<SourceStatistics>>
  void SetSourceStatistics(SourceStatisticsT&& value) {
    m_sourceStatisticsHasBeenSet = true;
    m_sourceStatistics = std::forward<SourceStatisticsT>(value);
  }
  template <typename SourceStatisticsT = Aws::Vector<SourceStatistics>>
  GetRevenueStatisticsResult& WithSourceStatistics(SourceStatisticsT&& value) {
    SetSourceStatistics(std::forward<SourceStatisticsT>(value));
    return *this;
  }
  template <typename SourceStatisticsT = SourceStatistics>
  GetRevenueStatisticsResult& AddSourceStatistics(SourceStatisticsT&& value) {
    m_sourceStatisticsHasBeenSet = true;
    m_sourceStatistics.emplace_back(std::forward<SourceStatisticsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Statistics for top revenue paths. Populated when <code>StatisticType</code>
   * is <code>TOP_PATHS_BY_REVENUE</code>.</p>
   */
  inline const Aws::Vector<RevenuePathStatistics>& GetRevenuePathStatistics() const { return m_revenuePathStatistics; }
  template <typename RevenuePathStatisticsT = Aws::Vector<RevenuePathStatistics>>
  void SetRevenuePathStatistics(RevenuePathStatisticsT&& value) {
    m_revenuePathStatisticsHasBeenSet = true;
    m_revenuePathStatistics = std::forward<RevenuePathStatisticsT>(value);
  }
  template <typename RevenuePathStatisticsT = Aws::Vector<RevenuePathStatistics>>
  GetRevenueStatisticsResult& WithRevenuePathStatistics(RevenuePathStatisticsT&& value) {
    SetRevenuePathStatistics(std::forward<RevenuePathStatisticsT>(value));
    return *this;
  }
  template <typename RevenuePathStatisticsT = RevenuePathStatistics>
  GetRevenueStatisticsResult& AddRevenuePathStatistics(RevenuePathStatisticsT&& value) {
    m_revenuePathStatisticsHasBeenSet = true;
    m_revenuePathStatistics.emplace_back(std::forward<RevenuePathStatisticsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When you get a paginated response, this marker indicates that additional
   * results are available.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  GetRevenueStatisticsResult& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
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
  GetRevenueStatisticsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SourceStatistics> m_sourceStatistics;

  Aws::Vector<RevenuePathStatistics> m_revenuePathStatistics;

  Aws::String m_nextMarker;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sourceStatisticsHasBeenSet = false;
  bool m_revenuePathStatisticsHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
