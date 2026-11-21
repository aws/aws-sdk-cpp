/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AccessControlApplicationStatus.h>
#include <aws/quicksight/model/IdpAuthorizingConfigUpdateInput.h>
#include <aws/quicksight/model/QuickAuthenticationConfigInput.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateAccessControlApplicationRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateAccessControlApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAccessControlApplication"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the Quick Sight
   * account.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateAccessControlApplicationRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the access control application.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  UpdateAccessControlApplicationRequest& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new name of the access control application.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateAccessControlApplicationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new description of the access control application.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateAccessControlApplicationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity provider settings to update, such as the client ID and issuer
   * URL. You can't change the <code>IdpAuthorizingType</code> or the trusted token
   * issuer. To manage client secrets, use the client secret operations.</p>
   */
  inline const IdpAuthorizingConfigUpdateInput& GetIdpAuthorizingConfiguration() const { return m_idpAuthorizingConfiguration; }
  inline bool IdpAuthorizingConfigurationHasBeenSet() const { return m_idpAuthorizingConfigurationHasBeenSet; }
  template <typename IdpAuthorizingConfigurationT = IdpAuthorizingConfigUpdateInput>
  void SetIdpAuthorizingConfiguration(IdpAuthorizingConfigurationT&& value) {
    m_idpAuthorizingConfigurationHasBeenSet = true;
    m_idpAuthorizingConfiguration = std::forward<IdpAuthorizingConfigurationT>(value);
  }
  template <typename IdpAuthorizingConfigurationT = IdpAuthorizingConfigUpdateInput>
  UpdateAccessControlApplicationRequest& WithIdpAuthorizingConfiguration(IdpAuthorizingConfigurationT&& value) {
    SetIdpAuthorizingConfiguration(std::forward<IdpAuthorizingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Quick Sight authentication settings to update, such as redirect URIs. You
   * can't change the <code>QuickAuthenticationType</code>.</p>
   */
  inline const QuickAuthenticationConfigInput& GetQuickAuthenticationConfiguration() const { return m_quickAuthenticationConfiguration; }
  inline bool QuickAuthenticationConfigurationHasBeenSet() const { return m_quickAuthenticationConfigurationHasBeenSet; }
  template <typename QuickAuthenticationConfigurationT = QuickAuthenticationConfigInput>
  void SetQuickAuthenticationConfiguration(QuickAuthenticationConfigurationT&& value) {
    m_quickAuthenticationConfigurationHasBeenSet = true;
    m_quickAuthenticationConfiguration = std::forward<QuickAuthenticationConfigurationT>(value);
  }
  template <typename QuickAuthenticationConfigurationT = QuickAuthenticationConfigInput>
  UpdateAccessControlApplicationRequest& WithQuickAuthenticationConfiguration(QuickAuthenticationConfigurationT&& value) {
    SetQuickAuthenticationConfiguration(std::forward<QuickAuthenticationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new status of the access control application.</p>
   */
  inline AccessControlApplicationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AccessControlApplicationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateAccessControlApplicationRequest& WithStatus(AccessControlApplicationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_applicationId;

  Aws::String m_name;

  Aws::String m_description;

  IdpAuthorizingConfigUpdateInput m_idpAuthorizingConfiguration;

  QuickAuthenticationConfigInput m_quickAuthenticationConfiguration;

  AccessControlApplicationStatus m_status{AccessControlApplicationStatus::NOT_SET};
  bool m_awsAccountIdHasBeenSet = false;
  bool m_applicationIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_idpAuthorizingConfigurationHasBeenSet = false;
  bool m_quickAuthenticationConfigurationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
