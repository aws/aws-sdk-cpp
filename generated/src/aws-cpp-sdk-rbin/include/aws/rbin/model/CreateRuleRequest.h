/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/rbin/RecycleBinRequest.h>
#include <aws/rbin/model/RetentionPeriod.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rbin/model/ResourceType.h>
#include <aws/rbin/model/LockConfiguration.h>
#include <aws/rbin/model/Tag.h>
#include <aws/rbin/model/ResourceTag.h>
#include <utility>

namespace Aws
{
namespace RecycleBin
{
namespace Model
{

  /**
   */
  class CreateRuleRequest : public RecycleBinRequest
  {
  public:
    AWS_RECYCLEBIN_API CreateRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRule"; }

    AWS_RECYCLEBIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }
    inline CreateRuleRequest& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}
    inline CreateRuleRequest& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention rule description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the tags to assign to the retention rule.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateRuleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateRuleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateRuleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateRuleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource type to be retained by the retention rule. Currently, only
     * Amazon EBS snapshots and EBS-backed AMIs are supported. To retain snapshots,
     * specify <code>EBS_SNAPSHOT</code>. To retain EBS-backed AMIs, specify
     * <code>EC2_IMAGE</code>.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline CreateRuleRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline CreateRuleRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Tag-level retention rules only] Specifies the resource tags to use to
     * identify resources that are to be retained by a tag-level retention rule. For
     * tag-level retention rules, only deleted resources, of the specified resource
     * type, that have one or more of the specified tag key and value pairs are
     * retained. If a resource is deleted, but it does not have any of the specified
     * tag key and value pairs, it is immediately deleted without being retained by the
     * retention rule.</p> <p>You can add the same tag key and value pair to a maximum
     * or five retention rules.</p> <p>To create a Region-level retention rule, omit
     * this parameter. A Region-level retention rule does not have any resource tags
     * specified. It retains all deleted resources of the specified resource type in
     * the Region in which the rule is created, even if the resources are not
     * tagged.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }
    inline CreateRuleRequest& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}
    inline CreateRuleRequest& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}
    inline CreateRuleRequest& AddResourceTags(const ResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }
    inline CreateRuleRequest& AddResourceTags(ResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline const LockConfiguration& GetLockConfiguration() const{ return m_lockConfiguration; }
    inline bool LockConfigurationHasBeenSet() const { return m_lockConfigurationHasBeenSet; }
    inline void SetLockConfiguration(const LockConfiguration& value) { m_lockConfigurationHasBeenSet = true; m_lockConfiguration = value; }
    inline void SetLockConfiguration(LockConfiguration&& value) { m_lockConfigurationHasBeenSet = true; m_lockConfiguration = std::move(value); }
    inline CreateRuleRequest& WithLockConfiguration(const LockConfiguration& value) { SetLockConfiguration(value); return *this;}
    inline CreateRuleRequest& WithLockConfiguration(LockConfiguration&& value) { SetLockConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Region-level retention rules only] Specifies the exclusion tags to use to
     * identify resources that are to be excluded, or ignored, by a Region-level
     * retention rule. Resources that have any of these tags are not retained by the
     * retention rule upon deletion.</p> <p>You can't specify exclusion tags for
     * tag-level retention rules.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetExcludeResourceTags() const{ return m_excludeResourceTags; }
    inline bool ExcludeResourceTagsHasBeenSet() const { return m_excludeResourceTagsHasBeenSet; }
    inline void SetExcludeResourceTags(const Aws::Vector<ResourceTag>& value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags = value; }
    inline void SetExcludeResourceTags(Aws::Vector<ResourceTag>&& value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags = std::move(value); }
    inline CreateRuleRequest& WithExcludeResourceTags(const Aws::Vector<ResourceTag>& value) { SetExcludeResourceTags(value); return *this;}
    inline CreateRuleRequest& WithExcludeResourceTags(Aws::Vector<ResourceTag>&& value) { SetExcludeResourceTags(std::move(value)); return *this;}
    inline CreateRuleRequest& AddExcludeResourceTags(const ResourceTag& value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags.push_back(value); return *this; }
    inline CreateRuleRequest& AddExcludeResourceTags(ResourceTag&& value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    LockConfiguration m_lockConfiguration;
    bool m_lockConfigurationHasBeenSet = false;

    Aws::Vector<ResourceTag> m_excludeResourceTags;
    bool m_excludeResourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
