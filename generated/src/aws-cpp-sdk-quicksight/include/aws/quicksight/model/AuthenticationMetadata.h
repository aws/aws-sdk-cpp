/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/APIKeyConnectionMetadata.h>
#include <aws/quicksight/model/AuthorizationCodeGrantMetadata.h>
#include <aws/quicksight/model/BasicAuthConnectionMetadata.h>
#include <aws/quicksight/model/ClientCredentialsGrantMetadata.h>
#include <aws/quicksight/model/IAMConnectionMetadata.h>
#include <aws/quicksight/model/NoneConnectionMetadata.h>

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
 * <p>Union type containing authentication metadata for different authentication
 * methods.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AuthenticationMetadata">AWS
 * API Reference</a></p>
 */
class AuthenticationMetadata {
 public:
  AWS_QUICKSIGHT_API AuthenticationMetadata() = default;
  AWS_QUICKSIGHT_API AuthenticationMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API AuthenticationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>OAuth 2.0 authorization code grant authentication metadata.</p>
   */
  inline const AuthorizationCodeGrantMetadata& GetAuthorizationCodeGrantMetadata() const { return m_authorizationCodeGrantMetadata; }
  inline bool AuthorizationCodeGrantMetadataHasBeenSet() const { return m_authorizationCodeGrantMetadataHasBeenSet; }
  template <typename AuthorizationCodeGrantMetadataT = AuthorizationCodeGrantMetadata>
  void SetAuthorizationCodeGrantMetadata(AuthorizationCodeGrantMetadataT&& value) {
    m_authorizationCodeGrantMetadataHasBeenSet = true;
    m_authorizationCodeGrantMetadata = std::forward<AuthorizationCodeGrantMetadataT>(value);
  }
  template <typename AuthorizationCodeGrantMetadataT = AuthorizationCodeGrantMetadata>
  AuthenticationMetadata& WithAuthorizationCodeGrantMetadata(AuthorizationCodeGrantMetadataT&& value) {
    SetAuthorizationCodeGrantMetadata(std::forward<AuthorizationCodeGrantMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth 2.0 client credentials grant authentication metadata.</p>
   */
  inline const ClientCredentialsGrantMetadata& GetClientCredentialsGrantMetadata() const { return m_clientCredentialsGrantMetadata; }
  inline bool ClientCredentialsGrantMetadataHasBeenSet() const { return m_clientCredentialsGrantMetadataHasBeenSet; }
  template <typename ClientCredentialsGrantMetadataT = ClientCredentialsGrantMetadata>
  void SetClientCredentialsGrantMetadata(ClientCredentialsGrantMetadataT&& value) {
    m_clientCredentialsGrantMetadataHasBeenSet = true;
    m_clientCredentialsGrantMetadata = std::forward<ClientCredentialsGrantMetadataT>(value);
  }
  template <typename ClientCredentialsGrantMetadataT = ClientCredentialsGrantMetadata>
  AuthenticationMetadata& WithClientCredentialsGrantMetadata(ClientCredentialsGrantMetadataT&& value) {
    SetClientCredentialsGrantMetadata(std::forward<ClientCredentialsGrantMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Basic authentication metadata using username and password.</p>
   */
  inline const BasicAuthConnectionMetadata& GetBasicAuthConnectionMetadata() const { return m_basicAuthConnectionMetadata; }
  inline bool BasicAuthConnectionMetadataHasBeenSet() const { return m_basicAuthConnectionMetadataHasBeenSet; }
  template <typename BasicAuthConnectionMetadataT = BasicAuthConnectionMetadata>
  void SetBasicAuthConnectionMetadata(BasicAuthConnectionMetadataT&& value) {
    m_basicAuthConnectionMetadataHasBeenSet = true;
    m_basicAuthConnectionMetadata = std::forward<BasicAuthConnectionMetadataT>(value);
  }
  template <typename BasicAuthConnectionMetadataT = BasicAuthConnectionMetadata>
  AuthenticationMetadata& WithBasicAuthConnectionMetadata(BasicAuthConnectionMetadataT&& value) {
    SetBasicAuthConnectionMetadata(std::forward<BasicAuthConnectionMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>API key authentication metadata.</p>
   */
  inline const APIKeyConnectionMetadata& GetApiKeyConnectionMetadata() const { return m_apiKeyConnectionMetadata; }
  inline bool ApiKeyConnectionMetadataHasBeenSet() const { return m_apiKeyConnectionMetadataHasBeenSet; }
  template <typename ApiKeyConnectionMetadataT = APIKeyConnectionMetadata>
  void SetApiKeyConnectionMetadata(ApiKeyConnectionMetadataT&& value) {
    m_apiKeyConnectionMetadataHasBeenSet = true;
    m_apiKeyConnectionMetadata = std::forward<ApiKeyConnectionMetadataT>(value);
  }
  template <typename ApiKeyConnectionMetadataT = APIKeyConnectionMetadata>
  AuthenticationMetadata& WithApiKeyConnectionMetadata(ApiKeyConnectionMetadataT&& value) {
    SetApiKeyConnectionMetadata(std::forward<ApiKeyConnectionMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>No authentication metadata for services that don't require
   * authentication.</p>
   */
  inline const NoneConnectionMetadata& GetNoneConnectionMetadata() const { return m_noneConnectionMetadata; }
  inline bool NoneConnectionMetadataHasBeenSet() const { return m_noneConnectionMetadataHasBeenSet; }
  template <typename NoneConnectionMetadataT = NoneConnectionMetadata>
  void SetNoneConnectionMetadata(NoneConnectionMetadataT&& value) {
    m_noneConnectionMetadataHasBeenSet = true;
    m_noneConnectionMetadata = std::forward<NoneConnectionMetadataT>(value);
  }
  template <typename NoneConnectionMetadataT = NoneConnectionMetadata>
  AuthenticationMetadata& WithNoneConnectionMetadata(NoneConnectionMetadataT&& value) {
    SetNoneConnectionMetadata(std::forward<NoneConnectionMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IAM role-based authentication metadata for Amazon Web Services services.</p>
   */
  inline const IAMConnectionMetadata& GetIamConnectionMetadata() const { return m_iamConnectionMetadata; }
  inline bool IamConnectionMetadataHasBeenSet() const { return m_iamConnectionMetadataHasBeenSet; }
  template <typename IamConnectionMetadataT = IAMConnectionMetadata>
  void SetIamConnectionMetadata(IamConnectionMetadataT&& value) {
    m_iamConnectionMetadataHasBeenSet = true;
    m_iamConnectionMetadata = std::forward<IamConnectionMetadataT>(value);
  }
  template <typename IamConnectionMetadataT = IAMConnectionMetadata>
  AuthenticationMetadata& WithIamConnectionMetadata(IamConnectionMetadataT&& value) {
    SetIamConnectionMetadata(std::forward<IamConnectionMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  AuthorizationCodeGrantMetadata m_authorizationCodeGrantMetadata;
  bool m_authorizationCodeGrantMetadataHasBeenSet = false;

  ClientCredentialsGrantMetadata m_clientCredentialsGrantMetadata;
  bool m_clientCredentialsGrantMetadataHasBeenSet = false;

  BasicAuthConnectionMetadata m_basicAuthConnectionMetadata;
  bool m_basicAuthConnectionMetadataHasBeenSet = false;

  APIKeyConnectionMetadata m_apiKeyConnectionMetadata;
  bool m_apiKeyConnectionMetadataHasBeenSet = false;

  NoneConnectionMetadata m_noneConnectionMetadata;
  bool m_noneConnectionMetadataHasBeenSet = false;

  IAMConnectionMetadata m_iamConnectionMetadata;
  bool m_iamConnectionMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
