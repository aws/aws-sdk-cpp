/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes event information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EventInfoMap">AWS
   * API Reference</a></p>
   */
  class EventInfoMap
  {
  public:
    AWS_REDSHIFT_API EventInfoMap() = default;
    AWS_REDSHIFT_API EventInfoMap(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API EventInfoMap& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of an Amazon Redshift event.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    EventInfoMap& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of an Amazon Redshift event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const { return m_eventCategories; }
    inline bool EventCategoriesHasBeenSet() const { return m_eventCategoriesHasBeenSet; }
    template<typename EventCategoriesT = Aws::Vector<Aws::String>>
    void SetEventCategories(EventCategoriesT&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = std::forward<EventCategoriesT>(value); }
    template<typename EventCategoriesT = Aws::Vector<Aws::String>>
    EventInfoMap& WithEventCategories(EventCategoriesT&& value) { SetEventCategories(std::forward<EventCategoriesT>(value)); return *this;}
    template<typename EventCategoriesT = Aws::String>
    EventInfoMap& AddEventCategories(EventCategoriesT&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.emplace_back(std::forward<EventCategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of an Amazon Redshift event.</p>
     */
    inline const Aws::String& GetEventDescription() const { return m_eventDescription; }
    inline bool EventDescriptionHasBeenSet() const { return m_eventDescriptionHasBeenSet; }
    template<typename EventDescriptionT = Aws::String>
    void SetEventDescription(EventDescriptionT&& value) { m_eventDescriptionHasBeenSet = true; m_eventDescription = std::forward<EventDescriptionT>(value); }
    template<typename EventDescriptionT = Aws::String>
    EventInfoMap& WithEventDescription(EventDescriptionT&& value) { SetEventDescription(std::forward<EventDescriptionT>(value)); return *this;}
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
    EventInfoMap& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet = false;

    Aws::String m_eventDescription;
    bool m_eventDescriptionHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
