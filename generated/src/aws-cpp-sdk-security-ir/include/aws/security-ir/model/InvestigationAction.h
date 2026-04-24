/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/model/ActionType.h>
#include <aws/security-ir/model/ExecutionStatus.h>
#include <aws/security-ir/model/InvestigationFeedback.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityIR {
namespace Model {

/**
 * <p>Represents an investigation action performed within a case. This structure
 * captures the details of an automated or manual investigation, including its
 * status, results, and user feedback.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/InvestigationAction">AWS
 * API Reference</a></p>
 */
class InvestigationAction {
 public:
  AWS_SECURITYIR_API InvestigationAction() = default;
  AWS_SECURITYIR_API InvestigationAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYIR_API InvestigationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for this investigation action. This ID is used to track
   * and reference the specific investigation throughout its lifecycle.</p>
   */
  inline const Aws::String& GetInvestigationId() const { return m_investigationId; }
  inline bool InvestigationIdHasBeenSet() const { return m_investigationIdHasBeenSet; }
  template <typename InvestigationIdT = Aws::String>
  void SetInvestigationId(InvestigationIdT&& value) {
    m_investigationIdHasBeenSet = true;
    m_investigationId = std::forward<InvestigationIdT>(value);
  }
  template <typename InvestigationIdT = Aws::String>
  InvestigationAction& WithInvestigationId(InvestigationIdT&& value) {
    SetInvestigationId(std::forward<InvestigationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of investigation action being performed. This categorizes the
   * investigation method or approach used in the case.</p>
   */
  inline ActionType GetActionType() const { return m_actionType; }
  inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
  inline void SetActionType(ActionType value) {
    m_actionTypeHasBeenSet = true;
    m_actionType = value;
  }
  inline InvestigationAction& WithActionType(ActionType value) {
    SetActionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable summary of the investigation focus. This provides a brief
   * description of what the investigation is examining or analyzing.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  InvestigationAction& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed investigation results in rich markdown format. This field contains
   * the comprehensive findings, analysis, and conclusions from the
   * investigation.</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  InvestigationAction& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current execution status of the investigation. This indicates whether the
   * investigation is pending, in progress, completed, or failed.</p>
   */
  inline ExecutionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExecutionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline InvestigationAction& WithStatus(ExecutionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ISO 8601 timestamp of the most recent status update. This indicates when the
   * investigation was last modified or when its status last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
  inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
  template <typename LastUpdatedT = Aws::Utils::DateTime>
  void SetLastUpdated(LastUpdatedT&& value) {
    m_lastUpdatedHasBeenSet = true;
    m_lastUpdated = std::forward<LastUpdatedT>(value);
  }
  template <typename LastUpdatedT = Aws::Utils::DateTime>
  InvestigationAction& WithLastUpdated(LastUpdatedT&& value) {
    SetLastUpdated(std::forward<LastUpdatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>User feedback for this investigation result. This contains the user's
   * assessment and comments about the quality and usefulness of the investigation
   * findings.</p>
   */
  inline const InvestigationFeedback& GetFeedback() const { return m_feedback; }
  inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }
  template <typename FeedbackT = InvestigationFeedback>
  void SetFeedback(FeedbackT&& value) {
    m_feedbackHasBeenSet = true;
    m_feedback = std::forward<FeedbackT>(value);
  }
  template <typename FeedbackT = InvestigationFeedback>
  InvestigationAction& WithFeedback(FeedbackT&& value) {
    SetFeedback(std::forward<FeedbackT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_investigationId;

  ActionType m_actionType{ActionType::NOT_SET};

  Aws::String m_title;

  Aws::String m_content;

  ExecutionStatus m_status{ExecutionStatus::NOT_SET};

  Aws::Utils::DateTime m_lastUpdated{};

  InvestigationFeedback m_feedback;
  bool m_investigationIdHasBeenSet = false;
  bool m_actionTypeHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastUpdatedHasBeenSet = false;
  bool m_feedbackHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
