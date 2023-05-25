/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ChannelsResponse.h>
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
  class GetChannelsResult
  {
  public:
    AWS_PINPOINT_API GetChannelsResult();
    AWS_PINPOINT_API GetChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ChannelsResponse& GetChannelsResponse() const{ return m_channelsResponse; }

    
    inline void SetChannelsResponse(const ChannelsResponse& value) { m_channelsResponse = value; }

    
    inline void SetChannelsResponse(ChannelsResponse&& value) { m_channelsResponse = std::move(value); }

    
    inline GetChannelsResult& WithChannelsResponse(const ChannelsResponse& value) { SetChannelsResponse(value); return *this;}

    
    inline GetChannelsResult& WithChannelsResponse(ChannelsResponse&& value) { SetChannelsResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetChannelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetChannelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetChannelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ChannelsResponse m_channelsResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
