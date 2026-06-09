/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>An observability recommendation to address a finding.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ObservabilityRecommendation">AWS
 * API Reference</a></p>
 */
class ObservabilityRecommendation {
 public:
  AWS_RESILIENCEHUBV2_API ObservabilityRecommendation() = default;
  AWS_RESILIENCEHUBV2_API ObservabilityRecommendation(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ObservabilityRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of suggested observability changes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSuggestedChanges() const { return m_suggestedChanges; }
  inline bool SuggestedChangesHasBeenSet() const { return m_suggestedChangesHasBeenSet; }
  template <typename SuggestedChangesT = Aws::Vector<Aws::String>>
  void SetSuggestedChanges(SuggestedChangesT&& value) {
    m_suggestedChangesHasBeenSet = true;
    m_suggestedChanges = std::forward<SuggestedChangesT>(value);
  }
  template <typename SuggestedChangesT = Aws::Vector<Aws::String>>
  ObservabilityRecommendation& WithSuggestedChanges(SuggestedChangesT&& value) {
    SetSuggestedChanges(std::forward<SuggestedChangesT>(value));
    return *this;
  }
  template <typename SuggestedChangesT = Aws::String>
  ObservabilityRecommendation& AddSuggestedChanges(SuggestedChangesT&& value) {
    m_suggestedChangesHasBeenSet = true;
    m_suggestedChanges.emplace_back(std::forward<SuggestedChangesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_suggestedChanges;
  bool m_suggestedChangesHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
