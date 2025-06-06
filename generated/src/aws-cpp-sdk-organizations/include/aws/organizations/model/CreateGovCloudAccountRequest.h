﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/IAMUserAccessToBilling.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class CreateGovCloudAccountRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API CreateGovCloudAccountRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGovCloudAccount"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the email address of the owner to assign to the new member account
     * in the commercial Region. This email address must not already be associated with
     * another Amazon Web Services account. You must use a valid email address to
     * complete account creation.</p> <p>The rules for a valid email address:</p> <ul>
     * <li> <p>The address must be a minimum of 6 and a maximum of 64 characters
     * long.</p> </li> <li> <p>All characters must be 7-bit ASCII characters.</p> </li>
     * <li> <p>There must be one and only one @ symbol, which separates the local name
     * from the domain name.</p> </li> <li> <p>The local name can't contain any of the
     * following characters:</p> <p>whitespace, " ' ( ) &lt; &gt; [ ] : ; , \ | %
     * &amp;</p> </li> <li> <p>The local name can't begin with a dot (.)</p> </li> <li>
     * <p>The domain name can consist of only the characters [a-z],[A-Z],[0-9], hyphen
     * (-), or dot (.)</p> </li> <li> <p>The domain name can't begin or end with a
     * hyphen (-) or dot (.)</p> </li> <li> <p>The domain name must contain at least
     * one dot</p> </li> </ul> <p>You can't access the root user of the account or
     * remove an account that was created with an invalid email address. Like all
     * request parameters for <code>CreateGovCloudAccount</code>, the request for the
     * email address for the Amazon Web Services GovCloud (US) account originates from
     * the commercial Region, not from the Amazon Web Services GovCloud (US)
     * Region.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    CreateGovCloudAccountRequest& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the member account. </p> <p>The account name can consist
     * of only the characters [a-z],[A-Z],[0-9], hyphen (-), or dot (.) You can't
     * separate characters with a dash (–).</p>
     */
    inline const Aws::String& GetAccountName() const { return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    template<typename AccountNameT = Aws::String>
    void SetAccountName(AccountNameT&& value) { m_accountNameHasBeenSet = true; m_accountName = std::forward<AccountNameT>(value); }
    template<typename AccountNameT = Aws::String>
    CreateGovCloudAccountRequest& WithAccountName(AccountNameT&& value) { SetAccountName(std::forward<AccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional)</p> <p>The name of an IAM role that Organizations automatically
     * preconfigures in the new member accounts in both the Amazon Web Services
     * GovCloud (US) Region and in the commercial Region. This role trusts the
     * management account, allowing users in the management account to assume the role,
     * as permitted by the management account administrator. The role has administrator
     * permissions in the new member account.</p> <p>If you don't specify this
     * parameter, the role name defaults to
     * <code>OrganizationAccountAccessRole</code>.</p> <p>For more information about
     * how to use this role to access the member account, see the following links:</p>
     * <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html#orgs_manage_accounts_create-cross-account-role">Creating
     * the OrganizationAccountAccessRole in an invited member account</a> in the
     * <i>Organizations User Guide</i> </p> </li> <li> <p>Steps 2 and 3 in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/tutorial_cross-account-with-roles.html">IAM
     * Tutorial: Delegate access across Amazon Web Services accounts using IAM
     * roles</a> in the <i>IAM User Guide</i> </p> </li> </ul> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter. The pattern can include uppercase letters, lowercase
     * letters, digits with no spaces, and any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    CreateGovCloudAccountRequest& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>ALLOW</code>, the new linked account in the commercial Region
     * enables IAM users to access account billing information <i>if</i> they have the
     * required permissions. If set to <code>DENY</code>, only the root user of the new
     * account can access account billing information. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">About
     * IAM access to the Billing and Cost Management console</a> in the <i>Amazon Web
     * Services Billing and Cost Management User Guide</i>.</p> <p>If you don't specify
     * this parameter, the value defaults to <code>ALLOW</code>, and IAM users and
     * roles with the required permissions can access billing information for the new
     * account.</p>
     */
    inline IAMUserAccessToBilling GetIamUserAccessToBilling() const { return m_iamUserAccessToBilling; }
    inline bool IamUserAccessToBillingHasBeenSet() const { return m_iamUserAccessToBillingHasBeenSet; }
    inline void SetIamUserAccessToBilling(IAMUserAccessToBilling value) { m_iamUserAccessToBillingHasBeenSet = true; m_iamUserAccessToBilling = value; }
    inline CreateGovCloudAccountRequest& WithIamUserAccessToBilling(IAMUserAccessToBilling value) { SetIamUserAccessToBilling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that you want to attach to the newly created account. These
     * tags are attached to the commercial account associated with the GovCloud
     * account, and not to the GovCloud account itself. To add tags to the actual
     * GovCloud account, call the <a>TagResource</a> operation in the GovCloud region
     * after the new GovCloud account exists.</p> <p>For each tag in the list, you must
     * specify both a tag key and a value. You can set the value to an empty string,
     * but you can't set it to <code>null</code>. For more information about tagging,
     * see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>If
     * any one of the tags is not valid or if you exceed the maximum allowed number of
     * tags for an account, then the entire request fails and the account is not
     * created.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateGovCloudAccountRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateGovCloudAccountRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    IAMUserAccessToBilling m_iamUserAccessToBilling{IAMUserAccessToBilling::NOT_SET};
    bool m_iamUserAccessToBillingHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
