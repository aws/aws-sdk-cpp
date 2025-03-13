/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSO
{
namespace Model
{

  /**
   * <p>Provides information about the role credentials that are assigned to the
   * user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/RoleCredentials">AWS
   * API Reference</a></p>
   */
  class RoleCredentials
  {
  public:
    AWS_SSO_API RoleCredentials() = default;
    AWS_SSO_API RoleCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSO_API RoleCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier used for the temporary security credentials. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    template<typename AccessKeyIdT = Aws::String>
    void SetAccessKeyId(AccessKeyIdT&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::forward<AccessKeyIdT>(value); }
    template<typename AccessKeyIdT = Aws::String>
    RoleCredentials& WithAccessKeyId(AccessKeyIdT&& value) { SetAccessKeyId(std::forward<AccessKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key that is used to sign the request. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const { return m_secretAccessKey; }
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }
    template<typename SecretAccessKeyT = Aws::String>
    void SetSecretAccessKey(SecretAccessKeyT&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::forward<SecretAccessKeyT>(value); }
    template<typename SecretAccessKeyT = Aws::String>
    RoleCredentials& WithSecretAccessKey(SecretAccessKeyT&& value) { SetSecretAccessKey(std::forward<SecretAccessKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token used for temporary credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetSessionToken() const { return m_sessionToken; }
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }
    template<typename SessionTokenT = Aws::String>
    void SetSessionToken(SessionTokenT&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::forward<SessionTokenT>(value); }
    template<typename SessionTokenT = Aws::String>
    RoleCredentials& WithSessionToken(SessionTokenT&& value) { SetSessionToken(std::forward<SessionTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which temporary security credentials expire.</p>
     */
    inline long long GetExpiration() const { return m_expiration; }
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
    inline void SetExpiration(long long value) { m_expirationHasBeenSet = true; m_expiration = value; }
    inline RoleCredentials& WithExpiration(long long value) { SetExpiration(value); return *this;}
    ///@}
  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet = false;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;

    long long m_expiration{0};
    bool m_expirationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSO
} // namespace Aws
