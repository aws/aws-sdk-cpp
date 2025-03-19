/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/MetricAttributionSummary.h>
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
  class ListMetricAttributionsResult
  {
  public:
    AWS_PERSONALIZE_API ListMetricAttributionsResult() = default;
    AWS_PERSONALIZE_API ListMetricAttributionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListMetricAttributionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of metric attributions.</p>
     */
    inline const Aws::Vector<MetricAttributionSummary>& GetMetricAttributions() const { return m_metricAttributions; }
    template<typename MetricAttributionsT = Aws::Vector<MetricAttributionSummary>>
    void SetMetricAttributions(MetricAttributionsT&& value) { m_metricAttributionsHasBeenSet = true; m_metricAttributions = std::forward<MetricAttributionsT>(value); }
    template<typename MetricAttributionsT = Aws::Vector<MetricAttributionSummary>>
    ListMetricAttributionsResult& WithMetricAttributions(MetricAttributionsT&& value) { SetMetricAttributions(std::forward<MetricAttributionsT>(value)); return *this;}
    template<typename MetricAttributionsT = MetricAttributionSummary>
    ListMetricAttributionsResult& AddMetricAttributions(MetricAttributionsT&& value) { m_metricAttributionsHasBeenSet = true; m_metricAttributions.emplace_back(std::forward<MetricAttributionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMetricAttributionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMetricAttributionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MetricAttributionSummary> m_metricAttributions;
    bool m_metricAttributionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
