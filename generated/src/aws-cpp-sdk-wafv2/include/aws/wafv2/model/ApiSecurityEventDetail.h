/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ApiPattern.h>
#include <aws/wafv2/model/Confidence.h>
#include <aws/wafv2/model/EventActorReference.h>
#include <aws/wafv2/model/EventTimelineEntry.h>

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
 * <p>The API security details of an event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ApiSecurityEventDetail">AWS
 * API Reference</a></p>
 */
class ApiSecurityEventDetail {
 public:
  AWS_WAFV2_API ApiSecurityEventDetail() = default;
  AWS_WAFV2_API ApiSecurityEventDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API ApiSecurityEventDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The fully qualified name of the label that WAF assigned to the event. For
   * example,
   * <code>awswaf:managed:aws:api-security:credential-stuffing-high</code>.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  ApiSecurityEventDetail& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The API security threat category of the event. For example,
   * <code>API2:2023</code>.</p>
   */
  inline const Aws::String& GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  template <typename CategoryT = Aws::String>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::String>
  ApiSecurityEventDetail& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence level of the event detection: <code>LOW</code>,
   * <code>MEDIUM</code>, or <code>HIGH</code>.</p>
   */
  inline Confidence GetConfidence() const { return m_confidence; }
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(Confidence value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline ApiSecurityEventDetail& WithConfidence(Confidence value) {
    SetConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The API patterns that the event involves. The list contains up to 20 API
   * patterns.</p>
   */
  inline const Aws::Vector<ApiPattern>& GetApiPatterns() const { return m_apiPatterns; }
  inline bool ApiPatternsHasBeenSet() const { return m_apiPatternsHasBeenSet; }
  template <typename ApiPatternsT = Aws::Vector<ApiPattern>>
  void SetApiPatterns(ApiPatternsT&& value) {
    m_apiPatternsHasBeenSet = true;
    m_apiPatterns = std::forward<ApiPatternsT>(value);
  }
  template <typename ApiPatternsT = Aws::Vector<ApiPattern>>
  ApiSecurityEventDetail& WithApiPatterns(ApiPatternsT&& value) {
    SetApiPatterns(std::forward<ApiPatternsT>(value));
    return *this;
  }
  template <typename ApiPatternsT = ApiPattern>
  ApiSecurityEventDetail& AddApiPatterns(ApiPatternsT&& value) {
    m_apiPatternsHasBeenSet = true;
    m_apiPatterns.emplace_back(std::forward<ApiPatternsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The event actors that are associated with the event. The list contains up to
   * 20 event actors. To retrieve the details of an event actor, provide its
   * <code>EventActorId</code> to <a>GetEventActor</a>.</p>
   */
  inline const Aws::Vector<EventActorReference>& GetEventActors() const { return m_eventActors; }
  inline bool EventActorsHasBeenSet() const { return m_eventActorsHasBeenSet; }
  template <typename EventActorsT = Aws::Vector<EventActorReference>>
  void SetEventActors(EventActorsT&& value) {
    m_eventActorsHasBeenSet = true;
    m_eventActors = std::forward<EventActorsT>(value);
  }
  template <typename EventActorsT = Aws::Vector<EventActorReference>>
  ApiSecurityEventDetail& WithEventActors(EventActorsT&& value) {
    SetEventActors(std::forward<EventActorsT>(value));
    return *this;
  }
  template <typename EventActorsT = EventActorReference>
  ApiSecurityEventDetail& AddEventActors(EventActorsT&& value) {
    m_eventActorsHasBeenSet = true;
    m_eventActors.emplace_back(std::forward<EventActorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The changes to the event's label, confidence, and API patterns over time,
   * ordered from oldest to newest. The list contains up to 32 entries.</p> <p>For
   * <a>ListEvents</a> and <a>ListEventsByWebACL</a>, this is returned only if you
   * specify <code>TIMELINE</code> in the request <code>Include</code> setting.</p>
   */
  inline const Aws::Vector<EventTimelineEntry>& GetTimeline() const { return m_timeline; }
  inline bool TimelineHasBeenSet() const { return m_timelineHasBeenSet; }
  template <typename TimelineT = Aws::Vector<EventTimelineEntry>>
  void SetTimeline(TimelineT&& value) {
    m_timelineHasBeenSet = true;
    m_timeline = std::forward<TimelineT>(value);
  }
  template <typename TimelineT = Aws::Vector<EventTimelineEntry>>
  ApiSecurityEventDetail& WithTimeline(TimelineT&& value) {
    SetTimeline(std::forward<TimelineT>(value));
    return *this;
  }
  template <typename TimelineT = EventTimelineEntry>
  ApiSecurityEventDetail& AddTimeline(TimelineT&& value) {
    m_timelineHasBeenSet = true;
    m_timeline.emplace_back(std::forward<TimelineT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_label;

  Aws::String m_category;

  Confidence m_confidence{Confidence::NOT_SET};

  Aws::Vector<ApiPattern> m_apiPatterns;

  Aws::Vector<EventActorReference> m_eventActors;

  Aws::Vector<EventTimelineEntry> m_timeline;
  bool m_labelHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_apiPatternsHasBeenSet = false;
  bool m_eventActorsHasBeenSet = false;
  bool m_timelineHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
