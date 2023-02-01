/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/JourneyResponse.h>
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
  class UpdateJourneyResult
  {
  public:
    AWS_PINPOINT_API UpdateJourneyResult();
    AWS_PINPOINT_API UpdateJourneyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API UpdateJourneyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const JourneyResponse& GetJourneyResponse() const{ return m_journeyResponse; }

    
    inline void SetJourneyResponse(const JourneyResponse& value) { m_journeyResponse = value; }

    
    inline void SetJourneyResponse(JourneyResponse&& value) { m_journeyResponse = std::move(value); }

    
    inline UpdateJourneyResult& WithJourneyResponse(const JourneyResponse& value) { SetJourneyResponse(value); return *this;}

    
    inline UpdateJourneyResult& WithJourneyResponse(JourneyResponse&& value) { SetJourneyResponse(std::move(value)); return *this;}

  private:

    JourneyResponse m_journeyResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
