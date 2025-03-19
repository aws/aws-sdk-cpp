/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/MetricAttribution.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeMetricAttributionResult
  {
  public:
    AWS_PERSONALIZE_API DescribeMetricAttributionResult() = default;
    AWS_PERSONALIZE_API DescribeMetricAttributionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeMetricAttributionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the metric attribution.</p>
     */
    inline const MetricAttribution& GetMetricAttribution() const { return m_metricAttribution; }
    template<typename MetricAttributionT = MetricAttribution>
    void SetMetricAttribution(MetricAttributionT&& value) { m_metricAttributionHasBeenSet = true; m_metricAttribution = std::forward<MetricAttributionT>(value); }
    template<typename MetricAttributionT = MetricAttribution>
    DescribeMetricAttributionResult& WithMetricAttribution(MetricAttributionT&& value) { SetMetricAttribution(std::forward<MetricAttributionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMetricAttributionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MetricAttribution m_metricAttribution;
    bool m_metricAttributionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
