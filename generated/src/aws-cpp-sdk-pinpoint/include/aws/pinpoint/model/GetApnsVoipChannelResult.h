/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/APNSVoipChannelResponse.h>
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
  class GetApnsVoipChannelResult
  {
  public:
    AWS_PINPOINT_API GetApnsVoipChannelResult();
    AWS_PINPOINT_API GetApnsVoipChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetApnsVoipChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const APNSVoipChannelResponse& GetAPNSVoipChannelResponse() const{ return m_aPNSVoipChannelResponse; }

    
    inline void SetAPNSVoipChannelResponse(const APNSVoipChannelResponse& value) { m_aPNSVoipChannelResponse = value; }

    
    inline void SetAPNSVoipChannelResponse(APNSVoipChannelResponse&& value) { m_aPNSVoipChannelResponse = std::move(value); }

    
    inline GetApnsVoipChannelResult& WithAPNSVoipChannelResponse(const APNSVoipChannelResponse& value) { SetAPNSVoipChannelResponse(value); return *this;}

    
    inline GetApnsVoipChannelResult& WithAPNSVoipChannelResponse(APNSVoipChannelResponse&& value) { SetAPNSVoipChannelResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetApnsVoipChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetApnsVoipChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetApnsVoipChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    APNSVoipChannelResponse m_aPNSVoipChannelResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
