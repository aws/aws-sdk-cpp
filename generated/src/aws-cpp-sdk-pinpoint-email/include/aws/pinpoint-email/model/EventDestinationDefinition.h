/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
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
   * <p>An object that defines the event destination. Specifically, it defines which
   * services receive events from emails sent using the configuration set that the
   * event destination is associated with. Also defines the types of events that are
   * sent to the event destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/EventDestinationDefinition">AWS
   * API Reference</a></p>
   */
  class EventDestinationDefinition
  {
  public:
    AWS_PINPOINTEMAIL_API EventDestinationDefinition();
    AWS_PINPOINTEMAIL_API EventDestinationDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API EventDestinationDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If <code>true</code>, the event destination is enabled. When the event
     * destination is enabled, the specified event types are sent to the destinations
     * in this <code>EventDestinationDefinition</code>.</p> <p>If <code>false</code>,
     * the event destination is disabled. When the event destination is disabled,
     * events aren't sent to the specified destinations.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline EventDestinationDefinition& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that specifies which events Amazon Pinpoint should send to the
     * destinations in this <code>EventDestinationDefinition</code>.</p>
     */
    inline const Aws::Vector<EventType>& GetMatchingEventTypes() const{ return m_matchingEventTypes; }
    inline bool MatchingEventTypesHasBeenSet() const { return m_matchingEventTypesHasBeenSet; }
    inline void SetMatchingEventTypes(const Aws::Vector<EventType>& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = value; }
    inline void SetMatchingEventTypes(Aws::Vector<EventType>&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = std::move(value); }
    inline EventDestinationDefinition& WithMatchingEventTypes(const Aws::Vector<EventType>& value) { SetMatchingEventTypes(value); return *this;}
    inline EventDestinationDefinition& WithMatchingEventTypes(Aws::Vector<EventType>&& value) { SetMatchingEventTypes(std::move(value)); return *this;}
    inline EventDestinationDefinition& AddMatchingEventTypes(const EventType& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(value); return *this; }
    inline EventDestinationDefinition& AddMatchingEventTypes(EventType&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
     */
    inline const KinesisFirehoseDestination& GetKinesisFirehoseDestination() const{ return m_kinesisFirehoseDestination; }
    inline bool KinesisFirehoseDestinationHasBeenSet() const { return m_kinesisFirehoseDestinationHasBeenSet; }
    inline void SetKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = value; }
    inline void SetKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = std::move(value); }
    inline EventDestinationDefinition& WithKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { SetKinesisFirehoseDestination(value); return *this;}
    inline EventDestinationDefinition& WithKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { SetKinesisFirehoseDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline const CloudWatchDestination& GetCloudWatchDestination() const{ return m_cloudWatchDestination; }
    inline bool CloudWatchDestinationHasBeenSet() const { return m_cloudWatchDestinationHasBeenSet; }
    inline void SetCloudWatchDestination(const CloudWatchDestination& value) { m_cloudWatchDestinationHasBeenSet = true; m_cloudWatchDestination = value; }
    inline void SetCloudWatchDestination(CloudWatchDestination&& value) { m_cloudWatchDestinationHasBeenSet = true; m_cloudWatchDestination = std::move(value); }
    inline EventDestinationDefinition& WithCloudWatchDestination(const CloudWatchDestination& value) { SetCloudWatchDestination(value); return *this;}
    inline EventDestinationDefinition& WithCloudWatchDestination(CloudWatchDestination&& value) { SetCloudWatchDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notification when certain email events occur.</p>
     */
    inline const SnsDestination& GetSnsDestination() const{ return m_snsDestination; }
    inline bool SnsDestinationHasBeenSet() const { return m_snsDestinationHasBeenSet; }
    inline void SetSnsDestination(const SnsDestination& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = value; }
    inline void SetSnsDestination(SnsDestination&& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = std::move(value); }
    inline EventDestinationDefinition& WithSnsDestination(const SnsDestination& value) { SetSnsDestination(value); return *this;}
    inline EventDestinationDefinition& WithSnsDestination(SnsDestination&& value) { SetSnsDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines a Amazon Pinpoint destination for email events. You
     * can use Amazon Pinpoint events to create attributes in Amazon Pinpoint projects.
     * You can use these attributes to create segments for your campaigns.</p>
     */
    inline const PinpointDestination& GetPinpointDestination() const{ return m_pinpointDestination; }
    inline bool PinpointDestinationHasBeenSet() const { return m_pinpointDestinationHasBeenSet; }
    inline void SetPinpointDestination(const PinpointDestination& value) { m_pinpointDestinationHasBeenSet = true; m_pinpointDestination = value; }
    inline void SetPinpointDestination(PinpointDestination&& value) { m_pinpointDestinationHasBeenSet = true; m_pinpointDestination = std::move(value); }
    inline EventDestinationDefinition& WithPinpointDestination(const PinpointDestination& value) { SetPinpointDestination(value); return *this;}
    inline EventDestinationDefinition& WithPinpointDestination(PinpointDestination&& value) { SetPinpointDestination(std::move(value)); return *this;}
    ///@}
  private:

    bool m_enabled;
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
