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
 * <p>A change to the label, confidence, or API patterns of an API security
 * event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/EventTimelineEntry">AWS
 * API Reference</a></p>
 */
class EventTimelineEntry {
 public:
  AWS_WAFV2_API EventTimelineEntry() = default;
  AWS_WAFV2_API EventTimelineEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API EventTimelineEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The time of the change.</p>
   */
  inline const Aws::Utils::DateTime& GetChangeTime() const { return m_changeTime; }
  inline bool ChangeTimeHasBeenSet() const { return m_changeTimeHasBeenSet; }
  template <typename ChangeTimeT = Aws::Utils::DateTime>
  void SetChangeTime(ChangeTimeT&& value) {
    m_changeTimeHasBeenSet = true;
    m_changeTime = std::forward<ChangeTimeT>(value);
  }
  template <typename ChangeTimeT = Aws::Utils::DateTime>
  EventTimelineEntry& WithChangeTime(ChangeTimeT&& value) {
    SetChangeTime(std::forward<ChangeTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fully qualified name of the label that was assigned to the event at the
   * time of the change.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  EventTimelineEntry& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence level of the event detection at the time of the change:
   * <code>LOW</code>, <code>MEDIUM</code>, or <code>HIGH</code>.</p>
   */
  inline Confidence GetConfidence() const { return m_confidence; }
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(Confidence value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline EventTimelineEntry& WithConfidence(Confidence value) {
    SetConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The API patterns that the event involved at the time of the change.</p>
   */
  inline const Aws::Vector<ApiPattern>& GetApiPatterns() const { return m_apiPatterns; }
  inline bool ApiPatternsHasBeenSet() const { return m_apiPatternsHasBeenSet; }
  template <typename ApiPatternsT = Aws::Vector<ApiPattern>>
  void SetApiPatterns(ApiPatternsT&& value) {
    m_apiPatternsHasBeenSet = true;
    m_apiPatterns = std::forward<ApiPatternsT>(value);
  }
  template <typename ApiPatternsT = Aws::Vector<ApiPattern>>
  EventTimelineEntry& WithApiPatterns(ApiPatternsT&& value) {
    SetApiPatterns(std::forward<ApiPatternsT>(value));
    return *this;
  }
  template <typename ApiPatternsT = ApiPattern>
  EventTimelineEntry& AddApiPatterns(ApiPatternsT&& value) {
    m_apiPatternsHasBeenSet = true;
    m_apiPatterns.emplace_back(std::forward<ApiPatternsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_changeTime{};

  Aws::String m_label;

  Confidence m_confidence{Confidence::NOT_SET};

  Aws::Vector<ApiPattern> m_apiPatterns;
  bool m_changeTimeHasBeenSet = false;
  bool m_labelHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_apiPatternsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
