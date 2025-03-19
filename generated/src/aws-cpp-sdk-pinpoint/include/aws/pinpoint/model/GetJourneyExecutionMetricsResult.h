/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/JourneyExecutionMetricsResponse.h>
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
  class GetJourneyExecutionMetricsResult
  {
  public:
    AWS_PINPOINT_API GetJourneyExecutionMetricsResult() = default;
    AWS_PINPOINT_API GetJourneyExecutionMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetJourneyExecutionMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const JourneyExecutionMetricsResponse& GetJourneyExecutionMetricsResponse() const { return m_journeyExecutionMetricsResponse; }
    template<typename JourneyExecutionMetricsResponseT = JourneyExecutionMetricsResponse>
    void SetJourneyExecutionMetricsResponse(JourneyExecutionMetricsResponseT&& value) { m_journeyExecutionMetricsResponseHasBeenSet = true; m_journeyExecutionMetricsResponse = std::forward<JourneyExecutionMetricsResponseT>(value); }
    template<typename JourneyExecutionMetricsResponseT = JourneyExecutionMetricsResponse>
    GetJourneyExecutionMetricsResult& WithJourneyExecutionMetricsResponse(JourneyExecutionMetricsResponseT&& value) { SetJourneyExecutionMetricsResponse(std::forward<JourneyExecutionMetricsResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJourneyExecutionMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JourneyExecutionMetricsResponse m_journeyExecutionMetricsResponse;
    bool m_journeyExecutionMetricsResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
