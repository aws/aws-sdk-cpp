/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SMSChannelResponse.h>
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
  class GetSmsChannelResult
  {
  public:
    AWS_PINPOINT_API GetSmsChannelResult();
    AWS_PINPOINT_API GetSmsChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetSmsChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const SMSChannelResponse& GetSMSChannelResponse() const{ return m_sMSChannelResponse; }

    
    inline void SetSMSChannelResponse(const SMSChannelResponse& value) { m_sMSChannelResponse = value; }

    
    inline void SetSMSChannelResponse(SMSChannelResponse&& value) { m_sMSChannelResponse = std::move(value); }

    
    inline GetSmsChannelResult& WithSMSChannelResponse(const SMSChannelResponse& value) { SetSMSChannelResponse(value); return *this;}

    
    inline GetSmsChannelResult& WithSMSChannelResponse(SMSChannelResponse&& value) { SetSMSChannelResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSmsChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSmsChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSmsChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SMSChannelResponse m_sMSChannelResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
