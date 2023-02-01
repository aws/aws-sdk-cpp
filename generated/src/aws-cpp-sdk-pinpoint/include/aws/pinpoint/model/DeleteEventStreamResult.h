/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EventStream.h>
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
  class DeleteEventStreamResult
  {
  public:
    AWS_PINPOINT_API DeleteEventStreamResult();
    AWS_PINPOINT_API DeleteEventStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeleteEventStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const EventStream& GetEventStream() const{ return m_eventStream; }

    
    inline void SetEventStream(const EventStream& value) { m_eventStream = value; }

    
    inline void SetEventStream(EventStream&& value) { m_eventStream = std::move(value); }

    
    inline DeleteEventStreamResult& WithEventStream(const EventStream& value) { SetEventStream(value); return *this;}

    
    inline DeleteEventStreamResult& WithEventStream(EventStream&& value) { SetEventStream(std::move(value)); return *this;}

  private:

    EventStream m_eventStream;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
