/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>The context behind the remediation target's existence and
 * guidance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RemediationGuidanceContext">AWS
 * API Reference</a></p>
 */
class RemediationGuidanceContext {
 public:
  AWS_SECURITYHUB_API RemediationGuidanceContext() = default;
  AWS_SECURITYHUB_API RemediationGuidanceContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API RemediationGuidanceContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Explains the cause which directly created the remediation target.</p>
   */
  inline const Aws::String& GetProblemStatement() const { return m_problemStatement; }
  inline bool ProblemStatementHasBeenSet() const { return m_problemStatementHasBeenSet; }
  template <typename ProblemStatementT = Aws::String>
  void SetProblemStatement(ProblemStatementT&& value) {
    m_problemStatementHasBeenSet = true;
    m_problemStatement = std::forward<ProblemStatementT>(value);
  }
  template <typename ProblemStatementT = Aws::String>
  RemediationGuidanceContext& WithProblemStatement(ProblemStatementT&& value) {
    SetProblemStatement(std::forward<ProblemStatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An assessment of the existing risk the remediation target creates.</p>
   */
  inline const Aws::String& GetRiskAssessment() const { return m_riskAssessment; }
  inline bool RiskAssessmentHasBeenSet() const { return m_riskAssessmentHasBeenSet; }
  template <typename RiskAssessmentT = Aws::String>
  void SetRiskAssessment(RiskAssessmentT&& value) {
    m_riskAssessmentHasBeenSet = true;
    m_riskAssessment = std::forward<RiskAssessmentT>(value);
  }
  template <typename RiskAssessmentT = Aws::String>
  RemediationGuidanceContext& WithRiskAssessment(RiskAssessmentT&& value) {
    SetRiskAssessment(std::forward<RiskAssessmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope of the resources affected by the resolution of the remediation
   * target.</p>
   */
  inline const Aws::String& GetAffectedScope() const { return m_affectedScope; }
  inline bool AffectedScopeHasBeenSet() const { return m_affectedScopeHasBeenSet; }
  template <typename AffectedScopeT = Aws::String>
  void SetAffectedScope(AffectedScopeT&& value) {
    m_affectedScopeHasBeenSet = true;
    m_affectedScope = std::forward<AffectedScopeT>(value);
  }
  template <typename AffectedScopeT = Aws::String>
  RemediationGuidanceContext& WithAffectedScope(AffectedScopeT&& value) {
    SetAffectedScope(std::forward<AffectedScopeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of prerequisite steps in resolving the remediation target.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPrerequisites() const { return m_prerequisites; }
  inline bool PrerequisitesHasBeenSet() const { return m_prerequisitesHasBeenSet; }
  template <typename PrerequisitesT = Aws::Vector<Aws::String>>
  void SetPrerequisites(PrerequisitesT&& value) {
    m_prerequisitesHasBeenSet = true;
    m_prerequisites = std::forward<PrerequisitesT>(value);
  }
  template <typename PrerequisitesT = Aws::Vector<Aws::String>>
  RemediationGuidanceContext& WithPrerequisites(PrerequisitesT&& value) {
    SetPrerequisites(std::forward<PrerequisitesT>(value));
    return *this;
  }
  template <typename PrerequisitesT = Aws::String>
  RemediationGuidanceContext& AddPrerequisites(PrerequisitesT&& value) {
    m_prerequisitesHasBeenSet = true;
    m_prerequisites.emplace_back(std::forward<PrerequisitesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_problemStatement;

  Aws::String m_riskAssessment;

  Aws::String m_affectedScope;

  Aws::Vector<Aws::String> m_prerequisites;
  bool m_problemStatementHasBeenSet = false;
  bool m_riskAssessmentHasBeenSet = false;
  bool m_affectedScopeHasBeenSet = false;
  bool m_prerequisitesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
