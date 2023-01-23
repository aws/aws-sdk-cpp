/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/UserRole.h>
#include <aws/quicksight/model/IdentityType.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A registered user of Amazon QuickSight. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/User">AWS API
   * Reference</a></p>
   */
  class User
  {
  public:
    AWS_QUICKSIGHT_API User();
    AWS_QUICKSIGHT_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline User& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline User& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline User& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The user's user name. This value is required if you are registering a user
     * that will be managed in Amazon QuickSight. In the output, the value for
     * <code>UserName</code> is <code>N/A</code> when the value for
     * <code>IdentityType</code> is <code>IAM</code> and the corresponding IAM user is
     * deleted.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The user's user name. This value is required if you are registering a user
     * that will be managed in Amazon QuickSight. In the output, the value for
     * <code>UserName</code> is <code>N/A</code> when the value for
     * <code>IdentityType</code> is <code>IAM</code> and the corresponding IAM user is
     * deleted.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The user's user name. This value is required if you are registering a user
     * that will be managed in Amazon QuickSight. In the output, the value for
     * <code>UserName</code> is <code>N/A</code> when the value for
     * <code>IdentityType</code> is <code>IAM</code> and the corresponding IAM user is
     * deleted.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The user's user name. This value is required if you are registering a user
     * that will be managed in Amazon QuickSight. In the output, the value for
     * <code>UserName</code> is <code>N/A</code> when the value for
     * <code>IdentityType</code> is <code>IAM</code> and the corresponding IAM user is
     * deleted.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The user's user name. This value is required if you are registering a user
     * that will be managed in Amazon QuickSight. In the output, the value for
     * <code>UserName</code> is <code>N/A</code> when the value for
     * <code>IdentityType</code> is <code>IAM</code> and the corresponding IAM user is
     * deleted.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The user's user name. This value is required if you are registering a user
     * that will be managed in Amazon QuickSight. In the output, the value for
     * <code>UserName</code> is <code>N/A</code> when the value for
     * <code>IdentityType</code> is <code>IAM</code> and the corresponding IAM user is
     * deleted.</p>
     */
    inline User& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The user's user name. This value is required if you are registering a user
     * that will be managed in Amazon QuickSight. In the output, the value for
     * <code>UserName</code> is <code>N/A</code> when the value for
     * <code>IdentityType</code> is <code>IAM</code> and the corresponding IAM user is
     * deleted.</p>
     */
    inline User& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The user's user name. This value is required if you are registering a user
     * that will be managed in Amazon QuickSight. In the output, the value for
     * <code>UserName</code> is <code>N/A</code> when the value for
     * <code>IdentityType</code> is <code>IAM</code> and the corresponding IAM user is
     * deleted.</p>
     */
    inline User& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The user's email address.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The user's email address.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The user's email address.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The user's email address.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The user's email address.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The user's email address.</p>
     */
    inline User& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The user's email address.</p>
     */
    inline User& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The user's email address.</p>
     */
    inline User& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The Amazon QuickSight role for the user. The user role can be one of the
     * following:.</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, datasets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon Amazon
     * QuickSight settings.</p> </li> <li> <p> <code>RESTRICTED_READER</code>: This
     * role isn't currently available for use.</p> </li> <li> <p>
     * <code>RESTRICTED_AUTHOR</code>: This role isn't currently available for use.</p>
     * </li> </ul>
     */
    inline const UserRole& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon QuickSight role for the user. The user role can be one of the
     * following:.</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, datasets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon Amazon
     * QuickSight settings.</p> </li> <li> <p> <code>RESTRICTED_READER</code>: This
     * role isn't currently available for use.</p> </li> <li> <p>
     * <code>RESTRICTED_AUTHOR</code>: This role isn't currently available for use.</p>
     * </li> </ul>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The Amazon QuickSight role for the user. The user role can be one of the
     * following:.</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, datasets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon Amazon
     * QuickSight settings.</p> </li> <li> <p> <code>RESTRICTED_READER</code>: This
     * role isn't currently available for use.</p> </li> <li> <p>
     * <code>RESTRICTED_AUTHOR</code>: This role isn't currently available for use.</p>
     * </li> </ul>
     */
    inline void SetRole(const UserRole& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon QuickSight role for the user. The user role can be one of the
     * following:.</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, datasets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon Amazon
     * QuickSight settings.</p> </li> <li> <p> <code>RESTRICTED_READER</code>: This
     * role isn't currently available for use.</p> </li> <li> <p>
     * <code>RESTRICTED_AUTHOR</code>: This role isn't currently available for use.</p>
     * </li> </ul>
     */
    inline void SetRole(UserRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon QuickSight role for the user. The user role can be one of the
     * following:.</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, datasets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon Amazon
     * QuickSight settings.</p> </li> <li> <p> <code>RESTRICTED_READER</code>: This
     * role isn't currently available for use.</p> </li> <li> <p>
     * <code>RESTRICTED_AUTHOR</code>: This role isn't currently available for use.</p>
     * </li> </ul>
     */
    inline User& WithRole(const UserRole& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon QuickSight role for the user. The user role can be one of the
     * following:.</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, datasets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon Amazon
     * QuickSight settings.</p> </li> <li> <p> <code>RESTRICTED_READER</code>: This
     * role isn't currently available for use.</p> </li> <li> <p>
     * <code>RESTRICTED_AUTHOR</code>: This role isn't currently available for use.</p>
     * </li> </ul>
     */
    inline User& WithRole(UserRole&& value) { SetRole(std::move(value)); return *this;}


    /**
     * <p>The type of identity authentication used by the user.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>The type of identity authentication used by the user.</p>
     */
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }

    /**
     * <p>The type of identity authentication used by the user.</p>
     */
    inline void SetIdentityType(const IdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }

    /**
     * <p>The type of identity authentication used by the user.</p>
     */
    inline void SetIdentityType(IdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = std::move(value); }

    /**
     * <p>The type of identity authentication used by the user.</p>
     */
    inline User& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>The type of identity authentication used by the user.</p>
     */
    inline User& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}


    /**
     * <p>The active status of user. When you create an Amazon QuickSight user that’s
     * not an IAM user or an Active Directory user, that user is inactive until they
     * sign in and provide a password.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>The active status of user. When you create an Amazon QuickSight user that’s
     * not an IAM user or an Active Directory user, that user is inactive until they
     * sign in and provide a password.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>The active status of user. When you create an Amazon QuickSight user that’s
     * not an IAM user or an Active Directory user, that user is inactive until they
     * sign in and provide a password.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>The active status of user. When you create an Amazon QuickSight user that’s
     * not an IAM user or an Active Directory user, that user is inactive until they
     * sign in and provide a password.</p>
     */
    inline User& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>The principal ID of the user.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline User& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The principal ID of the user.</p>
     */
    inline User& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The principal ID of the user.</p>
     */
    inline User& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The custom permissions profile associated with this user.</p>
     */
    inline const Aws::String& GetCustomPermissionsName() const{ return m_customPermissionsName; }

    /**
     * <p>The custom permissions profile associated with this user.</p>
     */
    inline bool CustomPermissionsNameHasBeenSet() const { return m_customPermissionsNameHasBeenSet; }

    /**
     * <p>The custom permissions profile associated with this user.</p>
     */
    inline void SetCustomPermissionsName(const Aws::String& value) { m_customPermissionsNameHasBeenSet = true; m_customPermissionsName = value; }

    /**
     * <p>The custom permissions profile associated with this user.</p>
     */
    inline void SetCustomPermissionsName(Aws::String&& value) { m_customPermissionsNameHasBeenSet = true; m_customPermissionsName = std::move(value); }

    /**
     * <p>The custom permissions profile associated with this user.</p>
     */
    inline void SetCustomPermissionsName(const char* value) { m_customPermissionsNameHasBeenSet = true; m_customPermissionsName.assign(value); }

    /**
     * <p>The custom permissions profile associated with this user.</p>
     */
    inline User& WithCustomPermissionsName(const Aws::String& value) { SetCustomPermissionsName(value); return *this;}

    /**
     * <p>The custom permissions profile associated with this user.</p>
     */
    inline User& WithCustomPermissionsName(Aws::String&& value) { SetCustomPermissionsName(std::move(value)); return *this;}

    /**
     * <p>The custom permissions profile associated with this user.</p>
     */
    inline User& WithCustomPermissionsName(const char* value) { SetCustomPermissionsName(value); return *this;}


    /**
     * <p>The type of supported external login provider that provides identity to let
     * the user federate into Amazon QuickSight with an associated IAM role. The type
     * can be one of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon
     * Cognito. The provider URL is cognito-identity.amazonaws.com.</p> </li> <li> <p>
     * <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider.</p> </li> </ul>
     */
    inline const Aws::String& GetExternalLoginFederationProviderType() const{ return m_externalLoginFederationProviderType; }

    /**
     * <p>The type of supported external login provider that provides identity to let
     * the user federate into Amazon QuickSight with an associated IAM role. The type
     * can be one of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon
     * Cognito. The provider URL is cognito-identity.amazonaws.com.</p> </li> <li> <p>
     * <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider.</p> </li> </ul>
     */
    inline bool ExternalLoginFederationProviderTypeHasBeenSet() const { return m_externalLoginFederationProviderTypeHasBeenSet; }

    /**
     * <p>The type of supported external login provider that provides identity to let
     * the user federate into Amazon QuickSight with an associated IAM role. The type
     * can be one of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon
     * Cognito. The provider URL is cognito-identity.amazonaws.com.</p> </li> <li> <p>
     * <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider.</p> </li> </ul>
     */
    inline void SetExternalLoginFederationProviderType(const Aws::String& value) { m_externalLoginFederationProviderTypeHasBeenSet = true; m_externalLoginFederationProviderType = value; }

    /**
     * <p>The type of supported external login provider that provides identity to let
     * the user federate into Amazon QuickSight with an associated IAM role. The type
     * can be one of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon
     * Cognito. The provider URL is cognito-identity.amazonaws.com.</p> </li> <li> <p>
     * <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider.</p> </li> </ul>
     */
    inline void SetExternalLoginFederationProviderType(Aws::String&& value) { m_externalLoginFederationProviderTypeHasBeenSet = true; m_externalLoginFederationProviderType = std::move(value); }

    /**
     * <p>The type of supported external login provider that provides identity to let
     * the user federate into Amazon QuickSight with an associated IAM role. The type
     * can be one of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon
     * Cognito. The provider URL is cognito-identity.amazonaws.com.</p> </li> <li> <p>
     * <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider.</p> </li> </ul>
     */
    inline void SetExternalLoginFederationProviderType(const char* value) { m_externalLoginFederationProviderTypeHasBeenSet = true; m_externalLoginFederationProviderType.assign(value); }

    /**
     * <p>The type of supported external login provider that provides identity to let
     * the user federate into Amazon QuickSight with an associated IAM role. The type
     * can be one of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon
     * Cognito. The provider URL is cognito-identity.amazonaws.com.</p> </li> <li> <p>
     * <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider.</p> </li> </ul>
     */
    inline User& WithExternalLoginFederationProviderType(const Aws::String& value) { SetExternalLoginFederationProviderType(value); return *this;}

    /**
     * <p>The type of supported external login provider that provides identity to let
     * the user federate into Amazon QuickSight with an associated IAM role. The type
     * can be one of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon
     * Cognito. The provider URL is cognito-identity.amazonaws.com.</p> </li> <li> <p>
     * <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider.</p> </li> </ul>
     */
    inline User& WithExternalLoginFederationProviderType(Aws::String&& value) { SetExternalLoginFederationProviderType(std::move(value)); return *this;}

    /**
     * <p>The type of supported external login provider that provides identity to let
     * the user federate into Amazon QuickSight with an associated IAM role. The type
     * can be one of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon
     * Cognito. The provider URL is cognito-identity.amazonaws.com.</p> </li> <li> <p>
     * <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider.</p> </li> </ul>
     */
    inline User& WithExternalLoginFederationProviderType(const char* value) { SetExternalLoginFederationProviderType(value); return *this;}


    /**
     * <p>The URL of the external login provider.</p>
     */
    inline const Aws::String& GetExternalLoginFederationProviderUrl() const{ return m_externalLoginFederationProviderUrl; }

    /**
     * <p>The URL of the external login provider.</p>
     */
    inline bool ExternalLoginFederationProviderUrlHasBeenSet() const { return m_externalLoginFederationProviderUrlHasBeenSet; }

    /**
     * <p>The URL of the external login provider.</p>
     */
    inline void SetExternalLoginFederationProviderUrl(const Aws::String& value) { m_externalLoginFederationProviderUrlHasBeenSet = true; m_externalLoginFederationProviderUrl = value; }

    /**
     * <p>The URL of the external login provider.</p>
     */
    inline void SetExternalLoginFederationProviderUrl(Aws::String&& value) { m_externalLoginFederationProviderUrlHasBeenSet = true; m_externalLoginFederationProviderUrl = std::move(value); }

    /**
     * <p>The URL of the external login provider.</p>
     */
    inline void SetExternalLoginFederationProviderUrl(const char* value) { m_externalLoginFederationProviderUrlHasBeenSet = true; m_externalLoginFederationProviderUrl.assign(value); }

    /**
     * <p>The URL of the external login provider.</p>
     */
    inline User& WithExternalLoginFederationProviderUrl(const Aws::String& value) { SetExternalLoginFederationProviderUrl(value); return *this;}

    /**
     * <p>The URL of the external login provider.</p>
     */
    inline User& WithExternalLoginFederationProviderUrl(Aws::String&& value) { SetExternalLoginFederationProviderUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the external login provider.</p>
     */
    inline User& WithExternalLoginFederationProviderUrl(const char* value) { SetExternalLoginFederationProviderUrl(value); return *this;}


    /**
     * <p>The identity ID for the user in the external login provider.</p>
     */
    inline const Aws::String& GetExternalLoginId() const{ return m_externalLoginId; }

    /**
     * <p>The identity ID for the user in the external login provider.</p>
     */
    inline bool ExternalLoginIdHasBeenSet() const { return m_externalLoginIdHasBeenSet; }

    /**
     * <p>The identity ID for the user in the external login provider.</p>
     */
    inline void SetExternalLoginId(const Aws::String& value) { m_externalLoginIdHasBeenSet = true; m_externalLoginId = value; }

    /**
     * <p>The identity ID for the user in the external login provider.</p>
     */
    inline void SetExternalLoginId(Aws::String&& value) { m_externalLoginIdHasBeenSet = true; m_externalLoginId = std::move(value); }

    /**
     * <p>The identity ID for the user in the external login provider.</p>
     */
    inline void SetExternalLoginId(const char* value) { m_externalLoginIdHasBeenSet = true; m_externalLoginId.assign(value); }

    /**
     * <p>The identity ID for the user in the external login provider.</p>
     */
    inline User& WithExternalLoginId(const Aws::String& value) { SetExternalLoginId(value); return *this;}

    /**
     * <p>The identity ID for the user in the external login provider.</p>
     */
    inline User& WithExternalLoginId(Aws::String&& value) { SetExternalLoginId(std::move(value)); return *this;}

    /**
     * <p>The identity ID for the user in the external login provider.</p>
     */
    inline User& WithExternalLoginId(const char* value) { SetExternalLoginId(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    UserRole m_role;
    bool m_roleHasBeenSet = false;

    IdentityType m_identityType;
    bool m_identityTypeHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_customPermissionsName;
    bool m_customPermissionsNameHasBeenSet = false;

    Aws::String m_externalLoginFederationProviderType;
    bool m_externalLoginFederationProviderTypeHasBeenSet = false;

    Aws::String m_externalLoginFederationProviderUrl;
    bool m_externalLoginFederationProviderUrlHasBeenSet = false;

    Aws::String m_externalLoginId;
    bool m_externalLoginIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
