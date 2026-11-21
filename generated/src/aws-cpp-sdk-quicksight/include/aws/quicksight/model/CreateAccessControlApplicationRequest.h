/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AccessControlApplicationAuthenticationType.h>
#include <aws/quicksight/model/IdpAuthorizingConfigInput.h>
#include <aws/quicksight/model/QuickAuthenticationConfigInput.h>
#include <aws/quicksight/model/Tag.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class CreateAccessControlApplicationRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API CreateAccessControlApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAccessControlApplication"; }

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
  CreateAccessControlApplicationRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID for the access control application. This ID is unique per Amazon Web
   * Services Region for each Amazon Web Services account.</p> <p>Quick Sight
   * reserves IDs that start with <code>quick-aca-</code> for the access control
   * application of the Quick Sight desktop application. To create one, the ID must
   * be <code>quick-aca-</code> followed by your Amazon Web Services account ID and
   * the namespace, separated by a hyphen. For example,
   * <code>quick-aca-111122223333-default</code>. In addition,
   * <code>QuickAuthenticationType</code> must be
   * <code>QUICK_MANAGED_PUBLIC_AUTH_CODE</code> with
   * <code>http://localhost:18080</code> as the only redirect URI, and
   * <code>IdpAuthorizingType</code> must be <code>IDC_AUTH_CODE</code> or
   * <code>QUICK_MANAGED_AUTH_CODE</code>.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  CreateAccessControlApplicationRequest& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the access control application.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateAccessControlApplicationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the access control application.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateAccessControlApplicationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Quick Sight namespace for the access control application.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  CreateAccessControlApplicationRequest& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication protocol that the access control application uses.</p>
   */
  inline AccessControlApplicationAuthenticationType GetAuthenticationType() const { return m_authenticationType; }
  inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
  inline void SetAuthenticationType(AccessControlApplicationAuthenticationType value) {
    m_authenticationTypeHasBeenSet = true;
    m_authenticationType = value;
  }
  inline CreateAccessControlApplicationRequest& WithAuthenticationType(AccessControlApplicationAuthenticationType value) {
    SetAuthenticationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity provider configuration of the access control application.</p>
   */
  inline const IdpAuthorizingConfigInput& GetIdpAuthorizingConfiguration() const { return m_idpAuthorizingConfiguration; }
  inline bool IdpAuthorizingConfigurationHasBeenSet() const { return m_idpAuthorizingConfigurationHasBeenSet; }
  template <typename IdpAuthorizingConfigurationT = IdpAuthorizingConfigInput>
  void SetIdpAuthorizingConfiguration(IdpAuthorizingConfigurationT&& value) {
    m_idpAuthorizingConfigurationHasBeenSet = true;
    m_idpAuthorizingConfiguration = std::forward<IdpAuthorizingConfigurationT>(value);
  }
  template <typename IdpAuthorizingConfigurationT = IdpAuthorizingConfigInput>
  CreateAccessControlApplicationRequest& WithIdpAuthorizingConfiguration(IdpAuthorizingConfigurationT&& value) {
    SetIdpAuthorizingConfiguration(std::forward<IdpAuthorizingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Quick Sight authentication configuration of the access control
   * application. You provide redirect URIs, and Quick Sight generates the client
   * ID.</p>
   */
  inline const QuickAuthenticationConfigInput& GetQuickAuthenticationConfiguration() const { return m_quickAuthenticationConfiguration; }
  inline bool QuickAuthenticationConfigurationHasBeenSet() const { return m_quickAuthenticationConfigurationHasBeenSet; }
  template <typename QuickAuthenticationConfigurationT = QuickAuthenticationConfigInput>
  void SetQuickAuthenticationConfiguration(QuickAuthenticationConfigurationT&& value) {
    m_quickAuthenticationConfigurationHasBeenSet = true;
    m_quickAuthenticationConfiguration = std::forward<QuickAuthenticationConfigurationT>(value);
  }
  template <typename QuickAuthenticationConfigurationT = QuickAuthenticationConfigInput>
  CreateAccessControlApplicationRequest& WithQuickAuthenticationConfiguration(QuickAuthenticationConfigurationT&& value) {
    SetQuickAuthenticationConfiguration(std::forward<QuickAuthenticationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to assign to the access control application.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateAccessControlApplicationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateAccessControlApplicationRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_applicationId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_namespace;

  AccessControlApplicationAuthenticationType m_authenticationType{AccessControlApplicationAuthenticationType::NOT_SET};

  IdpAuthorizingConfigInput m_idpAuthorizingConfiguration;

  QuickAuthenticationConfigInput m_quickAuthenticationConfiguration;

  Aws::Vector<Tag> m_tags;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_applicationIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_authenticationTypeHasBeenSet = false;
  bool m_idpAuthorizingConfigurationHasBeenSet = false;
  bool m_quickAuthenticationConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
