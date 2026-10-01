/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>The metadata of the remediation guidance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RemediationGuidanceMetadata">AWS
 * API Reference</a></p>
 */
class RemediationGuidanceMetadata {
 public:
  AWS_SECURITYHUB_API RemediationGuidanceMetadata() = default;
  AWS_SECURITYHUB_API RemediationGuidanceMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API RemediationGuidanceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The resource type of the remediation target.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  RemediationGuidanceMetadata& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exposure type of the related exposure findings.</p>
   */
  inline const Aws::String& GetExposureType() const { return m_exposureType; }
  inline bool ExposureTypeHasBeenSet() const { return m_exposureTypeHasBeenSet; }
  template <typename ExposureTypeT = Aws::String>
  void SetExposureType(ExposureTypeT&& value) {
    m_exposureTypeHasBeenSet = true;
    m_exposureType = std::forward<ExposureTypeT>(value);
  }
  template <typename ExposureTypeT = Aws::String>
  RemediationGuidanceMetadata& WithExposureType(ExposureTypeT&& value) {
    SetExposureType(std::forward<ExposureTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The titles of traits this guidance applies to.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTraitTitles() const { return m_traitTitles; }
  inline bool TraitTitlesHasBeenSet() const { return m_traitTitlesHasBeenSet; }
  template <typename TraitTitlesT = Aws::Vector<Aws::String>>
  void SetTraitTitles(TraitTitlesT&& value) {
    m_traitTitlesHasBeenSet = true;
    m_traitTitles = std::forward<TraitTitlesT>(value);
  }
  template <typename TraitTitlesT = Aws::Vector<Aws::String>>
  RemediationGuidanceMetadata& WithTraitTitles(TraitTitlesT&& value) {
    SetTraitTitles(std::forward<TraitTitlesT>(value));
    return *this;
  }
  template <typename TraitTitlesT = Aws::String>
  RemediationGuidanceMetadata& AddTraitTitles(TraitTitlesT&& value) {
    m_traitTitlesHasBeenSet = true;
    m_traitTitles.emplace_back(std::forward<TraitTitlesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The extent to which changes made in accordance with the guidance can be
   * reversed, for example <code>Fully reversible</code>.</p>
   */
  inline const Aws::String& GetReversibility() const { return m_reversibility; }
  inline bool ReversibilityHasBeenSet() const { return m_reversibilityHasBeenSet; }
  template <typename ReversibilityT = Aws::String>
  void SetReversibility(ReversibilityT&& value) {
    m_reversibilityHasBeenSet = true;
    m_reversibility = std::forward<ReversibilityT>(value);
  }
  template <typename ReversibilityT = Aws::String>
  RemediationGuidanceMetadata& WithReversibility(ReversibilityT&& value) {
    SetReversibility(std::forward<ReversibilityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the fix takes effect, for example <code>Immediate</code> or
   * <code>Deferred</code>.</p>
   */
  inline const Aws::String& GetFixEffect() const { return m_fixEffect; }
  inline bool FixEffectHasBeenSet() const { return m_fixEffectHasBeenSet; }
  template <typename FixEffectT = Aws::String>
  void SetFixEffect(FixEffectT&& value) {
    m_fixEffectHasBeenSet = true;
    m_fixEffect = std::forward<FixEffectT>(value);
  }
  template <typename FixEffectT = Aws::String>
  RemediationGuidanceMetadata& WithFixEffect(FixEffectT&& value) {
    SetFixEffect(std::forward<FixEffectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The risk when implementing the guidance provided.</p>
   */
  inline const Aws::String& GetRiskLevel() const { return m_riskLevel; }
  inline bool RiskLevelHasBeenSet() const { return m_riskLevelHasBeenSet; }
  template <typename RiskLevelT = Aws::String>
  void SetRiskLevel(RiskLevelT&& value) {
    m_riskLevelHasBeenSet = true;
    m_riskLevel = std::forward<RiskLevelT>(value);
  }
  template <typename RiskLevelT = Aws::String>
  RemediationGuidanceMetadata& WithRiskLevel(RiskLevelT&& value) {
    SetRiskLevel(std::forward<RiskLevelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The extent to which the guidance can be automated, for example
   * <code>Full</code>.</p>
   */
  inline const Aws::String& GetAutomationLevel() const { return m_automationLevel; }
  inline bool AutomationLevelHasBeenSet() const { return m_automationLevelHasBeenSet; }
  template <typename AutomationLevelT = Aws::String>
  void SetAutomationLevel(AutomationLevelT&& value) {
    m_automationLevelHasBeenSet = true;
    m_automationLevel = std::forward<AutomationLevelT>(value);
  }
  template <typename AutomationLevelT = Aws::String>
  RemediationGuidanceMetadata& WithAutomationLevel(AutomationLevelT&& value) {
    SetAutomationLevel(std::forward<AutomationLevelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether human review is required.</p>
   */
  inline bool GetHumanReviewRequired() const { return m_humanReviewRequired; }
  inline bool HumanReviewRequiredHasBeenSet() const { return m_humanReviewRequiredHasBeenSet; }
  inline void SetHumanReviewRequired(bool value) {
    m_humanReviewRequiredHasBeenSet = true;
    m_humanReviewRequired = value;
  }
  inline RemediationGuidanceMetadata& WithHumanReviewRequired(bool value) {
    SetHumanReviewRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp of when the guidance was generated.</p> <p>For more information
   * about the validation and formatting of timestamp fields in Security Hub CSPM,
   * see <a
   * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
   */
  inline const Aws::Utils::DateTime& GetGeneratedAt() const { return m_generatedAt; }
  inline bool GeneratedAtHasBeenSet() const { return m_generatedAtHasBeenSet; }
  template <typename GeneratedAtT = Aws::Utils::DateTime>
  void SetGeneratedAt(GeneratedAtT&& value) {
    m_generatedAtHasBeenSet = true;
    m_generatedAt = std::forward<GeneratedAtT>(value);
  }
  template <typename GeneratedAtT = Aws::Utils::DateTime>
  RemediationGuidanceMetadata& WithGeneratedAt(GeneratedAtT&& value) {
    SetGeneratedAt(std::forward<GeneratedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Verification status of the guidance.</p>
   */
  inline const Aws::String& GetVerificationStatus() const { return m_verificationStatus; }
  inline bool VerificationStatusHasBeenSet() const { return m_verificationStatusHasBeenSet; }
  template <typename VerificationStatusT = Aws::String>
  void SetVerificationStatus(VerificationStatusT&& value) {
    m_verificationStatusHasBeenSet = true;
    m_verificationStatus = std::forward<VerificationStatusT>(value);
  }
  template <typename VerificationStatusT = Aws::String>
  RemediationGuidanceMetadata& WithVerificationStatus(VerificationStatusT&& value) {
    SetVerificationStatus(std::forward<VerificationStatusT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceType;

  Aws::String m_exposureType;

  Aws::Vector<Aws::String> m_traitTitles;

  Aws::String m_reversibility;

  Aws::String m_fixEffect;

  Aws::String m_riskLevel;

  Aws::String m_automationLevel;

  bool m_humanReviewRequired{false};

  Aws::Utils::DateTime m_generatedAt{};

  Aws::String m_verificationStatus;
  bool m_resourceTypeHasBeenSet = false;
  bool m_exposureTypeHasBeenSet = false;
  bool m_traitTitlesHasBeenSet = false;
  bool m_reversibilityHasBeenSet = false;
  bool m_fixEffectHasBeenSet = false;
  bool m_riskLevelHasBeenSet = false;
  bool m_automationLevelHasBeenSet = false;
  bool m_humanReviewRequiredHasBeenSet = false;
  bool m_generatedAtHasBeenSet = false;
  bool m_verificationStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
