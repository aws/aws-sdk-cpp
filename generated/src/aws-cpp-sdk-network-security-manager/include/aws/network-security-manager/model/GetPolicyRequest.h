/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManagerRequest.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

/**
 */
class GetPolicyRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API GetPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetPolicy"; }

  AWS_NETWORKSECURITYMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the policy. This is the policy's Amazon Resource Name
   * (ARN).</p>
   */
  inline const Aws::String& GetPolicyIdentifier() const { return m_policyIdentifier; }
  inline bool PolicyIdentifierHasBeenSet() const { return m_policyIdentifierHasBeenSet; }
  template <typename PolicyIdentifierT = Aws::String>
  void SetPolicyIdentifier(PolicyIdentifierT&& value) {
    m_policyIdentifierHasBeenSet = true;
    m_policyIdentifier = std::forward<PolicyIdentifierT>(value);
  }
  template <typename PolicyIdentifierT = Aws::String>
  GetPolicyRequest& WithPolicyIdentifier(PolicyIdentifierT&& value) {
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
