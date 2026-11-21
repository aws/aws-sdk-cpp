/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AccessControlApplicationAuthenticationType.h>
#include <aws/quicksight/model/AccessControlApplicationStatus.h>
#include <aws/quicksight/model/IdpAuthorizingConfig.h>
#include <aws/quicksight/model/QuickAuthenticationConfig.h>

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
 * <p>An access control application. It defines how an external client signs in to
 * Quick Sight with OAuth 2.0. Client secret values are never
 * included.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AccessControlApplication">AWS
 * API Reference</a></p>
 */
class AccessControlApplication {
 public:
  AWS_QUICKSIGHT_API AccessControlApplication() = default;
  AWS_QUICKSIGHT_API AccessControlApplication(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API AccessControlApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  AccessControlApplication& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the access control application.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  AccessControlApplication& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
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
  AccessControlApplication& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Quick Sight namespace that the access control application belongs to.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  AccessControlApplication& WithNamespace(NamespaceT&& value) {
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
  inline AccessControlApplication& WithAuthenticationType(AccessControlApplicationAuthenticationType value) {
    SetAuthenticationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the access control application.</p>
   */
  inline AccessControlApplicationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AccessControlApplicationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AccessControlApplication& WithStatus(AccessControlApplicationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the access control application was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  AccessControlApplication& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the access control application was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  AccessControlApplication& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tenant URL of the access control application. This URL hosts the OAuth
   * 2.0 and OpenID Connect endpoints for the application, such as
   * <code>/authorize</code>, <code>/token</code>,
   * <code>/.well-known/openid-configuration</code>, and <code>/jwks</code>.</p>
   */
  inline const Aws::String& GetTenantUrl() const { return m_tenantUrl; }
  inline bool TenantUrlHasBeenSet() const { return m_tenantUrlHasBeenSet; }
  template <typename TenantUrlT = Aws::String>
  void SetTenantUrl(TenantUrlT&& value) {
    m_tenantUrlHasBeenSet = true;
    m_tenantUrl = std::forward<TenantUrlT>(value);
  }
  template <typename TenantUrlT = Aws::String>
  AccessControlApplication& WithTenantUrl(TenantUrlT&& value) {
    SetTenantUrl(std::forward<TenantUrlT>(value));
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
  AccessControlApplication& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services IAM Identity Center application that Quick
   * Sight manages for this access control application. This value is present when
   * the <code>IdpAuthorizingType</code> is <code>IDC_AUTH_CODE</code>, or when a
   * trusted token issuer is configured.</p>
   */
  inline const Aws::String& GetIdcApplicationArn() const { return m_idcApplicationArn; }
  inline bool IdcApplicationArnHasBeenSet() const { return m_idcApplicationArnHasBeenSet; }
  template <typename IdcApplicationArnT = Aws::String>
  void SetIdcApplicationArn(IdcApplicationArnT&& value) {
    m_idcApplicationArnHasBeenSet = true;
    m_idcApplicationArn = std::forward<IdcApplicationArnT>(value);
  }
  template <typename IdcApplicationArnT = Aws::String>
  AccessControlApplication& WithIdcApplicationArn(IdcApplicationArnT&& value) {
    SetIdcApplicationArn(std::forward<IdcApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity provider configuration of the access control application. Client
   * secret values are never included.</p>
   */
  inline const IdpAuthorizingConfig& GetIdpAuthorizingConfiguration() const { return m_idpAuthorizingConfiguration; }
  inline bool IdpAuthorizingConfigurationHasBeenSet() const { return m_idpAuthorizingConfigurationHasBeenSet; }
  template <typename IdpAuthorizingConfigurationT = IdpAuthorizingConfig>
  void SetIdpAuthorizingConfiguration(IdpAuthorizingConfigurationT&& value) {
    m_idpAuthorizingConfigurationHasBeenSet = true;
    m_idpAuthorizingConfiguration = std::forward<IdpAuthorizingConfigurationT>(value);
  }
  template <typename IdpAuthorizingConfigurationT = IdpAuthorizingConfig>
  AccessControlApplication& WithIdpAuthorizingConfiguration(IdpAuthorizingConfigurationT&& value) {
    SetIdpAuthorizingConfiguration(std::forward<IdpAuthorizingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Quick Sight authentication configuration of the access control
   * application. Client secret values are never included.</p>
   */
  inline const QuickAuthenticationConfig& GetQuickAuthenticationConfiguration() const { return m_quickAuthenticationConfiguration; }
  inline bool QuickAuthenticationConfigurationHasBeenSet() const { return m_quickAuthenticationConfigurationHasBeenSet; }
  template <typename QuickAuthenticationConfigurationT = QuickAuthenticationConfig>
  void SetQuickAuthenticationConfiguration(QuickAuthenticationConfigurationT&& value) {
    m_quickAuthenticationConfigurationHasBeenSet = true;
    m_quickAuthenticationConfiguration = std::forward<QuickAuthenticationConfigurationT>(value);
  }
  template <typename QuickAuthenticationConfigurationT = QuickAuthenticationConfig>
  AccessControlApplication& WithQuickAuthenticationConfiguration(QuickAuthenticationConfigurationT&& value) {
    SetQuickAuthenticationConfiguration(std::forward<QuickAuthenticationConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationId;

  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_namespace;

  AccessControlApplicationAuthenticationType m_authenticationType{AccessControlApplicationAuthenticationType::NOT_SET};

  AccessControlApplicationStatus m_status{AccessControlApplicationStatus::NOT_SET};

  Aws::Utils::DateTime m_createdTime{};

  Aws::Utils::DateTime m_lastUpdatedTime{};

  Aws::String m_tenantUrl;

  Aws::String m_description;

  Aws::String m_idcApplicationArn;

  IdpAuthorizingConfig m_idpAuthorizingConfiguration;

  QuickAuthenticationConfig m_quickAuthenticationConfiguration;
  bool m_applicationIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_authenticationTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_tenantUrlHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_idcApplicationArnHasBeenSet = false;
  bool m_idpAuthorizingConfigurationHasBeenSet = false;
  bool m_quickAuthenticationConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
