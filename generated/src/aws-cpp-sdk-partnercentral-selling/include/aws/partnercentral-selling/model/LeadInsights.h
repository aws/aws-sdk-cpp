/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Contains insights that AI generates for a lead. These insights provide
 * automated analysis to help partners evaluate the lead quality and prioritize
 * engagement efforts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/LeadInsights">AWS
 * API Reference</a></p>
 */
class LeadInsights {
 public:
  AWS_PARTNERCENTRALSELLING_API LeadInsights() = default;
  AWS_PARTNERCENTRALSELLING_API LeadInsights(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API LeadInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A score that indicates the lead's readiness for engagement. Valid values are
   * <code>Low</code>, <code>Medium</code>, and <code>High</code>. Use this score to
   * prioritize leads based on their likelihood of conversion.</p>
   */
  inline const Aws::String& GetLeadReadinessScore() const { return m_leadReadinessScore; }
  inline bool LeadReadinessScoreHasBeenSet() const { return m_leadReadinessScoreHasBeenSet; }
  template <typename LeadReadinessScoreT = Aws::String>
  void SetLeadReadinessScore(LeadReadinessScoreT&& value) {
    m_leadReadinessScoreHasBeenSet = true;
    m_leadReadinessScore = std::forward<LeadReadinessScoreT>(value);
  }
  template <typename LeadReadinessScoreT = Aws::String>
  LeadInsights& WithLeadReadinessScore(LeadReadinessScoreT&& value) {
    SetLeadReadinessScore(std::forward<LeadReadinessScoreT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_leadReadinessScore;
  bool m_leadReadinessScoreHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
