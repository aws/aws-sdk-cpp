/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EventStream.h>
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
  class GetEventStreamResult
  {
  public:
    AWS_PINPOINT_API GetEventStreamResult();
    AWS_PINPOINT_API GetEventStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetEventStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const EventStream& GetEventStream() const{ return m_eventStream; }

    
    inline void SetEventStream(const EventStream& value) { m_eventStream = value; }

    
    inline void SetEventStream(EventStream&& value) { m_eventStream = std::move(value); }

    
    inline GetEventStreamResult& WithEventStream(const EventStream& value) { SetEventStream(value); return *this;}

    
    inline GetEventStreamResult& WithEventStream(EventStream&& value) { SetEventStream(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEventStreamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEventStreamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEventStreamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EventStream m_eventStream;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
