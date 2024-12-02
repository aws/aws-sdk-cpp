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


    ///@{
    /**
     * <p>The policy text content to add to the new policy. The text that you supply
     * must adhere to the rules of the policy type you specify in the <code>Type</code>
     * parameter. </p> <p>The maximum size of a policy document depends on the policy's
     * type. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_limits.html#min-max-values">Maximum
     * and minimum values</a> in the <i>Organizations User Guide</i>.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline CreatePolicyRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline CreatePolicyRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline CreatePolicyRequest& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreatePolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreatePolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreatePolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreatePolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreatePolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreatePolicyRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of policy to create. You can specify one of the following
     * values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">SERVICE_CONTROL_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_rcps.html">RESOURCE_CONTROL_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_declarative.html">DECLARATIVE_POLICY_EC2</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_chatbot.html">CHATBOT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> </ul>
     */
    inline const PolicyType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PolicyType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreatePolicyRequest& WithType(const PolicyType& value) { SetType(value); return *this;}
    inline CreatePolicyRequest& WithType(PolicyType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that you want to attach to the newly created policy. For each
     * tag in the list, you must specify both a tag key and a value. You can set the
     * value to an empty string, but you can't set it to <code>null</code>. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>If
     * any one of the tags is not valid or if you exceed the allowed number of tags for
     * a policy, then the entire request fails and the policy is not created.</p>
     * 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreatePolicyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreatePolicyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreatePolicyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreatePolicyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
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
