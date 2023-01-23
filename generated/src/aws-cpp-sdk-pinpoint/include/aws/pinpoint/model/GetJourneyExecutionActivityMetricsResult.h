/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/JourneyExecutionActivityMetricsResponse.h>
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
    AWS_PINPOINT_API GetJourneyExecutionActivityMetricsResult();
    AWS_PINPOINT_API GetJourneyExecutionActivityMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetJourneyExecutionActivityMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const JourneyExecutionActivityMetricsResponse& GetJourneyExecutionActivityMetricsResponse() const{ return m_journeyExecutionActivityMetricsResponse; }

    
    inline void SetJourneyExecutionActivityMetricsResponse(const JourneyExecutionActivityMetricsResponse& value) { m_journeyExecutionActivityMetricsResponse = value; }

    
    inline void SetJourneyExecutionActivityMetricsResponse(JourneyExecutionActivityMetricsResponse&& value) { m_journeyExecutionActivityMetricsResponse = std::move(value); }

    
    inline GetJourneyExecutionActivityMetricsResult& WithJourneyExecutionActivityMetricsResponse(const JourneyExecutionActivityMetricsResponse& value) { SetJourneyExecutionActivityMetricsResponse(value); return *this;}

    
    inline GetJourneyExecutionActivityMetricsResult& WithJourneyExecutionActivityMetricsResponse(JourneyExecutionActivityMetricsResponse&& value) { SetJourneyExecutionActivityMetricsResponse(std::move(value)); return *this;}

  private:

    JourneyExecutionActivityMetricsResponse m_journeyExecutionActivityMetricsResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
