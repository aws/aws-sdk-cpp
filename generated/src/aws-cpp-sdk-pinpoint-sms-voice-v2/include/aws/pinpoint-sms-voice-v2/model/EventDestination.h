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
    AWS_PINPOINTSMSVOICEV2_API EventDestination() = default;
    AWS_PINPOINTSMSVOICEV2_API EventDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API EventDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the EventDestination.</p>
     */
    inline const Aws::String& GetEventDestinationName() const { return m_eventDestinationName; }
    inline bool EventDestinationNameHasBeenSet() const { return m_eventDestinationNameHasBeenSet; }
    template<typename EventDestinationNameT = Aws::String>
    void SetEventDestinationName(EventDestinationNameT&& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = std::forward<EventDestinationNameT>(value); }
    template<typename EventDestinationNameT = Aws::String>
    EventDestination& WithEventDestinationName(EventDestinationNameT&& value) { SetEventDestinationName(std::forward<EventDestinationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to true events will be logged.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline EventDestination& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of event types that determine which events to log.</p>  <p>The
     * <code>TEXT_SENT</code> event type is not supported.</p> 
     */
    inline const Aws::Vector<EventType>& GetMatchingEventTypes() const { return m_matchingEventTypes; }
    inline bool MatchingEventTypesHasBeenSet() const { return m_matchingEventTypesHasBeenSet; }
    template<typename MatchingEventTypesT = Aws::Vector<EventType>>
    void SetMatchingEventTypes(MatchingEventTypesT&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = std::forward<MatchingEventTypesT>(value); }
    template<typename MatchingEventTypesT = Aws::Vector<EventType>>
    EventDestination& WithMatchingEventTypes(MatchingEventTypesT&& value) { SetMatchingEventTypes(std::forward<MatchingEventTypesT>(value)); return *this;}
    inline EventDestination& AddMatchingEventTypes(EventType value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains information about an event destination that sends
     * logging events to Amazon CloudWatch logs.</p>
     */
    inline const CloudWatchLogsDestination& GetCloudWatchLogsDestination() const { return m_cloudWatchLogsDestination; }
    inline bool CloudWatchLogsDestinationHasBeenSet() const { return m_cloudWatchLogsDestinationHasBeenSet; }
    template<typename CloudWatchLogsDestinationT = CloudWatchLogsDestination>
    void SetCloudWatchLogsDestination(CloudWatchLogsDestinationT&& value) { m_cloudWatchLogsDestinationHasBeenSet = true; m_cloudWatchLogsDestination = std::forward<CloudWatchLogsDestinationT>(value); }
    template<typename CloudWatchLogsDestinationT = CloudWatchLogsDestination>
    EventDestination& WithCloudWatchLogsDestination(CloudWatchLogsDestinationT&& value) { SetCloudWatchLogsDestination(std::forward<CloudWatchLogsDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about an event destination for logging to
     * Amazon Data Firehose.</p>
     */
    inline const KinesisFirehoseDestination& GetKinesisFirehoseDestination() const { return m_kinesisFirehoseDestination; }
    inline bool KinesisFirehoseDestinationHasBeenSet() const { return m_kinesisFirehoseDestinationHasBeenSet; }
    template<typename KinesisFirehoseDestinationT = KinesisFirehoseDestination>
    void SetKinesisFirehoseDestination(KinesisFirehoseDestinationT&& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = std::forward<KinesisFirehoseDestinationT>(value); }
    template<typename KinesisFirehoseDestinationT = KinesisFirehoseDestination>
    EventDestination& WithKinesisFirehoseDestination(KinesisFirehoseDestinationT&& value) { SetKinesisFirehoseDestination(std::forward<KinesisFirehoseDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about an event destination that sends
     * logging events to Amazon SNS.</p>
     */
    inline const SnsDestination& GetSnsDestination() const { return m_snsDestination; }
    inline bool SnsDestinationHasBeenSet() const { return m_snsDestinationHasBeenSet; }
    template<typename SnsDestinationT = SnsDestination>
    void SetSnsDestination(SnsDestinationT&& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = std::forward<SnsDestinationT>(value); }
    template<typename SnsDestinationT = SnsDestination>
    EventDestination& WithSnsDestination(SnsDestinationT&& value) { SetSnsDestination(std::forward<SnsDestinationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventDestinationName;
    bool m_eventDestinationNameHasBeenSet = false;

    bool m_enabled{false};
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
