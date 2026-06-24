/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

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
 * <p>Contains the details for updating an existing security requirement within a
 * pack. The name is an immutable identifier used to locate the requirement and
 * cannot be modified.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdateSecurityRequirementEntry">AWS
 * API Reference</a></p>
 */
class UpdateSecurityRequirementEntry {
 public:
  AWS_SECURITYAGENT_API UpdateSecurityRequirementEntry() = default;
  AWS_SECURITYAGENT_API UpdateSecurityRequirementEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API UpdateSecurityRequirementEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the security requirement to update. This is an immutable
   * identifier and cannot be changed once the requirement is created.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateSecurityRequirementEntry& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the security requirement.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateSecurityRequirementEntry& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated security domain the requirement belongs to.</p>
   */
  inline const Aws::String& GetDomain() const { return m_domain; }
  inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
  template <typename DomainT = Aws::String>
  void SetDomain(DomainT&& value) {
    m_domainHasBeenSet = true;
    m_domain = std::forward<DomainT>(value);
  }
  template <typename DomainT = Aws::String>
  UpdateSecurityRequirementEntry& WithDomain(DomainT&& value) {
    SetDomain(std::forward<DomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated evaluation criteria used to assess compliance with this
   * requirement.</p>
   */
  inline const Aws::String& GetEvaluation() const { return m_evaluation; }
  inline bool EvaluationHasBeenSet() const { return m_evaluationHasBeenSet; }
  template <typename EvaluationT = Aws::String>
  void SetEvaluation(EvaluationT&& value) {
    m_evaluationHasBeenSet = true;
    m_evaluation = std::forward<EvaluationT>(value);
  }
  template <typename EvaluationT = Aws::String>
  UpdateSecurityRequirementEntry& WithEvaluation(EvaluationT&& value) {
    SetEvaluation(std::forward<EvaluationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated remediation steps when the requirement is not met.</p>
   */
  inline const Aws::String& GetRemediation() const { return m_remediation; }
  inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
  template <typename RemediationT = Aws::String>
  void SetRemediation(RemediationT&& value) {
    m_remediationHasBeenSet = true;
    m_remediation = std::forward<RemediationT>(value);
  }
  template <typename RemediationT = Aws::String>
  UpdateSecurityRequirementEntry& WithRemediation(RemediationT&& value) {
    SetRemediation(std::forward<RemediationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_domain;

  Aws::String m_evaluation;

  Aws::String m_remediation;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_domainHasBeenSet = false;
  bool m_evaluationHasBeenSet = false;
  bool m_remediationHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
