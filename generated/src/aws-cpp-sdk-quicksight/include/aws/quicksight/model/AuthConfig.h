/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AuthenticationMetadata.h>
#include <aws/quicksight/model/ConnectionAuthType.h>

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
 * <p>Authentication configuration for connecting to external
 * services.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AuthConfig">AWS
 * API Reference</a></p>
 */
class AuthConfig {
 public:
  AWS_QUICKSIGHT_API AuthConfig() = default;
  AWS_QUICKSIGHT_API AuthConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API AuthConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of authentication method.</p>
   */
  inline ConnectionAuthType GetAuthenticationType() const { return m_authenticationType; }
  inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
  inline void SetAuthenticationType(ConnectionAuthType value) {
    m_authenticationTypeHasBeenSet = true;
    m_authenticationType = value;
  }
  inline AuthConfig& WithAuthenticationType(ConnectionAuthType value) {
    SetAuthenticationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication metadata containing the specific configuration for the
   * chosen authentication type.</p>
   */
  inline const AuthenticationMetadata& GetAuthenticationMetadata() const { return m_authenticationMetadata; }
  inline bool AuthenticationMetadataHasBeenSet() const { return m_authenticationMetadataHasBeenSet; }
  template <typename AuthenticationMetadataT = AuthenticationMetadata>
  void SetAuthenticationMetadata(AuthenticationMetadataT&& value) {
    m_authenticationMetadataHasBeenSet = true;
    m_authenticationMetadata = std::forward<AuthenticationMetadataT>(value);
  }
  template <typename AuthenticationMetadataT = AuthenticationMetadata>
  AuthConfig& WithAuthenticationMetadata(AuthenticationMetadataT&& value) {
    SetAuthenticationMetadata(std::forward<AuthenticationMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectionAuthType m_authenticationType{ConnectionAuthType::NOT_SET};
  bool m_authenticationTypeHasBeenSet = false;

  AuthenticationMetadata m_authenticationMetadata;
  bool m_authenticationMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
