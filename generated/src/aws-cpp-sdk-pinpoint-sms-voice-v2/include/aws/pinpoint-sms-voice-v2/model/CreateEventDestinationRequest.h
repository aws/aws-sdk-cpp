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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class CreateEventDestinationRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API CreateEventDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventDestination"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Either the name of the configuration set or the configuration set ARN to
     * apply event logging to. The ConfigurateSetName and ConfigurationSetArn can be
     * found using the <a>DescribeConfigurationSets</a> action.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }
    inline CreateEventDestinationRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}
    inline CreateEventDestinationRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}
    inline CreateEventDestinationRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that identifies the event destination.</p>
     */
    inline const Aws::String& GetEventDestinationName() const{ return m_eventDestinationName; }
    inline bool EventDestinationNameHasBeenSet() const { return m_eventDestinationNameHasBeenSet; }
    inline void SetEventDestinationName(const Aws::String& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = value; }
    inline void SetEventDestinationName(Aws::String&& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = std::move(value); }
    inline void SetEventDestinationName(const char* value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName.assign(value); }
    inline CreateEventDestinationRequest& WithEventDestinationName(const Aws::String& value) { SetEventDestinationName(value); return *this;}
    inline CreateEventDestinationRequest& WithEventDestinationName(Aws::String&& value) { SetEventDestinationName(std::move(value)); return *this;}
    inline CreateEventDestinationRequest& WithEventDestinationName(const char* value) { SetEventDestinationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of event types that determine which events to log. If "ALL" is used,
     * then AWS End User Messaging SMS and Voice logs every event type.</p> 
     * <p>The <code>TEXT_SENT</code> event type is not supported.</p> 
     */
    inline const Aws::Vector<EventType>& GetMatchingEventTypes() const{ return m_matchingEventTypes; }
    inline bool MatchingEventTypesHasBeenSet() const { return m_matchingEventTypesHasBeenSet; }
    inline void SetMatchingEventTypes(const Aws::Vector<EventType>& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = value; }
    inline void SetMatchingEventTypes(Aws::Vector<EventType>&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = std::move(value); }
    inline CreateEventDestinationRequest& WithMatchingEventTypes(const Aws::Vector<EventType>& value) { SetMatchingEventTypes(value); return *this;}
    inline CreateEventDestinationRequest& WithMatchingEventTypes(Aws::Vector<EventType>&& value) { SetMatchingEventTypes(std::move(value)); return *this;}
    inline CreateEventDestinationRequest& AddMatchingEventTypes(const EventType& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(value); return *this; }
    inline CreateEventDestinationRequest& AddMatchingEventTypes(EventType&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains information about an event destination for logging to
     * Amazon CloudWatch Logs.</p>
     */
    inline const CloudWatchLogsDestination& GetCloudWatchLogsDestination() const{ return m_cloudWatchLogsDestination; }
    inline bool CloudWatchLogsDestinationHasBeenSet() const { return m_cloudWatchLogsDestinationHasBeenSet; }
    inline void SetCloudWatchLogsDestination(const CloudWatchLogsDestination& value) { m_cloudWatchLogsDestinationHasBeenSet = true; m_cloudWatchLogsDestination = value; }
    inline void SetCloudWatchLogsDestination(CloudWatchLogsDestination&& value) { m_cloudWatchLogsDestinationHasBeenSet = true; m_cloudWatchLogsDestination = std::move(value); }
    inline CreateEventDestinationRequest& WithCloudWatchLogsDestination(const CloudWatchLogsDestination& value) { SetCloudWatchLogsDestination(value); return *this;}
    inline CreateEventDestinationRequest& WithCloudWatchLogsDestination(CloudWatchLogsDestination&& value) { SetCloudWatchLogsDestination(std::move(value)); return *this;}
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
    inline CreateEventDestinationRequest& WithKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { SetKinesisFirehoseDestination(value); return *this;}
    inline CreateEventDestinationRequest& WithKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { SetKinesisFirehoseDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about an event destination for logging to
     * Amazon SNS.</p>
     */
    inline const SnsDestination& GetSnsDestination() const{ return m_snsDestination; }
    inline bool SnsDestinationHasBeenSet() const { return m_snsDestinationHasBeenSet; }
    inline void SetSnsDestination(const SnsDestination& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = value; }
    inline void SetSnsDestination(SnsDestination&& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = std::move(value); }
    inline CreateEventDestinationRequest& WithSnsDestination(const SnsDestination& value) { SetSnsDestination(value); return *this;}
    inline CreateEventDestinationRequest& WithSnsDestination(SnsDestination&& value) { SetSnsDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateEventDestinationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateEventDestinationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateEventDestinationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_eventDestinationName;
    bool m_eventDestinationNameHasBeenSet = false;

    Aws::Vector<EventType> m_matchingEventTypes;
    bool m_matchingEventTypesHasBeenSet = false;

    CloudWatchLogsDestination m_cloudWatchLogsDestination;
    bool m_cloudWatchLogsDestinationHasBeenSet = false;

    KinesisFirehoseDestination m_kinesisFirehoseDestination;
    bool m_kinesisFirehoseDestinationHasBeenSet = false;

    SnsDestination m_snsDestination;
    bool m_snsDestinationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
