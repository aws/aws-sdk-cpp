/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsS3BucketNotificationConfigurationFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details for an S3 bucket notification configuration.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketNotificationConfigurationDetail">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketNotificationConfigurationDetail
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationDetail();
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of events that trigger a notification.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEvents() const{ return m_events; }

    /**
     * <p>The list of events that trigger a notification.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>The list of events that trigger a notification.</p>
     */
    inline void SetEvents(const Aws::Vector<Aws::String>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>The list of events that trigger a notification.</p>
     */
    inline void SetEvents(Aws::Vector<Aws::String>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>The list of events that trigger a notification.</p>
     */
    inline AwsS3BucketNotificationConfigurationDetail& WithEvents(const Aws::Vector<Aws::String>& value) { SetEvents(value); return *this;}

    /**
     * <p>The list of events that trigger a notification.</p>
     */
    inline AwsS3BucketNotificationConfigurationDetail& WithEvents(Aws::Vector<Aws::String>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>The list of events that trigger a notification.</p>
     */
    inline AwsS3BucketNotificationConfigurationDetail& AddEvents(const Aws::String& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>The list of events that trigger a notification.</p>
     */
    inline AwsS3BucketNotificationConfigurationDetail& AddEvents(Aws::String&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of events that trigger a notification.</p>
     */
    inline AwsS3BucketNotificationConfigurationDetail& AddEvents(const char* value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }


    /**
     * <p>The filters that determine which S3 buckets generate notifications.</p>
     */
    inline const AwsS3BucketNotificationConfigurationFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>The filters that determine which S3 buckets generate notifications.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The filters that determine which S3 buckets generate notifications.</p>
     */
    inline void SetFilter(const AwsS3BucketNotificationConfigurationFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The filters that determine which S3 buckets generate notifications.</p>
     */
    inline void SetFilter(AwsS3BucketNotificationConfigurationFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The filters that determine which S3 buckets generate notifications.</p>
     */
    inline AwsS3BucketNotificationConfigurationDetail& WithFilter(const AwsS3BucketNotificationConfigurationFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>The filters that determine which S3 buckets generate notifications.</p>
     */
    inline AwsS3BucketNotificationConfigurationDetail& WithFilter(AwsS3BucketNotificationConfigurationFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The ARN of the Lambda function, Amazon SQS queue, or Amazon SNS topic that
     * generates the notification.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The ARN of the Lambda function, Amazon SQS queue, or Amazon SNS topic that
     * generates the notification.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The ARN of the Lambda function, Amazon SQS queue, or Amazon SNS topic that
     * generates the notification.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The ARN of the Lambda function, Amazon SQS queue, or Amazon SNS topic that
     * generates the notification.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The ARN of the Lambda function, Amazon SQS queue, or Amazon SNS topic that
     * generates the notification.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The ARN of the Lambda function, Amazon SQS queue, or Amazon SNS topic that
     * generates the notification.</p>
     */
    inline AwsS3BucketNotificationConfigurationDetail& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The ARN of the Lambda function, Amazon SQS queue, or Amazon SNS topic that
     * generates the notification.</p>
     */
    inline AwsS3BucketNotificationConfigurationDetail& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function, Amazon SQS queue, or Amazon SNS topic that
     * generates the notification.</p>
     */
    inline AwsS3BucketNotificationConfigurationDetail& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>Indicates the type of notification. Notifications can be generated using
     * Lambda functions, Amazon SQS queues, or Amazon SNS topics, with corresponding
     * valid values as follows:</p> <ul> <li> <p> <code>LambdaConfiguration</code> </p>
     * </li> <li> <p> <code>QueueConfiguration</code> </p> </li> <li> <p>
     * <code>TopicConfiguration</code> </p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Indicates the type of notification. Notifications can be generated using
     * Lambda functions, Amazon SQS queues, or Amazon SNS topics, with corresponding
     * valid values as follows:</p> <ul> <li> <p> <code>LambdaConfiguration</code> </p>
     * </li> <li> <p> <code>QueueConfiguration</code> </p> </li> <li> <p>
     * <code>TopicConfiguration</code> </p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Indicates the type of notification. Notifications can be generated using
     * Lambda functions, Amazon SQS queues, or Amazon SNS topics, with corresponding
     * valid values as follows:</p> <ul> <li> <p> <code>LambdaConfiguration</code> </p>
     * </li> <li> <p> <code>QueueConfiguration</code> </p> </li> <li> <p>
     * <code>TopicConfiguration</code> </p> </li> </ul>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Indicates the type of notification. Notifications can be generated using
     * Lambda functions, Amazon SQS queues, or Amazon SNS topics, with corresponding
     * valid values as follows:</p> <ul> <li> <p> <code>LambdaConfiguration</code> </p>
     * </li> <li> <p> <code>QueueConfiguration</code> </p> </li> <li> <p>
     * <code>TopicConfiguration</code> </p> </li> </ul>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Indicates the type of notification. Notifications can be generated using
     * Lambda functions, Amazon SQS queues, or Amazon SNS topics, with corresponding
     * valid values as follows:</p> <ul> <li> <p> <code>LambdaConfiguration</code> </p>
     * </li> <li> <p> <code>QueueConfiguration</code> </p> </li> <li> <p>
     * <code>TopicConfiguration</code> </p> </li> </ul>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Indicates the type of notification. Notifications can be generated using
     * Lambda functions, Amazon SQS queues, or Amazon SNS topics, with corresponding
     * valid values as follows:</p> <ul> <li> <p> <code>LambdaConfiguration</code> </p>
     * </li> <li> <p> <code>QueueConfiguration</code> </p> </li> <li> <p>
     * <code>TopicConfiguration</code> </p> </li> </ul>
     */
    inline AwsS3BucketNotificationConfigurationDetail& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Indicates the type of notification. Notifications can be generated using
     * Lambda functions, Amazon SQS queues, or Amazon SNS topics, with corresponding
     * valid values as follows:</p> <ul> <li> <p> <code>LambdaConfiguration</code> </p>
     * </li> <li> <p> <code>QueueConfiguration</code> </p> </li> <li> <p>
     * <code>TopicConfiguration</code> </p> </li> </ul>
     */
    inline AwsS3BucketNotificationConfigurationDetail& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Indicates the type of notification. Notifications can be generated using
     * Lambda functions, Amazon SQS queues, or Amazon SNS topics, with corresponding
     * valid values as follows:</p> <ul> <li> <p> <code>LambdaConfiguration</code> </p>
     * </li> <li> <p> <code>QueueConfiguration</code> </p> </li> <li> <p>
     * <code>TopicConfiguration</code> </p> </li> </ul>
     */
    inline AwsS3BucketNotificationConfigurationDetail& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_events;
    bool m_eventsHasBeenSet = false;

    AwsS3BucketNotificationConfigurationFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
