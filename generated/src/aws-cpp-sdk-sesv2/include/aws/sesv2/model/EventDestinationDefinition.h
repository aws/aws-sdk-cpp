/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/KinesisFirehoseDestination.h>
#include <aws/sesv2/model/CloudWatchDestination.h>
#include <aws/sesv2/model/SnsDestination.h>
#include <aws/sesv2/model/EventBridgeDestination.h>
#include <aws/sesv2/model/PinpointDestination.h>
#include <aws/sesv2/model/EventType.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that defines the event destination. Specifically, it defines which
   * services receive events from emails sent using the configuration set that the
   * event destination is associated with. Also defines the types of events that are
   * sent to the event destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/EventDestinationDefinition">AWS
   * API Reference</a></p>
   */
  class EventDestinationDefinition
  {
  public:
    AWS_SESV2_API EventDestinationDefinition() = default;
    AWS_SESV2_API EventDestinationDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API EventDestinationDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If <code>true</code>, the event destination is enabled. When the event
     * destination is enabled, the specified event types are sent to the destinations
     * in this <code>EventDestinationDefinition</code>.</p> <p>If <code>false</code>,
     * the event destination is disabled. When the event destination is disabled,
     * events aren't sent to the specified destinations.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline EventDestinationDefinition& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that specifies which events the Amazon SES API v2 should send to the
     * destinations in this <code>EventDestinationDefinition</code>.</p>
     */
    inline const Aws::Vector<EventType>& GetMatchingEventTypes() const { return m_matchingEventTypes; }
    inline bool MatchingEventTypesHasBeenSet() const { return m_matchingEventTypesHasBeenSet; }
    template<typename MatchingEventTypesT = Aws::Vector<EventType>>
    void SetMatchingEventTypes(MatchingEventTypesT&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = std::forward<MatchingEventTypesT>(value); }
    template<typename MatchingEventTypesT = Aws::Vector<EventType>>
    EventDestinationDefinition& WithMatchingEventTypes(MatchingEventTypesT&& value) { SetMatchingEventTypes(std::forward<MatchingEventTypesT>(value)); return *this;}
    inline EventDestinationDefinition& AddMatchingEventTypes(EventType value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
     */
    inline const KinesisFirehoseDestination& GetKinesisFirehoseDestination() const { return m_kinesisFirehoseDestination; }
    inline bool KinesisFirehoseDestinationHasBeenSet() const { return m_kinesisFirehoseDestinationHasBeenSet; }
    template<typename KinesisFirehoseDestinationT = KinesisFirehoseDestination>
    void SetKinesisFirehoseDestination(KinesisFirehoseDestinationT&& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = std::forward<KinesisFirehoseDestinationT>(value); }
    template<typename KinesisFirehoseDestinationT = KinesisFirehoseDestination>
    EventDestinationDefinition& WithKinesisFirehoseDestination(KinesisFirehoseDestinationT&& value) { SetKinesisFirehoseDestination(std::forward<KinesisFirehoseDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline const CloudWatchDestination& GetCloudWatchDestination() const { return m_cloudWatchDestination; }
    inline bool CloudWatchDestinationHasBeenSet() const { return m_cloudWatchDestinationHasBeenSet; }
    template<typename CloudWatchDestinationT = CloudWatchDestination>
    void SetCloudWatchDestination(CloudWatchDestinationT&& value) { m_cloudWatchDestinationHasBeenSet = true; m_cloudWatchDestination = std::forward<CloudWatchDestinationT>(value); }
    template<typename CloudWatchDestinationT = CloudWatchDestination>
    EventDestinationDefinition& WithCloudWatchDestination(CloudWatchDestinationT&& value) { SetCloudWatchDestination(std::forward<CloudWatchDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notifications when certain email events occur.</p>
     */
    inline const SnsDestination& GetSnsDestination() const { return m_snsDestination; }
    inline bool SnsDestinationHasBeenSet() const { return m_snsDestinationHasBeenSet; }
    template<typename SnsDestinationT = SnsDestination>
    void SetSnsDestination(SnsDestinationT&& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = std::forward<SnsDestinationT>(value); }
    template<typename SnsDestinationT = SnsDestination>
    EventDestinationDefinition& WithSnsDestination(SnsDestinationT&& value) { SetSnsDestination(std::forward<SnsDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines an Amazon EventBridge destination for email events.
     * You can use Amazon EventBridge to send notifications when certain email events
     * occur.</p>
     */
    inline const EventBridgeDestination& GetEventBridgeDestination() const { return m_eventBridgeDestination; }
    inline bool EventBridgeDestinationHasBeenSet() const { return m_eventBridgeDestinationHasBeenSet; }
    template<typename EventBridgeDestinationT = EventBridgeDestination>
    void SetEventBridgeDestination(EventBridgeDestinationT&& value) { m_eventBridgeDestinationHasBeenSet = true; m_eventBridgeDestination = std::forward<EventBridgeDestinationT>(value); }
    template<typename EventBridgeDestinationT = EventBridgeDestination>
    EventDestinationDefinition& WithEventBridgeDestination(EventBridgeDestinationT&& value) { SetEventBridgeDestination(std::forward<EventBridgeDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines an Amazon Pinpoint project destination for email
     * events. You can send email event data to a Amazon Pinpoint project to view
     * metrics using the Transactional Messaging dashboards that are built in to Amazon
     * Pinpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/analytics-transactional-messages.html">Transactional
     * Messaging Charts</a> in the <i>Amazon Pinpoint User Guide</i>.</p>
     */
    inline const PinpointDestination& GetPinpointDestination() const { return m_pinpointDestination; }
    inline bool PinpointDestinationHasBeenSet() const { return m_pinpointDestinationHasBeenSet; }
    template<typename PinpointDestinationT = PinpointDestination>
    void SetPinpointDestination(PinpointDestinationT&& value) { m_pinpointDestinationHasBeenSet = true; m_pinpointDestination = std::forward<PinpointDestinationT>(value); }
    template<typename PinpointDestinationT = PinpointDestination>
    EventDestinationDefinition& WithPinpointDestination(PinpointDestinationT&& value) { SetPinpointDestination(std::forward<PinpointDestinationT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<EventType> m_matchingEventTypes;
    bool m_matchingEventTypesHasBeenSet = false;

    KinesisFirehoseDestination m_kinesisFirehoseDestination;
    bool m_kinesisFirehoseDestinationHasBeenSet = false;

    CloudWatchDestination m_cloudWatchDestination;
    bool m_cloudWatchDestinationHasBeenSet = false;

    SnsDestination m_snsDestination;
    bool m_snsDestinationHasBeenSet = false;

    EventBridgeDestination m_eventBridgeDestination;
    bool m_eventBridgeDestinationHasBeenSet = false;

    PinpointDestination m_pinpointDestination;
    bool m_pinpointDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
