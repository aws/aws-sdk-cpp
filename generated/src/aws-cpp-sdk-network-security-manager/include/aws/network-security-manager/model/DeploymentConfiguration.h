/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

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
 * <p>Configuration settings that control a deployment's behavior.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/DeploymentConfiguration">AWS
 * API Reference</a></p>
 */
class DeploymentConfiguration {
 public:
  AWS_NETWORKSECURITYMANAGER_API DeploymentConfiguration() = default;
  AWS_NETWORKSECURITYMANAGER_API DeploymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API DeploymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether aggregate synchronization status details for the resources
   * covered by this deployment are visible across accounts. Default:
   * <code>false</code>.</p>
   */
  inline bool GetEnableCrossAccountVisibility() const { return m_enableCrossAccountVisibility; }
  inline bool EnableCrossAccountVisibilityHasBeenSet() const { return m_enableCrossAccountVisibilityHasBeenSet; }
  inline void SetEnableCrossAccountVisibility(bool value) {
    m_enableCrossAccountVisibilityHasBeenSet = true;
    m_enableCrossAccountVisibility = value;
  }
  inline DeploymentConfiguration& WithEnableCrossAccountVisibility(bool value) {
    SetEnableCrossAccountVisibility(value);
    return *this;
  }
  ///@}
 private:
  bool m_enableCrossAccountVisibility{false};
  bool m_enableCrossAccountVisibilityHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
