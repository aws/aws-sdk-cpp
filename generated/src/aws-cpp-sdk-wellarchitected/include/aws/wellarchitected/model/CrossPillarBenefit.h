/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/ImpactCategory.h>
#include <aws/wellarchitected/model/Pillar.h>

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
 * <p>A benefit on a different pillar from acting on the
 * recommendation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CrossPillarBenefit">AWS
 * API Reference</a></p>
 */
class CrossPillarBenefit {
 public:
  AWS_WELLARCHITECTED_API CrossPillarBenefit() = default;
  AWS_WELLARCHITECTED_API CrossPillarBenefit(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API CrossPillarBenefit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The pillar that would be positively impacted.</p>
   */
  inline Pillar GetPillar() const { return m_pillar; }
  inline bool PillarHasBeenSet() const { return m_pillarHasBeenSet; }
  inline void SetPillar(Pillar value) {
    m_pillarHasBeenSet = true;
    m_pillar = value;
  }
  inline CrossPillarBenefit& WithPillar(Pillar value) {
    SetPillar(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A short phrase describing the outcome.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  CrossPillarBenefit& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of what changes and why it matters.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CrossPillarBenefit& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity of the benefit.</p>
   */
  inline ImpactCategory GetImpact() const { return m_impact; }
  inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
  inline void SetImpact(ImpactCategory value) {
    m_impactHasBeenSet = true;
    m_impact = value;
  }
  inline CrossPillarBenefit& WithImpact(ImpactCategory value) {
    SetImpact(value);
    return *this;
  }
  ///@}
 private:
  Pillar m_pillar{Pillar::NOT_SET};

  Aws::String m_title;

  Aws::String m_description;

  ImpactCategory m_impact{ImpactCategory::NOT_SET};
  bool m_pillarHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_impactHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
