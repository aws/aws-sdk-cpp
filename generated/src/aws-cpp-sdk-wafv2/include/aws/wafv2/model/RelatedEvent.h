/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ApiPattern.h>
#include <aws/wafv2/model/Confidence.h>

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
 * <p>An API security event that an event actor is associated with.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RelatedEvent">AWS
 * API Reference</a></p>
 */
class RelatedEvent {
 public:
  AWS_WAFV2_API RelatedEvent() = default;
  AWS_WAFV2_API RelatedEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API RelatedEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the event. You provide this to <a>GetEvent</a> to
   * retrieve the details of the event.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  RelatedEvent& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the event started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  RelatedEvent& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fully qualified name of the label that WAF assigned to the event.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  RelatedEvent& WithLabel(LabelT&& value) {
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
  RelatedEvent& WithCategory(CategoryT&& value) {
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
  inline RelatedEvent& WithConfidence(Confidence value) {
    SetConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The API patterns that the event involves.</p>
   */
  inline const Aws::Vector<ApiPattern>& GetApiPatterns() const { return m_apiPatterns; }
  inline bool ApiPatternsHasBeenSet() const { return m_apiPatternsHasBeenSet; }
  template <typename ApiPatternsT = Aws::Vector<ApiPattern>>
  void SetApiPatterns(ApiPatternsT&& value) {
    m_apiPatternsHasBeenSet = true;
    m_apiPatterns = std::forward<ApiPatternsT>(value);
  }
  template <typename ApiPatternsT = Aws::Vector<ApiPattern>>
  RelatedEvent& WithApiPatterns(ApiPatternsT&& value) {
    SetApiPatterns(std::forward<ApiPatternsT>(value));
    return *this;
  }
  template <typename ApiPatternsT = ApiPattern>
  RelatedEvent& AddApiPatterns(ApiPatternsT&& value) {
    m_apiPatternsHasBeenSet = true;
    m_apiPatterns.emplace_back(std::forward<ApiPatternsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  Aws::Utils::DateTime m_startTime{};

  Aws::String m_label;

  Aws::String m_category;

  Confidence m_confidence{Confidence::NOT_SET};

  Aws::Vector<ApiPattern> m_apiPatterns;
  bool m_eventIdHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_labelHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_apiPatternsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
