﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class SendMediaMessageResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SendMediaMessageResult();
    AWS_PINPOINTSMSVOICEV2_API SendMediaMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API SendMediaMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }
    inline SendMediaMessageResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline SendMediaMessageResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline SendMediaMessageResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SendMediaMessageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SendMediaMessageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SendMediaMessageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_messageId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
