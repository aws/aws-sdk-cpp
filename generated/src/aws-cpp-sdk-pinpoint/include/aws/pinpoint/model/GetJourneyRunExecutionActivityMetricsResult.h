/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/JourneyRunExecutionActivityMetricsResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class GetJourneyRunExecutionActivityMetricsResult
  {
  public:
    AWS_PINPOINT_API GetJourneyRunExecutionActivityMetricsResult() = default;
    AWS_PINPOINT_API GetJourneyRunExecutionActivityMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetJourneyRunExecutionActivityMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const JourneyRunExecutionActivityMetricsResponse& GetJourneyRunExecutionActivityMetricsResponse() const { return m_journeyRunExecutionActivityMetricsResponse; }
    template<typename JourneyRunExecutionActivityMetricsResponseT = JourneyRunExecutionActivityMetricsResponse>
    void SetJourneyRunExecutionActivityMetricsResponse(JourneyRunExecutionActivityMetricsResponseT&& value) { m_journeyRunExecutionActivityMetricsResponseHasBeenSet = true; m_journeyRunExecutionActivityMetricsResponse = std::forward<JourneyRunExecutionActivityMetricsResponseT>(value); }
    template<typename JourneyRunExecutionActivityMetricsResponseT = JourneyRunExecutionActivityMetricsResponse>
    GetJourneyRunExecutionActivityMetricsResult& WithJourneyRunExecutionActivityMetricsResponse(JourneyRunExecutionActivityMetricsResponseT&& value) { SetJourneyRunExecutionActivityMetricsResponse(std::forward<JourneyRunExecutionActivityMetricsResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJourneyRunExecutionActivityMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JourneyRunExecutionActivityMetricsResponse m_journeyRunExecutionActivityMetricsResponse;
    bool m_journeyRunExecutionActivityMetricsResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
