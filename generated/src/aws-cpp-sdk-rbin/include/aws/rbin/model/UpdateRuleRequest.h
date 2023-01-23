/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/rbin/RecycleBinRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/model/RetentionPeriod.h>
#include <aws/rbin/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateRuleRequest : public RecycleBinRequest
  {
  public:
    AWS_RECYCLEBIN_API UpdateRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRule"; }

    AWS_RECYCLEBIN_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline UpdateRuleRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline UpdateRuleRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline UpdateRuleRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


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
    inline UpdateRuleRequest& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline UpdateRuleRequest& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


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
    inline UpdateRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The retention rule description.</p>
     */
    inline UpdateRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The retention rule description.</p>
     */
    inline UpdateRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     *  <p>This parameter is currently not supported. You can't update a
     * retention rule's resource type after creation.</p> 
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     *  <p>This parameter is currently not supported. You can't update a
     * retention rule's resource type after creation.</p> 
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     *  <p>This parameter is currently not supported. You can't update a
     * retention rule's resource type after creation.</p> 
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     *  <p>This parameter is currently not supported. You can't update a
     * retention rule's resource type after creation.</p> 
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     *  <p>This parameter is currently not supported. You can't update a
     * retention rule's resource type after creation.</p> 
     */
    inline UpdateRuleRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     *  <p>This parameter is currently not supported. You can't update a
     * retention rule's resource type after creation.</p> 
     */
    inline UpdateRuleRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


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
    inline UpdateRuleRequest& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}

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
    inline UpdateRuleRequest& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}

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
    inline UpdateRuleRequest& AddResourceTags(const ResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }

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
    inline UpdateRuleRequest& AddResourceTags(ResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
