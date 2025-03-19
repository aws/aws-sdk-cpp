/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/JourneyRunsResponse.h>
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
  class GetJourneyRunsResult
  {
  public:
    AWS_PINPOINT_API GetJourneyRunsResult() = default;
    AWS_PINPOINT_API GetJourneyRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetJourneyRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const JourneyRunsResponse& GetJourneyRunsResponse() const { return m_journeyRunsResponse; }
    template<typename JourneyRunsResponseT = JourneyRunsResponse>
    void SetJourneyRunsResponse(JourneyRunsResponseT&& value) { m_journeyRunsResponseHasBeenSet = true; m_journeyRunsResponse = std::forward<JourneyRunsResponseT>(value); }
    template<typename JourneyRunsResponseT = JourneyRunsResponse>
    GetJourneyRunsResult& WithJourneyRunsResponse(JourneyRunsResponseT&& value) { SetJourneyRunsResponse(std::forward<JourneyRunsResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJourneyRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JourneyRunsResponse m_journeyRunsResponse;
    bool m_journeyRunsResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
