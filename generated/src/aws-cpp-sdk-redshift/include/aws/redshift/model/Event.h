/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/SourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes an event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/Event">AWS API
   * Reference</a></p>
   */
  class Event
  {
  public:
    AWS_REDSHIFT_API Event() = default;
    AWS_REDSHIFT_API Event(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API Event& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier for the source of the event.</p>
     */
    inline const Aws::String& GetSourceIdentifier() const { return m_sourceIdentifier; }
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }
    template<typename SourceIdentifierT = Aws::String>
    void SetSourceIdentifier(SourceIdentifierT&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::forward<SourceIdentifierT>(value); }
    template<typename SourceIdentifierT = Aws::String>
    Event& WithSourceIdentifier(SourceIdentifierT&& value) { SetSourceIdentifier(std::forward<SourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source type for this event.</p>
     */
    inline SourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(SourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline Event& WithSourceType(SourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of this event.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    Event& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the event categories.</p> <p>Values: Configuration, Management,
     * Monitoring, Security, Pending</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const { return m_eventCategories; }
    inline bool EventCategoriesHasBeenSet() const { return m_eventCategoriesHasBeenSet; }
    template<typename EventCategoriesT = Aws::Vector<Aws::String>>
    void SetEventCategories(EventCategoriesT&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = std::forward<EventCategoriesT>(value); }
    template<typename EventCategoriesT = Aws::Vector<Aws::String>>
    Event& WithEventCategories(EventCategoriesT&& value) { SetEventCategories(std::forward<EventCategoriesT>(value)); return *this;}
    template<typename EventCategoriesT = Aws::String>
    Event& AddEventCategories(EventCategoriesT&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.emplace_back(std::forward<EventCategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The severity of the event.</p> <p>Values: ERROR, INFO</p>
     */
    inline const Aws::String& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = Aws::String>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = Aws::String>
    Event& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the event.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::Utils::DateTime>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::Utils::DateTime>
    Event& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the event.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    Event& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet = false;

    SourceType m_sourceType{SourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    Aws::Utils::DateTime m_date{};
    bool m_dateHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
