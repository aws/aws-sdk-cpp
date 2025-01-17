/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notifications/model/Resource.h>
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
namespace Notifications
{
namespace Model
{

  /**
   * <p>Describes the metadata for a source event.</p> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-events-structure.html">Event
   * structure reference</a> in the <i>Amazon EventBridge User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/SourceEventMetadata">AWS
   * API Reference</a></p>
   */
  class SourceEventMetadata
  {
  public:
    AWS_NOTIFICATIONS_API SourceEventMetadata();
    AWS_NOTIFICATIONS_API SourceEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API SourceEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the type of event.</p>
     */
    inline const Aws::String& GetEventTypeVersion() const{ return m_eventTypeVersion; }
    inline bool EventTypeVersionHasBeenSet() const { return m_eventTypeVersionHasBeenSet; }
    inline void SetEventTypeVersion(const Aws::String& value) { m_eventTypeVersionHasBeenSet = true; m_eventTypeVersion = value; }
    inline void SetEventTypeVersion(Aws::String&& value) { m_eventTypeVersionHasBeenSet = true; m_eventTypeVersion = std::move(value); }
    inline void SetEventTypeVersion(const char* value) { m_eventTypeVersionHasBeenSet = true; m_eventTypeVersion.assign(value); }
    inline SourceEventMetadata& WithEventTypeVersion(const Aws::String& value) { SetEventTypeVersion(value); return *this;}
    inline SourceEventMetadata& WithEventTypeVersion(Aws::String&& value) { SetEventTypeVersion(std::move(value)); return *this;}
    inline SourceEventMetadata& WithEventTypeVersion(const char* value) { SetEventTypeVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source event id.</p>
     */
    inline const Aws::String& GetSourceEventId() const{ return m_sourceEventId; }
    inline bool SourceEventIdHasBeenSet() const { return m_sourceEventIdHasBeenSet; }
    inline void SetSourceEventId(const Aws::String& value) { m_sourceEventIdHasBeenSet = true; m_sourceEventId = value; }
    inline void SetSourceEventId(Aws::String&& value) { m_sourceEventIdHasBeenSet = true; m_sourceEventId = std::move(value); }
    inline void SetSourceEventId(const char* value) { m_sourceEventIdHasBeenSet = true; m_sourceEventId.assign(value); }
    inline SourceEventMetadata& WithSourceEventId(const Aws::String& value) { SetSourceEventId(value); return *this;}
    inline SourceEventMetadata& WithSourceEventId(Aws::String&& value) { SetSourceEventId(std::move(value)); return *this;}
    inline SourceEventMetadata& WithSourceEventId(const char* value) { SetSourceEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region the event originated from.</p>
     */
    inline const Aws::String& GetEventOriginRegion() const{ return m_eventOriginRegion; }
    inline bool EventOriginRegionHasBeenSet() const { return m_eventOriginRegionHasBeenSet; }
    inline void SetEventOriginRegion(const Aws::String& value) { m_eventOriginRegionHasBeenSet = true; m_eventOriginRegion = value; }
    inline void SetEventOriginRegion(Aws::String&& value) { m_eventOriginRegionHasBeenSet = true; m_eventOriginRegion = std::move(value); }
    inline void SetEventOriginRegion(const char* value) { m_eventOriginRegionHasBeenSet = true; m_eventOriginRegion.assign(value); }
    inline SourceEventMetadata& WithEventOriginRegion(const Aws::String& value) { SetEventOriginRegion(value); return *this;}
    inline SourceEventMetadata& WithEventOriginRegion(Aws::String&& value) { SetEventOriginRegion(std::move(value)); return *this;}
    inline SourceEventMetadata& WithEventOriginRegion(const char* value) { SetEventOriginRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary Amazon Web Services account of <code>SourceEvent</code>.</p>
     */
    inline const Aws::String& GetRelatedAccount() const{ return m_relatedAccount; }
    inline bool RelatedAccountHasBeenSet() const { return m_relatedAccountHasBeenSet; }
    inline void SetRelatedAccount(const Aws::String& value) { m_relatedAccountHasBeenSet = true; m_relatedAccount = value; }
    inline void SetRelatedAccount(Aws::String&& value) { m_relatedAccountHasBeenSet = true; m_relatedAccount = std::move(value); }
    inline void SetRelatedAccount(const char* value) { m_relatedAccountHasBeenSet = true; m_relatedAccount.assign(value); }
    inline SourceEventMetadata& WithRelatedAccount(const Aws::String& value) { SetRelatedAccount(value); return *this;}
    inline SourceEventMetadata& WithRelatedAccount(Aws::String&& value) { SetRelatedAccount(std::move(value)); return *this;}
    inline SourceEventMetadata& WithRelatedAccount(const char* value) { SetRelatedAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service the event originates from. For example
     * <code>aws.cloudwatch</code>.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline SourceEventMetadata& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline SourceEventMetadata& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline SourceEventMetadata& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the source event occurred. This is based on the Source
     * Event.</p>
     */
    inline const Aws::Utils::DateTime& GetEventOccurrenceTime() const{ return m_eventOccurrenceTime; }
    inline bool EventOccurrenceTimeHasBeenSet() const { return m_eventOccurrenceTimeHasBeenSet; }
    inline void SetEventOccurrenceTime(const Aws::Utils::DateTime& value) { m_eventOccurrenceTimeHasBeenSet = true; m_eventOccurrenceTime = value; }
    inline void SetEventOccurrenceTime(Aws::Utils::DateTime&& value) { m_eventOccurrenceTimeHasBeenSet = true; m_eventOccurrenceTime = std::move(value); }
    inline SourceEventMetadata& WithEventOccurrenceTime(const Aws::Utils::DateTime& value) { SetEventOccurrenceTime(value); return *this;}
    inline SourceEventMetadata& WithEventOccurrenceTime(Aws::Utils::DateTime&& value) { SetEventOccurrenceTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of event. For example, an Amazon CloudWatch state change.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }
    inline SourceEventMetadata& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}
    inline SourceEventMetadata& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}
    inline SourceEventMetadata& WithEventType(const char* value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resources related to this <code>NotificationEvent</code>.</p>
     */
    inline const Aws::Vector<Resource>& GetRelatedResources() const{ return m_relatedResources; }
    inline bool RelatedResourcesHasBeenSet() const { return m_relatedResourcesHasBeenSet; }
    inline void SetRelatedResources(const Aws::Vector<Resource>& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources = value; }
    inline void SetRelatedResources(Aws::Vector<Resource>&& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources = std::move(value); }
    inline SourceEventMetadata& WithRelatedResources(const Aws::Vector<Resource>& value) { SetRelatedResources(value); return *this;}
    inline SourceEventMetadata& WithRelatedResources(Aws::Vector<Resource>&& value) { SetRelatedResources(std::move(value)); return *this;}
    inline SourceEventMetadata& AddRelatedResources(const Resource& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources.push_back(value); return *this; }
    inline SourceEventMetadata& AddRelatedResources(Resource&& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_eventTypeVersion;
    bool m_eventTypeVersionHasBeenSet = false;

    Aws::String m_sourceEventId;
    bool m_sourceEventIdHasBeenSet = false;

    Aws::String m_eventOriginRegion;
    bool m_eventOriginRegionHasBeenSet = false;

    Aws::String m_relatedAccount;
    bool m_relatedAccountHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Utils::DateTime m_eventOccurrenceTime;
    bool m_eventOccurrenceTimeHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::Vector<Resource> m_relatedResources;
    bool m_relatedResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
