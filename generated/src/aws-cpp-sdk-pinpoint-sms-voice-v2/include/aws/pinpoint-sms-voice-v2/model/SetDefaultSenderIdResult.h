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
  class SetDefaultSenderIdResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SetDefaultSenderIdResult();
    AWS_PINPOINTSMSVOICEV2_API SetDefaultSenderIdResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API SetDefaultSenderIdResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline SetDefaultSenderIdResult& WithConfigurationSetArn(const Aws::String& value) { SetConfigurationSetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated configuration set.</p>
     */
    inline SetDefaultSenderIdResult& WithConfigurationSetArn(Aws::String&& value) { SetConfigurationSetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated configuration set.</p>
     */
    inline SetDefaultSenderIdResult& WithConfigurationSetArn(const char* value) { SetConfigurationSetArn(value); return *this;}


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
    inline SetDefaultSenderIdResult& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set that was updated.</p>
     */
    inline SetDefaultSenderIdResult& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set that was updated.</p>
     */
    inline SetDefaultSenderIdResult& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>The default sender ID to set for the ConfigurationSet.</p>
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * <p>The default sender ID to set for the ConfigurationSet.</p>
     */
    inline void SetSenderId(const Aws::String& value) { m_senderId = value; }

    /**
     * <p>The default sender ID to set for the ConfigurationSet.</p>
     */
    inline void SetSenderId(Aws::String&& value) { m_senderId = std::move(value); }

    /**
     * <p>The default sender ID to set for the ConfigurationSet.</p>
     */
    inline void SetSenderId(const char* value) { m_senderId.assign(value); }

    /**
     * <p>The default sender ID to set for the ConfigurationSet.</p>
     */
    inline SetDefaultSenderIdResult& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * <p>The default sender ID to set for the ConfigurationSet.</p>
     */
    inline SetDefaultSenderIdResult& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * <p>The default sender ID to set for the ConfigurationSet.</p>
     */
    inline SetDefaultSenderIdResult& WithSenderId(const char* value) { SetSenderId(value); return *this;}

  private:

    Aws::String m_configurationSetArn;

    Aws::String m_configurationSetName;

    Aws::String m_senderId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
