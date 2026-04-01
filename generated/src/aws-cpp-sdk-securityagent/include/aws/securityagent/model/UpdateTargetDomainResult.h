/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/TargetDomainStatus.h>
#include <aws/securityagent/model/VerificationDetails.h>

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
 * <p>Output for the UpdateTargetDomain operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdateTargetDomainOutput">AWS
 * API Reference</a></p>
 */
class UpdateTargetDomainResult {
 public:
  AWS_SECURITYAGENT_API UpdateTargetDomainResult() = default;
  AWS_SECURITYAGENT_API UpdateTargetDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API UpdateTargetDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Unique identifier of the target domain</p>
   */
  inline const Aws::String& GetTargetDomainId() const { return m_targetDomainId; }
  template <typename TargetDomainIdT = Aws::String>
  void SetTargetDomainId(TargetDomainIdT&& value) {
    m_targetDomainIdHasBeenSet = true;
    m_targetDomainId = std::forward<TargetDomainIdT>(value);
  }
  template <typename TargetDomainIdT = Aws::String>
  UpdateTargetDomainResult& WithTargetDomainId(TargetDomainIdT&& value) {
    SetTargetDomainId(std::forward<TargetDomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the target domain</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  UpdateTargetDomainResult& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current verification status of the registered target domain</p>
   */
  inline TargetDomainStatus GetVerificationStatus() const { return m_verificationStatus; }
  inline void SetVerificationStatus(TargetDomainStatus value) {
    m_verificationStatusHasBeenSet = true;
    m_verificationStatus = value;
  }
  inline UpdateTargetDomainResult& WithVerificationStatus(TargetDomainStatus value) {
    SetVerificationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Verification details to verify registered target domain</p>
   */
  inline const VerificationDetails& GetVerificationDetails() const { return m_verificationDetails; }
  template <typename VerificationDetailsT = VerificationDetails>
  void SetVerificationDetails(VerificationDetailsT&& value) {
    m_verificationDetailsHasBeenSet = true;
    m_verificationDetails = std::forward<VerificationDetailsT>(value);
  }
  template <typename VerificationDetailsT = VerificationDetails>
  UpdateTargetDomainResult& WithVerificationDetails(VerificationDetailsT&& value) {
    SetVerificationDetails(std::forward<VerificationDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the target domain was registered</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdateTargetDomainResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the target domain was last successfully verified</p>
   */
  inline const Aws::Utils::DateTime& GetVerifiedAt() const { return m_verifiedAt; }
  template <typename VerifiedAtT = Aws::Utils::DateTime>
  void SetVerifiedAt(VerifiedAtT&& value) {
    m_verifiedAtHasBeenSet = true;
    m_verifiedAt = std::forward<VerifiedAtT>(value);
  }
  template <typename VerifiedAtT = Aws::Utils::DateTime>
  UpdateTargetDomainResult& WithVerifiedAt(VerifiedAtT&& value) {
    SetVerifiedAt(std::forward<VerifiedAtT>(value));
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
  UpdateTargetDomainResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_targetDomainId;

  Aws::String m_domainName;

  TargetDomainStatus m_verificationStatus{TargetDomainStatus::NOT_SET};

  VerificationDetails m_verificationDetails;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_verifiedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_targetDomainIdHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
  bool m_verificationStatusHasBeenSet = false;
  bool m_verificationDetailsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_verifiedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
