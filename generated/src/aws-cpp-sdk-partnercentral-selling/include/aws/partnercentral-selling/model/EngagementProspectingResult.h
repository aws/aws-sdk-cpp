/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ProspectingTaskStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Contains the result of processing a single engagement within a prospecting
 * task. Each engagement is processed independently, so individual engagements can
 * succeed or fail regardless of other engagements in the same task.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementProspectingResult">AWS
 * API Reference</a></p>
 */
class EngagementProspectingResult {
 public:
  AWS_PARTNERCENTRALSELLING_API EngagementProspectingResult() = default;
  AWS_PARTNERCENTRALSELLING_API EngagementProspectingResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API EngagementProspectingResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the engagement that was processed.</p>
   */
  inline const Aws::String& GetEngagementIdentifier() const { return m_engagementIdentifier; }
  inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
  template <typename EngagementIdentifierT = Aws::String>
  void SetEngagementIdentifier(EngagementIdentifierT&& value) {
    m_engagementIdentifierHasBeenSet = true;
    m_engagementIdentifier = std::forward<EngagementIdentifierT>(value);
  }
  template <typename EngagementIdentifierT = Aws::String>
  EngagementProspectingResult& WithEngagementIdentifier(EngagementIdentifierT&& value) {
    SetEngagementIdentifier(std::forward<EngagementIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the prospecting context created for this engagement. This
   * field is only populated when the engagement was processed successfully (status
   * is <code>COMPLETED</code>). Use this identifier to reference the prospecting
   * context in subsequent operations.</p>
   */
  inline const Aws::String& GetEngagementContextId() const { return m_engagementContextId; }
  inline bool EngagementContextIdHasBeenSet() const { return m_engagementContextIdHasBeenSet; }
  template <typename EngagementContextIdT = Aws::String>
  void SetEngagementContextId(EngagementContextIdT&& value) {
    m_engagementContextIdHasBeenSet = true;
    m_engagementContextId = std::forward<EngagementContextIdT>(value);
  }
  template <typename EngagementContextIdT = Aws::String>
  EngagementProspectingResult& WithEngagementContextId(EngagementContextIdT&& value) {
    SetEngagementContextId(std::forward<EngagementContextIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The processing status of this specific engagement. Possible values are
   * <code>PENDING</code>, <code>IN_PROGRESS</code>, <code>COMPLETED</code>, and
   * <code>FAILED</code>.</p>
   */
  inline ProspectingTaskStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ProspectingTaskStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EngagementProspectingResult& WithStatus(ProspectingTaskStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An enumerated code indicating the reason this engagement failed to process.
   * This field is only populated when <code>Status</code> is
   * <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetReasonCode() const { return m_reasonCode; }
  inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
  template <typename ReasonCodeT = Aws::String>
  void SetReasonCode(ReasonCodeT&& value) {
    m_reasonCodeHasBeenSet = true;
    m_reasonCode = std::forward<ReasonCodeT>(value);
  }
  template <typename ReasonCodeT = Aws::String>
  EngagementProspectingResult& WithReasonCode(ReasonCodeT&& value) {
    SetReasonCode(std::forward<ReasonCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the failure for this engagement, including
   * suggested recovery steps. This field is only populated when <code>Status</code>
   * is <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  EngagementProspectingResult& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_engagementIdentifier;

  Aws::String m_engagementContextId;

  ProspectingTaskStatus m_status{ProspectingTaskStatus::NOT_SET};

  Aws::String m_reasonCode;

  Aws::String m_message;
  bool m_engagementIdentifierHasBeenSet = false;
  bool m_engagementContextIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_reasonCodeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
