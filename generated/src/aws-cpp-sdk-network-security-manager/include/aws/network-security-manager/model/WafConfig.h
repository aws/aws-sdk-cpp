/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/ExistingCustomerWebACLResolution.h>
#include <aws/network-security-manager/model/WAFConflictResolutionOptions.h>

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
 * <p>AWS WAF-specific policy configuration settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/WafConfig">AWS
 * API Reference</a></p>
 */
class WafConfig {
 public:
  AWS_NETWORKSECURITYMANAGER_API WafConfig() = default;
  AWS_NETWORKSECURITYMANAGER_API WafConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API WafConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Determines how AWS Network Security Manager handles remediation when a
   * resource already has a customer-created web ACL. Required for AWS WAF
   * policies.</p>
   */
  inline ExistingCustomerWebACLResolution GetExistingCustomerWebACLResolution() const { return m_existingCustomerWebACLResolution; }
  inline bool ExistingCustomerWebACLResolutionHasBeenSet() const { return m_existingCustomerWebACLResolutionHasBeenSet; }
  inline void SetExistingCustomerWebACLResolution(ExistingCustomerWebACLResolution value) {
    m_existingCustomerWebACLResolutionHasBeenSet = true;
    m_existingCustomerWebACLResolution = value;
  }
  inline WafConfig& WithExistingCustomerWebACLResolution(ExistingCustomerWebACLResolution value) {
    SetExistingCustomerWebACLResolution(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The conflict-resolution strategy for AWS WAF policies. Required for AWS WAF
   * policies.</p>
   */
  inline WAFConflictResolutionOptions GetConflictResolution() const { return m_conflictResolution; }
  inline bool ConflictResolutionHasBeenSet() const { return m_conflictResolutionHasBeenSet; }
  inline void SetConflictResolution(WAFConflictResolutionOptions value) {
    m_conflictResolutionHasBeenSet = true;
    m_conflictResolution = value;
  }
  inline WafConfig& WithConflictResolution(WAFConflictResolutionOptions value) {
    SetConflictResolution(value);
    return *this;
  }
  ///@}
 private:
  ExistingCustomerWebACLResolution m_existingCustomerWebACLResolution{ExistingCustomerWebACLResolution::NOT_SET};

  WAFConflictResolutionOptions m_conflictResolution{WAFConflictResolutionOptions::NOT_SET};
  bool m_existingCustomerWebACLResolutionHasBeenSet = false;
  bool m_conflictResolutionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
