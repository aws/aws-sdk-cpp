/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>A high-level remediation summary returned in the detail
 * response.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/RemediationSummary">AWS
 * API Reference</a></p>
 */
class RemediationSummary {
 public:
  AWS_WELLARCHITECTED_API RemediationSummary() = default;
  AWS_WELLARCHITECTED_API RemediationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API RemediationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A short imperative statement of the recommended action.</p>
   */
  inline const Aws::String& GetRecommendation() const { return m_recommendation; }
  inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
  template <typename RecommendationT = Aws::String>
  void SetRecommendation(RecommendationT&& value) {
    m_recommendationHasBeenSet = true;
    m_recommendation = std::forward<RecommendationT>(value);
  }
  template <typename RecommendationT = Aws::String>
  RemediationSummary& WithRecommendation(RecommendationT&& value) {
    SetRecommendation(std::forward<RecommendationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>High-level steps to implement the fix.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSteps() const { return m_steps; }
  inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
  template <typename StepsT = Aws::Vector<Aws::String>>
  void SetSteps(StepsT&& value) {
    m_stepsHasBeenSet = true;
    m_steps = std::forward<StepsT>(value);
  }
  template <typename StepsT = Aws::Vector<Aws::String>>
  RemediationSummary& WithSteps(StepsT&& value) {
    SetSteps(std::forward<StepsT>(value));
    return *this;
  }
  template <typename StepsT = Aws::String>
  RemediationSummary& AddSteps(StepsT&& value) {
    m_stepsHasBeenSet = true;
    m_steps.emplace_back(std::forward<StepsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendation;

  Aws::Vector<Aws::String> m_steps;
  bool m_recommendationHasBeenSet = false;
  bool m_stepsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
