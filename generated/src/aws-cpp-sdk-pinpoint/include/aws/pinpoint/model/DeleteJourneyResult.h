/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/JourneyResponse.h>
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
  class DeleteJourneyResult
  {
  public:
    AWS_PINPOINT_API DeleteJourneyResult();
    AWS_PINPOINT_API DeleteJourneyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeleteJourneyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const JourneyResponse& GetJourneyResponse() const{ return m_journeyResponse; }

    
    inline void SetJourneyResponse(const JourneyResponse& value) { m_journeyResponse = value; }

    
    inline void SetJourneyResponse(JourneyResponse&& value) { m_journeyResponse = std::move(value); }

    
    inline DeleteJourneyResult& WithJourneyResponse(const JourneyResponse& value) { SetJourneyResponse(value); return *this;}

    
    inline DeleteJourneyResult& WithJourneyResponse(JourneyResponse&& value) { SetJourneyResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteJourneyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteJourneyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteJourneyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    JourneyResponse m_journeyResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
