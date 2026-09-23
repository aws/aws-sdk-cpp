/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/WafConfig.h>

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
 * <p>Configuration settings that control a policy's behavior.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/PolicyConfiguration">AWS
 * API Reference</a></p>
 */
class PolicyConfiguration {
 public:
  AWS_NETWORKSECURITYMANAGER_API PolicyConfiguration() = default;
  AWS_NETWORKSECURITYMANAGER_API PolicyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API PolicyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether AWS Network Security Manager automatically remediates
   * noncompliant resources. Default: <code>false</code>.</p>
   */
  inline bool GetRemediationEnabled() const { return m_remediationEnabled; }
  inline bool RemediationEnabledHasBeenSet() const { return m_remediationEnabledHasBeenSet; }
  inline void SetRemediationEnabled(bool value) {
    m_remediationEnabledHasBeenSet = true;
    m_remediationEnabled = value;
  }
  inline PolicyConfiguration& WithRemediationEnabled(bool value) {
    SetRemediationEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether AWS Network Security Manager automatically removes the
   * resources it created when they are no longer needed. Default:
   * <code>false</code>.</p>
   */
  inline bool GetResourcesCleanUp() const { return m_resourcesCleanUp; }
  inline bool ResourcesCleanUpHasBeenSet() const { return m_resourcesCleanUpHasBeenSet; }
  inline void SetResourcesCleanUp(bool value) {
    m_resourcesCleanUpHasBeenSet = true;
    m_resourcesCleanUp = value;
  }
  inline PolicyConfiguration& WithResourcesCleanUp(bool value) {
    SetResourcesCleanUp(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS WAF-specific policy settings. This is populated only for AWS WAF
   * policies.</p>
   */
  inline const WafConfig& GetWafConfig() const { return m_wafConfig; }
  inline bool WafConfigHasBeenSet() const { return m_wafConfigHasBeenSet; }
  template <typename WafConfigT = WafConfig>
  void SetWafConfig(WafConfigT&& value) {
    m_wafConfigHasBeenSet = true;
    m_wafConfig = std::forward<WafConfigT>(value);
  }
  template <typename WafConfigT = WafConfig>
  PolicyConfiguration& WithWafConfig(WafConfigT&& value) {
    SetWafConfig(std::forward<WafConfigT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_remediationEnabled{false};

  bool m_resourcesCleanUp{false};

  WafConfig m_wafConfig;
  bool m_remediationEnabledHasBeenSet = false;
  bool m_resourcesCleanUpHasBeenSet = false;
  bool m_wafConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
