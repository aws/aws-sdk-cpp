/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AuthConfig.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateActionConnectorRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateActionConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateActionConnector"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Web Services account ID that contains the action connector to
   * update.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateActionConnectorRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the action connector to update.</p>
   */
  inline const Aws::String& GetActionConnectorId() const { return m_actionConnectorId; }
  inline bool ActionConnectorIdHasBeenSet() const { return m_actionConnectorIdHasBeenSet; }
  template <typename ActionConnectorIdT = Aws::String>
  void SetActionConnectorId(ActionConnectorIdT&& value) {
    m_actionConnectorIdHasBeenSet = true;
    m_actionConnectorId = std::forward<ActionConnectorIdT>(value);
  }
  template <typename ActionConnectorIdT = Aws::String>
  UpdateActionConnectorRequest& WithActionConnectorId(ActionConnectorIdT&& value) {
    SetActionConnectorId(std::forward<ActionConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new name for the action connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateActionConnectorRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated authentication configuration for connecting to the external
   * service.</p>
   */
  inline const AuthConfig& GetAuthenticationConfig() const { return m_authenticationConfig; }
  inline bool AuthenticationConfigHasBeenSet() const { return m_authenticationConfigHasBeenSet; }
  template <typename AuthenticationConfigT = AuthConfig>
  void SetAuthenticationConfig(AuthenticationConfigT&& value) {
    m_authenticationConfigHasBeenSet = true;
    m_authenticationConfig = std::forward<AuthenticationConfigT>(value);
  }
  template <typename AuthenticationConfigT = AuthConfig>
  UpdateActionConnectorRequest& WithAuthenticationConfig(AuthenticationConfigT&& value) {
    SetAuthenticationConfig(std::forward<AuthenticationConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the action connector.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateActionConnectorRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated ARN of the VPC connection to use for secure connectivity.</p>
   */
  inline const Aws::String& GetVpcConnectionArn() const { return m_vpcConnectionArn; }
  inline bool VpcConnectionArnHasBeenSet() const { return m_vpcConnectionArnHasBeenSet; }
  template <typename VpcConnectionArnT = Aws::String>
  void SetVpcConnectionArn(VpcConnectionArnT&& value) {
    m_vpcConnectionArnHasBeenSet = true;
    m_vpcConnectionArn = std::forward<VpcConnectionArnT>(value);
  }
  template <typename VpcConnectionArnT = Aws::String>
  UpdateActionConnectorRequest& WithVpcConnectionArn(VpcConnectionArnT&& value) {
    SetVpcConnectionArn(std::forward<VpcConnectionArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_actionConnectorId;

  Aws::String m_name;

  AuthConfig m_authenticationConfig;

  Aws::String m_description;

  Aws::String m_vpcConnectionArn;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_actionConnectorIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_authenticationConfigHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_vpcConnectionArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
