/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/Pillar.h>
#include <aws/wellarchitected/model/RiskRating.h>

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
 * <p>A negative trade-off from acting on the recommendation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/TradeOff">AWS
 * API Reference</a></p>
 */
class TradeOff {
 public:
  AWS_WELLARCHITECTED_API TradeOff() = default;
  AWS_WELLARCHITECTED_API TradeOff(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API TradeOff& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The pillar that could be negatively impacted.</p>
   */
  inline Pillar GetPillar() const { return m_pillar; }
  inline bool PillarHasBeenSet() const { return m_pillarHasBeenSet; }
  inline void SetPillar(Pillar value) {
    m_pillarHasBeenSet = true;
    m_pillar = value;
  }
  inline TradeOff& WithPillar(Pillar value) {
    SetPillar(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A short phrase describing what is lost or degraded.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  TradeOff& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the specific risk and the condition that triggers it.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  TradeOff& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The risk rating for the trade-off.</p>
   */
  inline RiskRating GetRisk() const { return m_risk; }
  inline bool RiskHasBeenSet() const { return m_riskHasBeenSet; }
  inline void SetRisk(RiskRating value) {
    m_riskHasBeenSet = true;
    m_risk = value;
  }
  inline TradeOff& WithRisk(RiskRating value) {
    SetRisk(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A specific action to mitigate the trade-off and when to take it.</p>
   */
  inline const Aws::String& GetMitigation() const { return m_mitigation; }
  inline bool MitigationHasBeenSet() const { return m_mitigationHasBeenSet; }
  template <typename MitigationT = Aws::String>
  void SetMitigation(MitigationT&& value) {
    m_mitigationHasBeenSet = true;
    m_mitigation = std::forward<MitigationT>(value);
  }
  template <typename MitigationT = Aws::String>
  TradeOff& WithMitigation(MitigationT&& value) {
    SetMitigation(std::forward<MitigationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional explanation providing additional context for the risk rating.</p>
   */
  inline const Aws::String& GetRiskExplanation() const { return m_riskExplanation; }
  inline bool RiskExplanationHasBeenSet() const { return m_riskExplanationHasBeenSet; }
  template <typename RiskExplanationT = Aws::String>
  void SetRiskExplanation(RiskExplanationT&& value) {
    m_riskExplanationHasBeenSet = true;
    m_riskExplanation = std::forward<RiskExplanationT>(value);
  }
  template <typename RiskExplanationT = Aws::String>
  TradeOff& WithRiskExplanation(RiskExplanationT&& value) {
    SetRiskExplanation(std::forward<RiskExplanationT>(value));
    return *this;
  }
  ///@}
 private:
  Pillar m_pillar{Pillar::NOT_SET};

  Aws::String m_title;

  Aws::String m_description;

  RiskRating m_risk{RiskRating::NOT_SET};

  Aws::String m_mitigation;

  Aws::String m_riskExplanation;
  bool m_pillarHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_riskHasBeenSet = false;
  bool m_mitigationHasBeenSet = false;
  bool m_riskExplanationHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
