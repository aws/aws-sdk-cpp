/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/TargetDomainStatus.h>
#include <aws/securityagent/model/VerificationDetails.h>

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
 * <p>Represents a target domain</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/TargetDomain">AWS
 * API Reference</a></p>
 */
class TargetDomain {
 public:
  AWS_SECURITYAGENT_API TargetDomain() = default;
  AWS_SECURITYAGENT_API TargetDomain(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API TargetDomain& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier of the target domain</p>
   */
  inline const Aws::String& GetTargetDomainId() const { return m_targetDomainId; }
  inline bool TargetDomainIdHasBeenSet() const { return m_targetDomainIdHasBeenSet; }
  template <typename TargetDomainIdT = Aws::String>
  void SetTargetDomainId(TargetDomainIdT&& value) {
    m_targetDomainIdHasBeenSet = true;
    m_targetDomainId = std::forward<TargetDomainIdT>(value);
  }
  template <typename TargetDomainIdT = Aws::String>
  TargetDomain& WithTargetDomainId(TargetDomainIdT&& value) {
    SetTargetDomainId(std::forward<TargetDomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the registered target domain</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  TargetDomain& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current verification status of the registered target domain</p>
   */
  inline TargetDomainStatus GetVerificationStatus() const { return m_verificationStatus; }
  inline bool VerificationStatusHasBeenSet() const { return m_verificationStatusHasBeenSet; }
  inline void SetVerificationStatus(TargetDomainStatus value) {
    m_verificationStatusHasBeenSet = true;
    m_verificationStatus = value;
  }
  inline TargetDomain& WithVerificationStatus(TargetDomainStatus value) {
    SetVerificationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Verification details to verify registered target domain</p>
   */
  inline const VerificationDetails& GetVerificationDetails() const { return m_verificationDetails; }
  inline bool VerificationDetailsHasBeenSet() const { return m_verificationDetailsHasBeenSet; }
  template <typename VerificationDetailsT = VerificationDetails>
  void SetVerificationDetails(VerificationDetailsT&& value) {
    m_verificationDetailsHasBeenSet = true;
    m_verificationDetails = std::forward<VerificationDetailsT>(value);
  }
  template <typename VerificationDetailsT = VerificationDetails>
  TargetDomain& WithVerificationDetails(VerificationDetailsT&& value) {
    SetVerificationDetails(std::forward<VerificationDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the target domain was registered</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  TargetDomain& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the target domain was last successfully verified</p>
   */
  inline const Aws::Utils::DateTime& GetVerifiedAt() const { return m_verifiedAt; }
  inline bool VerifiedAtHasBeenSet() const { return m_verifiedAtHasBeenSet; }
  template <typename VerifiedAtT = Aws::Utils::DateTime>
  void SetVerifiedAt(VerifiedAtT&& value) {
    m_verifiedAtHasBeenSet = true;
    m_verifiedAt = std::forward<VerifiedAtT>(value);
  }
  template <typename VerifiedAtT = Aws::Utils::DateTime>
  TargetDomain& WithVerifiedAt(VerifiedAtT&& value) {
    SetVerifiedAt(std::forward<VerifiedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetDomainId;

  Aws::String m_domainName;

  TargetDomainStatus m_verificationStatus{TargetDomainStatus::NOT_SET};

  VerificationDetails m_verificationDetails;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_verifiedAt{};
  bool m_targetDomainIdHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
  bool m_verificationStatusHasBeenSet = false;
  bool m_verificationDetailsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_verifiedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
