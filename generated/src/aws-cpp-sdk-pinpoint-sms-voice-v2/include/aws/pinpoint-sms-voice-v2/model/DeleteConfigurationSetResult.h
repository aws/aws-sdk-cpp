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
    AWS_PINPOINTSMSVOICEV2_API DeleteConfigurationSetResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DeleteConfigurationSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteConfigurationSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the deleted configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetArn() const { return m_configurationSetArn; }
    template<typename ConfigurationSetArnT = Aws::String>
    void SetConfigurationSetArn(ConfigurationSetArnT&& value) { m_configurationSetArnHasBeenSet = true; m_configurationSetArn = std::forward<ConfigurationSetArnT>(value); }
    template<typename ConfigurationSetArnT = Aws::String>
    DeleteConfigurationSetResult& WithConfigurationSetArn(ConfigurationSetArnT&& value) { SetConfigurationSetArn(std::forward<ConfigurationSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deleted configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    DeleteConfigurationSetResult& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of any EventDestination objects that were associated with the
     * deleted configuration set.</p>
     */
    inline const Aws::Vector<EventDestination>& GetEventDestinations() const { return m_eventDestinations; }
    template<typename EventDestinationsT = Aws::Vector<EventDestination>>
    void SetEventDestinations(EventDestinationsT&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations = std::forward<EventDestinationsT>(value); }
    template<typename EventDestinationsT = Aws::Vector<EventDestination>>
    DeleteConfigurationSetResult& WithEventDestinations(EventDestinationsT&& value) { SetEventDestinations(std::forward<EventDestinationsT>(value)); return *this;}
    template<typename EventDestinationsT = EventDestination>
    DeleteConfigurationSetResult& AddEventDestinations(EventDestinationsT&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations.emplace_back(std::forward<EventDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default message type of the configuration set that was deleted.</p>
     */
    inline MessageType GetDefaultMessageType() const { return m_defaultMessageType; }
    inline void SetDefaultMessageType(MessageType value) { m_defaultMessageTypeHasBeenSet = true; m_defaultMessageType = value; }
    inline DeleteConfigurationSetResult& WithDefaultMessageType(MessageType value) { SetDefaultMessageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default Sender ID of the configuration set that was deleted.</p>
     */
    inline const Aws::String& GetDefaultSenderId() const { return m_defaultSenderId; }
    template<typename DefaultSenderIdT = Aws::String>
    void SetDefaultSenderId(DefaultSenderIdT&& value) { m_defaultSenderIdHasBeenSet = true; m_defaultSenderId = std::forward<DefaultSenderIdT>(value); }
    template<typename DefaultSenderIdT = Aws::String>
    DeleteConfigurationSetResult& WithDefaultSenderId(DefaultSenderIdT&& value) { SetDefaultSenderId(std::forward<DefaultSenderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the configuration set has message feedback enabled. By default this
     * is set to false. </p>
     */
    inline bool GetDefaultMessageFeedbackEnabled() const { return m_defaultMessageFeedbackEnabled; }
    inline void SetDefaultMessageFeedbackEnabled(bool value) { m_defaultMessageFeedbackEnabledHasBeenSet = true; m_defaultMessageFeedbackEnabled = value; }
    inline DeleteConfigurationSetResult& WithDefaultMessageFeedbackEnabled(bool value) { SetDefaultMessageFeedbackEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the deleted configuration set was created in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    DeleteConfigurationSetResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteConfigurationSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
