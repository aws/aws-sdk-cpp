/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/CloudWatchLogsDestination.h>
#include <aws/pinpoint-sms-voice-v2/model/KinesisFirehoseDestination.h>
#include <aws/pinpoint-sms-voice-v2/model/SnsDestination.h>
#include <aws/pinpoint-sms-voice-v2/model/EventType.h>
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
   * <p>Contains information about an event destination.</p> <p>Event destinations
   * are associated with configuration sets, which enable you to publish message
   * sending events to CloudWatch, Firehose, or Amazon SNS.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/EventDestination">AWS
   * API Reference</a></p>
   */
  class EventDestination
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API EventDestination();
    AWS_PINPOINTSMSVOICEV2_API EventDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API EventDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the EventDestination.</p>
     */
    inline const Aws::String& GetEventDestinationName() const{ return m_eventDestinationName; }
    inline bool EventDestinationNameHasBeenSet() const { return m_eventDestinationNameHasBeenSet; }
    inline void SetEventDestinationName(const Aws::String& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = value; }
    inline void SetEventDestinationName(Aws::String&& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = std::move(value); }
    inline void SetEventDestinationName(const char* value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName.assign(value); }
    inline EventDestination& WithEventDestinationName(const Aws::String& value) { SetEventDestinationName(value); return *this;}
    inline EventDestination& WithEventDestinationName(Aws::String&& value) { SetEventDestinationName(std::move(value)); return *this;}
    inline EventDestination& WithEventDestinationName(const char* value) { SetEventDestinationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to true events will be logged.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline EventDestination& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of event types that determine which events to log.</p>  <p>The
     * <code>TEXT_SENT</code> event type is not supported.</p> 
     */
    inline const Aws::Vector<EventType>& GetMatchingEventTypes() const{ return m_matchingEventTypes; }
    inline bool MatchingEventTypesHasBeenSet() const { return m_matchingEventTypesHasBeenSet; }
    inline void SetMatchingEventTypes(const Aws::Vector<EventType>& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = value; }
    inline void SetMatchingEventTypes(Aws::Vector<EventType>&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = std::move(value); }
    inline EventDestination& WithMatchingEventTypes(const Aws::Vector<EventType>& value) { SetMatchingEventTypes(value); return *this;}
    inline EventDestination& WithMatchingEventTypes(Aws::Vector<EventType>&& value) { SetMatchingEventTypes(std::move(value)); return *this;}
    inline EventDestination& AddMatchingEventTypes(const EventType& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(value); return *this; }
    inline EventDestination& AddMatchingEventTypes(EventType&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains information about an event destination that sends
     * logging events to Amazon CloudWatch logs.</p>
     */
    inline const CloudWatchLogsDestination& GetCloudWatchLogsDestination() const{ return m_cloudWatchLogsDestination; }
    inline bool CloudWatchLogsDestinationHasBeenSet() const { return m_cloudWatchLogsDestinationHasBeenSet; }
    inline void SetCloudWatchLogsDestination(const CloudWatchLogsDestination& value) { m_cloudWatchLogsDestinationHasBeenSet = true; m_cloudWatchLogsDestination = value; }
    inline void SetCloudWatchLogsDestination(CloudWatchLogsDestination&& value) { m_cloudWatchLogsDestinationHasBeenSet = true; m_cloudWatchLogsDestination = std::move(value); }
    inline EventDestination& WithCloudWatchLogsDestination(const CloudWatchLogsDestination& value) { SetCloudWatchLogsDestination(value); return *this;}
    inline EventDestination& WithCloudWatchLogsDestination(CloudWatchLogsDestination&& value) { SetCloudWatchLogsDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about an event destination for logging to
     * Amazon Data Firehose.</p>
     */
    inline const KinesisFirehoseDestination& GetKinesisFirehoseDestination() const{ return m_kinesisFirehoseDestination; }
    inline bool KinesisFirehoseDestinationHasBeenSet() const { return m_kinesisFirehoseDestinationHasBeenSet; }
    inline void SetKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = value; }
    inline void SetKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = std::move(value); }
    inline EventDestination& WithKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { SetKinesisFirehoseDestination(value); return *this;}
    inline EventDestination& WithKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { SetKinesisFirehoseDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about an event destination that sends
     * logging events to Amazon SNS.</p>
     */
    inline const SnsDestination& GetSnsDestination() const{ return m_snsDestination; }
    inline bool SnsDestinationHasBeenSet() const { return m_snsDestinationHasBeenSet; }
    inline void SetSnsDestination(const SnsDestination& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = value; }
    inline void SetSnsDestination(SnsDestination&& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = std::move(value); }
    inline EventDestination& WithSnsDestination(const SnsDestination& value) { SetSnsDestination(value); return *this;}
    inline EventDestination& WithSnsDestination(SnsDestination&& value) { SetSnsDestination(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventDestinationName;
    bool m_eventDestinationNameHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<EventType> m_matchingEventTypes;
    bool m_matchingEventTypesHasBeenSet = false;

    CloudWatchLogsDestination m_cloudWatchLogsDestination;
    bool m_cloudWatchLogsDestinationHasBeenSet = false;

    KinesisFirehoseDestination m_kinesisFirehoseDestination;
    bool m_kinesisFirehoseDestinationHasBeenSet = false;

    SnsDestination m_snsDestination;
    bool m_snsDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
