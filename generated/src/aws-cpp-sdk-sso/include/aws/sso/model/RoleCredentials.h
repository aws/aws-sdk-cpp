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
    AWS_SSO_API RoleCredentials();
    AWS_SSO_API RoleCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSO_API RoleCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier used for the temporary security credentials. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The identifier used for the temporary security credentials. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>The identifier used for the temporary security credentials. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The identifier used for the temporary security credentials. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>The identifier used for the temporary security credentials. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The identifier used for the temporary security credentials. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline RoleCredentials& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The identifier used for the temporary security credentials. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline RoleCredentials& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier used for the temporary security credentials. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline RoleCredentials& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p>The key that is used to sign the request. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }

    /**
     * <p>The key that is used to sign the request. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }

    /**
     * <p>The key that is used to sign the request. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = value; }

    /**
     * <p>The key that is used to sign the request. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::move(value); }

    /**
     * <p>The key that is used to sign the request. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey.assign(value); }

    /**
     * <p>The key that is used to sign the request. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline RoleCredentials& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}

    /**
     * <p>The key that is used to sign the request. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline RoleCredentials& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}

    /**
     * <p>The key that is used to sign the request. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline RoleCredentials& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}


    /**
     * <p>The token used for temporary credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }

    /**
     * <p>The token used for temporary credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }

    /**
     * <p>The token used for temporary credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }

    /**
     * <p>The token used for temporary credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }

    /**
     * <p>The token used for temporary credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }

    /**
     * <p>The token used for temporary credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline RoleCredentials& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    /**
     * <p>The token used for temporary credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline RoleCredentials& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    /**
     * <p>The token used for temporary credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_use-resources.html">Using
     * Temporary Security Credentials to Request Access to AWS Resources</a> in the
     * <i>AWS IAM User Guide</i>.</p>
     */
    inline RoleCredentials& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}


    /**
     * <p>The date on which temporary security credentials expire.</p>
     */
    inline long long GetExpiration() const{ return m_expiration; }

    /**
     * <p>The date on which temporary security credentials expire.</p>
     */
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }

    /**
     * <p>The date on which temporary security credentials expire.</p>
     */
    inline void SetExpiration(long long value) { m_expirationHasBeenSet = true; m_expiration = value; }

    /**
     * <p>The date on which temporary security credentials expire.</p>
     */
    inline RoleCredentials& WithExpiration(long long value) { SetExpiration(value); return *this;}

  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet = false;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;

    long long m_expiration;
    bool m_expirationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSO
} // namespace Aws
