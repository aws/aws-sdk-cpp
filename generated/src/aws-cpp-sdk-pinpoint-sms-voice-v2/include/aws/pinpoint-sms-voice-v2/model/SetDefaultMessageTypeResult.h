/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
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
  class SetDefaultMessageTypeResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SetDefaultMessageTypeResult();
    AWS_PINPOINTSMSVOICEV2_API SetDefaultMessageTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API SetDefaultMessageTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the updated configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetArn() const{ return m_configurationSetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated configuration set.</p>
     */
    inline void SetConfigurationSetArn(const Aws::String& value) { m_configurationSetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated configuration set.</p>
     */
    inline void SetConfigurationSetArn(Aws::String&& value) { m_configurationSetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated configuration set.</p>
     */
    inline void SetConfigurationSetArn(const char* value) { m_configurationSetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated configuration set.</p>
     */
    inline SetDefaultMessageTypeResult& WithConfigurationSetArn(const Aws::String& value) { SetConfigurationSetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated configuration set.</p>
     */
    inline SetDefaultMessageTypeResult& WithConfigurationSetArn(Aws::String&& value) { SetConfigurationSetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated configuration set.</p>
     */
    inline SetDefaultMessageTypeResult& WithConfigurationSetArn(const char* value) { SetConfigurationSetArn(value); return *this;}


    /**
     * <p>The name of the configuration set that was updated.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set that was updated.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set that was updated.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set that was updated.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set that was updated.</p>
     */
    inline SetDefaultMessageTypeResult& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set that was updated.</p>
     */
    inline SetDefaultMessageTypeResult& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set that was updated.</p>
     */
    inline SetDefaultMessageTypeResult& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>The new default message type of the configuration set.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>The new default message type of the configuration set.</p>
     */
    inline void SetMessageType(const MessageType& value) { m_messageType = value; }

    /**
     * <p>The new default message type of the configuration set.</p>
     */
    inline void SetMessageType(MessageType&& value) { m_messageType = std::move(value); }

    /**
     * <p>The new default message type of the configuration set.</p>
     */
    inline SetDefaultMessageTypeResult& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>The new default message type of the configuration set.</p>
     */
    inline SetDefaultMessageTypeResult& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}

  private:

    Aws::String m_configurationSetArn;

    Aws::String m_configurationSetName;

    MessageType m_messageType;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
