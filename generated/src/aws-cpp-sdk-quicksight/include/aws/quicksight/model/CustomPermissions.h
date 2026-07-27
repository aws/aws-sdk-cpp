/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Capabilities.h>
#include <aws/quicksight/model/Governance.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The custom permissions profile.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomPermissions">AWS
 * API Reference</a></p>
 */
class CustomPermissions {
 public:
  AWS_QUICKSIGHT_API CustomPermissions() = default;
  AWS_QUICKSIGHT_API CustomPermissions(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API CustomPermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the custom permissions profile.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CustomPermissions& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the custom permissions profile.</p>
   */
  inline const Aws::String& GetCustomPermissionsName() const { return m_customPermissionsName; }
  inline bool CustomPermissionsNameHasBeenSet() const { return m_customPermissionsNameHasBeenSet; }
  template <typename CustomPermissionsNameT = Aws::String>
  void SetCustomPermissionsName(CustomPermissionsNameT&& value) {
    m_customPermissionsNameHasBeenSet = true;
    m_customPermissionsName = std::forward<CustomPermissionsNameT>(value);
  }
  template <typename CustomPermissionsNameT = Aws::String>
  CustomPermissions& WithCustomPermissionsName(CustomPermissionsNameT&& value) {
    SetCustomPermissionsName(std::forward<CustomPermissionsNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A set of actions in the custom permissions profile.</p>
   */
  inline const Capabilities& GetCapabilities() const { return m_capabilities; }
  inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
  template <typename CapabilitiesT = Capabilities>
  void SetCapabilities(CapabilitiesT&& value) {
    m_capabilitiesHasBeenSet = true;
    m_capabilities = std::forward<CapabilitiesT>(value);
  }
  template <typename CapabilitiesT = Capabilities>
  CustomPermissions& WithCapabilities(CapabilitiesT&& value) {
    SetCapabilities(std::forward<CapabilitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The governance configuration for the custom permissions profile. When you
   * enable governance for a category, Amazon Quick denies access to any current or
   * new capability in that category unless you explicitly set that capability to
   * <code>ALLOW</code> in <code>Capabilities</code>.</p>
   */
  inline const Governance& GetGovernance() const { return m_governance; }
  inline bool GovernanceHasBeenSet() const { return m_governanceHasBeenSet; }
  template <typename GovernanceT = Governance>
  void SetGovernance(GovernanceT&& value) {
    m_governanceHasBeenSet = true;
    m_governance = std::forward<GovernanceT>(value);
  }
  template <typename GovernanceT = Governance>
  CustomPermissions& WithGovernance(GovernanceT&& value) {
    SetGovernance(std::forward<GovernanceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_customPermissionsName;

  Capabilities m_capabilities;

  Governance m_governance;
  bool m_arnHasBeenSet = false;
  bool m_customPermissionsNameHasBeenSet = false;
  bool m_capabilitiesHasBeenSet = false;
  bool m_governanceHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
