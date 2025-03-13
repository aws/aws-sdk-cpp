/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/JourneyDateRangeKpiResponse.h>
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
  class GetJourneyDateRangeKpiResult
  {
  public:
    AWS_PINPOINT_API GetJourneyDateRangeKpiResult() = default;
    AWS_PINPOINT_API GetJourneyDateRangeKpiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetJourneyDateRangeKpiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const JourneyDateRangeKpiResponse& GetJourneyDateRangeKpiResponse() const { return m_journeyDateRangeKpiResponse; }
    template<typename JourneyDateRangeKpiResponseT = JourneyDateRangeKpiResponse>
    void SetJourneyDateRangeKpiResponse(JourneyDateRangeKpiResponseT&& value) { m_journeyDateRangeKpiResponseHasBeenSet = true; m_journeyDateRangeKpiResponse = std::forward<JourneyDateRangeKpiResponseT>(value); }
    template<typename JourneyDateRangeKpiResponseT = JourneyDateRangeKpiResponse>
    GetJourneyDateRangeKpiResult& WithJourneyDateRangeKpiResponse(JourneyDateRangeKpiResponseT&& value) { SetJourneyDateRangeKpiResponse(std::forward<JourneyDateRangeKpiResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJourneyDateRangeKpiResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JourneyDateRangeKpiResponse m_journeyDateRangeKpiResponse;
    bool m_journeyDateRangeKpiResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
