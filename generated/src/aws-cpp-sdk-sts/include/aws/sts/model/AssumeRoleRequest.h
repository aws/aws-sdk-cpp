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
#include <aws/sts/model/Tag.h>
#include <aws/sts/model/ProvidedContext.h>
#include <utility>

namespace Aws
{
namespace STS
{
namespace Model
{

  /**
   */
  class AssumeRoleRequest : public STSRequest
  {
  public:
    AWS_STS_API AssumeRoleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssumeRole"; }

    AWS_STS_API Aws::String SerializePayload() const override;

  protected:
    AWS_STS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AssumeRoleRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for the assumed role session.</p> <p>Use the role session name
     * to uniquely identify a session when the same role is assumed by different
     * principals or for different reasons. In cross-account scenarios, the role
     * session name is visible to, and can be logged by the account that owns the role.
     * The role session name is also used in the ARN of the assumed role principal.
     * This means that subsequent cross-account API requests that use the temporary
     * security credentials will expose the role session name to the external account
     * in their CloudTrail logs.</p> <p>For security purposes, administrators can view
     * this field in <a
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
    AssumeRoleRequest& WithRoleSessionName(RoleSessionNameT&& value) { SetRoleSessionName(std::forward<RoleSessionNameT>(value)); return *this;}
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
    AssumeRoleRequest& WithPolicyArns(PolicyArnsT&& value) { SetPolicyArns(std::forward<PolicyArnsT>(value)); return *this;}
    template<typename PolicyArnsT = PolicyDescriptorType>
    AssumeRoleRequest& AddPolicyArns(PolicyArnsT&& value) { m_policyArnsHasBeenSet = true; m_policyArns.emplace_back(std::forward<PolicyArnsT>(value)); return *this; }
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
     * (\u0009), linefeed (\u000A), and carriage return (\u000D) characters.</p> 
     * <p>An Amazon Web Services conversion compresses the passed inline session
     * policy, managed policy ARNs, and session tags into a packed binary format that
     * has a separate limit. Your request can fail for this limit even if your
     * plaintext meets the other requirements. The <code>PackedPolicySize</code>
     * response element indicates by percentage how close the policies and tags for
     * your request are to the upper size limit.</p>  <p>For more information
     * about role session permissions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * policies</a>.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    AssumeRoleRequest& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds, of the role session. The value specified can range
     * from 900 seconds (15 minutes) up to the maximum session duration set for the
     * role. The maximum session duration setting can have a value from 1 hour to 12
     * hours. If you specify a value higher than this setting or the administrator
     * setting (whichever is lower), the operation fails. For example, if you specify a
     * session duration of 12 hours, but your administrator set the maximum session
     * duration to 6 hours, your operation fails. </p> <p>Role chaining limits your
     * Amazon Web Services CLI or Amazon Web Services API role session to a maximum of
     * one hour. When you use the <code>AssumeRole</code> API operation to assume a
     * role, you can specify the duration of your role session with the
     * <code>DurationSeconds</code> parameter. You can specify a parameter value of up
     * to 43200 seconds (12 hours), depending on the maximum session duration setting
     * for your role. However, if you assume a role using role chaining and provide a
     * <code>DurationSeconds</code> parameter value greater than one hour, the
     * operation fails. To learn how to view the maximum value for your role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_update-role-settings.html#id_roles_update-session-duration">Update
     * the maximum session duration for a role</a>.</p> <p>By default, the value is set
     * to <code>3600</code> seconds. </p>  <p>The <code>DurationSeconds</code>
     * parameter is separate from the duration of a console session that you might
     * request using the returned credentials. The request to the federation endpoint
     * for a console sign-in token takes a <code>SessionDuration</code> parameter that
     * specifies the maximum length of the console session. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-custom-url.html">Creating
     * a URL that Enables Federated Users to Access the Amazon Web Services Management
     * Console</a> in the <i>IAM User Guide</i>.</p> 
     */
    inline int GetDurationSeconds() const { return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline AssumeRoleRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of session tags that you want to pass. Each session tag consists of a
     * key name and an associated value. For more information about session tags, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_session-tags.html">Tagging
     * Amazon Web Services STS Sessions</a> in the <i>IAM User Guide</i>.</p> <p>This
     * parameter is optional. You can pass up to 50 session tags. The plaintext session
     * tag keys can’t exceed 128 characters, and the values can’t exceed 256
     * characters. For these and additional limits, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-limits.html#reference_iam-limits-entity-length">IAM
     * and STS Character Limits</a> in the <i>IAM User Guide</i>.</p>  <p>An
     * Amazon Web Services conversion compresses the passed inline session policy,
     * managed policy ARNs, and session tags into a packed binary format that has a
     * separate limit. Your request can fail for this limit even if your plaintext
     * meets the other requirements. The <code>PackedPolicySize</code> response element
     * indicates by percentage how close the policies and tags for your request are to
     * the upper size limit.</p>  <p>You can pass a session tag with the same
     * key as a tag that is already attached to the role. When you do, session tags
     * override a role tag with the same key. </p> <p>Tag key–value pairs are not case
     * sensitive, but case is preserved. This means that you cannot have separate
     * <code>Department</code> and <code>department</code> tag keys. Assume that the
     * role has the <code>Department</code>=<code>Marketing</code> tag and you pass the
     * <code>department</code>=<code>engineering</code> session tag.
     * <code>Department</code> and <code>department</code> are not saved as separate
     * tags, and the session tag passed in the request takes precedence over the role
     * tag.</p> <p>Additionally, if you used temporary credentials to perform this
     * operation, the new session inherits any transitive session tags from the calling
     * session. If you pass a session tag with the same key as an inherited tag, the
     * operation fails. To view the inherited tags for a session, see the CloudTrail
     * logs. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_session-tags.html#id_session-tags_ctlogs">Viewing
     * Session Tags in CloudTrail</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    AssumeRoleRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    AssumeRoleRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of keys for session tags that you want to set as transitive. If you
     * set a tag key as transitive, the corresponding key and value passes to
     * subsequent sessions in a role chain. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_session-tags.html#id_session-tags_role-chaining">Chaining
     * Roles with Session Tags</a> in the <i>IAM User Guide</i>.</p> <p>This parameter
     * is optional. The transitive status of a session tag does not impact its packed
     * binary size.</p> <p>If you choose not to specify a transitive tag key, then no
     * tags are passed from this session to any subsequent sessions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTransitiveTagKeys() const { return m_transitiveTagKeys; }
    inline bool TransitiveTagKeysHasBeenSet() const { return m_transitiveTagKeysHasBeenSet; }
    template<typename TransitiveTagKeysT = Aws::Vector<Aws::String>>
    void SetTransitiveTagKeys(TransitiveTagKeysT&& value) { m_transitiveTagKeysHasBeenSet = true; m_transitiveTagKeys = std::forward<TransitiveTagKeysT>(value); }
    template<typename TransitiveTagKeysT = Aws::Vector<Aws::String>>
    AssumeRoleRequest& WithTransitiveTagKeys(TransitiveTagKeysT&& value) { SetTransitiveTagKeys(std::forward<TransitiveTagKeysT>(value)); return *this;}
    template<typename TransitiveTagKeysT = Aws::String>
    AssumeRoleRequest& AddTransitiveTagKeys(TransitiveTagKeysT&& value) { m_transitiveTagKeysHasBeenSet = true; m_transitiveTagKeys.emplace_back(std::forward<TransitiveTagKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. If the administrator of the account to which the role belongs provided
     * you with an external ID, then provide that value in the <code>ExternalId</code>
     * parameter. This value can be any string, such as a passphrase or account number.
     * A cross-account role is usually set up to trust everyone in an account.
     * Therefore, the administrator of the trusting account might send an external ID
     * to the administrator of the trusted account. That way, only someone with the ID
     * can assume the role, rather than everyone in the account. For more information
     * about the external ID, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to Use an External ID When Granting Access to Your Amazon Web Services Resources
     * to a Third Party</a> in the <i>IAM User Guide</i>.</p> <p>The regex used to
     * validate this parameter is a string of characters consisting of upper- and
     * lower-case alphanumeric characters with no spaces. You can also include
     * underscores or any of the following characters: =,.@:/-</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    AssumeRoleRequest& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identification number of the MFA device that is associated with the user
     * who is making the <code>AssumeRole</code> call. Specify this value if the trust
     * policy of the role being assumed includes a condition that requires MFA
     * authentication. The value is either the serial number for a hardware device
     * (such as <code>GAHT12345678</code>) or an Amazon Resource Name (ARN) for a
     * virtual device (such as <code>arn:aws:iam::123456789012:mfa/user</code>).</p>
     * <p>The regex used to validate this parameter is a string of characters
     * consisting of upper- and lower-case alphanumeric characters with no spaces. You
     * can also include underscores or any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    template<typename SerialNumberT = Aws::String>
    void SetSerialNumber(SerialNumberT&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::forward<SerialNumberT>(value); }
    template<typename SerialNumberT = Aws::String>
    AssumeRoleRequest& WithSerialNumber(SerialNumberT&& value) { SetSerialNumber(std::forward<SerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value provided by the MFA device, if the trust policy of the role being
     * assumed requires MFA. (In other words, if the policy includes a condition that
     * tests for MFA). If the role being assumed requires MFA and if the
     * <code>TokenCode</code> value is missing or expired, the <code>AssumeRole</code>
     * call returns an "access denied" error.</p> <p>The format for this parameter, as
     * described by its regex pattern, is a sequence of six numeric digits.</p>
     */
    inline const Aws::String& GetTokenCode() const { return m_tokenCode; }
    inline bool TokenCodeHasBeenSet() const { return m_tokenCodeHasBeenSet; }
    template<typename TokenCodeT = Aws::String>
    void SetTokenCode(TokenCodeT&& value) { m_tokenCodeHasBeenSet = true; m_tokenCode = std::forward<TokenCodeT>(value); }
    template<typename TokenCodeT = Aws::String>
    AssumeRoleRequest& WithTokenCode(TokenCodeT&& value) { SetTokenCode(std::forward<TokenCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source identity specified by the principal that is calling the
     * <code>AssumeRole</code> operation. The source identity value persists across <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html#iam-term-role-chaining">chained
     * role</a> sessions.</p> <p>You can require users to specify a source identity
     * when they assume a role. You do this by using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_condition-keys.html#condition-keys-sourceidentity">
     * <code>sts:SourceIdentity</code> </a> condition key in a role trust policy. You
     * can use source identity information in CloudTrail logs to determine who took
     * actions with a role. You can use the <code>aws:SourceIdentity</code> condition
     * key to further control access to Amazon Web Services resources based on the
     * value of source identity. For more information about using source identity, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">Monitor
     * and control actions taken with assumed roles</a> in the <i>IAM User
     * Guide</i>.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of upper- and lower-case alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * +=,.@-. You cannot use a value that begins with the text <code>aws:</code>. This
     * prefix is reserved for Amazon Web Services internal use.</p>
     */
    inline const Aws::String& GetSourceIdentity() const { return m_sourceIdentity; }
    inline bool SourceIdentityHasBeenSet() const { return m_sourceIdentityHasBeenSet; }
    template<typename SourceIdentityT = Aws::String>
    void SetSourceIdentity(SourceIdentityT&& value) { m_sourceIdentityHasBeenSet = true; m_sourceIdentity = std::forward<SourceIdentityT>(value); }
    template<typename SourceIdentityT = Aws::String>
    AssumeRoleRequest& WithSourceIdentity(SourceIdentityT&& value) { SetSourceIdentity(std::forward<SourceIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of previously acquired trusted context assertions in the format of a
     * JSON array. The trusted context assertion is signed and encrypted by Amazon Web
     * Services STS.</p> <p>The following is an example of a
     * <code>ProvidedContext</code> value that includes a single trusted context
     * assertion and the ARN of the context provider from which the trusted context
     * assertion was generated.</p> <p>
     * <code>[{"ProviderArn":"arn:aws:iam::aws:contextProvider/IdentityCenter","ContextAssertion":"trusted-context-assertion"}]</code>
     * </p>
     */
    inline const Aws::Vector<ProvidedContext>& GetProvidedContexts() const { return m_providedContexts; }
    inline bool ProvidedContextsHasBeenSet() const { return m_providedContextsHasBeenSet; }
    template<typename ProvidedContextsT = Aws::Vector<ProvidedContext>>
    void SetProvidedContexts(ProvidedContextsT&& value) { m_providedContextsHasBeenSet = true; m_providedContexts = std::forward<ProvidedContextsT>(value); }
    template<typename ProvidedContextsT = Aws::Vector<ProvidedContext>>
    AssumeRoleRequest& WithProvidedContexts(ProvidedContextsT&& value) { SetProvidedContexts(std::forward<ProvidedContextsT>(value)); return *this;}
    template<typename ProvidedContextsT = ProvidedContext>
    AssumeRoleRequest& AddProvidedContexts(ProvidedContextsT&& value) { m_providedContextsHasBeenSet = true; m_providedContexts.emplace_back(std::forward<ProvidedContextsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_roleSessionName;
    bool m_roleSessionNameHasBeenSet = false;

    Aws::Vector<PolicyDescriptorType> m_policyArns;
    bool m_policyArnsHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    int m_durationSeconds{0};
    bool m_durationSecondsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_transitiveTagKeys;
    bool m_transitiveTagKeysHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::String m_tokenCode;
    bool m_tokenCodeHasBeenSet = false;

    Aws::String m_sourceIdentity;
    bool m_sourceIdentityHasBeenSet = false;

    Aws::Vector<ProvidedContext> m_providedContexts;
    bool m_providedContextsHasBeenSet = false;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
