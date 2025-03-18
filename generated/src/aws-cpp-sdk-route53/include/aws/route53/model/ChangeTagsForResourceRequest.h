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
    AWS_ROUTE53_API ChangeTagsForResourceRequest() = default;

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
    inline TagResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(TagResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ChangeTagsForResourceRequest& WithResourceType(TagResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource for which you want to add, change, or delete tags.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ChangeTagsForResourceRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains a list of the tags that you want to add to the
     * specified health check or hosted zone and/or the tags that you want to edit
     * <code>Value</code> for.</p> <p>You can add a maximum of 10 tags to a health
     * check or a hosted zone.</p>
     */
    inline const Aws::Vector<Tag>& GetAddTags() const { return m_addTags; }
    inline bool AddTagsHasBeenSet() const { return m_addTagsHasBeenSet; }
    template<typename AddTagsT = Aws::Vector<Tag>>
    void SetAddTags(AddTagsT&& value) { m_addTagsHasBeenSet = true; m_addTags = std::forward<AddTagsT>(value); }
    template<typename AddTagsT = Aws::Vector<Tag>>
    ChangeTagsForResourceRequest& WithAddTags(AddTagsT&& value) { SetAddTags(std::forward<AddTagsT>(value)); return *this;}
    template<typename AddTagsT = Tag>
    ChangeTagsForResourceRequest& AddAddTags(AddTagsT&& value) { m_addTagsHasBeenSet = true; m_addTags.emplace_back(std::forward<AddTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A complex type that contains a list of the tags that you want to delete from
     * the specified health check or hosted zone. You can specify up to 10 keys.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveTagKeys() const { return m_removeTagKeys; }
    inline bool RemoveTagKeysHasBeenSet() const { return m_removeTagKeysHasBeenSet; }
    template<typename RemoveTagKeysT = Aws::Vector<Aws::String>>
    void SetRemoveTagKeys(RemoveTagKeysT&& value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys = std::forward<RemoveTagKeysT>(value); }
    template<typename RemoveTagKeysT = Aws::Vector<Aws::String>>
    ChangeTagsForResourceRequest& WithRemoveTagKeys(RemoveTagKeysT&& value) { SetRemoveTagKeys(std::forward<RemoveTagKeysT>(value)); return *this;}
    template<typename RemoveTagKeysT = Aws::String>
    ChangeTagsForResourceRequest& AddRemoveTagKeys(RemoveTagKeysT&& value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys.emplace_back(std::forward<RemoveTagKeysT>(value)); return *this; }
    ///@}
  private:

    TagResourceType m_resourceType{TagResourceType::NOT_SET};
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
