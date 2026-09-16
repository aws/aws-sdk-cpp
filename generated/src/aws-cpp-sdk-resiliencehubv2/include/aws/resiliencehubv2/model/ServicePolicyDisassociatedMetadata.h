/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/PolicyDisassociationReason.h>
#include <aws/resiliencehubv2/model/PolicyValueSource.h>

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
 * <p>Metadata for a service policy disassociated event.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ServicePolicyDisassociatedMetadata">AWS
 * API Reference</a></p>
 */
class ServicePolicyDisassociatedMetadata {
 public:
  AWS_RESILIENCEHUBV2_API ServicePolicyDisassociatedMetadata() = default;
  AWS_RESILIENCEHUBV2_API ServicePolicyDisassociatedMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ServicePolicyDisassociatedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the disassociated policy.</p>
   */
  inline const Aws::String& GetPolicyName() const { return m_policyName; }
  inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
  template <typename PolicyNameT = Aws::String>
  void SetPolicyName(PolicyNameT&& value) {
    m_policyNameHasBeenSet = true;
    m_policyName = std::forward<PolicyNameT>(value);
  }
  template <typename PolicyNameT = Aws::String>
  ServicePolicyDisassociatedMetadata& WithPolicyName(PolicyNameT&& value) {
    SetPolicyName(std::forward<PolicyNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  ServicePolicyDisassociatedMetadata& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account that owns the policy.</p>
   */
  inline const Aws::String& GetPolicyOwnerAccountId() const { return m_policyOwnerAccountId; }
  inline bool PolicyOwnerAccountIdHasBeenSet() const { return m_policyOwnerAccountIdHasBeenSet; }
  template <typename PolicyOwnerAccountIdT = Aws::String>
  void SetPolicyOwnerAccountId(PolicyOwnerAccountIdT&& value) {
    m_policyOwnerAccountIdHasBeenSet = true;
    m_policyOwnerAccountId = std::forward<PolicyOwnerAccountIdT>(value);
  }
  template <typename PolicyOwnerAccountIdT = Aws::String>
  ServicePolicyDisassociatedMetadata& WithPolicyOwnerAccountId(PolicyOwnerAccountIdT&& value) {
    SetPolicyOwnerAccountId(std::forward<PolicyOwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the policy.</p> <ul> <li> <p>SELF — the policy belongs to the
   * account that owns the service.</p> </li> <li> <p>CROSS_ACCOUNT — the policy
   * belongs to another account and was shared with the organization.</p> </li> </ul>
   */
  inline PolicyValueSource GetPolicySource() const { return m_policySource; }
  inline bool PolicySourceHasBeenSet() const { return m_policySourceHasBeenSet; }
  inline void SetPolicySource(PolicyValueSource value) {
    m_policySourceHasBeenSet = true;
    m_policySource = value;
  }
  inline ServicePolicyDisassociatedMetadata& WithPolicySource(PolicyValueSource value) {
    SetPolicySource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the policy was disassociated from the service.</p>
   */
  inline PolicyDisassociationReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(PolicyDisassociationReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline ServicePolicyDisassociatedMetadata& WithReason(PolicyDisassociationReason value) {
    SetReason(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyName;

  Aws::String m_policyArn;

  Aws::String m_policyOwnerAccountId;

  PolicyValueSource m_policySource{PolicyValueSource::NOT_SET};

  PolicyDisassociationReason m_reason{PolicyDisassociationReason::NOT_SET};
  bool m_policyNameHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_policyOwnerAccountIdHasBeenSet = false;
  bool m_policySourceHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
