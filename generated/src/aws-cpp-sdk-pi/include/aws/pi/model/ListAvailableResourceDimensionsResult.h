/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/model/MetricDimensionGroups.h>
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
  class ListAvailableResourceDimensionsResult
  {
  public:
    AWS_PI_API ListAvailableResourceDimensionsResult() = default;
    AWS_PI_API ListAvailableResourceDimensionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API ListAvailableResourceDimensionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The dimension information returned for requested metric types.</p>
     */
    inline const Aws::Vector<MetricDimensionGroups>& GetMetricDimensions() const { return m_metricDimensions; }
    template<typename MetricDimensionsT = Aws::Vector<MetricDimensionGroups>>
    void SetMetricDimensions(MetricDimensionsT&& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions = std::forward<MetricDimensionsT>(value); }
    template<typename MetricDimensionsT = Aws::Vector<MetricDimensionGroups>>
    ListAvailableResourceDimensionsResult& WithMetricDimensions(MetricDimensionsT&& value) { SetMetricDimensions(std::forward<MetricDimensionsT>(value)); return *this;}
    template<typename MetricDimensionsT = MetricDimensionGroups>
    ListAvailableResourceDimensionsResult& AddMetricDimensions(MetricDimensionsT&& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace_back(std::forward<MetricDimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAvailableResourceDimensionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAvailableResourceDimensionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MetricDimensionGroups> m_metricDimensions;
    bool m_metricDimensionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
