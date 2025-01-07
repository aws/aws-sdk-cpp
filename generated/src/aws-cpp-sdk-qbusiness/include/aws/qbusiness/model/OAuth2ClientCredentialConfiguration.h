﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Information about the OAuth 2.0 authentication credential/token used to
   * configure a plugin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/OAuth2ClientCredentialConfiguration">AWS
   * API Reference</a></p>
   */
  class OAuth2ClientCredentialConfiguration
  {
  public:
    AWS_QBUSINESS_API OAuth2ClientCredentialConfiguration();
    AWS_QBUSINESS_API OAuth2ClientCredentialConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API OAuth2ClientCredentialConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Secrets Manager secret that stores the OAuth 2.0
     * credentials/token used for plugin configuration.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline OAuth2ClientCredentialConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline OAuth2ClientCredentialConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline OAuth2ClientCredentialConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an IAM role used by Amazon Q Business to access the OAuth 2.0
     * authentication credentials stored in a Secrets Manager secret.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline OAuth2ClientCredentialConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline OAuth2ClientCredentialConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline OAuth2ClientCredentialConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The redirect URL required by the OAuth 2.0 protocol for Amazon Q Business to
     * authenticate a plugin user through a third party authentication server.</p>
     */
    inline const Aws::String& GetAuthorizationUrl() const{ return m_authorizationUrl; }
    inline bool AuthorizationUrlHasBeenSet() const { return m_authorizationUrlHasBeenSet; }
    inline void SetAuthorizationUrl(const Aws::String& value) { m_authorizationUrlHasBeenSet = true; m_authorizationUrl = value; }
    inline void SetAuthorizationUrl(Aws::String&& value) { m_authorizationUrlHasBeenSet = true; m_authorizationUrl = std::move(value); }
    inline void SetAuthorizationUrl(const char* value) { m_authorizationUrlHasBeenSet = true; m_authorizationUrl.assign(value); }
    inline OAuth2ClientCredentialConfiguration& WithAuthorizationUrl(const Aws::String& value) { SetAuthorizationUrl(value); return *this;}
    inline OAuth2ClientCredentialConfiguration& WithAuthorizationUrl(Aws::String&& value) { SetAuthorizationUrl(std::move(value)); return *this;}
    inline OAuth2ClientCredentialConfiguration& WithAuthorizationUrl(const char* value) { SetAuthorizationUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL required by the OAuth 2.0 protocol to exchange an end user
     * authorization code for an access token.</p>
     */
    inline const Aws::String& GetTokenUrl() const{ return m_tokenUrl; }
    inline bool TokenUrlHasBeenSet() const { return m_tokenUrlHasBeenSet; }
    inline void SetTokenUrl(const Aws::String& value) { m_tokenUrlHasBeenSet = true; m_tokenUrl = value; }
    inline void SetTokenUrl(Aws::String&& value) { m_tokenUrlHasBeenSet = true; m_tokenUrl = std::move(value); }
    inline void SetTokenUrl(const char* value) { m_tokenUrlHasBeenSet = true; m_tokenUrl.assign(value); }
    inline OAuth2ClientCredentialConfiguration& WithTokenUrl(const Aws::String& value) { SetTokenUrl(value); return *this;}
    inline OAuth2ClientCredentialConfiguration& WithTokenUrl(Aws::String&& value) { SetTokenUrl(std::move(value)); return *this;}
    inline OAuth2ClientCredentialConfiguration& WithTokenUrl(const char* value) { SetTokenUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_authorizationUrl;
    bool m_authorizationUrlHasBeenSet = false;

    Aws::String m_tokenUrl;
    bool m_tokenUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
