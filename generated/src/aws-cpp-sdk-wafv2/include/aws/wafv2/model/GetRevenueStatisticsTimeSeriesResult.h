/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/DataPointEntry.h>

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
class GetRevenueStatisticsTimeSeriesResult {
 public:
  AWS_WAFV2_API GetRevenueStatisticsTimeSeriesResult() = default;
  AWS_WAFV2_API GetRevenueStatisticsTimeSeriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WAFV2_API GetRevenueStatisticsTimeSeriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of time series data points.</p>
   */
  inline const Aws::Vector<DataPointEntry>& GetDataPoints() const { return m_dataPoints; }
  template <typename DataPointsT = Aws::Vector<DataPointEntry>>
  void SetDataPoints(DataPointsT&& value) {
    m_dataPointsHasBeenSet = true;
    m_dataPoints = std::forward<DataPointsT>(value);
  }
  template <typename DataPointsT = Aws::Vector<DataPointEntry>>
  GetRevenueStatisticsTimeSeriesResult& WithDataPoints(DataPointsT&& value) {
    SetDataPoints(std::forward<DataPointsT>(value));
    return *this;
  }
  template <typename DataPointsT = DataPointEntry>
  GetRevenueStatisticsTimeSeriesResult& AddDataPoints(DataPointsT&& value) {
    m_dataPointsHasBeenSet = true;
    m_dataPoints.emplace_back(std::forward<DataPointsT>(value));
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
  GetRevenueStatisticsTimeSeriesResult& WithNextMarker(NextMarkerT&& value) {
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
  GetRevenueStatisticsTimeSeriesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DataPointEntry> m_dataPoints;

  Aws::String m_nextMarker;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_dataPointsHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
