/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ReadAPIKeyConnectionMetadata.h>
#include <aws/quicksight/model/ReadAuthorizationCodeGrantMetadata.h>
#include <aws/quicksight/model/ReadBasicAuthConnectionMetadata.h>
#include <aws/quicksight/model/ReadClientCredentialsGrantMetadata.h>
#include <aws/quicksight/model/ReadIamConnectionMetadata.h>
#include <aws/quicksight/model/ReadNoneConnectionMetadata.h>

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
 * <p>Read-only authentication metadata union containing non-sensitive
 * configuration details for different authentication types.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReadAuthenticationMetadata">AWS
 * API Reference</a></p>
 */
class ReadAuthenticationMetadata {
 public:
  AWS_QUICKSIGHT_API ReadAuthenticationMetadata() = default;
  AWS_QUICKSIGHT_API ReadAuthenticationMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ReadAuthenticationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Read-only metadata for OAuth2 authorization code grant flow
   * configuration.</p>
   */
  inline const ReadAuthorizationCodeGrantMetadata& GetAuthorizationCodeGrantMetadata() const { return m_authorizationCodeGrantMetadata; }
  inline bool AuthorizationCodeGrantMetadataHasBeenSet() const { return m_authorizationCodeGrantMetadataHasBeenSet; }
  template <typename AuthorizationCodeGrantMetadataT = ReadAuthorizationCodeGrantMetadata>
  void SetAuthorizationCodeGrantMetadata(AuthorizationCodeGrantMetadataT&& value) {
    m_authorizationCodeGrantMetadataHasBeenSet = true;
    m_authorizationCodeGrantMetadata = std::forward<AuthorizationCodeGrantMetadataT>(value);
  }
  template <typename AuthorizationCodeGrantMetadataT = ReadAuthorizationCodeGrantMetadata>
  ReadAuthenticationMetadata& WithAuthorizationCodeGrantMetadata(AuthorizationCodeGrantMetadataT&& value) {
    SetAuthorizationCodeGrantMetadata(std::forward<AuthorizationCodeGrantMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Read-only metadata for OAuth2 client credentials grant flow
   * configuration.</p>
   */
  inline const ReadClientCredentialsGrantMetadata& GetClientCredentialsGrantMetadata() const { return m_clientCredentialsGrantMetadata; }
  inline bool ClientCredentialsGrantMetadataHasBeenSet() const { return m_clientCredentialsGrantMetadataHasBeenSet; }
  template <typename ClientCredentialsGrantMetadataT = ReadClientCredentialsGrantMetadata>
  void SetClientCredentialsGrantMetadata(ClientCredentialsGrantMetadataT&& value) {
    m_clientCredentialsGrantMetadataHasBeenSet = true;
    m_clientCredentialsGrantMetadata = std::forward<ClientCredentialsGrantMetadataT>(value);
  }
  template <typename ClientCredentialsGrantMetadataT = ReadClientCredentialsGrantMetadata>
  ReadAuthenticationMetadata& WithClientCredentialsGrantMetadata(ClientCredentialsGrantMetadataT&& value) {
    SetClientCredentialsGrantMetadata(std::forward<ClientCredentialsGrantMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Read-only metadata for basic authentication configuration.</p>
   */
  inline const ReadBasicAuthConnectionMetadata& GetBasicAuthConnectionMetadata() const { return m_basicAuthConnectionMetadata; }
  inline bool BasicAuthConnectionMetadataHasBeenSet() const { return m_basicAuthConnectionMetadataHasBeenSet; }
  template <typename BasicAuthConnectionMetadataT = ReadBasicAuthConnectionMetadata>
  void SetBasicAuthConnectionMetadata(BasicAuthConnectionMetadataT&& value) {
    m_basicAuthConnectionMetadataHasBeenSet = true;
    m_basicAuthConnectionMetadata = std::forward<BasicAuthConnectionMetadataT>(value);
  }
  template <typename BasicAuthConnectionMetadataT = ReadBasicAuthConnectionMetadata>
  ReadAuthenticationMetadata& WithBasicAuthConnectionMetadata(BasicAuthConnectionMetadataT&& value) {
    SetBasicAuthConnectionMetadata(std::forward<BasicAuthConnectionMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Read-only metadata for API key authentication configuration.</p>
   */
  inline const ReadAPIKeyConnectionMetadata& GetApiKeyConnectionMetadata() const { return m_apiKeyConnectionMetadata; }
  inline bool ApiKeyConnectionMetadataHasBeenSet() const { return m_apiKeyConnectionMetadataHasBeenSet; }
  template <typename ApiKeyConnectionMetadataT = ReadAPIKeyConnectionMetadata>
  void SetApiKeyConnectionMetadata(ApiKeyConnectionMetadataT&& value) {
    m_apiKeyConnectionMetadataHasBeenSet = true;
    m_apiKeyConnectionMetadata = std::forward<ApiKeyConnectionMetadataT>(value);
  }
  template <typename ApiKeyConnectionMetadataT = ReadAPIKeyConnectionMetadata>
  ReadAuthenticationMetadata& WithApiKeyConnectionMetadata(ApiKeyConnectionMetadataT&& value) {
    SetApiKeyConnectionMetadata(std::forward<ApiKeyConnectionMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Read-only metadata for connections that do not require authentication.</p>
   */
  inline const ReadNoneConnectionMetadata& GetNoneConnectionMetadata() const { return m_noneConnectionMetadata; }
  inline bool NoneConnectionMetadataHasBeenSet() const { return m_noneConnectionMetadataHasBeenSet; }
  template <typename NoneConnectionMetadataT = ReadNoneConnectionMetadata>
  void SetNoneConnectionMetadata(NoneConnectionMetadataT&& value) {
    m_noneConnectionMetadataHasBeenSet = true;
    m_noneConnectionMetadata = std::forward<NoneConnectionMetadataT>(value);
  }
  template <typename NoneConnectionMetadataT = ReadNoneConnectionMetadata>
  ReadAuthenticationMetadata& WithNoneConnectionMetadata(NoneConnectionMetadataT&& value) {
    SetNoneConnectionMetadata(std::forward<NoneConnectionMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Read-only metadata for IAM-based authentication configuration.</p>
   */
  inline const ReadIamConnectionMetadata& GetIamConnectionMetadata() const { return m_iamConnectionMetadata; }
  inline bool IamConnectionMetadataHasBeenSet() const { return m_iamConnectionMetadataHasBeenSet; }
  template <typename IamConnectionMetadataT = ReadIamConnectionMetadata>
  void SetIamConnectionMetadata(IamConnectionMetadataT&& value) {
    m_iamConnectionMetadataHasBeenSet = true;
    m_iamConnectionMetadata = std::forward<IamConnectionMetadataT>(value);
  }
  template <typename IamConnectionMetadataT = ReadIamConnectionMetadata>
  ReadAuthenticationMetadata& WithIamConnectionMetadata(IamConnectionMetadataT&& value) {
    SetIamConnectionMetadata(std::forward<IamConnectionMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  ReadAuthorizationCodeGrantMetadata m_authorizationCodeGrantMetadata;

  ReadClientCredentialsGrantMetadata m_clientCredentialsGrantMetadata;

  ReadBasicAuthConnectionMetadata m_basicAuthConnectionMetadata;

  ReadAPIKeyConnectionMetadata m_apiKeyConnectionMetadata;

  ReadNoneConnectionMetadata m_noneConnectionMetadata;

  ReadIamConnectionMetadata m_iamConnectionMetadata;
  bool m_authorizationCodeGrantMetadataHasBeenSet = false;
  bool m_clientCredentialsGrantMetadataHasBeenSet = false;
  bool m_basicAuthConnectionMetadataHasBeenSet = false;
  bool m_apiKeyConnectionMetadataHasBeenSet = false;
  bool m_noneConnectionMetadataHasBeenSet = false;
  bool m_iamConnectionMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
