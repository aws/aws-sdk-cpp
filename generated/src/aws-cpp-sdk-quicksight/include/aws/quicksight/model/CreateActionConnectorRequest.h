/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ActionConnectorType.h>
#include <aws/quicksight/model/AuthConfig.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <aws/quicksight/model/Tag.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class CreateActionConnectorRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API CreateActionConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateActionConnector"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Web Services account ID associated with the action connector.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  CreateActionConnectorRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the action connector. This ID must be unique within
   * the Amazon Web Services account. The <code>ActionConnectorId</code> must not
   * start with the prefix <code>quicksuite-</code> </p>
   */
  inline const Aws::String& GetActionConnectorId() const { return m_actionConnectorId; }
  inline bool ActionConnectorIdHasBeenSet() const { return m_actionConnectorIdHasBeenSet; }
  template <typename ActionConnectorIdT = Aws::String>
  void SetActionConnectorId(ActionConnectorIdT&& value) {
    m_actionConnectorIdHasBeenSet = true;
    m_actionConnectorId = std::forward<ActionConnectorIdT>(value);
  }
  template <typename ActionConnectorIdT = Aws::String>
  CreateActionConnectorRequest& WithActionConnectorId(ActionConnectorIdT&& value) {
    SetActionConnectorId(std::forward<ActionConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive name for the action connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateActionConnectorRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of action connector.</p>
   */
  inline ActionConnectorType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ActionConnectorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreateActionConnectorRequest& WithType(ActionConnectorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication configuration for connecting to the external service. This
   * includes the authentication type, base URL, and authentication metadata such as
   * client credentials or API keys.</p>
   */
  inline const AuthConfig& GetAuthenticationConfig() const { return m_authenticationConfig; }
  inline bool AuthenticationConfigHasBeenSet() const { return m_authenticationConfigHasBeenSet; }
  template <typename AuthenticationConfigT = AuthConfig>
  void SetAuthenticationConfig(AuthenticationConfigT&& value) {
    m_authenticationConfigHasBeenSet = true;
    m_authenticationConfig = std::forward<AuthenticationConfigT>(value);
  }
  template <typename AuthenticationConfigT = AuthConfig>
  CreateActionConnectorRequest& WithAuthenticationConfig(AuthenticationConfigT&& value) {
    SetAuthenticationConfig(std::forward<AuthenticationConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description of the action connector.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateActionConnectorRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permissions configuration that defines which users, groups, or namespaces
   * can access this action connector and what operations they can perform.</p>
   */
  inline const Aws::Vector<ResourcePermission>& GetPermissions() const { return m_permissions; }
  inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
  template <typename PermissionsT = Aws::Vector<ResourcePermission>>
  void SetPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions = std::forward<PermissionsT>(value);
  }
  template <typename PermissionsT = Aws::Vector<ResourcePermission>>
  CreateActionConnectorRequest& WithPermissions(PermissionsT&& value) {
    SetPermissions(std::forward<PermissionsT>(value));
    return *this;
  }
  template <typename PermissionsT = ResourcePermission>
  CreateActionConnectorRequest& AddPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions.emplace_back(std::forward<PermissionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the VPC connection to use for secure connectivity to the external
   * service.</p>
   */
  inline const Aws::String& GetVpcConnectionArn() const { return m_vpcConnectionArn; }
  inline bool VpcConnectionArnHasBeenSet() const { return m_vpcConnectionArnHasBeenSet; }
  template <typename VpcConnectionArnT = Aws::String>
  void SetVpcConnectionArn(VpcConnectionArnT&& value) {
    m_vpcConnectionArnHasBeenSet = true;
    m_vpcConnectionArn = std::forward<VpcConnectionArnT>(value);
  }
  template <typename VpcConnectionArnT = Aws::String>
  CreateActionConnectorRequest& WithVpcConnectionArn(VpcConnectionArnT&& value) {
    SetVpcConnectionArn(std::forward<VpcConnectionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of tags to apply to the action connector for resource management and
   * organization.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateActionConnectorRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateActionConnectorRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_actionConnectorId;

  Aws::String m_name;

  ActionConnectorType m_type{ActionConnectorType::NOT_SET};

  AuthConfig m_authenticationConfig;

  Aws::String m_description;

  Aws::Vector<ResourcePermission> m_permissions;

  Aws::String m_vpcConnectionArn;

  Aws::Vector<Tag> m_tags;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_actionConnectorIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_authenticationConfigHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_permissionsHasBeenSet = false;
  bool m_vpcConnectionArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
