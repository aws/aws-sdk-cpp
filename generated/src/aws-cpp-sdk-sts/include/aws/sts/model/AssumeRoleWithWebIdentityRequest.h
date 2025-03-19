/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/STSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sts/model/PolicyDescriptorType.h>
#include <utility>

namespace Aws
{
namespace STS
{
namespace Model
{

  /**
   */
  class AssumeRoleWithWebIdentityRequest : public STSRequest
  {
  public:
    AWS_STS_API AssumeRoleWithWebIdentityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssumeRoleWithWebIdentity"; }

    AWS_STS_API Aws::String SerializePayload() const override;

  protected:
    AWS_STS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
     *  <p>Additional considerations apply to Amazon Cognito identity pools that
     * assume <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies-cross-account-resource-access.html">cross-account
     * IAM roles</a>. The trust policies of these roles must accept the
     * <code>cognito-identity.amazonaws.com</code> service principal and must contain
     * the <code>cognito-identity.amazonaws.com:aud</code> condition key to restrict
     * role assumption to users from your intended identity pools. A policy that trusts
     * Amazon Cognito identity pools without this condition creates a risk that a user
     * from an unintended identity pool can assume the role. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/iam-roles.html#trust-policies">
     * Trust policies for IAM roles in Basic (Classic) authentication </a> in the
     * <i>Amazon Cognito Developer Guide</i>.</p> 
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AssumeRoleWithWebIdentityRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element.</p> <p>For
     * security purposes, administrators can view this field in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/cloudtrail-integration.html#cloudtrail-integration_signin-tempcreds">CloudTrail
     * logs</a> to help identify who performed an action in Amazon Web Services. Your
     * administrator might require that you specify your user name as the session name
     * when you assume the role. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_iam-condition-keys.html#ck_rolesessionname">
     * <code>sts:RoleSessionName</code> </a>.</p> <p>The regex used to validate this
     * parameter is a string of characters consisting of upper- and lower-case
     * alphanumeric characters with no spaces. You can also include underscores or any
     * of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetRoleSessionName() const { return m_roleSessionName; }
    inline bool RoleSessionNameHasBeenSet() const { return m_roleSessionNameHasBeenSet; }
    template<typename RoleSessionNameT = Aws::String>
    void SetRoleSessionName(RoleSessionNameT&& value) { m_roleSessionNameHasBeenSet = true; m_roleSessionName = std::forward<RoleSessionNameT>(value); }
    template<typename RoleSessionNameT = Aws::String>
    AssumeRoleWithWebIdentityRequest& WithRoleSessionName(RoleSessionNameT&& value) { SetRoleSessionName(std::forward<RoleSessionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth 2.0 access token or OpenID Connect ID token that is provided by the
     * identity provider. Your application must get this token by authenticating the
     * user who is using your application with a web identity provider before the
     * application makes an <code>AssumeRoleWithWebIdentity</code> call. Timestamps in
     * the token must be formatted as either an integer or a long integer. Tokens must
     * be signed using either RSA keys (RS256, RS384, or RS512) or ECDSA keys (ES256,
     * ES384, or ES512).</p>
     */
    inline const Aws::String& GetWebIdentityToken() const { return m_webIdentityToken; }
    inline bool WebIdentityTokenHasBeenSet() const { return m_webIdentityTokenHasBeenSet; }
    template<typename WebIdentityTokenT = Aws::String>
    void SetWebIdentityToken(WebIdentityTokenT&& value) { m_webIdentityTokenHasBeenSet = true; m_webIdentityToken = std::forward<WebIdentityTokenT>(value); }
    template<typename WebIdentityTokenT = Aws::String>
    AssumeRoleWithWebIdentityRequest& WithWebIdentityToken(WebIdentityTokenT&& value) { SetWebIdentityToken(std::forward<WebIdentityTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified host component of the domain name of the OAuth 2.0
     * identity provider. Do not specify this value for an OpenID Connect identity
     * provider.</p> <p>Currently <code>www.amazon.com</code> and
     * <code>graph.facebook.com</code> are the only supported identity providers for
     * OAuth 2.0 access tokens. Do not include URL schemes and port numbers.</p> <p>Do
     * not specify this value for OpenID Connect ID tokens.</p>
     */
    inline const Aws::String& GetProviderId() const { return m_providerId; }
    inline bool ProviderIdHasBeenSet() const { return m_providerIdHasBeenSet; }
    template<typename ProviderIdT = Aws::String>
    void SetProviderId(ProviderIdT&& value) { m_providerIdHasBeenSet = true; m_providerId = std::forward<ProviderIdT>(value); }
    template<typename ProviderIdT = Aws::String>
    AssumeRoleWithWebIdentityRequest& WithProviderId(ProviderIdT&& value) { SetProviderId(std::forward<ProviderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as managed session policies. The policies must exist in the same account as
     * the role.</p> <p>This parameter is optional. You can provide up to 10 managed
     * policy ARNs. However, the plaintext that you use for both inline and managed
     * session policies can't exceed 2,048 characters. For more information about ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * Amazon Web Services General Reference.</p>  <p>An Amazon Web Services
     * conversion compresses the passed inline session policy, managed policy ARNs, and
     * session tags into a packed binary format that has a separate limit. Your request
     * can fail for this limit even if your plaintext meets the other requirements. The
     * <code>PackedPolicySize</code> response element indicates by percentage how close
     * the policies and tags for your request are to the upper size limit.</p> 
     * <p>Passing policies to this operation returns new temporary credentials. The
     * resulting session's permissions are the intersection of the role's
     * identity-based policy and the session policies. You can use the role's temporary
     * credentials in subsequent Amazon Web Services API calls to access resources in
     * the account that owns the role. You cannot use session policies to grant more
     * permissions than those allowed by the identity-based policy of the role that is
     * being assumed. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::Vector<PolicyDescriptorType>& GetPolicyArns() const { return m_policyArns; }
    inline bool PolicyArnsHasBeenSet() const { return m_policyArnsHasBeenSet; }
    template<typename PolicyArnsT = Aws::Vector<PolicyDescriptorType>>
    void SetPolicyArns(PolicyArnsT&& value) { m_policyArnsHasBeenSet = true; m_policyArns = std::forward<PolicyArnsT>(value); }
    template<typename PolicyArnsT = Aws::Vector<PolicyDescriptorType>>
    AssumeRoleWithWebIdentityRequest& WithPolicyArns(PolicyArnsT&& value) { SetPolicyArns(std::forward<PolicyArnsT>(value)); return *this;}
    template<typename PolicyArnsT = PolicyDescriptorType>
    AssumeRoleWithWebIdentityRequest& AddPolicyArns(PolicyArnsT&& value) { m_policyArnsHasBeenSet = true; m_policyArns.emplace_back(std::forward<PolicyArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An IAM policy in JSON format that you want to use as an inline session
     * policy.</p> <p>This parameter is optional. Passing policies to this operation
     * returns new temporary credentials. The resulting session's permissions are the
     * intersection of the role's identity-based policy and the session policies. You
     * can use the role's temporary credentials in subsequent Amazon Web Services API
     * calls to access resources in the account that owns the role. You cannot use
     * session policies to grant more permissions than those allowed by the
     * identity-based policy of the role that is being assumed. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <p>The plaintext that you use for
     * both inline and managed session policies can't exceed 2,048 characters. The JSON
     * policy characters can be any ASCII character from the space character to the end
     * of the valid character list (\u0020 through \u00FF). It can also include the tab
     * (\u0009), linefeed (\u000A), and carriage return (\u000D) characters.</p> <p>For
     * more information about role session permissions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * policies</a>.</p>  <p>An Amazon Web Services conversion compresses the
     * passed inline session policy, managed policy ARNs, and session tags into a
     * packed binary format that has a separate limit. Your request can fail for this
     * limit even if your plaintext meets the other requirements. The
     * <code>PackedPolicySize</code> response element indicates by percentage how close
     * the policies and tags for your request are to the upper size limit.</p> 
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    AssumeRoleWithWebIdentityRequest& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds, of the role session. The value can range from 900
     * seconds (15 minutes) up to the maximum session duration setting for the role.
     * This setting can have a value from 1 hour to 12 hours. If you specify a value
     * higher than this setting, the operation fails. For example, if you specify a
     * session duration of 12 hours, but your administrator set the maximum session
     * duration to 6 hours, your operation fails. To learn how to view the maximum
     * value for your role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html#id_roles_use_view-role-max-session">View
     * the Maximum Session Duration Setting for a Role</a> in the <i>IAM User
     * Guide</i>.</p> <p>By default, the value is set to <code>3600</code> seconds.
     * </p>  <p>The <code>DurationSeconds</code> parameter is separate from the
     * duration of a console session that you might request using the returned
     * credentials. The request to the federation endpoint for a console sign-in token
     * takes a <code>SessionDuration</code> parameter that specifies the maximum length
     * of the console session. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-custom-url.html">Creating
     * a URL that Enables Federated Users to Access the Amazon Web Services Management
     * Console</a> in the <i>IAM User Guide</i>.</p> 
     */
    inline int GetDurationSeconds() const { return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline AssumeRoleWithWebIdentityRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_roleSessionName;
    bool m_roleSessionNameHasBeenSet = false;

    Aws::String m_webIdentityToken;
    bool m_webIdentityTokenHasBeenSet = false;

    Aws::String m_providerId;
    bool m_providerIdHasBeenSet = false;

    Aws::Vector<PolicyDescriptorType> m_policyArns;
    bool m_policyArnsHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    int m_durationSeconds{0};
    bool m_durationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
