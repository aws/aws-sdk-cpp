/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/EncryptionConfiguration.h>
#include <aws/sso-admin/model/NetworkConfigurationInfo.h>

#include <utility>

namespace Aws {
namespace SSOAdmin {
namespace Model {

/**
 */
class UpdateInstanceRequest : public SSOAdminRequest {
 public:
  AWS_SSOADMIN_API UpdateInstanceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateInstance"; }

  AWS_SSOADMIN_API Aws::String SerializePayload() const override;

  AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Updates the instance name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateInstanceRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the instance of IAM Identity Center under which the operation will
   * run. For more information about ARNs, see <a
   * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
   * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
   * Services General Reference</i>.</p>
   */
  inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
  inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
  template <typename InstanceArnT = Aws::String>
  void SetInstanceArn(InstanceArnT&& value) {
    m_instanceArnHasBeenSet = true;
    m_instanceArn = std::forward<InstanceArnT>(value);
  }
  template <typename InstanceArnT = Aws::String>
  UpdateInstanceRequest& WithInstanceArn(InstanceArnT&& value) {
    SetInstanceArn(std::forward<InstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the encryption configuration for your IAM Identity Center instance.
   * You can use this to configure customer managed KMS keys or Amazon Web Services
   * owned KMS keys for encrypting your instance data.</p>  <p>You can't set
   * more than one of <code>EncryptionConfiguration</code>,
   * <code>PermissionSetsEnabled</code>, and <code>NetworkConfiguration</code> in the
   * same request. To configure more than one of them, make a separate
   * <code>UpdateInstance</code> call for each. These calls can be made in
   * parallel.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  UpdateInstanceRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables permission sets for this Identity Center instance. The only accepted
   * value is <code>true </code>. After permission sets are enabled, they cannot be
   * disabled.</p>
   */
  inline bool GetPermissionSetsEnabled() const { return m_permissionSetsEnabled; }
  inline bool PermissionSetsEnabledHasBeenSet() const { return m_permissionSetsEnabledHasBeenSet; }
  inline void SetPermissionSetsEnabled(bool value) {
    m_permissionSetsEnabledHasBeenSet = true;
    m_permissionSetsEnabled = value;
  }
  inline UpdateInstanceRequest& WithPermissionSetsEnabled(bool value) {
    SetPermissionSetsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the network access controls for your Identity Center instance. Use
   * this to require that access to your instance and to applications originates from
   * VPC endpoints, and to optionally restrict which VPCs are permitted, allow
   * specific IP address ranges that bypass the VPC endpoint requirement, or exempt
   * specific applications from the controls.</p> <p>If you omit
   * <code>NetworkConfiguration</code>, the stored network configuration is
   * preserved. If you specify <code>NetworkConfiguration</code>, it replaces the
   * stored network configuration in its entirety. Any list that you omit from the
   * object, or include as an empty list, is cleared.</p>
   */
  inline const NetworkConfigurationInfo& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = NetworkConfigurationInfo>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = NetworkConfigurationInfo>
  UpdateInstanceRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_instanceArn;

  EncryptionConfiguration m_encryptionConfiguration;

  bool m_permissionSetsEnabled{false};

  NetworkConfigurationInfo m_networkConfiguration;
  bool m_nameHasBeenSet = false;
  bool m_instanceArnHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_permissionSetsEnabledHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
