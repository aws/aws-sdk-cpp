/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/StrideCategory.h>
#include <aws/securityagent/model/ThreatActor.h>
#include <aws/securityagent/model/ThreatAnchorShape.h>
#include <aws/securityagent/model/ThreatEvidenceShape.h>
#include <aws/securityagent/model/ThreatSeverity.h>
#include <aws/securityagent/model/ThreatStatus.h>

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
 * <p>Represents a threat identified during threat modeling.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/Threat">AWS
 * API Reference</a></p>
 */
class Threat {
 public:
  AWS_SECURITYAGENT_API Threat() = default;
  AWS_SECURITYAGENT_API Threat(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Threat& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the threat.</p>
   */
  inline const Aws::String& GetThreatId() const { return m_threatId; }
  inline bool ThreatIdHasBeenSet() const { return m_threatIdHasBeenSet; }
  template <typename ThreatIdT = Aws::String>
  void SetThreatId(ThreatIdT&& value) {
    m_threatIdHasBeenSet = true;
    m_threatId = std::forward<ThreatIdT>(value);
  }
  template <typename ThreatIdT = Aws::String>
  Threat& WithThreatId(ThreatIdT&& value) {
    SetThreatId(std::forward<ThreatIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the threat model job that produced the threat.</p>
   */
  inline const Aws::String& GetThreatJobId() const { return m_threatJobId; }
  inline bool ThreatJobIdHasBeenSet() const { return m_threatJobIdHasBeenSet; }
  template <typename ThreatJobIdT = Aws::String>
  void SetThreatJobId(ThreatJobIdT&& value) {
    m_threatJobIdHasBeenSet = true;
    m_threatJobId = std::forward<ThreatJobIdT>(value);
  }
  template <typename ThreatJobIdT = Aws::String>
  Threat& WithThreatJobId(ThreatJobIdT&& value) {
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
  Threat& WithTitle(TitleT&& value) {
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
  Threat& WithStatement(StatementT&& value) {
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
  inline Threat& WithSeverity(ThreatSeverity value) {
    SetSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the threat.</p>
   */
  inline ThreatStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ThreatStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Threat& WithStatus(ThreatStatus value) {
    SetStatus(value);
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
  Threat& WithComments(CommentsT&& value) {
    SetComments(std::forward<CommentsT>(value));
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
  Threat& WithThreatSource(ThreatSourceT&& value) {
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
  Threat& WithPrerequisites(PrerequisitesT&& value) {
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
  Threat& WithThreatAction(ThreatActionT&& value) {
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
  Threat& WithThreatImpact(ThreatImpactT&& value) {
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
  Threat& WithImpactedGoal(ImpactedGoalT&& value) {
    SetImpactedGoal(std::forward<ImpactedGoalT>(value));
    return *this;
  }
  template <typename ImpactedGoalT = Aws::String>
  Threat& AddImpactedGoal(ImpactedGoalT&& value) {
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
  Threat& WithImpactedAssets(ImpactedAssetsT&& value) {
    SetImpactedAssets(std::forward<ImpactedAssetsT>(value));
    return *this;
  }
  template <typename ImpactedAssetsT = Aws::String>
  Threat& AddImpactedAssets(ImpactedAssetsT&& value) {
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
  Threat& WithAnchor(AnchorT&& value) {
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
  Threat& WithEvidence(EvidenceT&& value) {
    SetEvidence(std::forward<EvidenceT>(value));
    return *this;
  }
  template <typename EvidenceT = ThreatEvidenceShape>
  Threat& AddEvidence(EvidenceT&& value) {
    m_evidenceHasBeenSet = true;
    m_evidence.emplace_back(std::forward<EvidenceT>(value));
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
  Threat& WithStride(StrideT&& value) {
    SetStride(std::forward<StrideT>(value));
    return *this;
  }
  inline Threat& AddStride(StrideCategory value) {
    m_strideHasBeenSet = true;
    m_stride.push_back(value);
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
  Threat& WithRecommendation(RecommendationT&& value) {
    SetRecommendation(std::forward<RecommendationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Who created this threat.</p>
   */
  inline ThreatActor GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  inline void SetCreatedBy(ThreatActor value) {
    m_createdByHasBeenSet = true;
    m_createdBy = value;
  }
  inline Threat& WithCreatedBy(ThreatActor value) {
    SetCreatedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Who last updated this threat.</p>
   */
  inline ThreatActor GetUpdatedBy() const { return m_updatedBy; }
  inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
  inline void SetUpdatedBy(ThreatActor value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = value;
  }
  inline Threat& WithUpdatedBy(ThreatActor value) {
    SetUpdatedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the threat was created, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Threat& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the threat was last updated, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Threat& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_threatId;

  Aws::String m_threatJobId;

  Aws::String m_title;

  Aws::String m_statement;

  ThreatSeverity m_severity{ThreatSeverity::NOT_SET};

  ThreatStatus m_status{ThreatStatus::NOT_SET};

  Aws::String m_comments;

  Aws::String m_threatSource;

  Aws::String m_prerequisites;

  Aws::String m_threatAction;

  Aws::String m_threatImpact;

  Aws::Vector<Aws::String> m_impactedGoal;

  Aws::Vector<Aws::String> m_impactedAssets;

  ThreatAnchorShape m_anchor;

  Aws::Vector<ThreatEvidenceShape> m_evidence;

  Aws::Vector<StrideCategory> m_stride;

  Aws::String m_recommendation;

  ThreatActor m_createdBy{ThreatActor::NOT_SET};

  ThreatActor m_updatedBy{ThreatActor::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_threatIdHasBeenSet = false;
  bool m_threatJobIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_statementHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_commentsHasBeenSet = false;
  bool m_threatSourceHasBeenSet = false;
  bool m_prerequisitesHasBeenSet = false;
  bool m_threatActionHasBeenSet = false;
  bool m_threatImpactHasBeenSet = false;
  bool m_impactedGoalHasBeenSet = false;
  bool m_impactedAssetsHasBeenSet = false;
  bool m_anchorHasBeenSet = false;
  bool m_evidenceHasBeenSet = false;
  bool m_strideHasBeenSet = false;
  bool m_recommendationHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
