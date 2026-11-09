/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Signin {
namespace Model {

/**
 * <p>Contains the scoped, temporary AWS credentials used to sign requests with
 * SigV4. Valid for 15 minutes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/AccessToken">AWS
 * API Reference</a></p>
 */
class AccessToken {
 public:
  AWS_SIGNIN_API AccessToken() = default;
  AWS_SIGNIN_API AccessToken(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API AccessToken& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS access key ID for the temporary credentials.</p>
   */
  inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
  inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
  template <typename AccessKeyIdT = Aws::String>
  void SetAccessKeyId(AccessKeyIdT&& value) {
    m_accessKeyIdHasBeenSet = true;
    m_accessKeyId = std::forward<AccessKeyIdT>(value);
  }
  template <typename AccessKeyIdT = Aws::String>
  AccessToken& WithAccessKeyId(AccessKeyIdT&& value) {
    SetAccessKeyId(std::forward<AccessKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS secret access key used to sign requests.</p>
   */
  inline const Aws::String& GetSecretAccessKey() const { return m_secretAccessKey; }
  inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }
  template <typename SecretAccessKeyT = Aws::String>
  void SetSecretAccessKey(SecretAccessKeyT&& value) {
    m_secretAccessKeyHasBeenSet = true;
    m_secretAccessKey = std::forward<SecretAccessKeyT>(value);
  }
  template <typename SecretAccessKeyT = Aws::String>
  AccessToken& WithSecretAccessKey(SecretAccessKeyT&& value) {
    SetSecretAccessKey(std::forward<SecretAccessKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session token that validates the temporary security credentials.</p>
   */
  inline const Aws::String& GetSessionToken() const { return m_sessionToken; }
  inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }
  template <typename SessionTokenT = Aws::String>
  void SetSessionToken(SessionTokenT&& value) {
    m_sessionTokenHasBeenSet = true;
    m_sessionToken = std::forward<SessionTokenT>(value);
  }
  template <typename SessionTokenT = Aws::String>
  AccessToken& WithSessionToken(SessionTokenT&& value) {
    SetSessionToken(std::forward<SessionTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessKeyId;

  Aws::String m_secretAccessKey;

  Aws::String m_sessionToken;
  bool m_accessKeyIdHasBeenSet = false;
  bool m_secretAccessKeyHasBeenSet = false;
  bool m_sessionTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
