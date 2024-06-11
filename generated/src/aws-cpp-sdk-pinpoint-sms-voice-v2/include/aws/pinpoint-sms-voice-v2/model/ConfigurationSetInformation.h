﻿/**
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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Information related to a given configuration set in your Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ConfigurationSetInformation">AWS
   * API Reference</a></p>
   */
  class ConfigurationSetInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ConfigurationSetInformation();
    AWS_PINPOINTSMSVOICEV2_API ConfigurationSetInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API ConfigurationSetInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Resource Name (ARN) of the ConfigurationSet.</p>
     */
    inline const Aws::String& GetConfigurationSetArn() const{ return m_configurationSetArn; }
    inline bool ConfigurationSetArnHasBeenSet() const { return m_configurationSetArnHasBeenSet; }
    inline void SetConfigurationSetArn(const Aws::String& value) { m_configurationSetArnHasBeenSet = true; m_configurationSetArn = value; }
    inline void SetConfigurationSetArn(Aws::String&& value) { m_configurationSetArnHasBeenSet = true; m_configurationSetArn = std::move(value); }
    inline void SetConfigurationSetArn(const char* value) { m_configurationSetArnHasBeenSet = true; m_configurationSetArn.assign(value); }
    inline ConfigurationSetInformation& WithConfigurationSetArn(const Aws::String& value) { SetConfigurationSetArn(value); return *this;}
    inline ConfigurationSetInformation& WithConfigurationSetArn(Aws::String&& value) { SetConfigurationSetArn(std::move(value)); return *this;}
    inline ConfigurationSetInformation& WithConfigurationSetArn(const char* value) { SetConfigurationSetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the ConfigurationSet.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }
    inline ConfigurationSetInformation& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}
    inline ConfigurationSetInformation& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}
    inline ConfigurationSetInformation& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of EventDestination objects that describe any events to log and
     * where to log them.</p>
     */
    inline const Aws::Vector<EventDestination>& GetEventDestinations() const{ return m_eventDestinations; }
    inline bool EventDestinationsHasBeenSet() const { return m_eventDestinationsHasBeenSet; }
    inline void SetEventDestinations(const Aws::Vector<EventDestination>& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations = value; }
    inline void SetEventDestinations(Aws::Vector<EventDestination>&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations = std::move(value); }
    inline ConfigurationSetInformation& WithEventDestinations(const Aws::Vector<EventDestination>& value) { SetEventDestinations(value); return *this;}
    inline ConfigurationSetInformation& WithEventDestinations(Aws::Vector<EventDestination>&& value) { SetEventDestinations(std::move(value)); return *this;}
    inline ConfigurationSetInformation& AddEventDestinations(const EventDestination& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations.push_back(value); return *this; }
    inline ConfigurationSetInformation& AddEventDestinations(EventDestination&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline const MessageType& GetDefaultMessageType() const{ return m_defaultMessageType; }
    inline bool DefaultMessageTypeHasBeenSet() const { return m_defaultMessageTypeHasBeenSet; }
    inline void SetDefaultMessageType(const MessageType& value) { m_defaultMessageTypeHasBeenSet = true; m_defaultMessageType = value; }
    inline void SetDefaultMessageType(MessageType&& value) { m_defaultMessageTypeHasBeenSet = true; m_defaultMessageType = std::move(value); }
    inline ConfigurationSetInformation& WithDefaultMessageType(const MessageType& value) { SetDefaultMessageType(value); return *this;}
    inline ConfigurationSetInformation& WithDefaultMessageType(MessageType&& value) { SetDefaultMessageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default sender ID used by the ConfigurationSet.</p>
     */
    inline const Aws::String& GetDefaultSenderId() const{ return m_defaultSenderId; }
    inline bool DefaultSenderIdHasBeenSet() const { return m_defaultSenderIdHasBeenSet; }
    inline void SetDefaultSenderId(const Aws::String& value) { m_defaultSenderIdHasBeenSet = true; m_defaultSenderId = value; }
    inline void SetDefaultSenderId(Aws::String&& value) { m_defaultSenderIdHasBeenSet = true; m_defaultSenderId = std::move(value); }
    inline void SetDefaultSenderId(const char* value) { m_defaultSenderIdHasBeenSet = true; m_defaultSenderId.assign(value); }
    inline ConfigurationSetInformation& WithDefaultSenderId(const Aws::String& value) { SetDefaultSenderId(value); return *this;}
    inline ConfigurationSetInformation& WithDefaultSenderId(Aws::String&& value) { SetDefaultSenderId(std::move(value)); return *this;}
    inline ConfigurationSetInformation& WithDefaultSenderId(const char* value) { SetDefaultSenderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the ConfigurationSet was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline ConfigurationSetInformation& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline ConfigurationSetInformation& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const{ return m_protectConfigurationId; }
    inline bool ProtectConfigurationIdHasBeenSet() const { return m_protectConfigurationIdHasBeenSet; }
    inline void SetProtectConfigurationId(const Aws::String& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = value; }
    inline void SetProtectConfigurationId(Aws::String&& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = std::move(value); }
    inline void SetProtectConfigurationId(const char* value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId.assign(value); }
    inline ConfigurationSetInformation& WithProtectConfigurationId(const Aws::String& value) { SetProtectConfigurationId(value); return *this;}
    inline ConfigurationSetInformation& WithProtectConfigurationId(Aws::String&& value) { SetProtectConfigurationId(std::move(value)); return *this;}
    inline ConfigurationSetInformation& WithProtectConfigurationId(const char* value) { SetProtectConfigurationId(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetArn;
    bool m_configurationSetArnHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::Vector<EventDestination> m_eventDestinations;
    bool m_eventDestinationsHasBeenSet = false;

    MessageType m_defaultMessageType;
    bool m_defaultMessageTypeHasBeenSet = false;

    Aws::String m_defaultSenderId;
    bool m_defaultSenderIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::String m_protectConfigurationId;
    bool m_protectConfigurationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
