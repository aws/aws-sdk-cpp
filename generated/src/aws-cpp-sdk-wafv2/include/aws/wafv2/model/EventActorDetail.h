/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/EventActorChange.h>
#include <aws/wafv2/model/EventActorDetailSummary.h>
#include <aws/wafv2/model/RelatedEvent.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>The details of an event actor, returned by
 * <a>GetEventActor</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/EventActorDetail">AWS
 * API Reference</a></p>
 */
class EventActorDetail {
 public:
  AWS_WAFV2_API EventActorDetail() = default;
  AWS_WAFV2_API EventActorDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API EventActorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The latest observed attributes of the event actor.</p>
   */
  inline const EventActorDetailSummary& GetSummary() const { return m_summary; }
  inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
  template <typename SummaryT = EventActorDetailSummary>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = EventActorDetailSummary>
  EventActorDetail& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The API security events that the event actor is associated with. The list
   * contains up to 20 events.</p>
   */
  inline const Aws::Vector<RelatedEvent>& GetEvents() const { return m_events; }
  inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
  template <typename EventsT = Aws::Vector<RelatedEvent>>
  void SetEvents(EventsT&& value) {
    m_eventsHasBeenSet = true;
    m_events = std::forward<EventsT>(value);
  }
  template <typename EventsT = Aws::Vector<RelatedEvent>>
  EventActorDetail& WithEvents(EventsT&& value) {
    SetEvents(std::forward<EventsT>(value));
    return *this;
  }
  template <typename EventsT = RelatedEvent>
  EventActorDetail& AddEvents(EventsT&& value) {
    m_eventsHasBeenSet = true;
    m_events.emplace_back(std::forward<EventsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The history of changes to the network attributes of the event actor, ordered
   * from oldest to newest. The list contains up to 20 entries.</p>
   */
  inline const Aws::Vector<EventActorChange>& GetChanges() const { return m_changes; }
  inline bool ChangesHasBeenSet() const { return m_changesHasBeenSet; }
  template <typename ChangesT = Aws::Vector<EventActorChange>>
  void SetChanges(ChangesT&& value) {
    m_changesHasBeenSet = true;
    m_changes = std::forward<ChangesT>(value);
  }
  template <typename ChangesT = Aws::Vector<EventActorChange>>
  EventActorDetail& WithChanges(ChangesT&& value) {
    SetChanges(std::forward<ChangesT>(value));
    return *this;
  }
  template <typename ChangesT = EventActorChange>
  EventActorDetail& AddChanges(ChangesT&& value) {
    m_changesHasBeenSet = true;
    m_changes.emplace_back(std::forward<ChangesT>(value));
    return *this;
  }
  ///@}
 private:
  EventActorDetailSummary m_summary;

  Aws::Vector<RelatedEvent> m_events;

  Aws::Vector<EventActorChange> m_changes;
  bool m_summaryHasBeenSet = false;
  bool m_eventsHasBeenSet = false;
  bool m_changesHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
