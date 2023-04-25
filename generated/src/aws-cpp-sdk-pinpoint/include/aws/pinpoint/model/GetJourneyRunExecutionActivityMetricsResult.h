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
    AWS_PINPOINT_API GetJourneyRunExecutionActivityMetricsResult();
    AWS_PINPOINT_API GetJourneyRunExecutionActivityMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetJourneyRunExecutionActivityMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const JourneyRunExecutionActivityMetricsResponse& GetJourneyRunExecutionActivityMetricsResponse() const{ return m_journeyRunExecutionActivityMetricsResponse; }

    
    inline void SetJourneyRunExecutionActivityMetricsResponse(const JourneyRunExecutionActivityMetricsResponse& value) { m_journeyRunExecutionActivityMetricsResponse = value; }

    
    inline void SetJourneyRunExecutionActivityMetricsResponse(JourneyRunExecutionActivityMetricsResponse&& value) { m_journeyRunExecutionActivityMetricsResponse = std::move(value); }

    
    inline GetJourneyRunExecutionActivityMetricsResult& WithJourneyRunExecutionActivityMetricsResponse(const JourneyRunExecutionActivityMetricsResponse& value) { SetJourneyRunExecutionActivityMetricsResponse(value); return *this;}

    
    inline GetJourneyRunExecutionActivityMetricsResult& WithJourneyRunExecutionActivityMetricsResponse(JourneyRunExecutionActivityMetricsResponse&& value) { SetJourneyRunExecutionActivityMetricsResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetJourneyRunExecutionActivityMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetJourneyRunExecutionActivityMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetJourneyRunExecutionActivityMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    JourneyRunExecutionActivityMetricsResponse m_journeyRunExecutionActivityMetricsResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
