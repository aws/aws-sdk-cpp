/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/PolicyAttachedToServiceMetadata.h>
#include <aws/resiliencehubv2/model/PolicyDeletedMetadata.h>
#include <aws/resiliencehubv2/model/PolicyDetachedFromServiceMetadata.h>
#include <aws/resiliencehubv2/model/PolicySharingRevokedMetadata.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Contains the event-specific metadata for a policy event. Exactly one member
 * is populated, according to the event type.</p> <ul> <li>
 * <p>policyAttachedToService — a service started using the policy.</p> </li> <li>
 * <p>policyDetachedFromService — a service stopped using the policy.</p> </li>
 * <li> <p>policySharingRevoked — cross-account sharing was disabled for the
 * policy.</p> </li> <li> <p>policyDeleted — the policy was deleted.</p> </li>
 * </ul><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/PolicyEventMetadata">AWS
 * API Reference</a></p>
 */
class PolicyEventMetadata {
 public:
  AWS_RESILIENCEHUBV2_API PolicyEventMetadata() = default;
  AWS_RESILIENCEHUBV2_API PolicyEventMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API PolicyEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Contains details about the service that started using the policy, such as the
   * account that owns the service.</p>
   */
  inline const PolicyAttachedToServiceMetadata& GetPolicyAttachedToService() const { return m_policyAttachedToService; }
  inline bool PolicyAttachedToServiceHasBeenSet() const { return m_policyAttachedToServiceHasBeenSet; }
  template <typename PolicyAttachedToServiceT = PolicyAttachedToServiceMetadata>
  void SetPolicyAttachedToService(PolicyAttachedToServiceT&& value) {
    m_policyAttachedToServiceHasBeenSet = true;
    m_policyAttachedToService = std::forward<PolicyAttachedToServiceT>(value);
  }
  template <typename PolicyAttachedToServiceT = PolicyAttachedToServiceMetadata>
  PolicyEventMetadata& WithPolicyAttachedToService(PolicyAttachedToServiceT&& value) {
    SetPolicyAttachedToService(std::forward<PolicyAttachedToServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains details about the service that stopped using the policy, such as the
   * account that owns the service.</p>
   */
  inline const PolicyDetachedFromServiceMetadata& GetPolicyDetachedFromService() const { return m_policyDetachedFromService; }
  inline bool PolicyDetachedFromServiceHasBeenSet() const { return m_policyDetachedFromServiceHasBeenSet; }
  template <typename PolicyDetachedFromServiceT = PolicyDetachedFromServiceMetadata>
  void SetPolicyDetachedFromService(PolicyDetachedFromServiceT&& value) {
    m_policyDetachedFromServiceHasBeenSet = true;
    m_policyDetachedFromService = std::forward<PolicyDetachedFromServiceT>(value);
  }
  template <typename PolicyDetachedFromServiceT = PolicyDetachedFromServiceMetadata>
  PolicyEventMetadata& WithPolicyDetachedFromService(PolicyDetachedFromServiceT&& value) {
    SetPolicyDetachedFromService(std::forward<PolicyDetachedFromServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains details about a policy for which organization sharing was revoked,
   * including the number of services that were affected.</p>
   */
  inline const PolicySharingRevokedMetadata& GetPolicySharingRevoked() const { return m_policySharingRevoked; }
  inline bool PolicySharingRevokedHasBeenSet() const { return m_policySharingRevokedHasBeenSet; }
  template <typename PolicySharingRevokedT = PolicySharingRevokedMetadata>
  void SetPolicySharingRevoked(PolicySharingRevokedT&& value) {
    m_policySharingRevokedHasBeenSet = true;
    m_policySharingRevoked = std::forward<PolicySharingRevokedT>(value);
  }
  template <typename PolicySharingRevokedT = PolicySharingRevokedMetadata>
  PolicyEventMetadata& WithPolicySharingRevoked(PolicySharingRevokedT&& value) {
    SetPolicySharingRevoked(std::forward<PolicySharingRevokedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains details about a policy that was deleted, including the number of
   * services that were affected.</p>
   */
  inline const PolicyDeletedMetadata& GetPolicyDeleted() const { return m_policyDeleted; }
  inline bool PolicyDeletedHasBeenSet() const { return m_policyDeletedHasBeenSet; }
  template <typename PolicyDeletedT = PolicyDeletedMetadata>
  void SetPolicyDeleted(PolicyDeletedT&& value) {
    m_policyDeletedHasBeenSet = true;
    m_policyDeleted = std::forward<PolicyDeletedT>(value);
  }
  template <typename PolicyDeletedT = PolicyDeletedMetadata>
  PolicyEventMetadata& WithPolicyDeleted(PolicyDeletedT&& value) {
    SetPolicyDeleted(std::forward<PolicyDeletedT>(value));
    return *this;
  }
  ///@}
 private:
  PolicyAttachedToServiceMetadata m_policyAttachedToService;

  PolicyDetachedFromServiceMetadata m_policyDetachedFromService;

  PolicySharingRevokedMetadata m_policySharingRevoked;

  PolicyDeletedMetadata m_policyDeleted;
  bool m_policyAttachedToServiceHasBeenSet = false;
  bool m_policyDetachedFromServiceHasBeenSet = false;
  bool m_policySharingRevokedHasBeenSet = false;
  bool m_policyDeletedHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
