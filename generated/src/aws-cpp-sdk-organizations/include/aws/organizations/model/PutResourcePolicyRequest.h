/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class PutResourcePolicyRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If provided, the new content for the resource policy. The text must be
     * correctly formatted JSON that complies with the syntax for the resource policy's
     * type. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>Organizations User Guide.</i> </p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>If provided, the new content for the resource policy. The text must be
     * correctly formatted JSON that complies with the syntax for the resource policy's
     * type. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>Organizations User Guide.</i> </p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>If provided, the new content for the resource policy. The text must be
     * correctly formatted JSON that complies with the syntax for the resource policy's
     * type. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>Organizations User Guide.</i> </p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>If provided, the new content for the resource policy. The text must be
     * correctly formatted JSON that complies with the syntax for the resource policy's
     * type. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>Organizations User Guide.</i> </p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>If provided, the new content for the resource policy. The text must be
     * correctly formatted JSON that complies with the syntax for the resource policy's
     * type. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>Organizations User Guide.</i> </p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>If provided, the new content for the resource policy. The text must be
     * correctly formatted JSON that complies with the syntax for the resource policy's
     * type. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>Organizations User Guide.</i> </p>
     */
    inline PutResourcePolicyRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>If provided, the new content for the resource policy. The text must be
     * correctly formatted JSON that complies with the syntax for the resource policy's
     * type. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>Organizations User Guide.</i> </p>
     */
    inline PutResourcePolicyRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>If provided, the new content for the resource policy. The text must be
     * correctly formatted JSON that complies with the syntax for the resource policy's
     * type. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>Organizations User Guide.</i> </p>
     */
    inline PutResourcePolicyRequest& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>Updates the list of tags that you want to attach to the newly-created
     * resource policy. For each tag in the list, you must specify both a tag key and a
     * value. You can set the value to an empty string, but you can't set it to
     * <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>Calls
     * with tags apply to the initial creation of the resource policy, otherwise an
     * exception is thrown. If any one of the tags is invalid or if you exceed the
     * allowed number of tags for the resource policy, then the entire request fails
     * and the resource policy is not created. </p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Updates the list of tags that you want to attach to the newly-created
     * resource policy. For each tag in the list, you must specify both a tag key and a
     * value. You can set the value to an empty string, but you can't set it to
     * <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>Calls
     * with tags apply to the initial creation of the resource policy, otherwise an
     * exception is thrown. If any one of the tags is invalid or if you exceed the
     * allowed number of tags for the resource policy, then the entire request fails
     * and the resource policy is not created. </p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Updates the list of tags that you want to attach to the newly-created
     * resource policy. For each tag in the list, you must specify both a tag key and a
     * value. You can set the value to an empty string, but you can't set it to
     * <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>Calls
     * with tags apply to the initial creation of the resource policy, otherwise an
     * exception is thrown. If any one of the tags is invalid or if you exceed the
     * allowed number of tags for the resource policy, then the entire request fails
     * and the resource policy is not created. </p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Updates the list of tags that you want to attach to the newly-created
     * resource policy. For each tag in the list, you must specify both a tag key and a
     * value. You can set the value to an empty string, but you can't set it to
     * <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>Calls
     * with tags apply to the initial creation of the resource policy, otherwise an
     * exception is thrown. If any one of the tags is invalid or if you exceed the
     * allowed number of tags for the resource policy, then the entire request fails
     * and the resource policy is not created. </p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Updates the list of tags that you want to attach to the newly-created
     * resource policy. For each tag in the list, you must specify both a tag key and a
     * value. You can set the value to an empty string, but you can't set it to
     * <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>Calls
     * with tags apply to the initial creation of the resource policy, otherwise an
     * exception is thrown. If any one of the tags is invalid or if you exceed the
     * allowed number of tags for the resource policy, then the entire request fails
     * and the resource policy is not created. </p> 
     */
    inline PutResourcePolicyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Updates the list of tags that you want to attach to the newly-created
     * resource policy. For each tag in the list, you must specify both a tag key and a
     * value. You can set the value to an empty string, but you can't set it to
     * <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>Calls
     * with tags apply to the initial creation of the resource policy, otherwise an
     * exception is thrown. If any one of the tags is invalid or if you exceed the
     * allowed number of tags for the resource policy, then the entire request fails
     * and the resource policy is not created. </p> 
     */
    inline PutResourcePolicyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Updates the list of tags that you want to attach to the newly-created
     * resource policy. For each tag in the list, you must specify both a tag key and a
     * value. You can set the value to an empty string, but you can't set it to
     * <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>Calls
     * with tags apply to the initial creation of the resource policy, otherwise an
     * exception is thrown. If any one of the tags is invalid or if you exceed the
     * allowed number of tags for the resource policy, then the entire request fails
     * and the resource policy is not created. </p> 
     */
    inline PutResourcePolicyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Updates the list of tags that you want to attach to the newly-created
     * resource policy. For each tag in the list, you must specify both a tag key and a
     * value. You can set the value to an empty string, but you can't set it to
     * <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>Calls
     * with tags apply to the initial creation of the resource policy, otherwise an
     * exception is thrown. If any one of the tags is invalid or if you exceed the
     * allowed number of tags for the resource policy, then the entire request fails
     * and the resource policy is not created. </p> 
     */
    inline PutResourcePolicyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
