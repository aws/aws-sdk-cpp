/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/model/IdentityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/UserRole.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/Tag.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class RegisterUserRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API RegisterUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterUser"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identity type that your QuickSight account uses to manage the identity of
     * users.</p>
     */
    inline IdentityType GetIdentityType() const { return m_identityType; }
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }
    inline void SetIdentityType(IdentityType value) { m_identityTypeHasBeenSet = true; m_identityType = value; }
    inline RegisterUserRequest& WithIdentityType(IdentityType value) { SetIdentityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the user that you want to register.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    RegisterUserRequest& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon QuickSight role for the user. The user role can be one of the
     * following:</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, datasets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> <li> <p> <code>READER_PRO</code>: Reader Pro adds
     * Generative BI capabilities to the Reader role. Reader Pros have access to Amazon
     * Q in QuickSight, can build stories with Amazon Q, and can generate executive
     * summaries from dashboards.</p> </li> <li> <p> <code>AUTHOR_PRO</code>: Author
     * Pro adds Generative BI capabilities to the Author role. Author Pros can author
     * dashboards with natural language with Amazon Q, build stories with Amazon Q,
     * create Topics for Q&amp;A, and generate executive summaries from dashboards.</p>
     * </li> <li> <p> <code>ADMIN_PRO</code>: Admin Pros are Author Pros who can also
     * manage Amazon QuickSight administrative settings. Admin Pro users are billed at
     * Author Pro pricing.</p> </li> <li> <p> <code>RESTRICTED_READER</code>: This role
     * isn't currently available for use.</p> </li> <li> <p>
     * <code>RESTRICTED_AUTHOR</code>: This role isn't currently available for use.</p>
     * </li> </ul>
     */
    inline UserRole GetUserRole() const { return m_userRole; }
    inline bool UserRoleHasBeenSet() const { return m_userRoleHasBeenSet; }
    inline void SetUserRole(UserRole value) { m_userRoleHasBeenSet = true; m_userRole = value; }
    inline RegisterUserRequest& WithUserRole(UserRole value) { SetUserRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM user or role that you are registering with Amazon
     * QuickSight. </p>
     */
    inline const Aws::String& GetIamArn() const { return m_iamArn; }
    inline bool IamArnHasBeenSet() const { return m_iamArnHasBeenSet; }
    template<typename IamArnT = Aws::String>
    void SetIamArn(IamArnT&& value) { m_iamArnHasBeenSet = true; m_iamArn = std::forward<IamArnT>(value); }
    template<typename IamArnT = Aws::String>
    RegisterUserRequest& WithIamArn(IamArnT&& value) { SetIamArn(std::forward<IamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You need to use this parameter only when you register one or more users using
     * an assumed IAM role. You don't need to provide the session name for other
     * scenarios, for example when you are registering an IAM user or an Amazon
     * QuickSight user. You can register multiple users using the same IAM role if each
     * user has a different session name. For more information on assuming IAM roles,
     * see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/sts/assume-role.html">
     * <code>assume-role</code> </a> in the <i>CLI Reference.</i> </p>
     */
    inline const Aws::String& GetSessionName() const { return m_sessionName; }
    inline bool SessionNameHasBeenSet() const { return m_sessionNameHasBeenSet; }
    template<typename SessionNameT = Aws::String>
    void SetSessionName(SessionNameT&& value) { m_sessionNameHasBeenSet = true; m_sessionName = std::forward<SessionNameT>(value); }
    template<typename SessionNameT = Aws::String>
    RegisterUserRequest& WithSessionName(SessionNameT&& value) { SetSessionName(std::forward<SessionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the Amazon Web Services account that the user is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    RegisterUserRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    RegisterUserRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon QuickSight user name that you want to create for the user you are
     * registering.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    RegisterUserRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>To add custom permissions to an
     * existing user, use <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateUser.html">UpdateUser</a>
     * </code> instead.</p> <p>A set of custom permissions includes any combination of
     * these restrictions. Currently, you need to create the profile names for custom
     * permission sets by using the QuickSight console. Then, you use the
     * <code>RegisterUser</code> API operation to assign the named set of permissions
     * to a QuickSight user. </p> <p>QuickSight custom permissions are applied through
     * IAM policies. Therefore, they override the permissions typically granted by
     * assigning QuickSight users to one of the default security cohorts in QuickSight
     * (admin, author, reader, admin pro, author pro, reader pro).</p> <p>This feature
     * is available only to QuickSight Enterprise edition subscriptions.</p>
     */
    inline const Aws::String& GetCustomPermissionsName() const { return m_customPermissionsName; }
    inline bool CustomPermissionsNameHasBeenSet() const { return m_customPermissionsNameHasBeenSet; }
    template<typename CustomPermissionsNameT = Aws::String>
    void SetCustomPermissionsName(CustomPermissionsNameT&& value) { m_customPermissionsNameHasBeenSet = true; m_customPermissionsName = std::forward<CustomPermissionsNameT>(value); }
    template<typename CustomPermissionsNameT = Aws::String>
    RegisterUserRequest& WithCustomPermissionsName(CustomPermissionsNameT&& value) { SetCustomPermissionsName(std::forward<CustomPermissionsNameT>(value)); return *this;}
    ///@}

    ///@{
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
     * provider URL.</p> </li> </ul>
     */
    inline const Aws::String& GetExternalLoginFederationProviderType() const { return m_externalLoginFederationProviderType; }
    inline bool ExternalLoginFederationProviderTypeHasBeenSet() const { return m_externalLoginFederationProviderTypeHasBeenSet; }
    template<typename ExternalLoginFederationProviderTypeT = Aws::String>
    void SetExternalLoginFederationProviderType(ExternalLoginFederationProviderTypeT&& value) { m_externalLoginFederationProviderTypeHasBeenSet = true; m_externalLoginFederationProviderType = std::forward<ExternalLoginFederationProviderTypeT>(value); }
    template<typename ExternalLoginFederationProviderTypeT = Aws::String>
    RegisterUserRequest& WithExternalLoginFederationProviderType(ExternalLoginFederationProviderTypeT&& value) { SetExternalLoginFederationProviderType(std::forward<ExternalLoginFederationProviderTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the custom OpenID Connect (OIDC) provider that provides identity
     * to let a user federate into QuickSight with an associated Identity and Access
     * Management(IAM) role. This parameter should only be used when
     * <code>ExternalLoginFederationProviderType</code> parameter is set to
     * <code>CUSTOM_OIDC</code>.</p>
     */
    inline const Aws::String& GetCustomFederationProviderUrl() const { return m_customFederationProviderUrl; }
    inline bool CustomFederationProviderUrlHasBeenSet() const { return m_customFederationProviderUrlHasBeenSet; }
    template<typename CustomFederationProviderUrlT = Aws::String>
    void SetCustomFederationProviderUrl(CustomFederationProviderUrlT&& value) { m_customFederationProviderUrlHasBeenSet = true; m_customFederationProviderUrl = std::forward<CustomFederationProviderUrlT>(value); }
    template<typename CustomFederationProviderUrlT = Aws::String>
    RegisterUserRequest& WithCustomFederationProviderUrl(CustomFederationProviderUrlT&& value) { SetCustomFederationProviderUrl(std::forward<CustomFederationProviderUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity ID for a user in the external login provider.</p>
     */
    inline const Aws::String& GetExternalLoginId() const { return m_externalLoginId; }
    inline bool ExternalLoginIdHasBeenSet() const { return m_externalLoginIdHasBeenSet; }
    template<typename ExternalLoginIdT = Aws::String>
    void SetExternalLoginId(ExternalLoginIdT&& value) { m_externalLoginIdHasBeenSet = true; m_externalLoginId = std::forward<ExternalLoginIdT>(value); }
    template<typename ExternalLoginIdT = Aws::String>
    RegisterUserRequest& WithExternalLoginId(ExternalLoginIdT&& value) { SetExternalLoginId(std::forward<ExternalLoginIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the user.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RegisterUserRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RegisterUserRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    IdentityType m_identityType{IdentityType::NOT_SET};
    bool m_identityTypeHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    UserRole m_userRole{UserRole::NOT_SET};
    bool m_userRoleHasBeenSet = false;

    Aws::String m_iamArn;
    bool m_iamArnHasBeenSet = false;

    Aws::String m_sessionName;
    bool m_sessionNameHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_customPermissionsName;
    bool m_customPermissionsNameHasBeenSet = false;

    Aws::String m_externalLoginFederationProviderType;
    bool m_externalLoginFederationProviderTypeHasBeenSet = false;

    Aws::String m_customFederationProviderUrl;
    bool m_customFederationProviderUrlHasBeenSet = false;

    Aws::String m_externalLoginId;
    bool m_externalLoginIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
