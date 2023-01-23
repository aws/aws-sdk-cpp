/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/PolicyType.h>
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
  class CreatePolicyRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API CreatePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePolicy"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The policy text content to add to the new policy. The text that you supply
     * must adhere to the rules of the policy type you specify in the <code>Type</code>
     * parameter.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The policy text content to add to the new policy. The text that you supply
     * must adhere to the rules of the policy type you specify in the <code>Type</code>
     * parameter.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The policy text content to add to the new policy. The text that you supply
     * must adhere to the rules of the policy type you specify in the <code>Type</code>
     * parameter.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The policy text content to add to the new policy. The text that you supply
     * must adhere to the rules of the policy type you specify in the <code>Type</code>
     * parameter.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The policy text content to add to the new policy. The text that you supply
     * must adhere to the rules of the policy type you specify in the <code>Type</code>
     * parameter.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The policy text content to add to the new policy. The text that you supply
     * must adhere to the rules of the policy type you specify in the <code>Type</code>
     * parameter.</p>
     */
    inline CreatePolicyRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The policy text content to add to the new policy. The text that you supply
     * must adhere to the rules of the policy type you specify in the <code>Type</code>
     * parameter.</p>
     */
    inline CreatePolicyRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The policy text content to add to the new policy. The text that you supply
     * must adhere to the rules of the policy type you specify in the <code>Type</code>
     * parameter.</p>
     */
    inline CreatePolicyRequest& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline CreatePolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline CreatePolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline CreatePolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline CreatePolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline CreatePolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline CreatePolicyRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of policy to create. You can specify one of the following
     * values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">SERVICE_CONTROL_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> </ul>
     */
    inline const PolicyType& GetType() const{ return m_type; }

    /**
     * <p>The type of policy to create. You can specify one of the following
     * values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">SERVICE_CONTROL_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of policy to create. You can specify one of the following
     * values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">SERVICE_CONTROL_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> </ul>
     */
    inline void SetType(const PolicyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of policy to create. You can specify one of the following
     * values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">SERVICE_CONTROL_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> </ul>
     */
    inline void SetType(PolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of policy to create. You can specify one of the following
     * values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">SERVICE_CONTROL_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> </ul>
     */
    inline CreatePolicyRequest& WithType(const PolicyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of policy to create. You can specify one of the following
     * values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">SERVICE_CONTROL_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> </ul>
     */
    inline CreatePolicyRequest& WithType(PolicyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A list of tags that you want to attach to the newly created policy. For each
     * tag in the list, you must specify both a tag key and a value. You can set the
     * value to an empty string, but you can't set it to <code>null</code>. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>If
     * any one of the tags is invalid or if you exceed the allowed number of tags for a
     * policy, then the entire request fails and the policy is not created.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags that you want to attach to the newly created policy. For each
     * tag in the list, you must specify both a tag key and a value. You can set the
     * value to an empty string, but you can't set it to <code>null</code>. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>If
     * any one of the tags is invalid or if you exceed the allowed number of tags for a
     * policy, then the entire request fails and the policy is not created.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags that you want to attach to the newly created policy. For each
     * tag in the list, you must specify both a tag key and a value. You can set the
     * value to an empty string, but you can't set it to <code>null</code>. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>If
     * any one of the tags is invalid or if you exceed the allowed number of tags for a
     * policy, then the entire request fails and the policy is not created.</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags that you want to attach to the newly created policy. For each
     * tag in the list, you must specify both a tag key and a value. You can set the
     * value to an empty string, but you can't set it to <code>null</code>. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>If
     * any one of the tags is invalid or if you exceed the allowed number of tags for a
     * policy, then the entire request fails and the policy is not created.</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags that you want to attach to the newly created policy. For each
     * tag in the list, you must specify both a tag key and a value. You can set the
     * value to an empty string, but you can't set it to <code>null</code>. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>If
     * any one of the tags is invalid or if you exceed the allowed number of tags for a
     * policy, then the entire request fails and the policy is not created.</p> 
     */
    inline CreatePolicyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags that you want to attach to the newly created policy. For each
     * tag in the list, you must specify both a tag key and a value. You can set the
     * value to an empty string, but you can't set it to <code>null</code>. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>If
     * any one of the tags is invalid or if you exceed the allowed number of tags for a
     * policy, then the entire request fails and the policy is not created.</p> 
     */
    inline CreatePolicyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags that you want to attach to the newly created policy. For each
     * tag in the list, you must specify both a tag key and a value. You can set the
     * value to an empty string, but you can't set it to <code>null</code>. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>If
     * any one of the tags is invalid or if you exceed the allowed number of tags for a
     * policy, then the entire request fails and the policy is not created.</p> 
     */
    inline CreatePolicyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags that you want to attach to the newly created policy. For each
     * tag in the list, you must specify both a tag key and a value. You can set the
     * value to an empty string, but you can't set it to <code>null</code>. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>If
     * any one of the tags is invalid or if you exceed the allowed number of tags for a
     * policy, then the entire request fails and the policy is not created.</p> 
     */
    inline CreatePolicyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PolicyType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
