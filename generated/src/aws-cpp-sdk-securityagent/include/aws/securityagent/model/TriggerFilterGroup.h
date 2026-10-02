/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/TriggerEvent.h>
#include <aws/securityagent/model/TriggerFilter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>A set of conditions that start an automatic code review when they all pass. A
 * filter group must include <code>events</code>, <code>filters</code>, or
 * both.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/TriggerFilterGroup">AWS
 * API Reference</a></p>
 */
class TriggerFilterGroup {
 public:
  AWS_SECURITYAGENT_API TriggerFilterGroup() = default;
  AWS_SECURITYAGENT_API TriggerFilterGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API TriggerFilterGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Passes when the pull request event is one of the listed events. If you omit
   * this, the group matches <code>PULL_REQUEST_READY_FOR_REVIEW</code> and
   * <code>PULL_REQUEST_DRAFT</code> events only.</p>
   */
  inline const Aws::Vector<TriggerEvent>& GetEvents() const { return m_events; }
  inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
  template <typename EventsT = Aws::Vector<TriggerEvent>>
  void SetEvents(EventsT&& value) {
    m_eventsHasBeenSet = true;
    m_events = std::forward<EventsT>(value);
  }
  template <typename EventsT = Aws::Vector<TriggerEvent>>
  TriggerFilterGroup& WithEvents(EventsT&& value) {
    SetEvents(std::forward<EventsT>(value));
    return *this;
  }
  inline TriggerFilterGroup& AddEvents(TriggerEvent value) {
    m_eventsHasBeenSet = true;
    m_events.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Passes when every filter passes. If you omit this, the group matches its
   * events on any target branch and with any labels.</p>
   */
  inline const Aws::Vector<TriggerFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<TriggerFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<TriggerFilter>>
  TriggerFilterGroup& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = TriggerFilter>
  TriggerFilterGroup& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TriggerEvent> m_events;

  Aws::Vector<TriggerFilter> m_filters;
  bool m_eventsHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
