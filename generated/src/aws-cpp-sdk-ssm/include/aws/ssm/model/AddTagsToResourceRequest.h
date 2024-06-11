/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/ssm/model/ResourceTypeForTagging.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AddTagsToResourceRequest : public SSMRequest
  {
  public:
    AWS_SSM_API AddTagsToResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTagsToResource"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the type of resource you are tagging.</p>  <p>The
     * <code>ManagedInstance</code> type for this API operation is for on-premises
     * managed nodes. You must specify the name of the managed node in the following
     * format: <code>mi-<i>ID_number</i> </code>. For example,
     * <code>mi-1a2b3c4d5e6f</code>.</p> 
     */
    inline const ResourceTypeForTagging& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceTypeForTagging& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceTypeForTagging&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline AddTagsToResourceRequest& WithResourceType(const ResourceTypeForTagging& value) { SetResourceType(value); return *this;}
    inline AddTagsToResourceRequest& WithResourceType(ResourceTypeForTagging&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID you want to tag.</p> <p>Use the ID of the resource. Here are
     * some examples:</p> <p> <code>MaintenanceWindow</code>:
     * <code>mw-012345abcde</code> </p> <p> <code>PatchBaseline</code>:
     * <code>pb-012345abcde</code> </p> <p> <code>Automation</code>:
     * <code>example-c160-4567-8519-012345abcde</code> </p> <p>
     * <code>OpsMetadata</code> object: <code>ResourceID</code> for tagging is created
     * from the Amazon Resource Name (ARN) for the object. Specifically,
     * <code>ResourceID</code> is created from the strings that come after the word
     * <code>opsmetadata</code> in the ARN. For example, an OpsMetadata object with an
     * ARN of
     * <code>arn:aws:ssm:us-east-2:1234567890:opsmetadata/aws/ssm/MyGroup/appmanager</code>
     * has a <code>ResourceID</code> of either <code>aws/ssm/MyGroup/appmanager</code>
     * or <code>/aws/ssm/MyGroup/appmanager</code>.</p> <p>For the
     * <code>Document</code> and <code>Parameter</code> values, use the name of the
     * resource. If you're tagging a shared document, you must use the full ARN of the
     * document.</p> <p> <code>ManagedInstance</code>: <code>mi-012345abcde</code> </p>
     *  <p>The <code>ManagedInstance</code> type for this API operation is only
     * for on-premises managed nodes. You must specify the name of the managed node in
     * the following format: <code>mi-<i>ID_number</i> </code>. For example,
     * <code>mi-1a2b3c4d5e6f</code>.</p> 
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline AddTagsToResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline AddTagsToResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline AddTagsToResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tags. The value parameter is required.</p>  <p>Don't
     * enter personally identifiable information in this field.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AddTagsToResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline AddTagsToResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline AddTagsToResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline AddTagsToResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ResourceTypeForTagging m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
