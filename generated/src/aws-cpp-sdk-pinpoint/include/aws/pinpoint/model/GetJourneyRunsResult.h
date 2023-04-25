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
    AWS_PINPOINT_API GetJourneyRunsResult();
    AWS_PINPOINT_API GetJourneyRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetJourneyRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const JourneyRunsResponse& GetJourneyRunsResponse() const{ return m_journeyRunsResponse; }

    
    inline void SetJourneyRunsResponse(const JourneyRunsResponse& value) { m_journeyRunsResponse = value; }

    
    inline void SetJourneyRunsResponse(JourneyRunsResponse&& value) { m_journeyRunsResponse = std::move(value); }

    
    inline GetJourneyRunsResult& WithJourneyRunsResponse(const JourneyRunsResponse& value) { SetJourneyRunsResponse(value); return *this;}

    
    inline GetJourneyRunsResult& WithJourneyRunsResponse(JourneyRunsResponse&& value) { SetJourneyRunsResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetJourneyRunsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetJourneyRunsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetJourneyRunsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    JourneyRunsResponse m_journeyRunsResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
