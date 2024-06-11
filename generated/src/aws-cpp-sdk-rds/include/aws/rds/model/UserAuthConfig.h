﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/AuthScheme.h>
#include <aws/rds/model/IAMAuthMode.h>
#include <aws/rds/model/ClientPasswordAuthType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Specifies the details of authentication used by a proxy to log in as a
   * specific database user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/UserAuthConfig">AWS
   * API Reference</a></p>
   */
  class UserAuthConfig
  {
  public:
    AWS_RDS_API UserAuthConfig();
    AWS_RDS_API UserAuthConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API UserAuthConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A user-specified description about the authentication used by a proxy to log
     * in as a specific database user.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UserAuthConfig& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UserAuthConfig& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UserAuthConfig& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database user to which the proxy connects.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline UserAuthConfig& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline UserAuthConfig& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline UserAuthConfig& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication that the proxy uses for connections from the proxy
     * to the underlying database.</p>
     */
    inline const AuthScheme& GetAuthScheme() const{ return m_authScheme; }
    inline bool AuthSchemeHasBeenSet() const { return m_authSchemeHasBeenSet; }
    inline void SetAuthScheme(const AuthScheme& value) { m_authSchemeHasBeenSet = true; m_authScheme = value; }
    inline void SetAuthScheme(AuthScheme&& value) { m_authSchemeHasBeenSet = true; m_authScheme = std::move(value); }
    inline UserAuthConfig& WithAuthScheme(const AuthScheme& value) { SetAuthScheme(value); return *this;}
    inline UserAuthConfig& WithAuthScheme(AuthScheme&& value) { SetAuthScheme(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) representing the secret that the proxy uses to
     * authenticate to the RDS DB instance or Aurora DB cluster. These secrets are
     * stored within Amazon Secrets Manager.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline UserAuthConfig& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline UserAuthConfig& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline UserAuthConfig& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether to require or disallow Amazon Web Services
     * Identity and Access Management (IAM) authentication for connections to the
     * proxy. The <code>ENABLED</code> value is valid only for proxies with RDS for
     * Microsoft SQL Server.</p>
     */
    inline const IAMAuthMode& GetIAMAuth() const{ return m_iAMAuth; }
    inline bool IAMAuthHasBeenSet() const { return m_iAMAuthHasBeenSet; }
    inline void SetIAMAuth(const IAMAuthMode& value) { m_iAMAuthHasBeenSet = true; m_iAMAuth = value; }
    inline void SetIAMAuth(IAMAuthMode&& value) { m_iAMAuthHasBeenSet = true; m_iAMAuth = std::move(value); }
    inline UserAuthConfig& WithIAMAuth(const IAMAuthMode& value) { SetIAMAuth(value); return *this;}
    inline UserAuthConfig& WithIAMAuth(IAMAuthMode&& value) { SetIAMAuth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication the proxy uses for connections from clients.</p>
     */
    inline const ClientPasswordAuthType& GetClientPasswordAuthType() const{ return m_clientPasswordAuthType; }
    inline bool ClientPasswordAuthTypeHasBeenSet() const { return m_clientPasswordAuthTypeHasBeenSet; }
    inline void SetClientPasswordAuthType(const ClientPasswordAuthType& value) { m_clientPasswordAuthTypeHasBeenSet = true; m_clientPasswordAuthType = value; }
    inline void SetClientPasswordAuthType(ClientPasswordAuthType&& value) { m_clientPasswordAuthTypeHasBeenSet = true; m_clientPasswordAuthType = std::move(value); }
    inline UserAuthConfig& WithClientPasswordAuthType(const ClientPasswordAuthType& value) { SetClientPasswordAuthType(value); return *this;}
    inline UserAuthConfig& WithClientPasswordAuthType(ClientPasswordAuthType&& value) { SetClientPasswordAuthType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    AuthScheme m_authScheme;
    bool m_authSchemeHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    IAMAuthMode m_iAMAuth;
    bool m_iAMAuthHasBeenSet = false;

    ClientPasswordAuthType m_clientPasswordAuthType;
    bool m_clientPasswordAuthTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
