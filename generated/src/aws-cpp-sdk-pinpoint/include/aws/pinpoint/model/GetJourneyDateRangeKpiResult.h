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
    AWS_PINPOINT_API GetJourneyDateRangeKpiResult();
    AWS_PINPOINT_API GetJourneyDateRangeKpiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetJourneyDateRangeKpiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const JourneyDateRangeKpiResponse& GetJourneyDateRangeKpiResponse() const{ return m_journeyDateRangeKpiResponse; }

    
    inline void SetJourneyDateRangeKpiResponse(const JourneyDateRangeKpiResponse& value) { m_journeyDateRangeKpiResponse = value; }

    
    inline void SetJourneyDateRangeKpiResponse(JourneyDateRangeKpiResponse&& value) { m_journeyDateRangeKpiResponse = std::move(value); }

    
    inline GetJourneyDateRangeKpiResult& WithJourneyDateRangeKpiResponse(const JourneyDateRangeKpiResponse& value) { SetJourneyDateRangeKpiResponse(value); return *this;}

    
    inline GetJourneyDateRangeKpiResult& WithJourneyDateRangeKpiResponse(JourneyDateRangeKpiResponse&& value) { SetJourneyDateRangeKpiResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetJourneyDateRangeKpiResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetJourneyDateRangeKpiResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetJourneyDateRangeKpiResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    JourneyDateRangeKpiResponse m_journeyDateRangeKpiResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
