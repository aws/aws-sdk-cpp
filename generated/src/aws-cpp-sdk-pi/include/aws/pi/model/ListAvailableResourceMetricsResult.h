/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/model/ResponseResourceMetric.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PI
{
namespace Model
{
  class ListAvailableResourceMetricsResult
  {
  public:
    AWS_PI_API ListAvailableResourceMetricsResult() = default;
    AWS_PI_API ListAvailableResourceMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API ListAvailableResourceMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of metrics available to query. Each array element contains the full
     * name, description, and unit of the metric. </p>
     */
    inline const Aws::Vector<ResponseResourceMetric>& GetMetrics() const { return m_metrics; }
    template<typename MetricsT = Aws::Vector<ResponseResourceMetric>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<ResponseResourceMetric>>
    ListAvailableResourceMetricsResult& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsT = ResponseResourceMetric>
    ListAvailableResourceMetricsResult& AddMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics.emplace_back(std::forward<MetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that indicates the response didn’t return all available
     * records because <code>MaxRecords</code> was specified in the previous request.
     * To get the remaining records, specify <code>NextToken</code> in a separate
     * request with this value. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAvailableResourceMetricsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAvailableResourceMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResponseResourceMetric> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
