/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {

/**
 * <p>A reference to a policy in a create or update request.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/PolicyReference">AWS
 * API Reference</a></p>
 */
class PolicyReference {
 public:
  AWS_NETWORKSECURITYMANAGER_API PolicyReference() = default;
  AWS_NETWORKSECURITYMANAGER_API PolicyReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API PolicyReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the policy. This is the policy's Amazon Resource Name
   * (ARN), optionally version-qualified to pin a specific published version.</p>
   */
  inline const Aws::String& GetPolicyIdentifier() const { return m_policyIdentifier; }
  inline bool PolicyIdentifierHasBeenSet() const { return m_policyIdentifierHasBeenSet; }
  template <typename PolicyIdentifierT = Aws::String>
  void SetPolicyIdentifier(PolicyIdentifierT&& value) {
    m_policyIdentifierHasBeenSet = true;
    m_policyIdentifier = std::forward<PolicyIdentifierT>(value);
  }
  template <typename PolicyIdentifierT = Aws::String>
  PolicyReference& WithPolicyIdentifier(PolicyIdentifierT&& value) {
    SetPolicyIdentifier(std::forward<PolicyIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyIdentifier;
  bool m_policyIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
