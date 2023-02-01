/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/CloudWatchLogsDestination.h>
#include <aws/pinpoint-sms-voice-v2/model/KinesisFirehoseDestination.h>
#include <aws/pinpoint-sms-voice-v2/model/SnsDestination.h>
#include <aws/pinpoint-sms-voice-v2/model/EventType.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class UpdateEventDestinationRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API UpdateEventDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventDestination"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The configuration set to update with the new event destination. Valid values
     * for this can be the ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The configuration set to update with the new event destination. Valid values
     * for this can be the ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The configuration set to update with the new event destination. Valid values
     * for this can be the ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The configuration set to update with the new event destination. Valid values
     * for this can be the ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The configuration set to update with the new event destination. Valid values
     * for this can be the ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The configuration set to update with the new event destination. Valid values
     * for this can be the ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline UpdateEventDestinationRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The configuration set to update with the new event destination. Valid values
     * for this can be the ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline UpdateEventDestinationRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The configuration set to update with the new event destination. Valid values
     * for this can be the ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline UpdateEventDestinationRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>The name to use for the event destination.</p>
     */
    inline const Aws::String& GetEventDestinationName() const{ return m_eventDestinationName; }

    /**
     * <p>The name to use for the event destination.</p>
     */
    inline bool EventDestinationNameHasBeenSet() const { return m_eventDestinationNameHasBeenSet; }

    /**
     * <p>The name to use for the event destination.</p>
     */
    inline void SetEventDestinationName(const Aws::String& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = value; }

    /**
     * <p>The name to use for the event destination.</p>
     */
    inline void SetEventDestinationName(Aws::String&& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = std::move(value); }

    /**
     * <p>The name to use for the event destination.</p>
     */
    inline void SetEventDestinationName(const char* value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName.assign(value); }

    /**
     * <p>The name to use for the event destination.</p>
     */
    inline UpdateEventDestinationRequest& WithEventDestinationName(const Aws::String& value) { SetEventDestinationName(value); return *this;}

    /**
     * <p>The name to use for the event destination.</p>
     */
    inline UpdateEventDestinationRequest& WithEventDestinationName(Aws::String&& value) { SetEventDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name to use for the event destination.</p>
     */
    inline UpdateEventDestinationRequest& WithEventDestinationName(const char* value) { SetEventDestinationName(value); return *this;}


    /**
     * <p>When set to true logging is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>When set to true logging is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>When set to true logging is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>When set to true logging is enabled.</p>
     */
    inline UpdateEventDestinationRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>An array of event types that determine which events to log.</p>
     */
    inline const Aws::Vector<EventType>& GetMatchingEventTypes() const{ return m_matchingEventTypes; }

    /**
     * <p>An array of event types that determine which events to log.</p>
     */
    inline bool MatchingEventTypesHasBeenSet() const { return m_matchingEventTypesHasBeenSet; }

    /**
     * <p>An array of event types that determine which events to log.</p>
     */
    inline void SetMatchingEventTypes(const Aws::Vector<EventType>& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = value; }

    /**
     * <p>An array of event types that determine which events to log.</p>
     */
    inline void SetMatchingEventTypes(Aws::Vector<EventType>&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = std::move(value); }

    /**
     * <p>An array of event types that determine which events to log.</p>
     */
    inline UpdateEventDestinationRequest& WithMatchingEventTypes(const Aws::Vector<EventType>& value) { SetMatchingEventTypes(value); return *this;}

    /**
     * <p>An array of event types that determine which events to log.</p>
     */
    inline UpdateEventDestinationRequest& WithMatchingEventTypes(Aws::Vector<EventType>&& value) { SetMatchingEventTypes(std::move(value)); return *this;}

    /**
     * <p>An array of event types that determine which events to log.</p>
     */
    inline UpdateEventDestinationRequest& AddMatchingEventTypes(const EventType& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(value); return *this; }

    /**
     * <p>An array of event types that determine which events to log.</p>
     */
    inline UpdateEventDestinationRequest& AddMatchingEventTypes(EventType&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that contains information about an event destination that sends
     * data to CloudWatch Logs.</p>
     */
    inline const CloudWatchLogsDestination& GetCloudWatchLogsDestination() const{ return m_cloudWatchLogsDestination; }

    /**
     * <p>An object that contains information about an event destination that sends
     * data to CloudWatch Logs.</p>
     */
    inline bool CloudWatchLogsDestinationHasBeenSet() const { return m_cloudWatchLogsDestinationHasBeenSet; }

    /**
     * <p>An object that contains information about an event destination that sends
     * data to CloudWatch Logs.</p>
     */
    inline void SetCloudWatchLogsDestination(const CloudWatchLogsDestination& value) { m_cloudWatchLogsDestinationHasBeenSet = true; m_cloudWatchLogsDestination = value; }

    /**
     * <p>An object that contains information about an event destination that sends
     * data to CloudWatch Logs.</p>
     */
    inline void SetCloudWatchLogsDestination(CloudWatchLogsDestination&& value) { m_cloudWatchLogsDestinationHasBeenSet = true; m_cloudWatchLogsDestination = std::move(value); }

    /**
     * <p>An object that contains information about an event destination that sends
     * data to CloudWatch Logs.</p>
     */
    inline UpdateEventDestinationRequest& WithCloudWatchLogsDestination(const CloudWatchLogsDestination& value) { SetCloudWatchLogsDestination(value); return *this;}

    /**
     * <p>An object that contains information about an event destination that sends
     * data to CloudWatch Logs.</p>
     */
    inline UpdateEventDestinationRequest& WithCloudWatchLogsDestination(CloudWatchLogsDestination&& value) { SetCloudWatchLogsDestination(std::move(value)); return *this;}


    /**
     * <p>An object that contains information about an event destination for logging to
     * Kinesis Data Firehose.</p>
     */
    inline const KinesisFirehoseDestination& GetKinesisFirehoseDestination() const{ return m_kinesisFirehoseDestination; }

    /**
     * <p>An object that contains information about an event destination for logging to
     * Kinesis Data Firehose.</p>
     */
    inline bool KinesisFirehoseDestinationHasBeenSet() const { return m_kinesisFirehoseDestinationHasBeenSet; }

    /**
     * <p>An object that contains information about an event destination for logging to
     * Kinesis Data Firehose.</p>
     */
    inline void SetKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = value; }

    /**
     * <p>An object that contains information about an event destination for logging to
     * Kinesis Data Firehose.</p>
     */
    inline void SetKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = std::move(value); }

    /**
     * <p>An object that contains information about an event destination for logging to
     * Kinesis Data Firehose.</p>
     */
    inline UpdateEventDestinationRequest& WithKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { SetKinesisFirehoseDestination(value); return *this;}

    /**
     * <p>An object that contains information about an event destination for logging to
     * Kinesis Data Firehose.</p>
     */
    inline UpdateEventDestinationRequest& WithKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { SetKinesisFirehoseDestination(std::move(value)); return *this;}


    /**
     * <p>An object that contains information about an event destination that sends
     * data to Amazon SNS.</p>
     */
    inline const SnsDestination& GetSnsDestination() const{ return m_snsDestination; }

    /**
     * <p>An object that contains information about an event destination that sends
     * data to Amazon SNS.</p>
     */
    inline bool SnsDestinationHasBeenSet() const { return m_snsDestinationHasBeenSet; }

    /**
     * <p>An object that contains information about an event destination that sends
     * data to Amazon SNS.</p>
     */
    inline void SetSnsDestination(const SnsDestination& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = value; }

    /**
     * <p>An object that contains information about an event destination that sends
     * data to Amazon SNS.</p>
     */
    inline void SetSnsDestination(SnsDestination&& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = std::move(value); }

    /**
     * <p>An object that contains information about an event destination that sends
     * data to Amazon SNS.</p>
     */
    inline UpdateEventDestinationRequest& WithSnsDestination(const SnsDestination& value) { SetSnsDestination(value); return *this;}

    /**
     * <p>An object that contains information about an event destination that sends
     * data to Amazon SNS.</p>
     */
    inline UpdateEventDestinationRequest& WithSnsDestination(SnsDestination&& value) { SetSnsDestination(std::move(value)); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

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
