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
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationDetail() = default;
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of events that trigger a notification.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<Aws::String>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<Aws::String>>
    AwsS3BucketNotificationConfigurationDetail& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = Aws::String>
    AwsS3BucketNotificationConfigurationDetail& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters that determine which S3 buckets generate notifications.</p>
     */
    inline const AwsS3BucketNotificationConfigurationFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = AwsS3BucketNotificationConfigurationFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = AwsS3BucketNotificationConfigurationFilter>
    AwsS3BucketNotificationConfigurationDetail& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Lambda function, Amazon SQS queue, or Amazon SNS topic that
     * generates the notification.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    AwsS3BucketNotificationConfigurationDetail& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of notification. Notifications can be generated using
     * Lambda functions, Amazon SQS queues, or Amazon SNS topics, with corresponding
     * valid values as follows:</p> <ul> <li> <p> <code>LambdaConfiguration</code> </p>
     * </li> <li> <p> <code>QueueConfiguration</code> </p> </li> <li> <p>
     * <code>TopicConfiguration</code> </p> </li> </ul>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsS3BucketNotificationConfigurationDetail& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
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
