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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the deleted configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetArn() const{ return m_configurationSetArn; }
    inline void SetConfigurationSetArn(const Aws::String& value) { m_configurationSetArn = value; }
    inline void SetConfigurationSetArn(Aws::String&& value) { m_configurationSetArn = std::move(value); }
    inline void SetConfigurationSetArn(const char* value) { m_configurationSetArn.assign(value); }
    inline DeleteConfigurationSetResult& WithConfigurationSetArn(const Aws::String& value) { SetConfigurationSetArn(value); return *this;}
    inline DeleteConfigurationSetResult& WithConfigurationSetArn(Aws::String&& value) { SetConfigurationSetArn(std::move(value)); return *this;}
    inline DeleteConfigurationSetResult& WithConfigurationSetArn(const char* value) { SetConfigurationSetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deleted configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetName = value; }
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetName = std::move(value); }
    inline void SetConfigurationSetName(const char* value) { m_configurationSetName.assign(value); }
    inline DeleteConfigurationSetResult& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}
    inline DeleteConfigurationSetResult& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}
    inline DeleteConfigurationSetResult& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of any EventDestination objects that were associated with the
     * deleted configuration set.</p>
     */
    inline const Aws::Vector<EventDestination>& GetEventDestinations() const{ return m_eventDestinations; }
    inline void SetEventDestinations(const Aws::Vector<EventDestination>& value) { m_eventDestinations = value; }
    inline void SetEventDestinations(Aws::Vector<EventDestination>&& value) { m_eventDestinations = std::move(value); }
    inline DeleteConfigurationSetResult& WithEventDestinations(const Aws::Vector<EventDestination>& value) { SetEventDestinations(value); return *this;}
    inline DeleteConfigurationSetResult& WithEventDestinations(Aws::Vector<EventDestination>&& value) { SetEventDestinations(std::move(value)); return *this;}
    inline DeleteConfigurationSetResult& AddEventDestinations(const EventDestination& value) { m_eventDestinations.push_back(value); return *this; }
    inline DeleteConfigurationSetResult& AddEventDestinations(EventDestination&& value) { m_eventDestinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default message type of the configuration set that was deleted.</p>
     */
    inline const MessageType& GetDefaultMessageType() const{ return m_defaultMessageType; }
    inline void SetDefaultMessageType(const MessageType& value) { m_defaultMessageType = value; }
    inline void SetDefaultMessageType(MessageType&& value) { m_defaultMessageType = std::move(value); }
    inline DeleteConfigurationSetResult& WithDefaultMessageType(const MessageType& value) { SetDefaultMessageType(value); return *this;}
    inline DeleteConfigurationSetResult& WithDefaultMessageType(MessageType&& value) { SetDefaultMessageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default Sender ID of the configuration set that was deleted.</p>
     */
    inline const Aws::String& GetDefaultSenderId() const{ return m_defaultSenderId; }
    inline void SetDefaultSenderId(const Aws::String& value) { m_defaultSenderId = value; }
    inline void SetDefaultSenderId(Aws::String&& value) { m_defaultSenderId = std::move(value); }
    inline void SetDefaultSenderId(const char* value) { m_defaultSenderId.assign(value); }
    inline DeleteConfigurationSetResult& WithDefaultSenderId(const Aws::String& value) { SetDefaultSenderId(value); return *this;}
    inline DeleteConfigurationSetResult& WithDefaultSenderId(Aws::String&& value) { SetDefaultSenderId(std::move(value)); return *this;}
    inline DeleteConfigurationSetResult& WithDefaultSenderId(const char* value) { SetDefaultSenderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the configuration set has message feedback enabled. By default this
     * is set to false. </p>
     */
    inline bool GetDefaultMessageFeedbackEnabled() const{ return m_defaultMessageFeedbackEnabled; }
    inline void SetDefaultMessageFeedbackEnabled(bool value) { m_defaultMessageFeedbackEnabled = value; }
    inline DeleteConfigurationSetResult& WithDefaultMessageFeedbackEnabled(bool value) { SetDefaultMessageFeedbackEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the deleted configuration set was created in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline DeleteConfigurationSetResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline DeleteConfigurationSetResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteConfigurationSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteConfigurationSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteConfigurationSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetArn;

    Aws::String m_configurationSetName;

    Aws::Vector<EventDestination> m_eventDestinations;

    MessageType m_defaultMessageType;

    Aws::String m_defaultSenderId;

    bool m_defaultMessageFeedbackEnabled;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
