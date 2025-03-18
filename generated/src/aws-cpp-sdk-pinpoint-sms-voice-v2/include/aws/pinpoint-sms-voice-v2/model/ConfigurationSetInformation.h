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
    AWS_PINPOINTSMSVOICEV2_API ConfigurationSetInformation() = default;
    AWS_PINPOINTSMSVOICEV2_API ConfigurationSetInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API ConfigurationSetInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Resource Name (ARN) of the ConfigurationSet.</p>
     */
    inline const Aws::String& GetConfigurationSetArn() const { return m_configurationSetArn; }
    inline bool ConfigurationSetArnHasBeenSet() const { return m_configurationSetArnHasBeenSet; }
    template<typename ConfigurationSetArnT = Aws::String>
    void SetConfigurationSetArn(ConfigurationSetArnT&& value) { m_configurationSetArnHasBeenSet = true; m_configurationSetArn = std::forward<ConfigurationSetArnT>(value); }
    template<typename ConfigurationSetArnT = Aws::String>
    ConfigurationSetInformation& WithConfigurationSetArn(ConfigurationSetArnT&& value) { SetConfigurationSetArn(std::forward<ConfigurationSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the ConfigurationSet.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    ConfigurationSetInformation& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of EventDestination objects that describe any events to log and
     * where to log them.</p>
     */
    inline const Aws::Vector<EventDestination>& GetEventDestinations() const { return m_eventDestinations; }
    inline bool EventDestinationsHasBeenSet() const { return m_eventDestinationsHasBeenSet; }
    template<typename EventDestinationsT = Aws::Vector<EventDestination>>
    void SetEventDestinations(EventDestinationsT&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations = std::forward<EventDestinationsT>(value); }
    template<typename EventDestinationsT = Aws::Vector<EventDestination>>
    ConfigurationSetInformation& WithEventDestinations(EventDestinationsT&& value) { SetEventDestinations(std::forward<EventDestinationsT>(value)); return *this;}
    template<typename EventDestinationsT = EventDestination>
    ConfigurationSetInformation& AddEventDestinations(EventDestinationsT&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations.emplace_back(std::forward<EventDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline MessageType GetDefaultMessageType() const { return m_defaultMessageType; }
    inline bool DefaultMessageTypeHasBeenSet() const { return m_defaultMessageTypeHasBeenSet; }
    inline void SetDefaultMessageType(MessageType value) { m_defaultMessageTypeHasBeenSet = true; m_defaultMessageType = value; }
    inline ConfigurationSetInformation& WithDefaultMessageType(MessageType value) { SetDefaultMessageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default sender ID used by the ConfigurationSet.</p>
     */
    inline const Aws::String& GetDefaultSenderId() const { return m_defaultSenderId; }
    inline bool DefaultSenderIdHasBeenSet() const { return m_defaultSenderIdHasBeenSet; }
    template<typename DefaultSenderIdT = Aws::String>
    void SetDefaultSenderId(DefaultSenderIdT&& value) { m_defaultSenderIdHasBeenSet = true; m_defaultSenderId = std::forward<DefaultSenderIdT>(value); }
    template<typename DefaultSenderIdT = Aws::String>
    ConfigurationSetInformation& WithDefaultSenderId(DefaultSenderIdT&& value) { SetDefaultSenderId(std::forward<DefaultSenderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if message feedback is enabled.</p>
     */
    inline bool GetDefaultMessageFeedbackEnabled() const { return m_defaultMessageFeedbackEnabled; }
    inline bool DefaultMessageFeedbackEnabledHasBeenSet() const { return m_defaultMessageFeedbackEnabledHasBeenSet; }
    inline void SetDefaultMessageFeedbackEnabled(bool value) { m_defaultMessageFeedbackEnabledHasBeenSet = true; m_defaultMessageFeedbackEnabled = value; }
    inline ConfigurationSetInformation& WithDefaultMessageFeedbackEnabled(bool value) { SetDefaultMessageFeedbackEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the ConfigurationSet was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    ConfigurationSetInformation& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const { return m_protectConfigurationId; }
    inline bool ProtectConfigurationIdHasBeenSet() const { return m_protectConfigurationIdHasBeenSet; }
    template<typename ProtectConfigurationIdT = Aws::String>
    void SetProtectConfigurationId(ProtectConfigurationIdT&& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = std::forward<ProtectConfigurationIdT>(value); }
    template<typename ProtectConfigurationIdT = Aws::String>
    ConfigurationSetInformation& WithProtectConfigurationId(ProtectConfigurationIdT&& value) { SetProtectConfigurationId(std::forward<ProtectConfigurationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetArn;
    bool m_configurationSetArnHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::Vector<EventDestination> m_eventDestinations;
    bool m_eventDestinationsHasBeenSet = false;

    MessageType m_defaultMessageType{MessageType::NOT_SET};
    bool m_defaultMessageTypeHasBeenSet = false;

    Aws::String m_defaultSenderId;
    bool m_defaultSenderIdHasBeenSet = false;

    bool m_defaultMessageFeedbackEnabled{false};
    bool m_defaultMessageFeedbackEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::String m_protectConfigurationId;
    bool m_protectConfigurationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
