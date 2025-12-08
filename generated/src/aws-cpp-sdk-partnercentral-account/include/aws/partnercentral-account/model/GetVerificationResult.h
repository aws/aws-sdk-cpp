/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/VerificationResponseDetails.h>
#include <aws/partnercentral-account/model/VerificationStatus.h>
#include <aws/partnercentral-account/model/VerificationType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {
class GetVerificationResult {
 public:
  AWS_PARTNERCENTRALACCOUNT_API GetVerificationResult() = default;
  AWS_PARTNERCENTRALACCOUNT_API GetVerificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALACCOUNT_API GetVerificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The type of verification that was requested and processed.</p>
   */
  inline VerificationType GetVerificationType() const { return m_verificationType; }
  inline void SetVerificationType(VerificationType value) {
    m_verificationTypeHasBeenSet = true;
    m_verificationType = value;
  }
  inline GetVerificationResult& WithVerificationType(VerificationType value) {
    SetVerificationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the verification process. Possible values include
   * pending, in-progress, completed, failed, or expired.</p>
   */
  inline VerificationStatus GetVerificationStatus() const { return m_verificationStatus; }
  inline void SetVerificationStatus(VerificationStatus value) {
    m_verificationStatusHasBeenSet = true;
    m_verificationStatus = value;
  }
  inline GetVerificationResult& WithVerificationStatus(VerificationStatus value) {
    SetVerificationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information explaining the current verification status,
   * particularly useful when the status indicates a failure or requires additional
   * action.</p>
   */
  inline const Aws::String& GetVerificationStatusReason() const { return m_verificationStatusReason; }
  template <typename VerificationStatusReasonT = Aws::String>
  void SetVerificationStatusReason(VerificationStatusReasonT&& value) {
    m_verificationStatusReasonHasBeenSet = true;
    m_verificationStatusReason = std::forward<VerificationStatusReasonT>(value);
  }
  template <typename VerificationStatusReasonT = Aws::String>
  GetVerificationResult& WithVerificationStatusReason(VerificationStatusReasonT&& value) {
    SetVerificationStatusReason(std::forward<VerificationStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed response information specific to the type of verification performed,
   * including any verification-specific data or results.</p>
   */
  inline const VerificationResponseDetails& GetVerificationResponseDetails() const { return m_verificationResponseDetails; }
  template <typename VerificationResponseDetailsT = VerificationResponseDetails>
  void SetVerificationResponseDetails(VerificationResponseDetailsT&& value) {
    m_verificationResponseDetailsHasBeenSet = true;
    m_verificationResponseDetails = std::forward<VerificationResponseDetailsT>(value);
  }
  template <typename VerificationResponseDetailsT = VerificationResponseDetails>
  GetVerificationResult& WithVerificationResponseDetails(VerificationResponseDetailsT&& value) {
    SetVerificationResponseDetails(std::forward<VerificationResponseDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the verification process was initiated.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  GetVerificationResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the verification process was completed. This field is null
   * if the verification is still in progress.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  GetVerificationResult& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
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
  GetVerificationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  VerificationType m_verificationType{VerificationType::NOT_SET};

  VerificationStatus m_verificationStatus{VerificationStatus::NOT_SET};

  Aws::String m_verificationStatusReason;

  VerificationResponseDetails m_verificationResponseDetails;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_completedAt{};

  Aws::String m_requestId;
  bool m_verificationTypeHasBeenSet = false;
  bool m_verificationStatusHasBeenSet = false;
  bool m_verificationStatusReasonHasBeenSet = false;
  bool m_verificationResponseDetailsHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
