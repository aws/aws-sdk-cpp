/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/TimeWindow.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf/model/SampledHTTPRequest.h>
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
namespace WAF
{
namespace Model
{
  class GetSampledRequestsResult
  {
  public:
    AWS_WAF_API GetSampledRequestsResult() = default;
    AWS_WAF_API GetSampledRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API GetSampledRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A complex type that contains detailed information about each of the requests
     * in the sample.</p>
     */
    inline const Aws::Vector<SampledHTTPRequest>& GetSampledRequests() const { return m_sampledRequests; }
    template<typename SampledRequestsT = Aws::Vector<SampledHTTPRequest>>
    void SetSampledRequests(SampledRequestsT&& value) { m_sampledRequestsHasBeenSet = true; m_sampledRequests = std::forward<SampledRequestsT>(value); }
    template<typename SampledRequestsT = Aws::Vector<SampledHTTPRequest>>
    GetSampledRequestsResult& WithSampledRequests(SampledRequestsT&& value) { SetSampledRequests(std::forward<SampledRequestsT>(value)); return *this;}
    template<typename SampledRequestsT = SampledHTTPRequest>
    GetSampledRequestsResult& AddSampledRequests(SampledRequestsT&& value) { m_sampledRequestsHasBeenSet = true; m_sampledRequests.emplace_back(std::forward<SampledRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of requests from which <code>GetSampledRequests</code> got a
     * sample of <code>MaxItems</code> requests. If <code>PopulationSize</code> is less
     * than <code>MaxItems</code>, the sample includes every request that your AWS
     * resource received during the specified time range.</p>
     */
    inline long long GetPopulationSize() const { return m_populationSize; }
    inline void SetPopulationSize(long long value) { m_populationSizeHasBeenSet = true; m_populationSize = value; }
    inline GetSampledRequestsResult& WithPopulationSize(long long value) { SetPopulationSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Usually, <code>TimeWindow</code> is the time range that you specified in the
     * <code>GetSampledRequests</code> request. However, if your AWS resource received
     * more than 5,000 requests during the time range that you specified in the
     * request, <code>GetSampledRequests</code> returns the time range for the first
     * 5,000 requests. Times are in Coordinated Universal Time (UTC) format.</p>
     */
    inline const TimeWindow& GetTimeWindow() const { return m_timeWindow; }
    template<typename TimeWindowT = TimeWindow>
    void SetTimeWindow(TimeWindowT&& value) { m_timeWindowHasBeenSet = true; m_timeWindow = std::forward<TimeWindowT>(value); }
    template<typename TimeWindowT = TimeWindow>
    GetSampledRequestsResult& WithTimeWindow(TimeWindowT&& value) { SetTimeWindow(std::forward<TimeWindowT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSampledRequestsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SampledHTTPRequest> m_sampledRequests;
    bool m_sampledRequestsHasBeenSet = false;

    long long m_populationSize{0};
    bool m_populationSizeHasBeenSet = false;

    TimeWindow m_timeWindow;
    bool m_timeWindowHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
