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
    AWS_PINPOINT_API GetJourneyRunExecutionMetricsResult();
    AWS_PINPOINT_API GetJourneyRunExecutionMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetJourneyRunExecutionMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const JourneyRunExecutionMetricsResponse& GetJourneyRunExecutionMetricsResponse() const{ return m_journeyRunExecutionMetricsResponse; }

    
    inline void SetJourneyRunExecutionMetricsResponse(const JourneyRunExecutionMetricsResponse& value) { m_journeyRunExecutionMetricsResponse = value; }

    
    inline void SetJourneyRunExecutionMetricsResponse(JourneyRunExecutionMetricsResponse&& value) { m_journeyRunExecutionMetricsResponse = std::move(value); }

    
    inline GetJourneyRunExecutionMetricsResult& WithJourneyRunExecutionMetricsResponse(const JourneyRunExecutionMetricsResponse& value) { SetJourneyRunExecutionMetricsResponse(value); return *this;}

    
    inline GetJourneyRunExecutionMetricsResult& WithJourneyRunExecutionMetricsResponse(JourneyRunExecutionMetricsResponse&& value) { SetJourneyRunExecutionMetricsResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetJourneyRunExecutionMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetJourneyRunExecutionMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetJourneyRunExecutionMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    JourneyRunExecutionMetricsResponse m_journeyRunExecutionMetricsResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
