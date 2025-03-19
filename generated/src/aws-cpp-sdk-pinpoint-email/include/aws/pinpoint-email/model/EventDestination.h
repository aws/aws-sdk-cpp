/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/KinesisFirehoseDestination.h>
#include <aws/pinpoint-email/model/CloudWatchDestination.h>
#include <aws/pinpoint-email/model/SnsDestination.h>
#include <aws/pinpoint-email/model/PinpointDestination.h>
#include <aws/pinpoint-email/model/EventType.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>In Amazon Pinpoint, <i>events</i> include message sends, deliveries, opens,
   * clicks, bounces, and complaints. <i>Event destinations</i> are places that you
   * can send information about these events to. For example, you can send event data
   * to Amazon SNS to receive notifications when you receive bounces or complaints,
   * or you can use Amazon Kinesis Data Firehose to stream data to Amazon S3 for
   * long-term storage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/EventDestination">AWS
   * API Reference</a></p>
   */
  class EventDestination
  {
  public:
    AWS_PINPOINTEMAIL_API EventDestination() = default;
    AWS_PINPOINTEMAIL_API EventDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API EventDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name that identifies the event destination.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EventDestination& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

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
    inline EventDestination& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of events that Amazon Pinpoint sends to the specified event
     * destinations.</p>
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
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
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
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline const CloudWatchDestination& GetCloudWatchDestination() const { return m_cloudWatchDestination; }
    inline bool CloudWatchDestinationHasBeenSet() const { return m_cloudWatchDestinationHasBeenSet; }
    template<typename CloudWatchDestinationT = CloudWatchDestination>
    void SetCloudWatchDestination(CloudWatchDestinationT&& value) { m_cloudWatchDestinationHasBeenSet = true; m_cloudWatchDestination = std::forward<CloudWatchDestinationT>(value); }
    template<typename CloudWatchDestinationT = CloudWatchDestination>
    EventDestination& WithCloudWatchDestination(CloudWatchDestinationT&& value) { SetCloudWatchDestination(std::forward<CloudWatchDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notification when certain email events occur.</p>
     */
    inline const SnsDestination& GetSnsDestination() const { return m_snsDestination; }
    inline bool SnsDestinationHasBeenSet() const { return m_snsDestinationHasBeenSet; }
    template<typename SnsDestinationT = SnsDestination>
    void SetSnsDestination(SnsDestinationT&& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = std::forward<SnsDestinationT>(value); }
    template<typename SnsDestinationT = SnsDestination>
    EventDestination& WithSnsDestination(SnsDestinationT&& value) { SetSnsDestination(std::forward<SnsDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines a Amazon Pinpoint destination for email events. You
     * can use Amazon Pinpoint events to create attributes in Amazon Pinpoint projects.
     * You can use these attributes to create segments for your campaigns.</p>
     */
    inline const PinpointDestination& GetPinpointDestination() const { return m_pinpointDestination; }
    inline bool PinpointDestinationHasBeenSet() const { return m_pinpointDestinationHasBeenSet; }
    template<typename PinpointDestinationT = PinpointDestination>
    void SetPinpointDestination(PinpointDestinationT&& value) { m_pinpointDestinationHasBeenSet = true; m_pinpointDestination = std::forward<PinpointDestinationT>(value); }
    template<typename PinpointDestinationT = PinpointDestination>
    EventDestination& WithPinpointDestination(PinpointDestinationT&& value) { SetPinpointDestination(std::forward<PinpointDestinationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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

    PinpointDestination m_pinpointDestination;
    bool m_pinpointDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
