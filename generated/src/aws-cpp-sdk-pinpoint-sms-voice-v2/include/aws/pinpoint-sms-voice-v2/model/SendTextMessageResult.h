/**
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
  class SendTextMessageResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SendTextMessageResult();
    AWS_PINPOINTSMSVOICEV2_API SendTextMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API SendTextMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The unique identifier for the message.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }

    /**
     * <p>The unique identifier for the message.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }

    /**
     * <p>The unique identifier for the message.</p>
     */
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }

    /**
     * <p>The unique identifier for the message.</p>
     */
    inline SendTextMessageResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The unique identifier for the message.</p>
     */
    inline SendTextMessageResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the message.</p>
     */
    inline SendTextMessageResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}

  private:

    Aws::String m_messageId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
