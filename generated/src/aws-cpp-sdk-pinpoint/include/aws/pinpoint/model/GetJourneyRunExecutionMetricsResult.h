/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/JourneyRunExecutionMetricsResponse.h>
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
  class GetJourneyRunExecutionMetricsResult
  {
  public:
    AWS_PINPOINT_API GetJourneyRunExecutionMetricsResult() = default;
    AWS_PINPOINT_API GetJourneyRunExecutionMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetJourneyRunExecutionMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const JourneyRunExecutionMetricsResponse& GetJourneyRunExecutionMetricsResponse() const { return m_journeyRunExecutionMetricsResponse; }
    template<typename JourneyRunExecutionMetricsResponseT = JourneyRunExecutionMetricsResponse>
    void SetJourneyRunExecutionMetricsResponse(JourneyRunExecutionMetricsResponseT&& value) { m_journeyRunExecutionMetricsResponseHasBeenSet = true; m_journeyRunExecutionMetricsResponse = std::forward<JourneyRunExecutionMetricsResponseT>(value); }
    template<typename JourneyRunExecutionMetricsResponseT = JourneyRunExecutionMetricsResponse>
    GetJourneyRunExecutionMetricsResult& WithJourneyRunExecutionMetricsResponse(JourneyRunExecutionMetricsResponseT&& value) { SetJourneyRunExecutionMetricsResponse(std::forward<JourneyRunExecutionMetricsResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJourneyRunExecutionMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JourneyRunExecutionMetricsResponse m_journeyRunExecutionMetricsResponse;
    bool m_journeyRunExecutionMetricsResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
