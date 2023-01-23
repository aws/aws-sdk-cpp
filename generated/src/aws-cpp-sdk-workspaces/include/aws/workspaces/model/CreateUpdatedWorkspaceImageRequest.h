/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class CreateUpdatedWorkspaceImageRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API CreateUpdatedWorkspaceImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUpdatedWorkspaceImage"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the new updated WorkSpace image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new updated WorkSpace image.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the new updated WorkSpace image.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the new updated WorkSpace image.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the new updated WorkSpace image.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the new updated WorkSpace image.</p>
     */
    inline CreateUpdatedWorkspaceImageRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new updated WorkSpace image.</p>
     */
    inline CreateUpdatedWorkspaceImageRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the new updated WorkSpace image.</p>
     */
    inline CreateUpdatedWorkspaceImageRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of whether updates for the WorkSpace image are available.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of whether updates for the WorkSpace image are available.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of whether updates for the WorkSpace image are available.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of whether updates for the WorkSpace image are available.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of whether updates for the WorkSpace image are available.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of whether updates for the WorkSpace image are available.</p>
     */
    inline CreateUpdatedWorkspaceImageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of whether updates for the WorkSpace image are available.</p>
     */
    inline CreateUpdatedWorkspaceImageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of whether updates for the WorkSpace image are available.</p>
     */
    inline CreateUpdatedWorkspaceImageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the source WorkSpace image.</p>
     */
    inline const Aws::String& GetSourceImageId() const{ return m_sourceImageId; }

    /**
     * <p>The identifier of the source WorkSpace image.</p>
     */
    inline bool SourceImageIdHasBeenSet() const { return m_sourceImageIdHasBeenSet; }

    /**
     * <p>The identifier of the source WorkSpace image.</p>
     */
    inline void SetSourceImageId(const Aws::String& value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId = value; }

    /**
     * <p>The identifier of the source WorkSpace image.</p>
     */
    inline void SetSourceImageId(Aws::String&& value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId = std::move(value); }

    /**
     * <p>The identifier of the source WorkSpace image.</p>
     */
    inline void SetSourceImageId(const char* value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId.assign(value); }

    /**
     * <p>The identifier of the source WorkSpace image.</p>
     */
    inline CreateUpdatedWorkspaceImageRequest& WithSourceImageId(const Aws::String& value) { SetSourceImageId(value); return *this;}

    /**
     * <p>The identifier of the source WorkSpace image.</p>
     */
    inline CreateUpdatedWorkspaceImageRequest& WithSourceImageId(Aws::String&& value) { SetSourceImageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the source WorkSpace image.</p>
     */
    inline CreateUpdatedWorkspaceImageRequest& WithSourceImageId(const char* value) { SetSourceImageId(value); return *this;}


    /**
     * <p>The tags that you want to add to the new updated WorkSpace image.</p> 
     * <p>To add tags at the same time when you're creating the updated image, you must
     * create an IAM policy that grants your IAM user permissions to use
     * <code>workspaces:CreateTags</code>. </p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that you want to add to the new updated WorkSpace image.</p> 
     * <p>To add tags at the same time when you're creating the updated image, you must
     * create an IAM policy that grants your IAM user permissions to use
     * <code>workspaces:CreateTags</code>. </p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that you want to add to the new updated WorkSpace image.</p> 
     * <p>To add tags at the same time when you're creating the updated image, you must
     * create an IAM policy that grants your IAM user permissions to use
     * <code>workspaces:CreateTags</code>. </p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that you want to add to the new updated WorkSpace image.</p> 
     * <p>To add tags at the same time when you're creating the updated image, you must
     * create an IAM policy that grants your IAM user permissions to use
     * <code>workspaces:CreateTags</code>. </p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that you want to add to the new updated WorkSpace image.</p> 
     * <p>To add tags at the same time when you're creating the updated image, you must
     * create an IAM policy that grants your IAM user permissions to use
     * <code>workspaces:CreateTags</code>. </p> 
     */
    inline CreateUpdatedWorkspaceImageRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that you want to add to the new updated WorkSpace image.</p> 
     * <p>To add tags at the same time when you're creating the updated image, you must
     * create an IAM policy that grants your IAM user permissions to use
     * <code>workspaces:CreateTags</code>. </p> 
     */
    inline CreateUpdatedWorkspaceImageRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that you want to add to the new updated WorkSpace image.</p> 
     * <p>To add tags at the same time when you're creating the updated image, you must
     * create an IAM policy that grants your IAM user permissions to use
     * <code>workspaces:CreateTags</code>. </p> 
     */
    inline CreateUpdatedWorkspaceImageRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags that you want to add to the new updated WorkSpace image.</p> 
     * <p>To add tags at the same time when you're creating the updated image, you must
     * create an IAM policy that grants your IAM user permissions to use
     * <code>workspaces:CreateTags</code>. </p> 
     */
    inline CreateUpdatedWorkspaceImageRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_sourceImageId;
    bool m_sourceImageIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
