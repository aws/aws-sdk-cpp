/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/UserRole.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateUserRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline UpdateUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline UpdateUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline UpdateUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The ID for the Amazon Web Services account that the user is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the Amazon Web Services account that the user is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the Amazon Web Services account that the user is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the Amazon Web Services account that the user is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services account that the user is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services account that the user is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline UpdateUserRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that the user is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline UpdateUserRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that the user is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline UpdateUserRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline UpdateUserRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline UpdateUserRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline UpdateUserRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline UpdateUserRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline UpdateUserRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline UpdateUserRequest& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The Amazon QuickSight role of the user. The role can be one of the following
     * default security cohorts:</p> <ul> <li> <p> <code>READER</code>: A user who has
     * read-only access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user
     * who can create data sources, datasets, analyses, and dashboards.</p> </li> <li>
     * <p> <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul> <p>The name of the Amazon QuickSight role
     * is invisible to the user except for the console screens dealing with
     * permissions.</p>
     */
    inline const UserRole& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon QuickSight role of the user. The role can be one of the following
     * default security cohorts:</p> <ul> <li> <p> <code>READER</code>: A user who has
     * read-only access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user
     * who can create data sources, datasets, analyses, and dashboards.</p> </li> <li>
     * <p> <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul> <p>The name of the Amazon QuickSight role
     * is invisible to the user except for the console screens dealing with
     * permissions.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The Amazon QuickSight role of the user. The role can be one of the following
     * default security cohorts:</p> <ul> <li> <p> <code>READER</code>: A user who has
     * read-only access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user
     * who can create data sources, datasets, analyses, and dashboards.</p> </li> <li>
     * <p> <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul> <p>The name of the Amazon QuickSight role
     * is invisible to the user except for the console screens dealing with
     * permissions.</p>
     */
    inline void SetRole(const UserRole& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon QuickSight role of the user. The role can be one of the following
     * default security cohorts:</p> <ul> <li> <p> <code>READER</code>: A user who has
     * read-only access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user
     * who can create data sources, datasets, analyses, and dashboards.</p> </li> <li>
     * <p> <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul> <p>The name of the Amazon QuickSight role
     * is invisible to the user except for the console screens dealing with
     * permissions.</p>
     */
    inline void SetRole(UserRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon QuickSight role of the user. The role can be one of the following
     * default security cohorts:</p> <ul> <li> <p> <code>READER</code>: A user who has
     * read-only access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user
     * who can create data sources, datasets, analyses, and dashboards.</p> </li> <li>
     * <p> <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul> <p>The name of the Amazon QuickSight role
     * is invisible to the user except for the console screens dealing with
     * permissions.</p>
     */
    inline UpdateUserRequest& WithRole(const UserRole& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon QuickSight role of the user. The role can be one of the following
     * default security cohorts:</p> <ul> <li> <p> <code>READER</code>: A user who has
     * read-only access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user
     * who can create data sources, datasets, analyses, and dashboards.</p> </li> <li>
     * <p> <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul> <p>The name of the Amazon QuickSight role
     * is invisible to the user except for the console screens dealing with
     * permissions.</p>
     */
    inline UpdateUserRequest& WithRole(UserRole&& value) { SetRole(std::move(value)); return *this;}


    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the Amazon QuickSight
     * console. Then, you use the <code>RegisterUser</code> API operation to assign the
     * named set of permissions to a Amazon QuickSight user. </p> <p>Amazon QuickSight
     * custom permissions are applied through IAM policies. Therefore, they override
     * the permissions typically granted by assigning Amazon QuickSight users to one of
     * the default security cohorts in Amazon QuickSight (admin, author, reader).</p>
     * <p>This feature is available only to Amazon QuickSight Enterprise edition
     * subscriptions.</p>
     */
    inline const Aws::String& GetCustomPermissionsName() const{ return m_customPermissionsName; }

    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the Amazon QuickSight
     * console. Then, you use the <code>RegisterUser</code> API operation to assign the
     * named set of permissions to a Amazon QuickSight user. </p> <p>Amazon QuickSight
     * custom permissions are applied through IAM policies. Therefore, they override
     * the permissions typically granted by assigning Amazon QuickSight users to one of
     * the default security cohorts in Amazon QuickSight (admin, author, reader).</p>
     * <p>This feature is available only to Amazon QuickSight Enterprise edition
     * subscriptions.</p>
     */
    inline bool CustomPermissionsNameHasBeenSet() const { return m_customPermissionsNameHasBeenSet; }

    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the Amazon QuickSight
     * console. Then, you use the <code>RegisterUser</code> API operation to assign the
     * named set of permissions to a Amazon QuickSight user. </p> <p>Amazon QuickSight
     * custom permissions are applied through IAM policies. Therefore, they override
     * the permissions typically granted by assigning Amazon QuickSight users to one of
     * the default security cohorts in Amazon QuickSight (admin, author, reader).</p>
     * <p>This feature is available only to Amazon QuickSight Enterprise edition
     * subscriptions.</p>
     */
    inline void SetCustomPermissionsName(const Aws::String& value) { m_customPermissionsNameHasBeenSet = true; m_customPermissionsName = value; }

    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the Amazon QuickSight
     * console. Then, you use the <code>RegisterUser</code> API operation to assign the
     * named set of permissions to a Amazon QuickSight user. </p> <p>Amazon QuickSight
     * custom permissions are applied through IAM policies. Therefore, they override
     * the permissions typically granted by assigning Amazon QuickSight users to one of
     * the default security cohorts in Amazon QuickSight (admin, author, reader).</p>
     * <p>This feature is available only to Amazon QuickSight Enterprise edition
     * subscriptions.</p>
     */
    inline void SetCustomPermissionsName(Aws::String&& value) { m_customPermissionsNameHasBeenSet = true; m_customPermissionsName = std::move(value); }

    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the Amazon QuickSight
     * console. Then, you use the <code>RegisterUser</code> API operation to assign the
     * named set of permissions to a Amazon QuickSight user. </p> <p>Amazon QuickSight
     * custom permissions are applied through IAM policies. Therefore, they override
     * the permissions typically granted by assigning Amazon QuickSight users to one of
     * the default security cohorts in Amazon QuickSight (admin, author, reader).</p>
     * <p>This feature is available only to Amazon QuickSight Enterprise edition
     * subscriptions.</p>
     */
    inline void SetCustomPermissionsName(const char* value) { m_customPermissionsNameHasBeenSet = true; m_customPermissionsName.assign(value); }

    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the Amazon QuickSight
     * console. Then, you use the <code>RegisterUser</code> API operation to assign the
     * named set of permissions to a Amazon QuickSight user. </p> <p>Amazon QuickSight
     * custom permissions are applied through IAM policies. Therefore, they override
     * the permissions typically granted by assigning Amazon QuickSight users to one of
     * the default security cohorts in Amazon QuickSight (admin, author, reader).</p>
     * <p>This feature is available only to Amazon QuickSight Enterprise edition
     * subscriptions.</p>
     */
    inline UpdateUserRequest& WithCustomPermissionsName(const Aws::String& value) { SetCustomPermissionsName(value); return *this;}

    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the Amazon QuickSight
     * console. Then, you use the <code>RegisterUser</code> API operation to assign the
     * named set of permissions to a Amazon QuickSight user. </p> <p>Amazon QuickSight
     * custom permissions are applied through IAM policies. Therefore, they override
     * the permissions typically granted by assigning Amazon QuickSight users to one of
     * the default security cohorts in Amazon QuickSight (admin, author, reader).</p>
     * <p>This feature is available only to Amazon QuickSight Enterprise edition
     * subscriptions.</p>
     */
    inline UpdateUserRequest& WithCustomPermissionsName(Aws::String&& value) { SetCustomPermissionsName(std::move(value)); return *this;}

    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the Amazon QuickSight
     * console. Then, you use the <code>RegisterUser</code> API operation to assign the
     * named set of permissions to a Amazon QuickSight user. </p> <p>Amazon QuickSight
     * custom permissions are applied through IAM policies. Therefore, they override
     * the permissions typically granted by assigning Amazon QuickSight users to one of
     * the default security cohorts in Amazon QuickSight (admin, author, reader).</p>
     * <p>This feature is available only to Amazon QuickSight Enterprise edition
     * subscriptions.</p>
     */
    inline UpdateUserRequest& WithCustomPermissionsName(const char* value) { SetCustomPermissionsName(value); return *this;}


    /**
     * <p>A flag that you use to indicate that you want to remove all custom
     * permissions from this user. Using this parameter resets the user to the state it
     * was in before a custom permissions profile was applied. This parameter defaults
     * to NULL and it doesn't accept any other value.</p>
     */
    inline bool GetUnapplyCustomPermissions() const{ return m_unapplyCustomPermissions; }

    /**
     * <p>A flag that you use to indicate that you want to remove all custom
     * permissions from this user. Using this parameter resets the user to the state it
     * was in before a custom permissions profile was applied. This parameter defaults
     * to NULL and it doesn't accept any other value.</p>
     */
    inline bool UnapplyCustomPermissionsHasBeenSet() const { return m_unapplyCustomPermissionsHasBeenSet; }

    /**
     * <p>A flag that you use to indicate that you want to remove all custom
     * permissions from this user. Using this parameter resets the user to the state it
     * was in before a custom permissions profile was applied. This parameter defaults
     * to NULL and it doesn't accept any other value.</p>
     */
    inline void SetUnapplyCustomPermissions(bool value) { m_unapplyCustomPermissionsHasBeenSet = true; m_unapplyCustomPermissions = value; }

    /**
     * <p>A flag that you use to indicate that you want to remove all custom
     * permissions from this user. Using this parameter resets the user to the state it
     * was in before a custom permissions profile was applied. This parameter defaults
     * to NULL and it doesn't accept any other value.</p>
     */
    inline UpdateUserRequest& WithUnapplyCustomPermissions(bool value) { SetUnapplyCustomPermissions(value); return *this;}


    /**
     * <p>The type of supported external login provider that provides identity to let a
     * user federate into Amazon QuickSight with an associated Identity and Access
     * Management(IAM) role. The type of supported external login provider can be one
     * of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon Cognito. The
     * provider URL is cognito-identity.amazonaws.com. When choosing the
     * <code>COGNITO</code> provider type, don’t use the "CustomFederationProviderUrl"
     * parameter which is only needed when the external provider is custom.</p> </li>
     * <li> <p> <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider. When
     * choosing <code>CUSTOM_OIDC</code> type, use the
     * <code>CustomFederationProviderUrl</code> parameter to provide the custom OIDC
     * provider URL.</p> </li> <li> <p> <code>NONE</code>: This clears all the
     * previously saved external login information for a user. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DescribeUser.html">DescribeUser</a>
     * </code> API operation to check the external login information.</p> </li> </ul>
     */
    inline const Aws::String& GetExternalLoginFederationProviderType() const{ return m_externalLoginFederationProviderType; }

    /**
     * <p>The type of supported external login provider that provides identity to let a
     * user federate into Amazon QuickSight with an associated Identity and Access
     * Management(IAM) role. The type of supported external login provider can be one
     * of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon Cognito. The
     * provider URL is cognito-identity.amazonaws.com. When choosing the
     * <code>COGNITO</code> provider type, don’t use the "CustomFederationProviderUrl"
     * parameter which is only needed when the external provider is custom.</p> </li>
     * <li> <p> <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider. When
     * choosing <code>CUSTOM_OIDC</code> type, use the
     * <code>CustomFederationProviderUrl</code> parameter to provide the custom OIDC
     * provider URL.</p> </li> <li> <p> <code>NONE</code>: This clears all the
     * previously saved external login information for a user. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DescribeUser.html">DescribeUser</a>
     * </code> API operation to check the external login information.</p> </li> </ul>
     */
    inline bool ExternalLoginFederationProviderTypeHasBeenSet() const { return m_externalLoginFederationProviderTypeHasBeenSet; }

    /**
     * <p>The type of supported external login provider that provides identity to let a
     * user federate into Amazon QuickSight with an associated Identity and Access
     * Management(IAM) role. The type of supported external login provider can be one
     * of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon Cognito. The
     * provider URL is cognito-identity.amazonaws.com. When choosing the
     * <code>COGNITO</code> provider type, don’t use the "CustomFederationProviderUrl"
     * parameter which is only needed when the external provider is custom.</p> </li>
     * <li> <p> <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider. When
     * choosing <code>CUSTOM_OIDC</code> type, use the
     * <code>CustomFederationProviderUrl</code> parameter to provide the custom OIDC
     * provider URL.</p> </li> <li> <p> <code>NONE</code>: This clears all the
     * previously saved external login information for a user. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DescribeUser.html">DescribeUser</a>
     * </code> API operation to check the external login information.</p> </li> </ul>
     */
    inline void SetExternalLoginFederationProviderType(const Aws::String& value) { m_externalLoginFederationProviderTypeHasBeenSet = true; m_externalLoginFederationProviderType = value; }

    /**
     * <p>The type of supported external login provider that provides identity to let a
     * user federate into Amazon QuickSight with an associated Identity and Access
     * Management(IAM) role. The type of supported external login provider can be one
     * of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon Cognito. The
     * provider URL is cognito-identity.amazonaws.com. When choosing the
     * <code>COGNITO</code> provider type, don’t use the "CustomFederationProviderUrl"
     * parameter which is only needed when the external provider is custom.</p> </li>
     * <li> <p> <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider. When
     * choosing <code>CUSTOM_OIDC</code> type, use the
     * <code>CustomFederationProviderUrl</code> parameter to provide the custom OIDC
     * provider URL.</p> </li> <li> <p> <code>NONE</code>: This clears all the
     * previously saved external login information for a user. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DescribeUser.html">DescribeUser</a>
     * </code> API operation to check the external login information.</p> </li> </ul>
     */
    inline void SetExternalLoginFederationProviderType(Aws::String&& value) { m_externalLoginFederationProviderTypeHasBeenSet = true; m_externalLoginFederationProviderType = std::move(value); }

    /**
     * <p>The type of supported external login provider that provides identity to let a
     * user federate into Amazon QuickSight with an associated Identity and Access
     * Management(IAM) role. The type of supported external login provider can be one
     * of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon Cognito. The
     * provider URL is cognito-identity.amazonaws.com. When choosing the
     * <code>COGNITO</code> provider type, don’t use the "CustomFederationProviderUrl"
     * parameter which is only needed when the external provider is custom.</p> </li>
     * <li> <p> <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider. When
     * choosing <code>CUSTOM_OIDC</code> type, use the
     * <code>CustomFederationProviderUrl</code> parameter to provide the custom OIDC
     * provider URL.</p> </li> <li> <p> <code>NONE</code>: This clears all the
     * previously saved external login information for a user. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DescribeUser.html">DescribeUser</a>
     * </code> API operation to check the external login information.</p> </li> </ul>
     */
    inline void SetExternalLoginFederationProviderType(const char* value) { m_externalLoginFederationProviderTypeHasBeenSet = true; m_externalLoginFederationProviderType.assign(value); }

    /**
     * <p>The type of supported external login provider that provides identity to let a
     * user federate into Amazon QuickSight with an associated Identity and Access
     * Management(IAM) role. The type of supported external login provider can be one
     * of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon Cognito. The
     * provider URL is cognito-identity.amazonaws.com. When choosing the
     * <code>COGNITO</code> provider type, don’t use the "CustomFederationProviderUrl"
     * parameter which is only needed when the external provider is custom.</p> </li>
     * <li> <p> <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider. When
     * choosing <code>CUSTOM_OIDC</code> type, use the
     * <code>CustomFederationProviderUrl</code> parameter to provide the custom OIDC
     * provider URL.</p> </li> <li> <p> <code>NONE</code>: This clears all the
     * previously saved external login information for a user. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DescribeUser.html">DescribeUser</a>
     * </code> API operation to check the external login information.</p> </li> </ul>
     */
    inline UpdateUserRequest& WithExternalLoginFederationProviderType(const Aws::String& value) { SetExternalLoginFederationProviderType(value); return *this;}

    /**
     * <p>The type of supported external login provider that provides identity to let a
     * user federate into Amazon QuickSight with an associated Identity and Access
     * Management(IAM) role. The type of supported external login provider can be one
     * of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon Cognito. The
     * provider URL is cognito-identity.amazonaws.com. When choosing the
     * <code>COGNITO</code> provider type, don’t use the "CustomFederationProviderUrl"
     * parameter which is only needed when the external provider is custom.</p> </li>
     * <li> <p> <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider. When
     * choosing <code>CUSTOM_OIDC</code> type, use the
     * <code>CustomFederationProviderUrl</code> parameter to provide the custom OIDC
     * provider URL.</p> </li> <li> <p> <code>NONE</code>: This clears all the
     * previously saved external login information for a user. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DescribeUser.html">DescribeUser</a>
     * </code> API operation to check the external login information.</p> </li> </ul>
     */
    inline UpdateUserRequest& WithExternalLoginFederationProviderType(Aws::String&& value) { SetExternalLoginFederationProviderType(std::move(value)); return *this;}

    /**
     * <p>The type of supported external login provider that provides identity to let a
     * user federate into Amazon QuickSight with an associated Identity and Access
     * Management(IAM) role. The type of supported external login provider can be one
     * of the following.</p> <ul> <li> <p> <code>COGNITO</code>: Amazon Cognito. The
     * provider URL is cognito-identity.amazonaws.com. When choosing the
     * <code>COGNITO</code> provider type, don’t use the "CustomFederationProviderUrl"
     * parameter which is only needed when the external provider is custom.</p> </li>
     * <li> <p> <code>CUSTOM_OIDC</code>: Custom OpenID Connect (OIDC) provider. When
     * choosing <code>CUSTOM_OIDC</code> type, use the
     * <code>CustomFederationProviderUrl</code> parameter to provide the custom OIDC
     * provider URL.</p> </li> <li> <p> <code>NONE</code>: This clears all the
     * previously saved external login information for a user. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DescribeUser.html">DescribeUser</a>
     * </code> API operation to check the external login information.</p> </li> </ul>
     */
    inline UpdateUserRequest& WithExternalLoginFederationProviderType(const char* value) { SetExternalLoginFederationProviderType(value); return *this;}


    /**
     * <p>The URL of the custom OpenID Connect (OIDC) provider that provides identity
     * to let a user federate into Amazon QuickSight with an associated Identity and
     * Access Management(IAM) role. This parameter should only be used when
     * <code>ExternalLoginFederationProviderType</code> parameter is set to
     * <code>CUSTOM_OIDC</code>.</p>
     */
    inline const Aws::String& GetCustomFederationProviderUrl() const{ return m_customFederationProviderUrl; }

    /**
     * <p>The URL of the custom OpenID Connect (OIDC) provider that provides identity
     * to let a user federate into Amazon QuickSight with an associated Identity and
     * Access Management(IAM) role. This parameter should only be used when
     * <code>ExternalLoginFederationProviderType</code> parameter is set to
     * <code>CUSTOM_OIDC</code>.</p>
     */
    inline bool CustomFederationProviderUrlHasBeenSet() const { return m_customFederationProviderUrlHasBeenSet; }

    /**
     * <p>The URL of the custom OpenID Connect (OIDC) provider that provides identity
     * to let a user federate into Amazon QuickSight with an associated Identity and
     * Access Management(IAM) role. This parameter should only be used when
     * <code>ExternalLoginFederationProviderType</code> parameter is set to
     * <code>CUSTOM_OIDC</code>.</p>
     */
    inline void SetCustomFederationProviderUrl(const Aws::String& value) { m_customFederationProviderUrlHasBeenSet = true; m_customFederationProviderUrl = value; }

    /**
     * <p>The URL of the custom OpenID Connect (OIDC) provider that provides identity
     * to let a user federate into Amazon QuickSight with an associated Identity and
     * Access Management(IAM) role. This parameter should only be used when
     * <code>ExternalLoginFederationProviderType</code> parameter is set to
     * <code>CUSTOM_OIDC</code>.</p>
     */
    inline void SetCustomFederationProviderUrl(Aws::String&& value) { m_customFederationProviderUrlHasBeenSet = true; m_customFederationProviderUrl = std::move(value); }

    /**
     * <p>The URL of the custom OpenID Connect (OIDC) provider that provides identity
     * to let a user federate into Amazon QuickSight with an associated Identity and
     * Access Management(IAM) role. This parameter should only be used when
     * <code>ExternalLoginFederationProviderType</code> parameter is set to
     * <code>CUSTOM_OIDC</code>.</p>
     */
    inline void SetCustomFederationProviderUrl(const char* value) { m_customFederationProviderUrlHasBeenSet = true; m_customFederationProviderUrl.assign(value); }

    /**
     * <p>The URL of the custom OpenID Connect (OIDC) provider that provides identity
     * to let a user federate into Amazon QuickSight with an associated Identity and
     * Access Management(IAM) role. This parameter should only be used when
     * <code>ExternalLoginFederationProviderType</code> parameter is set to
     * <code>CUSTOM_OIDC</code>.</p>
     */
    inline UpdateUserRequest& WithCustomFederationProviderUrl(const Aws::String& value) { SetCustomFederationProviderUrl(value); return *this;}

    /**
     * <p>The URL of the custom OpenID Connect (OIDC) provider that provides identity
     * to let a user federate into Amazon QuickSight with an associated Identity and
     * Access Management(IAM) role. This parameter should only be used when
     * <code>ExternalLoginFederationProviderType</code> parameter is set to
     * <code>CUSTOM_OIDC</code>.</p>
     */
    inline UpdateUserRequest& WithCustomFederationProviderUrl(Aws::String&& value) { SetCustomFederationProviderUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the custom OpenID Connect (OIDC) provider that provides identity
     * to let a user federate into Amazon QuickSight with an associated Identity and
     * Access Management(IAM) role. This parameter should only be used when
     * <code>ExternalLoginFederationProviderType</code> parameter is set to
     * <code>CUSTOM_OIDC</code>.</p>
     */
    inline UpdateUserRequest& WithCustomFederationProviderUrl(const char* value) { SetCustomFederationProviderUrl(value); return *this;}


    /**
     * <p>The identity ID for a user in the external login provider.</p>
     */
    inline const Aws::String& GetExternalLoginId() const{ return m_externalLoginId; }

    /**
     * <p>The identity ID for a user in the external login provider.</p>
     */
    inline bool ExternalLoginIdHasBeenSet() const { return m_externalLoginIdHasBeenSet; }

    /**
     * <p>The identity ID for a user in the external login provider.</p>
     */
    inline void SetExternalLoginId(const Aws::String& value) { m_externalLoginIdHasBeenSet = true; m_externalLoginId = value; }

    /**
     * <p>The identity ID for a user in the external login provider.</p>
     */
    inline void SetExternalLoginId(Aws::String&& value) { m_externalLoginIdHasBeenSet = true; m_externalLoginId = std::move(value); }

    /**
     * <p>The identity ID for a user in the external login provider.</p>
     */
    inline void SetExternalLoginId(const char* value) { m_externalLoginIdHasBeenSet = true; m_externalLoginId.assign(value); }

    /**
     * <p>The identity ID for a user in the external login provider.</p>
     */
    inline UpdateUserRequest& WithExternalLoginId(const Aws::String& value) { SetExternalLoginId(value); return *this;}

    /**
     * <p>The identity ID for a user in the external login provider.</p>
     */
    inline UpdateUserRequest& WithExternalLoginId(Aws::String&& value) { SetExternalLoginId(std::move(value)); return *this;}

    /**
     * <p>The identity ID for a user in the external login provider.</p>
     */
    inline UpdateUserRequest& WithExternalLoginId(const char* value) { SetExternalLoginId(value); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    UserRole m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_customPermissionsName;
    bool m_customPermissionsNameHasBeenSet = false;

    bool m_unapplyCustomPermissions;
    bool m_unapplyCustomPermissionsHasBeenSet = false;

    Aws::String m_externalLoginFederationProviderType;
    bool m_externalLoginFederationProviderTypeHasBeenSet = false;

    Aws::String m_customFederationProviderUrl;
    bool m_customFederationProviderUrlHasBeenSet = false;

    Aws::String m_externalLoginId;
    bool m_externalLoginIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
