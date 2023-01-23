/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/JourneyExecutionMetricsResponse.h>
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
    AWS_PINPOINT_API GetJourneyExecutionMetricsResult();
    AWS_PINPOINT_API GetJourneyExecutionMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetJourneyExecutionMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const JourneyExecutionMetricsResponse& GetJourneyExecutionMetricsResponse() const{ return m_journeyExecutionMetricsResponse; }

    
    inline void SetJourneyExecutionMetricsResponse(const JourneyExecutionMetricsResponse& value) { m_journeyExecutionMetricsResponse = value; }

    
    inline void SetJourneyExecutionMetricsResponse(JourneyExecutionMetricsResponse&& value) { m_journeyExecutionMetricsResponse = std::move(value); }

    
    inline GetJourneyExecutionMetricsResult& WithJourneyExecutionMetricsResponse(const JourneyExecutionMetricsResponse& value) { SetJourneyExecutionMetricsResponse(value); return *this;}

    
    inline GetJourneyExecutionMetricsResult& WithJourneyExecutionMetricsResponse(JourneyExecutionMetricsResponse&& value) { SetJourneyExecutionMetricsResponse(std::move(value)); return *this;}

  private:

    JourneyExecutionMetricsResponse m_journeyExecutionMetricsResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
