/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/TargetDomainStatus.h>

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
 * <p>Summary information for a target domain</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/TargetDomainSummary">AWS
 * API Reference</a></p>
 */
class TargetDomainSummary {
 public:
  AWS_SECURITYAGENT_API TargetDomainSummary() = default;
  AWS_SECURITYAGENT_API TargetDomainSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API TargetDomainSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  TargetDomainSummary& WithTargetDomainId(TargetDomainIdT&& value) {
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
  TargetDomainSummary& WithDomainName(DomainNameT&& value) {
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
  inline TargetDomainSummary& WithVerificationStatus(TargetDomainStatus value) {
    SetVerificationStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetDomainId;

  Aws::String m_domainName;

  TargetDomainStatus m_verificationStatus{TargetDomainStatus::NOT_SET};
  bool m_targetDomainIdHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
  bool m_verificationStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
