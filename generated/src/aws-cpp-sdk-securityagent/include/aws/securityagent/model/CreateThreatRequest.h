/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/StrideCategory.h>
#include <aws/securityagent/model/ThreatAnchorShape.h>
#include <aws/securityagent/model/ThreatEvidenceShape.h>
#include <aws/securityagent/model/ThreatSeverity.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 * <p>Input for creating a new threat.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateThreatInput">AWS
 * API Reference</a></p>
 */
class CreateThreatRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API CreateThreatRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateThreat"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the agent space.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  CreateThreatRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the threat model job the threat belongs to.</p>
   */
  inline const Aws::String& GetThreatJobId() const { return m_threatJobId; }
  inline bool ThreatJobIdHasBeenSet() const { return m_threatJobIdHasBeenSet; }
  template <typename ThreatJobIdT = Aws::String>
  void SetThreatJobId(ThreatJobIdT&& value) {
    m_threatJobIdHasBeenSet = true;
    m_threatJobId = std::forward<ThreatJobIdT>(value);
  }
  template <typename ThreatJobIdT = Aws::String>
  CreateThreatRequest& WithThreatJobId(ThreatJobIdT&& value) {
    SetThreatJobId(std::forward<ThreatJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A short title summarizing the threat.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  CreateThreatRequest& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The natural-language threat statement.</p>
   */
  inline const Aws::String& GetStatement() const { return m_statement; }
  inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }
  template <typename StatementT = Aws::String>
  void SetStatement(StatementT&& value) {
    m_statementHasBeenSet = true;
    m_statement = std::forward<StatementT>(value);
  }
  template <typename StatementT = Aws::String>
  CreateThreatRequest& WithStatement(StatementT&& value) {
    SetStatement(std::forward<StatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity level of the threat.</p>
   */
  inline ThreatSeverity GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  inline void SetSeverity(ThreatSeverity value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline CreateThreatRequest& WithSeverity(ThreatSeverity value) {
    SetSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional customer comment on the threat.</p>
   */
  inline const Aws::String& GetComments() const { return m_comments; }
  inline bool CommentsHasBeenSet() const { return m_commentsHasBeenSet; }
  template <typename CommentsT = Aws::String>
  void SetComments(CommentsT&& value) {
    m_commentsHasBeenSet = true;
    m_comments = std::forward<CommentsT>(value);
  }
  template <typename CommentsT = Aws::String>
  CreateThreatRequest& WithComments(CommentsT&& value) {
    SetComments(std::forward<CommentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The STRIDE categories applicable to this threat.</p>
   */
  inline const Aws::Vector<StrideCategory>& GetStride() const { return m_stride; }
  inline bool StrideHasBeenSet() const { return m_strideHasBeenSet; }
  template <typename StrideT = Aws::Vector<StrideCategory>>
  void SetStride(StrideT&& value) {
    m_strideHasBeenSet = true;
    m_stride = std::forward<StrideT>(value);
  }
  template <typename StrideT = Aws::Vector<StrideCategory>>
  CreateThreatRequest& WithStride(StrideT&& value) {
    SetStride(std::forward<StrideT>(value));
    return *this;
  }
  inline CreateThreatRequest& AddStride(StrideCategory value) {
    m_strideHasBeenSet = true;
    m_stride.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actor or origin of the threat.</p>
   */
  inline const Aws::String& GetThreatSource() const { return m_threatSource; }
  inline bool ThreatSourceHasBeenSet() const { return m_threatSourceHasBeenSet; }
  template <typename ThreatSourceT = Aws::String>
  void SetThreatSource(ThreatSourceT&& value) {
    m_threatSourceHasBeenSet = true;
    m_threatSource = std::forward<ThreatSourceT>(value);
  }
  template <typename ThreatSourceT = Aws::String>
  CreateThreatRequest& WithThreatSource(ThreatSourceT&& value) {
    SetThreatSource(std::forward<ThreatSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The conditions required for the threat to be exploitable.</p>
   */
  inline const Aws::String& GetPrerequisites() const { return m_prerequisites; }
  inline bool PrerequisitesHasBeenSet() const { return m_prerequisitesHasBeenSet; }
  template <typename PrerequisitesT = Aws::String>
  void SetPrerequisites(PrerequisitesT&& value) {
    m_prerequisitesHasBeenSet = true;
    m_prerequisites = std::forward<PrerequisitesT>(value);
  }
  template <typename PrerequisitesT = Aws::String>
  CreateThreatRequest& WithPrerequisites(PrerequisitesT&& value) {
    SetPrerequisites(std::forward<PrerequisitesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What the threat source can do.</p>
   */
  inline const Aws::String& GetThreatAction() const { return m_threatAction; }
  inline bool ThreatActionHasBeenSet() const { return m_threatActionHasBeenSet; }
  template <typename ThreatActionT = Aws::String>
  void SetThreatAction(ThreatActionT&& value) {
    m_threatActionHasBeenSet = true;
    m_threatAction = std::forward<ThreatActionT>(value);
  }
  template <typename ThreatActionT = Aws::String>
  CreateThreatRequest& WithThreatAction(ThreatActionT&& value) {
    SetThreatAction(std::forward<ThreatActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The direct consequence of the threat action.</p>
   */
  inline const Aws::String& GetThreatImpact() const { return m_threatImpact; }
  inline bool ThreatImpactHasBeenSet() const { return m_threatImpactHasBeenSet; }
  template <typename ThreatImpactT = Aws::String>
  void SetThreatImpact(ThreatImpactT&& value) {
    m_threatImpactHasBeenSet = true;
    m_threatImpact = std::forward<ThreatImpactT>(value);
  }
  template <typename ThreatImpactT = Aws::String>
  CreateThreatRequest& WithThreatImpact(ThreatImpactT&& value) {
    SetThreatImpact(std::forward<ThreatImpactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security goals affected by the threat.</p>
   */
  inline const Aws::Vector<Aws::String>& GetImpactedGoal() const { return m_impactedGoal; }
  inline bool ImpactedGoalHasBeenSet() const { return m_impactedGoalHasBeenSet; }
  template <typename ImpactedGoalT = Aws::Vector<Aws::String>>
  void SetImpactedGoal(ImpactedGoalT&& value) {
    m_impactedGoalHasBeenSet = true;
    m_impactedGoal = std::forward<ImpactedGoalT>(value);
  }
  template <typename ImpactedGoalT = Aws::Vector<Aws::String>>
  CreateThreatRequest& WithImpactedGoal(ImpactedGoalT&& value) {
    SetImpactedGoal(std::forward<ImpactedGoalT>(value));
    return *this;
  }
  template <typename ImpactedGoalT = Aws::String>
  CreateThreatRequest& AddImpactedGoal(ImpactedGoalT&& value) {
    m_impactedGoalHasBeenSet = true;
    m_impactedGoal.emplace_back(std::forward<ImpactedGoalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific assets affected by the threat.</p>
   */
  inline const Aws::Vector<Aws::String>& GetImpactedAssets() const { return m_impactedAssets; }
  inline bool ImpactedAssetsHasBeenSet() const { return m_impactedAssetsHasBeenSet; }
  template <typename ImpactedAssetsT = Aws::Vector<Aws::String>>
  void SetImpactedAssets(ImpactedAssetsT&& value) {
    m_impactedAssetsHasBeenSet = true;
    m_impactedAssets = std::forward<ImpactedAssetsT>(value);
  }
  template <typename ImpactedAssetsT = Aws::Vector<Aws::String>>
  CreateThreatRequest& WithImpactedAssets(ImpactedAssetsT&& value) {
    SetImpactedAssets(std::forward<ImpactedAssetsT>(value));
    return *this;
  }
  template <typename ImpactedAssetsT = Aws::String>
  CreateThreatRequest& AddImpactedAssets(ImpactedAssetsT&& value) {
    m_impactedAssetsHasBeenSet = true;
    m_impactedAssets.emplace_back(std::forward<ImpactedAssetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DFD element this threat is anchored to.</p>
   */
  inline const ThreatAnchorShape& GetAnchor() const { return m_anchor; }
  inline bool AnchorHasBeenSet() const { return m_anchorHasBeenSet; }
  template <typename AnchorT = ThreatAnchorShape>
  void SetAnchor(AnchorT&& value) {
    m_anchorHasBeenSet = true;
    m_anchor = std::forward<AnchorT>(value);
  }
  template <typename AnchorT = ThreatAnchorShape>
  CreateThreatRequest& WithAnchor(AnchorT&& value) {
    SetAnchor(std::forward<AnchorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source code files supporting the threat.</p>
   */
  inline const Aws::Vector<ThreatEvidenceShape>& GetEvidence() const { return m_evidence; }
  inline bool EvidenceHasBeenSet() const { return m_evidenceHasBeenSet; }
  template <typename EvidenceT = Aws::Vector<ThreatEvidenceShape>>
  void SetEvidence(EvidenceT&& value) {
    m_evidenceHasBeenSet = true;
    m_evidence = std::forward<EvidenceT>(value);
  }
  template <typename EvidenceT = Aws::Vector<ThreatEvidenceShape>>
  CreateThreatRequest& WithEvidence(EvidenceT&& value) {
    SetEvidence(std::forward<EvidenceT>(value));
    return *this;
  }
  template <typename EvidenceT = ThreatEvidenceShape>
  CreateThreatRequest& AddEvidence(EvidenceT&& value) {
    m_evidenceHasBeenSet = true;
    m_evidence.emplace_back(std::forward<EvidenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommended mitigation guidance for this threat.</p>
   */
  inline const Aws::String& GetRecommendation() const { return m_recommendation; }
  inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
  template <typename RecommendationT = Aws::String>
  void SetRecommendation(RecommendationT&& value) {
    m_recommendationHasBeenSet = true;
    m_recommendation = std::forward<RecommendationT>(value);
  }
  template <typename RecommendationT = Aws::String>
  CreateThreatRequest& WithRecommendation(RecommendationT&& value) {
    SetRecommendation(std::forward<RecommendationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_threatJobId;

  Aws::String m_title;

  Aws::String m_statement;

  ThreatSeverity m_severity{ThreatSeverity::NOT_SET};

  Aws::String m_comments;

  Aws::Vector<StrideCategory> m_stride;

  Aws::String m_threatSource;

  Aws::String m_prerequisites;

  Aws::String m_threatAction;

  Aws::String m_threatImpact;

  Aws::Vector<Aws::String> m_impactedGoal;

  Aws::Vector<Aws::String> m_impactedAssets;

  ThreatAnchorShape m_anchor;

  Aws::Vector<ThreatEvidenceShape> m_evidence;

  Aws::String m_recommendation;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_threatJobIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_statementHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_commentsHasBeenSet = false;
  bool m_strideHasBeenSet = false;
  bool m_threatSourceHasBeenSet = false;
  bool m_prerequisitesHasBeenSet = false;
  bool m_threatActionHasBeenSet = false;
  bool m_threatImpactHasBeenSet = false;
  bool m_impactedGoalHasBeenSet = false;
  bool m_impactedAssetsHasBeenSet = false;
  bool m_anchorHasBeenSet = false;
  bool m_evidenceHasBeenSet = false;
  bool m_recommendationHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
