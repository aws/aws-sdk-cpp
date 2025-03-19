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
    AWS_RECYCLEBIN_API CreateRuleRequest() = default;

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
    inline const RetentionPeriod& GetRetentionPeriod() const { return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    template<typename RetentionPeriodT = RetentionPeriod>
    void SetRetentionPeriod(RetentionPeriodT&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::forward<RetentionPeriodT>(value); }
    template<typename RetentionPeriodT = RetentionPeriod>
    CreateRuleRequest& WithRetentionPeriod(RetentionPeriodT&& value) { SetRetentionPeriod(std::forward<RetentionPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention rule description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateRuleRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the tags to assign to the retention rule.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateRuleRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateRuleRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource type to be retained by the retention rule. Currently, only
     * Amazon EBS snapshots and EBS-backed AMIs are supported. To retain snapshots,
     * specify <code>EBS_SNAPSHOT</code>. To retain EBS-backed AMIs, specify
     * <code>EC2_IMAGE</code>.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline CreateRuleRequest& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
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
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    CreateRuleRequest& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = ResourceTag>
    CreateRuleRequest& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline const LockConfiguration& GetLockConfiguration() const { return m_lockConfiguration; }
    inline bool LockConfigurationHasBeenSet() const { return m_lockConfigurationHasBeenSet; }
    template<typename LockConfigurationT = LockConfiguration>
    void SetLockConfiguration(LockConfigurationT&& value) { m_lockConfigurationHasBeenSet = true; m_lockConfiguration = std::forward<LockConfigurationT>(value); }
    template<typename LockConfigurationT = LockConfiguration>
    CreateRuleRequest& WithLockConfiguration(LockConfigurationT&& value) { SetLockConfiguration(std::forward<LockConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Region-level retention rules only] Specifies the exclusion tags to use to
     * identify resources that are to be excluded, or ignored, by a Region-level
     * retention rule. Resources that have any of these tags are not retained by the
     * retention rule upon deletion.</p> <p>You can't specify exclusion tags for
     * tag-level retention rules.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetExcludeResourceTags() const { return m_excludeResourceTags; }
    inline bool ExcludeResourceTagsHasBeenSet() const { return m_excludeResourceTagsHasBeenSet; }
    template<typename ExcludeResourceTagsT = Aws::Vector<ResourceTag>>
    void SetExcludeResourceTags(ExcludeResourceTagsT&& value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags = std::forward<ExcludeResourceTagsT>(value); }
    template<typename ExcludeResourceTagsT = Aws::Vector<ResourceTag>>
    CreateRuleRequest& WithExcludeResourceTags(ExcludeResourceTagsT&& value) { SetExcludeResourceTags(std::forward<ExcludeResourceTagsT>(value)); return *this;}
    template<typename ExcludeResourceTagsT = ResourceTag>
    CreateRuleRequest& AddExcludeResourceTags(ExcludeResourceTagsT&& value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags.emplace_back(std::forward<ExcludeResourceTagsT>(value)); return *this; }
    ///@}
  private:

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
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
