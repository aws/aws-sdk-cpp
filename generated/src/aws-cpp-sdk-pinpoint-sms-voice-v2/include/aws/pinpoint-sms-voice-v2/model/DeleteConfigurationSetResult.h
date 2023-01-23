/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint-sms-voice-v2/model/EventDestination.h>
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
  class DeleteConfigurationSetResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteConfigurationSetResult();
    AWS_PINPOINTSMSVOICEV2_API DeleteConfigurationSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteConfigurationSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the deleted configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetArn() const{ return m_configurationSetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted configuration set.</p>
     */
    inline void SetConfigurationSetArn(const Aws::String& value) { m_configurationSetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted configuration set.</p>
     */
    inline void SetConfigurationSetArn(Aws::String&& value) { m_configurationSetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted configuration set.</p>
     */
    inline void SetConfigurationSetArn(const char* value) { m_configurationSetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted configuration set.</p>
     */
    inline DeleteConfigurationSetResult& WithConfigurationSetArn(const Aws::String& value) { SetConfigurationSetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted configuration set.</p>
     */
    inline DeleteConfigurationSetResult& WithConfigurationSetArn(Aws::String&& value) { SetConfigurationSetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted configuration set.</p>
     */
    inline DeleteConfigurationSetResult& WithConfigurationSetArn(const char* value) { SetConfigurationSetArn(value); return *this;}


    /**
     * <p>The name of the deleted configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the deleted configuration set.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetName = value; }

    /**
     * <p>The name of the deleted configuration set.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the deleted configuration set.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetName.assign(value); }

    /**
     * <p>The name of the deleted configuration set.</p>
     */
    inline DeleteConfigurationSetResult& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the deleted configuration set.</p>
     */
    inline DeleteConfigurationSetResult& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the deleted configuration set.</p>
     */
    inline DeleteConfigurationSetResult& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>An array of any EventDestination objects that were associated with the
     * deleted configuration set.</p>
     */
    inline const Aws::Vector<EventDestination>& GetEventDestinations() const{ return m_eventDestinations; }

    /**
     * <p>An array of any EventDestination objects that were associated with the
     * deleted configuration set.</p>
     */
    inline void SetEventDestinations(const Aws::Vector<EventDestination>& value) { m_eventDestinations = value; }

    /**
     * <p>An array of any EventDestination objects that were associated with the
     * deleted configuration set.</p>
     */
    inline void SetEventDestinations(Aws::Vector<EventDestination>&& value) { m_eventDestinations = std::move(value); }

    /**
     * <p>An array of any EventDestination objects that were associated with the
     * deleted configuration set.</p>
     */
    inline DeleteConfigurationSetResult& WithEventDestinations(const Aws::Vector<EventDestination>& value) { SetEventDestinations(value); return *this;}

    /**
     * <p>An array of any EventDestination objects that were associated with the
     * deleted configuration set.</p>
     */
    inline DeleteConfigurationSetResult& WithEventDestinations(Aws::Vector<EventDestination>&& value) { SetEventDestinations(std::move(value)); return *this;}

    /**
     * <p>An array of any EventDestination objects that were associated with the
     * deleted configuration set.</p>
     */
    inline DeleteConfigurationSetResult& AddEventDestinations(const EventDestination& value) { m_eventDestinations.push_back(value); return *this; }

    /**
     * <p>An array of any EventDestination objects that were associated with the
     * deleted configuration set.</p>
     */
    inline DeleteConfigurationSetResult& AddEventDestinations(EventDestination&& value) { m_eventDestinations.push_back(std::move(value)); return *this; }


    /**
     * <p>The default message type of the configuration set that was deleted.</p>
     */
    inline const MessageType& GetDefaultMessageType() const{ return m_defaultMessageType; }

    /**
     * <p>The default message type of the configuration set that was deleted.</p>
     */
    inline void SetDefaultMessageType(const MessageType& value) { m_defaultMessageType = value; }

    /**
     * <p>The default message type of the configuration set that was deleted.</p>
     */
    inline void SetDefaultMessageType(MessageType&& value) { m_defaultMessageType = std::move(value); }

    /**
     * <p>The default message type of the configuration set that was deleted.</p>
     */
    inline DeleteConfigurationSetResult& WithDefaultMessageType(const MessageType& value) { SetDefaultMessageType(value); return *this;}

    /**
     * <p>The default message type of the configuration set that was deleted.</p>
     */
    inline DeleteConfigurationSetResult& WithDefaultMessageType(MessageType&& value) { SetDefaultMessageType(std::move(value)); return *this;}


    /**
     * <p>The default Sender ID of the configuration set that was deleted.</p>
     */
    inline const Aws::String& GetDefaultSenderId() const{ return m_defaultSenderId; }

    /**
     * <p>The default Sender ID of the configuration set that was deleted.</p>
     */
    inline void SetDefaultSenderId(const Aws::String& value) { m_defaultSenderId = value; }

    /**
     * <p>The default Sender ID of the configuration set that was deleted.</p>
     */
    inline void SetDefaultSenderId(Aws::String&& value) { m_defaultSenderId = std::move(value); }

    /**
     * <p>The default Sender ID of the configuration set that was deleted.</p>
     */
    inline void SetDefaultSenderId(const char* value) { m_defaultSenderId.assign(value); }

    /**
     * <p>The default Sender ID of the configuration set that was deleted.</p>
     */
    inline DeleteConfigurationSetResult& WithDefaultSenderId(const Aws::String& value) { SetDefaultSenderId(value); return *this;}

    /**
     * <p>The default Sender ID of the configuration set that was deleted.</p>
     */
    inline DeleteConfigurationSetResult& WithDefaultSenderId(Aws::String&& value) { SetDefaultSenderId(std::move(value)); return *this;}

    /**
     * <p>The default Sender ID of the configuration set that was deleted.</p>
     */
    inline DeleteConfigurationSetResult& WithDefaultSenderId(const char* value) { SetDefaultSenderId(value); return *this;}


    /**
     * <p>The time that the deleted configuration set was created in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time that the deleted configuration set was created in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The time that the deleted configuration set was created in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The time that the deleted configuration set was created in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline DeleteConfigurationSetResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time that the deleted configuration set was created in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline DeleteConfigurationSetResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_configurationSetArn;

    Aws::String m_configurationSetName;

    Aws::Vector<EventDestination> m_eventDestinations;

    MessageType m_defaultMessageType;

    Aws::String m_defaultSenderId;

    Aws::Utils::DateTime m_createdTimestamp;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
