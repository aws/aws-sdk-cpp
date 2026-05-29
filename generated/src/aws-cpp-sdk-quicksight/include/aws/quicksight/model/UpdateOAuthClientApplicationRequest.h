/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSourceType.h>
#include <aws/quicksight/model/VpcConnectionProperties.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateOAuthClientApplicationRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateOAuthClientApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateOAuthClientApplication"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Web Services account ID.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateOAuthClientApplicationRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the OAuthClientApplication that you want to update.</p>
   */
  inline const Aws::String& GetOAuthClientApplicationId() const { return m_oAuthClientApplicationId; }
  inline bool OAuthClientApplicationIdHasBeenSet() const { return m_oAuthClientApplicationIdHasBeenSet; }
  template <typename OAuthClientApplicationIdT = Aws::String>
  void SetOAuthClientApplicationId(OAuthClientApplicationIdT&& value) {
    m_oAuthClientApplicationIdHasBeenSet = true;
    m_oAuthClientApplicationId = std::forward<OAuthClientApplicationIdT>(value);
  }
  template <typename OAuthClientApplicationIdT = Aws::String>
  UpdateOAuthClientApplicationRequest& WithOAuthClientApplicationId(OAuthClientApplicationIdT&& value) {
    SetOAuthClientApplicationId(std::forward<OAuthClientApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name for the OAuthClientApplication.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateOAuthClientApplicationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client ID of the OAuth application that is registered with the identity
   * provider.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  UpdateOAuthClientApplicationRequest& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client secret of the OAuth application that is registered with the
   * identity provider.</p>
   */
  inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
  inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
  template <typename ClientSecretT = Aws::String>
  void SetClientSecret(ClientSecretT&& value) {
    m_clientSecretHasBeenSet = true;
    m_clientSecret = std::forward<ClientSecretT>(value);
  }
  template <typename ClientSecretT = Aws::String>
  UpdateOAuthClientApplicationRequest& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
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
  UpdateOAuthClientApplicationRequest& WithOAuthTokenEndpointUrl(OAuthTokenEndpointUrlT&& value) {
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
  UpdateOAuthClientApplicationRequest& WithOAuthAuthorizationEndpointUrl(OAuthAuthorizationEndpointUrlT&& value) {
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
  UpdateOAuthClientApplicationRequest& WithOAuthScopes(OAuthScopesT&& value) {
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
  inline UpdateOAuthClientApplicationRequest& WithDataSourceType(DataSourceType value) {
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
  UpdateOAuthClientApplicationRequest& WithIdentityProviderVpcConnectionProperties(IdentityProviderVpcConnectionPropertiesT&& value) {
    SetIdentityProviderVpcConnectionProperties(std::forward<IdentityProviderVpcConnectionPropertiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_oAuthClientApplicationId;

  Aws::String m_name;

  Aws::String m_clientId;

  Aws::String m_clientSecret;

  Aws::String m_oAuthTokenEndpointUrl;

  Aws::String m_oAuthAuthorizationEndpointUrl;

  Aws::String m_oAuthScopes;

  DataSourceType m_dataSourceType{DataSourceType::NOT_SET};

  VpcConnectionProperties m_identityProviderVpcConnectionProperties;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_oAuthClientApplicationIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_clientSecretHasBeenSet = false;
  bool m_oAuthTokenEndpointUrlHasBeenSet = false;
  bool m_oAuthAuthorizationEndpointUrlHasBeenSet = false;
  bool m_oAuthScopesHasBeenSet = false;
  bool m_dataSourceTypeHasBeenSet = false;
  bool m_identityProviderVpcConnectionPropertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
