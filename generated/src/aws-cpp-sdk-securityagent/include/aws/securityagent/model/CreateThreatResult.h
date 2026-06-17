/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
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
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
/**
 * <p>Output for the CreateThreat operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateThreatOutput">AWS
 * API Reference</a></p>
 */
class CreateThreatResult {
 public:
  AWS_SECURITYAGENT_API CreateThreatResult() = default;
  AWS_SECURITYAGENT_API CreateThreatResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API CreateThreatResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the created threat.</p>
   */
  inline const Aws::String& GetThreatId() const { return m_threatId; }
  template <typename ThreatIdT = Aws::String>
  void SetThreatId(ThreatIdT&& value) {
    m_threatIdHasBeenSet = true;
    m_threatId = std::forward<ThreatIdT>(value);
  }
  template <typename ThreatIdT = Aws::String>
  CreateThreatResult& WithThreatId(ThreatIdT&& value) {
    SetThreatId(std::forward<ThreatIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the threat model job the threat belongs to.</p>
   */
  inline const Aws::String& GetThreatJobId() const { return m_threatJobId; }
  template <typename ThreatJobIdT = Aws::String>
  void SetThreatJobId(ThreatJobIdT&& value) {
    m_threatJobIdHasBeenSet = true;
    m_threatJobId = std::forward<ThreatJobIdT>(value);
  }
  template <typename ThreatJobIdT = Aws::String>
  CreateThreatResult& WithThreatJobId(ThreatJobIdT&& value) {
    SetThreatJobId(std::forward<ThreatJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A short title summarizing the threat.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  CreateThreatResult& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The natural-language threat statement.</p>
   */
  inline const Aws::String& GetStatement() const { return m_statement; }
  template <typename StatementT = Aws::String>
  void SetStatement(StatementT&& value) {
    m_statementHasBeenSet = true;
    m_statement = std::forward<StatementT>(value);
  }
  template <typename StatementT = Aws::String>
  CreateThreatResult& WithStatement(StatementT&& value) {
    SetStatement(std::forward<StatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity level of the threat.</p>
   */
  inline ThreatSeverity GetSeverity() const { return m_severity; }
  inline void SetSeverity(ThreatSeverity value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline CreateThreatResult& WithSeverity(ThreatSeverity value) {
    SetSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the threat.</p>
   */
  inline ThreatStatus GetStatus() const { return m_status; }
  inline void SetStatus(ThreatStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateThreatResult& WithStatus(ThreatStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional customer comment on the threat.</p>
   */
  inline const Aws::String& GetComments() const { return m_comments; }
  template <typename CommentsT = Aws::String>
  void SetComments(CommentsT&& value) {
    m_commentsHasBeenSet = true;
    m_comments = std::forward<CommentsT>(value);
  }
  template <typename CommentsT = Aws::String>
  CreateThreatResult& WithComments(CommentsT&& value) {
    SetComments(std::forward<CommentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The STRIDE categories applicable to this threat.</p>
   */
  inline const Aws::Vector<StrideCategory>& GetStride() const { return m_stride; }
  template <typename StrideT = Aws::Vector<StrideCategory>>
  void SetStride(StrideT&& value) {
    m_strideHasBeenSet = true;
    m_stride = std::forward<StrideT>(value);
  }
  template <typename StrideT = Aws::Vector<StrideCategory>>
  CreateThreatResult& WithStride(StrideT&& value) {
    SetStride(std::forward<StrideT>(value));
    return *this;
  }
  inline CreateThreatResult& AddStride(StrideCategory value) {
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
  template <typename ThreatSourceT = Aws::String>
  void SetThreatSource(ThreatSourceT&& value) {
    m_threatSourceHasBeenSet = true;
    m_threatSource = std::forward<ThreatSourceT>(value);
  }
  template <typename ThreatSourceT = Aws::String>
  CreateThreatResult& WithThreatSource(ThreatSourceT&& value) {
    SetThreatSource(std::forward<ThreatSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The conditions required for the threat to be exploitable.</p>
   */
  inline const Aws::String& GetPrerequisites() const { return m_prerequisites; }
  template <typename PrerequisitesT = Aws::String>
  void SetPrerequisites(PrerequisitesT&& value) {
    m_prerequisitesHasBeenSet = true;
    m_prerequisites = std::forward<PrerequisitesT>(value);
  }
  template <typename PrerequisitesT = Aws::String>
  CreateThreatResult& WithPrerequisites(PrerequisitesT&& value) {
    SetPrerequisites(std::forward<PrerequisitesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What the threat source can do.</p>
   */
  inline const Aws::String& GetThreatAction() const { return m_threatAction; }
  template <typename ThreatActionT = Aws::String>
  void SetThreatAction(ThreatActionT&& value) {
    m_threatActionHasBeenSet = true;
    m_threatAction = std::forward<ThreatActionT>(value);
  }
  template <typename ThreatActionT = Aws::String>
  CreateThreatResult& WithThreatAction(ThreatActionT&& value) {
    SetThreatAction(std::forward<ThreatActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The direct consequence of the threat action.</p>
   */
  inline const Aws::String& GetThreatImpact() const { return m_threatImpact; }
  template <typename ThreatImpactT = Aws::String>
  void SetThreatImpact(ThreatImpactT&& value) {
    m_threatImpactHasBeenSet = true;
    m_threatImpact = std::forward<ThreatImpactT>(value);
  }
  template <typename ThreatImpactT = Aws::String>
  CreateThreatResult& WithThreatImpact(ThreatImpactT&& value) {
    SetThreatImpact(std::forward<ThreatImpactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security goals affected by the threat.</p>
   */
  inline const Aws::Vector<Aws::String>& GetImpactedGoal() const { return m_impactedGoal; }
  template <typename ImpactedGoalT = Aws::Vector<Aws::String>>
  void SetImpactedGoal(ImpactedGoalT&& value) {
    m_impactedGoalHasBeenSet = true;
    m_impactedGoal = std::forward<ImpactedGoalT>(value);
  }
  template <typename ImpactedGoalT = Aws::Vector<Aws::String>>
  CreateThreatResult& WithImpactedGoal(ImpactedGoalT&& value) {
    SetImpactedGoal(std::forward<ImpactedGoalT>(value));
    return *this;
  }
  template <typename ImpactedGoalT = Aws::String>
  CreateThreatResult& AddImpactedGoal(ImpactedGoalT&& value) {
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
  template <typename ImpactedAssetsT = Aws::Vector<Aws::String>>
  void SetImpactedAssets(ImpactedAssetsT&& value) {
    m_impactedAssetsHasBeenSet = true;
    m_impactedAssets = std::forward<ImpactedAssetsT>(value);
  }
  template <typename ImpactedAssetsT = Aws::Vector<Aws::String>>
  CreateThreatResult& WithImpactedAssets(ImpactedAssetsT&& value) {
    SetImpactedAssets(std::forward<ImpactedAssetsT>(value));
    return *this;
  }
  template <typename ImpactedAssetsT = Aws::String>
  CreateThreatResult& AddImpactedAssets(ImpactedAssetsT&& value) {
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
  template <typename AnchorT = ThreatAnchorShape>
  void SetAnchor(AnchorT&& value) {
    m_anchorHasBeenSet = true;
    m_anchor = std::forward<AnchorT>(value);
  }
  template <typename AnchorT = ThreatAnchorShape>
  CreateThreatResult& WithAnchor(AnchorT&& value) {
    SetAnchor(std::forward<AnchorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source code files supporting the threat.</p>
   */
  inline const Aws::Vector<ThreatEvidenceShape>& GetEvidence() const { return m_evidence; }
  template <typename EvidenceT = Aws::Vector<ThreatEvidenceShape>>
  void SetEvidence(EvidenceT&& value) {
    m_evidenceHasBeenSet = true;
    m_evidence = std::forward<EvidenceT>(value);
  }
  template <typename EvidenceT = Aws::Vector<ThreatEvidenceShape>>
  CreateThreatResult& WithEvidence(EvidenceT&& value) {
    SetEvidence(std::forward<EvidenceT>(value));
    return *this;
  }
  template <typename EvidenceT = ThreatEvidenceShape>
  CreateThreatResult& AddEvidence(EvidenceT&& value) {
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
  template <typename RecommendationT = Aws::String>
  void SetRecommendation(RecommendationT&& value) {
    m_recommendationHasBeenSet = true;
    m_recommendation = std::forward<RecommendationT>(value);
  }
  template <typename RecommendationT = Aws::String>
  CreateThreatResult& WithRecommendation(RecommendationT&& value) {
    SetRecommendation(std::forward<RecommendationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Who created this threat.</p>
   */
  inline ThreatActor GetCreatedBy() const { return m_createdBy; }
  inline void SetCreatedBy(ThreatActor value) {
    m_createdByHasBeenSet = true;
    m_createdBy = value;
  }
  inline CreateThreatResult& WithCreatedBy(ThreatActor value) {
    SetCreatedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Who last updated this threat.</p>
   */
  inline ThreatActor GetUpdatedBy() const { return m_updatedBy; }
  inline void SetUpdatedBy(ThreatActor value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = value;
  }
  inline CreateThreatResult& WithUpdatedBy(ThreatActor value) {
    SetUpdatedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the threat was created, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateThreatResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the threat was last updated, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CreateThreatResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateThreatResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_threatId;

  Aws::String m_threatJobId;

  Aws::String m_title;

  Aws::String m_statement;

  ThreatSeverity m_severity{ThreatSeverity::NOT_SET};

  ThreatStatus m_status{ThreatStatus::NOT_SET};

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

  ThreatActor m_createdBy{ThreatActor::NOT_SET};

  ThreatActor m_updatedBy{ThreatActor::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_threatIdHasBeenSet = false;
  bool m_threatJobIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_statementHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_statusHasBeenSet = false;
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
  bool m_createdByHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
