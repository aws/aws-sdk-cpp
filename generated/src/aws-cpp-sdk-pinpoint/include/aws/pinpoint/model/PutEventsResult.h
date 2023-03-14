/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EventsResponse.h>
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
  class PutEventsResult
  {
  public:
    AWS_PINPOINT_API PutEventsResult();
    AWS_PINPOINT_API PutEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API PutEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const EventsResponse& GetEventsResponse() const{ return m_eventsResponse; }

    
    inline void SetEventsResponse(const EventsResponse& value) { m_eventsResponse = value; }

    
    inline void SetEventsResponse(EventsResponse&& value) { m_eventsResponse = std::move(value); }

    
    inline PutEventsResult& WithEventsResponse(const EventsResponse& value) { SetEventsResponse(value); return *this;}

    
    inline PutEventsResult& WithEventsResponse(EventsResponse&& value) { SetEventsResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EventsResponse m_eventsResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
