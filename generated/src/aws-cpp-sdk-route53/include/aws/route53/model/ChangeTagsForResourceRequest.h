/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/model/TagResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the tags that you want to add,
   * edit, or delete.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ChangeTagsForResourceRequest">AWS
   * API Reference</a></p>
   */
  class ChangeTagsForResourceRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API ChangeTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangeTagsForResource"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The type of the resource.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline const TagResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const TagResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(TagResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ChangeTagsForResourceRequest& WithResourceType(const TagResourceType& value) { SetResourceType(value); return *this;}
    inline ChangeTagsForResourceRequest& WithResourceType(TagResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource for which you want to add, change, or delete tags.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ChangeTagsForResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ChangeTagsForResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ChangeTagsForResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains a list of the tags that you want to add to the
     * specified health check or hosted zone and/or the tags that you want to edit
     * <code>Value</code> for.</p> <p>You can add a maximum of 10 tags to a health
     * check or a hosted zone.</p>
     */
    inline const Aws::Vector<Tag>& GetAddTags() const{ return m_addTags; }
    inline bool AddTagsHasBeenSet() const { return m_addTagsHasBeenSet; }
    inline void SetAddTags(const Aws::Vector<Tag>& value) { m_addTagsHasBeenSet = true; m_addTags = value; }
    inline void SetAddTags(Aws::Vector<Tag>&& value) { m_addTagsHasBeenSet = true; m_addTags = std::move(value); }
    inline ChangeTagsForResourceRequest& WithAddTags(const Aws::Vector<Tag>& value) { SetAddTags(value); return *this;}
    inline ChangeTagsForResourceRequest& WithAddTags(Aws::Vector<Tag>&& value) { SetAddTags(std::move(value)); return *this;}
    inline ChangeTagsForResourceRequest& AddAddTags(const Tag& value) { m_addTagsHasBeenSet = true; m_addTags.push_back(value); return *this; }
    inline ChangeTagsForResourceRequest& AddAddTags(Tag&& value) { m_addTagsHasBeenSet = true; m_addTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A complex type that contains a list of the tags that you want to delete from
     * the specified health check or hosted zone. You can specify up to 10 keys.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveTagKeys() const{ return m_removeTagKeys; }
    inline bool RemoveTagKeysHasBeenSet() const { return m_removeTagKeysHasBeenSet; }
    inline void SetRemoveTagKeys(const Aws::Vector<Aws::String>& value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys = value; }
    inline void SetRemoveTagKeys(Aws::Vector<Aws::String>&& value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys = std::move(value); }
    inline ChangeTagsForResourceRequest& WithRemoveTagKeys(const Aws::Vector<Aws::String>& value) { SetRemoveTagKeys(value); return *this;}
    inline ChangeTagsForResourceRequest& WithRemoveTagKeys(Aws::Vector<Aws::String>&& value) { SetRemoveTagKeys(std::move(value)); return *this;}
    inline ChangeTagsForResourceRequest& AddRemoveTagKeys(const Aws::String& value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys.push_back(value); return *this; }
    inline ChangeTagsForResourceRequest& AddRemoveTagKeys(Aws::String&& value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys.push_back(std::move(value)); return *this; }
    inline ChangeTagsForResourceRequest& AddRemoveTagKeys(const char* value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys.push_back(value); return *this; }
    ///@}
  private:

    TagResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<Tag> m_addTags;
    bool m_addTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeTagKeys;
    bool m_removeTagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
