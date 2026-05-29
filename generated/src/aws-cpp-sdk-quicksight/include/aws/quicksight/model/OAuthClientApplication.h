/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSourceType.h>
#include <aws/quicksight/model/OAuthClientAuthenticationType.h>
#include <aws/quicksight/model/VpcConnectionProperties.h>

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
 * <p>An OAuth client application that is used to authenticate connections to a
 * data source through an OAuth identity provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/OAuthClientApplication">AWS
 * API Reference</a></p>
 */
class OAuthClientApplication {
 public:
  AWS_QUICKSIGHT_API OAuthClientApplication() = default;
  AWS_QUICKSIGHT_API OAuthClientApplication(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API OAuthClientApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the OAuthClientApplication. This ID is unique per Amazon Web
   * Services Region for each Amazon Web Services account.</p>
   */
  inline const Aws::String& GetOAuthClientApplicationId() const { return m_oAuthClientApplicationId; }
  inline bool OAuthClientApplicationIdHasBeenSet() const { return m_oAuthClientApplicationIdHasBeenSet; }
  template <typename OAuthClientApplicationIdT = Aws::String>
  void SetOAuthClientApplicationId(OAuthClientApplicationIdT&& value) {
    m_oAuthClientApplicationIdHasBeenSet = true;
    m_oAuthClientApplicationId = std::forward<OAuthClientApplicationIdT>(value);
  }
  template <typename OAuthClientApplicationIdT = Aws::String>
  OAuthClientApplication& WithOAuthClientApplicationId(OAuthClientApplicationIdT&& value) {
    SetOAuthClientApplicationId(std::forward<OAuthClientApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the OAuthClientApplication.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  OAuthClientApplication& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth client authentication type used by the OAuthClientApplication.
   * Valid values are <code>TOKEN</code>.</p>
   */
  inline OAuthClientAuthenticationType GetOAuthClientAuthenticationType() const { return m_oAuthClientAuthenticationType; }
  inline bool OAuthClientAuthenticationTypeHasBeenSet() const { return m_oAuthClientAuthenticationTypeHasBeenSet; }
  inline void SetOAuthClientAuthenticationType(OAuthClientAuthenticationType value) {
    m_oAuthClientAuthenticationTypeHasBeenSet = true;
    m_oAuthClientAuthenticationType = value;
  }
  inline OAuthClientApplication& WithOAuthClientAuthenticationType(OAuthClientAuthenticationType value) {
    SetOAuthClientAuthenticationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token endpoint URL of the identity provider that is used to obtain access
   * tokens.</p>
   */
  inline const Aws::String& GetOAuthTokenEndpointUrl() const { return m_oAuthTokenEndpointUrl; }
  inline bool OAuthTokenEndpointUrlHasBeenSet() const { return m_oAuthTokenEndpointUrlHasBeenSet; }
  template <typename OAuthTokenEndpointUrlT = Aws::String>
  void SetOAuthTokenEndpointUrl(OAuthTokenEndpointUrlT&& value) {
    m_oAuthTokenEndpointUrlHasBeenSet = true;
    m_oAuthTokenEndpointUrl = std::forward<OAuthTokenEndpointUrlT>(value);
  }
  template <typename OAuthTokenEndpointUrlT = Aws::String>
  OAuthClientApplication& WithOAuthTokenEndpointUrl(OAuthTokenEndpointUrlT&& value) {
    SetOAuthTokenEndpointUrl(std::forward<OAuthTokenEndpointUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization endpoint URL of the identity provider that is used to
   * obtain authorization codes.</p>
   */
  inline const Aws::String& GetOAuthAuthorizationEndpointUrl() const { return m_oAuthAuthorizationEndpointUrl; }
  inline bool OAuthAuthorizationEndpointUrlHasBeenSet() const { return m_oAuthAuthorizationEndpointUrlHasBeenSet; }
  template <typename OAuthAuthorizationEndpointUrlT = Aws::String>
  void SetOAuthAuthorizationEndpointUrl(OAuthAuthorizationEndpointUrlT&& value) {
    m_oAuthAuthorizationEndpointUrlHasBeenSet = true;
    m_oAuthAuthorizationEndpointUrl = std::forward<OAuthAuthorizationEndpointUrlT>(value);
  }
  template <typename OAuthAuthorizationEndpointUrlT = Aws::String>
  OAuthClientApplication& WithOAuthAuthorizationEndpointUrl(OAuthAuthorizationEndpointUrlT&& value) {
    SetOAuthAuthorizationEndpointUrl(std::forward<OAuthAuthorizationEndpointUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth scopes that are requested when the OAuthClientApplication obtains
   * an access token from the identity provider.</p>
   */
  inline const Aws::String& GetOAuthScopes() const { return m_oAuthScopes; }
  inline bool OAuthScopesHasBeenSet() const { return m_oAuthScopesHasBeenSet; }
  template <typename OAuthScopesT = Aws::String>
  void SetOAuthScopes(OAuthScopesT&& value) {
    m_oAuthScopesHasBeenSet = true;
    m_oAuthScopes = std::forward<OAuthScopesT>(value);
  }
  template <typename OAuthScopesT = Aws::String>
  OAuthClientApplication& WithOAuthScopes(OAuthScopesT&& value) {
    SetOAuthScopes(std::forward<OAuthScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of data source that the OAuthClientApplication is used with. Valid
   * values are <code>SNOWFLAKE</code>.</p>
   */
  inline DataSourceType GetDataSourceType() const { return m_dataSourceType; }
  inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }
  inline void SetDataSourceType(DataSourceType value) {
    m_dataSourceTypeHasBeenSet = true;
    m_dataSourceType = value;
  }
  inline OAuthClientApplication& WithDataSourceType(DataSourceType value) {
    SetDataSourceType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const VpcConnectionProperties& GetIdentityProviderVpcConnectionProperties() const {
    return m_identityProviderVpcConnectionProperties;
  }
  inline bool IdentityProviderVpcConnectionPropertiesHasBeenSet() const { return m_identityProviderVpcConnectionPropertiesHasBeenSet; }
  template <typename IdentityProviderVpcConnectionPropertiesT = VpcConnectionProperties>
  void SetIdentityProviderVpcConnectionProperties(IdentityProviderVpcConnectionPropertiesT&& value) {
    m_identityProviderVpcConnectionPropertiesHasBeenSet = true;
    m_identityProviderVpcConnectionProperties = std::forward<IdentityProviderVpcConnectionPropertiesT>(value);
  }
  template <typename IdentityProviderVpcConnectionPropertiesT = VpcConnectionProperties>
  OAuthClientApplication& WithIdentityProviderVpcConnectionProperties(IdentityProviderVpcConnectionPropertiesT&& value) {
    SetIdentityProviderVpcConnectionProperties(std::forward<IdentityProviderVpcConnectionPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time that the OAuthClientApplication was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  OAuthClientApplication& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time that the OAuthClientApplication was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  OAuthClientApplication& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the OAuthClientApplication.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  OAuthClientApplication& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_oAuthClientApplicationId;

  Aws::String m_name;

  OAuthClientAuthenticationType m_oAuthClientAuthenticationType{OAuthClientAuthenticationType::NOT_SET};

  Aws::String m_oAuthTokenEndpointUrl;

  Aws::String m_oAuthAuthorizationEndpointUrl;

  Aws::String m_oAuthScopes;

  DataSourceType m_dataSourceType{DataSourceType::NOT_SET};

  VpcConnectionProperties m_identityProviderVpcConnectionProperties;

  Aws::Utils::DateTime m_createdTime{};

  Aws::Utils::DateTime m_lastUpdatedTime{};

  Aws::String m_arn;
  bool m_oAuthClientApplicationIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_oAuthClientAuthenticationTypeHasBeenSet = false;
  bool m_oAuthTokenEndpointUrlHasBeenSet = false;
  bool m_oAuthAuthorizationEndpointUrlHasBeenSet = false;
  bool m_oAuthScopesHasBeenSet = false;
  bool m_dataSourceTypeHasBeenSet = false;
  bool m_identityProviderVpcConnectionPropertiesHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_arnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
