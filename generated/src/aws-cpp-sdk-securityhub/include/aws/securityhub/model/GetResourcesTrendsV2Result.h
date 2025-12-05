/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/GranularityField.h>
#include <aws/securityhub/model/ResourcesTrendsMetricsResult.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {
class GetResourcesTrendsV2Result {
 public:
  AWS_SECURITYHUB_API GetResourcesTrendsV2Result() = default;
  AWS_SECURITYHUB_API GetResourcesTrendsV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYHUB_API GetResourcesTrendsV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The time interval granularity for the returned trend data (such as DAILY or
   * WEEKLY).</p>
   */
  inline GranularityField GetGranularity() const { return m_granularity; }
  inline void SetGranularity(GranularityField value) {
    m_granularityHasBeenSet = true;
    m_granularity = value;
  }
  inline GetResourcesTrendsV2Result& WithGranularity(GranularityField value) {
    SetGranularity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The collection of time-series trend metrics, including counts of resources
   * across the specified time period.</p>
   */
  inline const Aws::Vector<ResourcesTrendsMetricsResult>& GetTrendsMetrics() const { return m_trendsMetrics; }
  template <typename TrendsMetricsT = Aws::Vector<ResourcesTrendsMetricsResult>>
  void SetTrendsMetrics(TrendsMetricsT&& value) {
    m_trendsMetricsHasBeenSet = true;
    m_trendsMetrics = std::forward<TrendsMetricsT>(value);
  }
  template <typename TrendsMetricsT = Aws::Vector<ResourcesTrendsMetricsResult>>
  GetResourcesTrendsV2Result& WithTrendsMetrics(TrendsMetricsT&& value) {
    SetTrendsMetrics(std::forward<TrendsMetricsT>(value));
    return *this;
  }
  template <typename TrendsMetricsT = ResourcesTrendsMetricsResult>
  GetResourcesTrendsV2Result& AddTrendsMetrics(TrendsMetricsT&& value) {
    m_trendsMetricsHasBeenSet = true;
    m_trendsMetrics.emplace_back(std::forward<TrendsMetricsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use for retrieving the next page of results, if more trend data
   * is available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetResourcesTrendsV2Result& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  GetResourcesTrendsV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  GranularityField m_granularity{GranularityField::NOT_SET};

  Aws::Vector<ResourcesTrendsMetricsResult> m_trendsMetrics;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_granularityHasBeenSet = false;
  bool m_trendsMetricsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
