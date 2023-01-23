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


    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline CreateRuleRequest& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline CreateRuleRequest& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


    /**
     * <p>The retention rule description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The retention rule description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The retention rule description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The retention rule description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The retention rule description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The retention rule description.</p>
     */
    inline CreateRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The retention rule description.</p>
     */
    inline CreateRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The retention rule description.</p>
     */
    inline CreateRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the tags to assign to the retention rule.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Information about the tags to assign to the retention rule.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Information about the tags to assign to the retention rule.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Information about the tags to assign to the retention rule.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Information about the tags to assign to the retention rule.</p>
     */
    inline CreateRuleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Information about the tags to assign to the retention rule.</p>
     */
    inline CreateRuleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Information about the tags to assign to the retention rule.</p>
     */
    inline CreateRuleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Information about the tags to assign to the retention rule.</p>
     */
    inline CreateRuleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The resource type to be retained by the retention rule. Currently, only
     * Amazon EBS snapshots and EBS-backed AMIs are supported. To retain snapshots,
     * specify <code>EBS_SNAPSHOT</code>. To retain EBS-backed AMIs, specify
     * <code>EC2_IMAGE</code>.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type to be retained by the retention rule. Currently, only
     * Amazon EBS snapshots and EBS-backed AMIs are supported. To retain snapshots,
     * specify <code>EBS_SNAPSHOT</code>. To retain EBS-backed AMIs, specify
     * <code>EC2_IMAGE</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type to be retained by the retention rule. Currently, only
     * Amazon EBS snapshots and EBS-backed AMIs are supported. To retain snapshots,
     * specify <code>EBS_SNAPSHOT</code>. To retain EBS-backed AMIs, specify
     * <code>EC2_IMAGE</code>.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type to be retained by the retention rule. Currently, only
     * Amazon EBS snapshots and EBS-backed AMIs are supported. To retain snapshots,
     * specify <code>EBS_SNAPSHOT</code>. To retain EBS-backed AMIs, specify
     * <code>EC2_IMAGE</code>.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type to be retained by the retention rule. Currently, only
     * Amazon EBS snapshots and EBS-backed AMIs are supported. To retain snapshots,
     * specify <code>EBS_SNAPSHOT</code>. To retain EBS-backed AMIs, specify
     * <code>EC2_IMAGE</code>.</p>
     */
    inline CreateRuleRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type to be retained by the retention rule. Currently, only
     * Amazon EBS snapshots and EBS-backed AMIs are supported. To retain snapshots,
     * specify <code>EBS_SNAPSHOT</code>. To retain EBS-backed AMIs, specify
     * <code>EC2_IMAGE</code>.</p>
     */
    inline CreateRuleRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Specifies the resource tags to use to identify resources that are to be
     * retained by a tag-level retention rule. For tag-level retention rules, only
     * deleted resources, of the specified resource type, that have one or more of the
     * specified tag key and value pairs are retained. If a resource is deleted, but it
     * does not have any of the specified tag key and value pairs, it is immediately
     * deleted without being retained by the retention rule.</p> <p>You can add the
     * same tag key and value pair to a maximum or five retention rules.</p> <p>To
     * create a Region-level retention rule, omit this parameter. A Region-level
     * retention rule does not have any resource tags specified. It retains all deleted
     * resources of the specified resource type in the Region in which the rule is
     * created, even if the resources are not tagged.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>Specifies the resource tags to use to identify resources that are to be
     * retained by a tag-level retention rule. For tag-level retention rules, only
     * deleted resources, of the specified resource type, that have one or more of the
     * specified tag key and value pairs are retained. If a resource is deleted, but it
     * does not have any of the specified tag key and value pairs, it is immediately
     * deleted without being retained by the retention rule.</p> <p>You can add the
     * same tag key and value pair to a maximum or five retention rules.</p> <p>To
     * create a Region-level retention rule, omit this parameter. A Region-level
     * retention rule does not have any resource tags specified. It retains all deleted
     * resources of the specified resource type in the Region in which the rule is
     * created, even if the resources are not tagged.</p>
     */
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }

    /**
     * <p>Specifies the resource tags to use to identify resources that are to be
     * retained by a tag-level retention rule. For tag-level retention rules, only
     * deleted resources, of the specified resource type, that have one or more of the
     * specified tag key and value pairs are retained. If a resource is deleted, but it
     * does not have any of the specified tag key and value pairs, it is immediately
     * deleted without being retained by the retention rule.</p> <p>You can add the
     * same tag key and value pair to a maximum or five retention rules.</p> <p>To
     * create a Region-level retention rule, omit this parameter. A Region-level
     * retention rule does not have any resource tags specified. It retains all deleted
     * resources of the specified resource type in the Region in which the rule is
     * created, even if the resources are not tagged.</p>
     */
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }

    /**
     * <p>Specifies the resource tags to use to identify resources that are to be
     * retained by a tag-level retention rule. For tag-level retention rules, only
     * deleted resources, of the specified resource type, that have one or more of the
     * specified tag key and value pairs are retained. If a resource is deleted, but it
     * does not have any of the specified tag key and value pairs, it is immediately
     * deleted without being retained by the retention rule.</p> <p>You can add the
     * same tag key and value pair to a maximum or five retention rules.</p> <p>To
     * create a Region-level retention rule, omit this parameter. A Region-level
     * retention rule does not have any resource tags specified. It retains all deleted
     * resources of the specified resource type in the Region in which the rule is
     * created, even if the resources are not tagged.</p>
     */
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }

    /**
     * <p>Specifies the resource tags to use to identify resources that are to be
     * retained by a tag-level retention rule. For tag-level retention rules, only
     * deleted resources, of the specified resource type, that have one or more of the
     * specified tag key and value pairs are retained. If a resource is deleted, but it
     * does not have any of the specified tag key and value pairs, it is immediately
     * deleted without being retained by the retention rule.</p> <p>You can add the
     * same tag key and value pair to a maximum or five retention rules.</p> <p>To
     * create a Region-level retention rule, omit this parameter. A Region-level
     * retention rule does not have any resource tags specified. It retains all deleted
     * resources of the specified resource type in the Region in which the rule is
     * created, even if the resources are not tagged.</p>
     */
    inline CreateRuleRequest& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>Specifies the resource tags to use to identify resources that are to be
     * retained by a tag-level retention rule. For tag-level retention rules, only
     * deleted resources, of the specified resource type, that have one or more of the
     * specified tag key and value pairs are retained. If a resource is deleted, but it
     * does not have any of the specified tag key and value pairs, it is immediately
     * deleted without being retained by the retention rule.</p> <p>You can add the
     * same tag key and value pair to a maximum or five retention rules.</p> <p>To
     * create a Region-level retention rule, omit this parameter. A Region-level
     * retention rule does not have any resource tags specified. It retains all deleted
     * resources of the specified resource type in the Region in which the rule is
     * created, even if the resources are not tagged.</p>
     */
    inline CreateRuleRequest& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the resource tags to use to identify resources that are to be
     * retained by a tag-level retention rule. For tag-level retention rules, only
     * deleted resources, of the specified resource type, that have one or more of the
     * specified tag key and value pairs are retained. If a resource is deleted, but it
     * does not have any of the specified tag key and value pairs, it is immediately
     * deleted without being retained by the retention rule.</p> <p>You can add the
     * same tag key and value pair to a maximum or five retention rules.</p> <p>To
     * create a Region-level retention rule, omit this parameter. A Region-level
     * retention rule does not have any resource tags specified. It retains all deleted
     * resources of the specified resource type in the Region in which the rule is
     * created, even if the resources are not tagged.</p>
     */
    inline CreateRuleRequest& AddResourceTags(const ResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }

    /**
     * <p>Specifies the resource tags to use to identify resources that are to be
     * retained by a tag-level retention rule. For tag-level retention rules, only
     * deleted resources, of the specified resource type, that have one or more of the
     * specified tag key and value pairs are retained. If a resource is deleted, but it
     * does not have any of the specified tag key and value pairs, it is immediately
     * deleted without being retained by the retention rule.</p> <p>You can add the
     * same tag key and value pair to a maximum or five retention rules.</p> <p>To
     * create a Region-level retention rule, omit this parameter. A Region-level
     * retention rule does not have any resource tags specified. It retains all deleted
     * resources of the specified resource type in the Region in which the rule is
     * created, even if the resources are not tagged.</p>
     */
    inline CreateRuleRequest& AddResourceTags(ResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline const LockConfiguration& GetLockConfiguration() const{ return m_lockConfiguration; }

    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline bool LockConfigurationHasBeenSet() const { return m_lockConfigurationHasBeenSet; }

    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline void SetLockConfiguration(const LockConfiguration& value) { m_lockConfigurationHasBeenSet = true; m_lockConfiguration = value; }

    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline void SetLockConfiguration(LockConfiguration&& value) { m_lockConfigurationHasBeenSet = true; m_lockConfiguration = std::move(value); }

    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline CreateRuleRequest& WithLockConfiguration(const LockConfiguration& value) { SetLockConfiguration(value); return *this;}

    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline CreateRuleRequest& WithLockConfiguration(LockConfiguration&& value) { SetLockConfiguration(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
