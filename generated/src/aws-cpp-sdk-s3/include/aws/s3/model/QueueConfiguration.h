/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/NotificationConfigurationFilter.h>
#include <aws/s3/model/Event.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Specifies the configuration for publishing messages to an Amazon Simple Queue
   * Service (Amazon SQS) queue when Amazon S3 detects specified
   * events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/QueueConfiguration">AWS
   * API Reference</a></p>
   */
  class QueueConfiguration
  {
  public:
    AWS_S3_API QueueConfiguration() = default;
    AWS_S3_API QueueConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API QueueConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    QueueConfiguration& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SQS queue to which Amazon S3
     * publishes a message when it detects events of the specified type.</p>
     */
    inline const Aws::String& GetQueueArn() const { return m_queueArn; }
    inline bool QueueArnHasBeenSet() const { return m_queueArnHasBeenSet; }
    template<typename QueueArnT = Aws::String>
    void SetQueueArn(QueueArnT&& value) { m_queueArnHasBeenSet = true; m_queueArn = std::forward<QueueArnT>(value); }
    template<typename QueueArnT = Aws::String>
    QueueConfiguration& WithQueueArn(QueueArnT&& value) { SetQueueArn(std::forward<QueueArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of bucket events for which to send notifications</p>
     */
    inline const Aws::Vector<Event>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<Event>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<Event>>
    QueueConfiguration& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    inline QueueConfiguration& AddEvents(Event value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const NotificationConfigurationFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = NotificationConfigurationFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = NotificationConfigurationFilter>
    QueueConfiguration& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_queueArn;
    bool m_queueArnHasBeenSet = false;

    Aws::Vector<Event> m_events;
    bool m_eventsHasBeenSet = false;

    NotificationConfigurationFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
