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
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class RemoveTagsFromResourceRequest : public SSMRequest
  {
  public:
    AWS_SSM_API RemoveTagsFromResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTagsFromResource"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The type of resource from which you want to remove a tag.</p>  <p>The
     * <code>ManagedInstance</code> type for this API operation is only for on-premises
     * managed nodes. Specify the name of the managed node in the following format:
     * <code>mi-<i>ID_number</i> </code>. For example,
     * <code>mi-1a2b3c4d5e6f</code>.</p> 
     */
    inline const ResourceTypeForTagging& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceTypeForTagging& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceTypeForTagging&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline RemoveTagsFromResourceRequest& WithResourceType(const ResourceTypeForTagging& value) { SetResourceType(value); return *this;}
    inline RemoveTagsFromResourceRequest& WithResourceType(ResourceTypeForTagging&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource from which you want to remove tags. For example:</p>
     * <p>ManagedInstance: mi-012345abcde</p> <p>MaintenanceWindow: mw-012345abcde</p>
     * <p> <code>Automation</code>: <code>example-c160-4567-8519-012345abcde</code>
     * </p> <p>PatchBaseline: pb-012345abcde</p> <p>OpsMetadata object:
     * <code>ResourceID</code> for tagging is created from the Amazon Resource Name
     * (ARN) for the object. Specifically, <code>ResourceID</code> is created from the
     * strings that come after the word <code>opsmetadata</code> in the ARN. For
     * example, an OpsMetadata object with an ARN of
     * <code>arn:aws:ssm:us-east-2:1234567890:opsmetadata/aws/ssm/MyGroup/appmanager</code>
     * has a <code>ResourceID</code> of either <code>aws/ssm/MyGroup/appmanager</code>
     * or <code>/aws/ssm/MyGroup/appmanager</code>.</p> <p>For the Document and
     * Parameter values, use the name of the resource.</p>  <p>The
     * <code>ManagedInstance</code> type for this API operation is only for on-premises
     * managed nodes. Specify the name of the managed node in the following format:
     * mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> 
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline RemoveTagsFromResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline RemoveTagsFromResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline RemoveTagsFromResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tag keys that you want to remove from the specified resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }
    inline RemoveTagsFromResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}
    inline RemoveTagsFromResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}
    inline RemoveTagsFromResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }
    inline RemoveTagsFromResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }
    inline RemoveTagsFromResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }
    ///@}
  private:

    ResourceTypeForTagging m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
