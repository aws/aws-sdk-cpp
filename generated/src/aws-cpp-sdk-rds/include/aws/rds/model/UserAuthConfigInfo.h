/**
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
   * <p>Returns the details of authentication used by a proxy to log in as a specific
   * database user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/UserAuthConfigInfo">AWS
   * API Reference</a></p>
   */
  class UserAuthConfigInfo
  {
  public:
    AWS_RDS_API UserAuthConfigInfo() = default;
    AWS_RDS_API UserAuthConfigInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API UserAuthConfigInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A user-specified description about the authentication used by a proxy to log
     * in as a specific database user.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UserAuthConfigInfo& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database user to which the proxy connects.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    UserAuthConfigInfo& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication that the proxy uses for connections from the proxy
     * to the underlying database.</p>
     */
    inline AuthScheme GetAuthScheme() const { return m_authScheme; }
    inline bool AuthSchemeHasBeenSet() const { return m_authSchemeHasBeenSet; }
    inline void SetAuthScheme(AuthScheme value) { m_authSchemeHasBeenSet = true; m_authScheme = value; }
    inline UserAuthConfigInfo& WithAuthScheme(AuthScheme value) { SetAuthScheme(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) representing the secret that the proxy uses to
     * authenticate to the RDS DB instance or Aurora DB cluster. These secrets are
     * stored within Amazon Secrets Manager.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    UserAuthConfigInfo& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to require or disallow Amazon Web Services Identity and Access
     * Management (IAM) authentication for connections to the proxy. </p>
     */
    inline IAMAuthMode GetIAMAuth() const { return m_iAMAuth; }
    inline bool IAMAuthHasBeenSet() const { return m_iAMAuthHasBeenSet; }
    inline void SetIAMAuth(IAMAuthMode value) { m_iAMAuthHasBeenSet = true; m_iAMAuth = value; }
    inline UserAuthConfigInfo& WithIAMAuth(IAMAuthMode value) { SetIAMAuth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication the proxy uses for connections from clients.</p>
     */
    inline ClientPasswordAuthType GetClientPasswordAuthType() const { return m_clientPasswordAuthType; }
    inline bool ClientPasswordAuthTypeHasBeenSet() const { return m_clientPasswordAuthTypeHasBeenSet; }
    inline void SetClientPasswordAuthType(ClientPasswordAuthType value) { m_clientPasswordAuthTypeHasBeenSet = true; m_clientPasswordAuthType = value; }
    inline UserAuthConfigInfo& WithClientPasswordAuthType(ClientPasswordAuthType value) { SetClientPasswordAuthType(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    AuthScheme m_authScheme{AuthScheme::NOT_SET};
    bool m_authSchemeHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    IAMAuthMode m_iAMAuth{IAMAuthMode::NOT_SET};
    bool m_iAMAuthHasBeenSet = false;

    ClientPasswordAuthType m_clientPasswordAuthType{ClientPasswordAuthType::NOT_SET};
    bool m_clientPasswordAuthTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
