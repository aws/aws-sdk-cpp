/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/JourneyExecutionActivityMetricsResponse.h>
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
  class GetJourneyExecutionActivityMetricsResult
  {
  public:
    AWS_PINPOINT_API GetJourneyExecutionActivityMetricsResult() = default;
    AWS_PINPOINT_API GetJourneyExecutionActivityMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetJourneyExecutionActivityMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const JourneyExecutionActivityMetricsResponse& GetJourneyExecutionActivityMetricsResponse() const { return m_journeyExecutionActivityMetricsResponse; }
    template<typename JourneyExecutionActivityMetricsResponseT = JourneyExecutionActivityMetricsResponse>
    void SetJourneyExecutionActivityMetricsResponse(JourneyExecutionActivityMetricsResponseT&& value) { m_journeyExecutionActivityMetricsResponseHasBeenSet = true; m_journeyExecutionActivityMetricsResponse = std::forward<JourneyExecutionActivityMetricsResponseT>(value); }
    template<typename JourneyExecutionActivityMetricsResponseT = JourneyExecutionActivityMetricsResponse>
    GetJourneyExecutionActivityMetricsResult& WithJourneyExecutionActivityMetricsResponse(JourneyExecutionActivityMetricsResponseT&& value) { SetJourneyExecutionActivityMetricsResponse(std::forward<JourneyExecutionActivityMetricsResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJourneyExecutionActivityMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JourneyExecutionActivityMetricsResponse m_journeyExecutionActivityMetricsResponse;
    bool m_journeyExecutionActivityMetricsResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
