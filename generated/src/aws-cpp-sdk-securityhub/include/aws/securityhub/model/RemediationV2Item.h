/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/RemediationGuidance.h>
#include <aws/securityhub/model/RemediationOutcome.h>
#include <aws/securityhub/model/RemediationPriority.h>
#include <aws/securityhub/model/RemediationResource.h>
#include <aws/securityhub/model/RemediationStatus.h>
#include <aws/securityhub/model/RemediationSummaryDetail.h>
#include <aws/securityhub/model/RemediationTrait.h>

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
 * <p>A remediation target.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RemediationV2Item">AWS
 * API Reference</a></p>
 */
class RemediationV2Item {
 public:
  AWS_SECURITYHUB_API RemediationV2Item() = default;
  AWS_SECURITYHUB_API RemediationV2Item(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API RemediationV2Item& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier (ID) of the remediation target.</p>
   */
  inline const Aws::String& GetTargetUid() const { return m_targetUid; }
  inline bool TargetUidHasBeenSet() const { return m_targetUidHasBeenSet; }
  template <typename TargetUidT = Aws::String>
  void SetTargetUid(TargetUidT&& value) {
    m_targetUidHasBeenSet = true;
    m_targetUid = std::forward<TargetUidT>(value);
  }
  template <typename TargetUidT = Aws::String>
  RemediationV2Item& WithTargetUid(TargetUidT&& value) {
    SetTargetUid(std::forward<TargetUidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The outcome of the remediation target's resolution.</p>
   */
  inline const RemediationOutcome& GetOutcome() const { return m_outcome; }
  inline bool OutcomeHasBeenSet() const { return m_outcomeHasBeenSet; }
  template <typename OutcomeT = RemediationOutcome>
  void SetOutcome(OutcomeT&& value) {
    m_outcomeHasBeenSet = true;
    m_outcome = std::forward<OutcomeT>(value);
  }
  template <typename OutcomeT = RemediationOutcome>
  RemediationV2Item& WithOutcome(OutcomeT&& value) {
    SetOutcome(std::forward<OutcomeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The remediation target's priority. Valid values are <code>Critical</code>,
   * <code>High</code>, <code>Medium</code>, and <code>Low</code>.</p>
   */
  inline RemediationPriority GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(RemediationPriority value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline RemediationV2Item& WithPriority(RemediationPriority value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the remediation target.</p>
   */
  inline const RemediationSummaryDetail& GetRemediationSummary() const { return m_remediationSummary; }
  inline bool RemediationSummaryHasBeenSet() const { return m_remediationSummaryHasBeenSet; }
  template <typename RemediationSummaryT = RemediationSummaryDetail>
  void SetRemediationSummary(RemediationSummaryT&& value) {
    m_remediationSummaryHasBeenSet = true;
    m_remediationSummary = std::forward<RemediationSummaryT>(value);
  }
  template <typename RemediationSummaryT = RemediationSummaryDetail>
  RemediationV2Item& WithRemediationSummary(RemediationSummaryT&& value) {
    SetRemediationSummary(std::forward<RemediationSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The remediation target's associated resource.</p>
   */
  inline const RemediationResource& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = RemediationResource>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = RemediationResource>
  RemediationV2Item& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the remediation target.</p> <ul> <li> <p>
   * <code>New</code> specifies that the remediation target was newly identified.</p>
   * </li> <li> <p> <code>Updated</code> specifies that the remediation target
   * changed after it was identified.</p> </li> <li> <p> <code>Resolved</code>
   * specifies that the remediation target is no longer present.</p> </li> </ul>
   */
  inline RemediationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RemediationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RemediationV2Item& WithStatus(RemediationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trait associated with the remediation target.</p>
   */
  inline const RemediationTrait& GetTrait() const { return m_trait; }
  inline bool TraitHasBeenSet() const { return m_traitHasBeenSet; }
  template <typename TraitT = RemediationTrait>
  void SetTrait(TraitT&& value) {
    m_traitHasBeenSet = true;
    m_trait = std::forward<TraitT>(value);
  }
  template <typename TraitT = RemediationTrait>
  RemediationV2Item& WithTrait(TraitT&& value) {
    SetTrait(std::forward<TraitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The remediation target's guidance. Returned only when
   * <code>ShowGuidance</code> is <code>true</code> in the request.</p>
   */
  inline const RemediationGuidance& GetGuidance() const { return m_guidance; }
  inline bool GuidanceHasBeenSet() const { return m_guidanceHasBeenSet; }
  template <typename GuidanceT = RemediationGuidance>
  void SetGuidance(GuidanceT&& value) {
    m_guidanceHasBeenSet = true;
    m_guidance = std::forward<GuidanceT>(value);
  }
  template <typename GuidanceT = RemediationGuidance>
  RemediationV2Item& WithGuidance(GuidanceT&& value) {
    SetGuidance(std::forward<GuidanceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The remediation target's last updated timestamp.</p> <p>For more information
   * about the validation and formatting of timestamp fields in Security Hub CSPM,
   * see <a
   * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  RemediationV2Item& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetUid;

  RemediationOutcome m_outcome;

  RemediationPriority m_priority{RemediationPriority::NOT_SET};

  RemediationSummaryDetail m_remediationSummary;

  RemediationResource m_resource;

  RemediationStatus m_status{RemediationStatus::NOT_SET};

  RemediationTrait m_trait;

  RemediationGuidance m_guidance;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_targetUidHasBeenSet = false;
  bool m_outcomeHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_remediationSummaryHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_traitHasBeenSet = false;
  bool m_guidanceHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
