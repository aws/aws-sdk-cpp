﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/ResourceQuery.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-groups/model/GroupConfigurationItem.h>
#include <utility>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class CreateGroupRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API CreateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGroup"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. You can't change the name of a resource group after you create it. A
     * resource group name can consist of letters, numbers, hyphens, periods, and
     * underscores. The name cannot start with <code>AWS</code>, <code>aws</code>, or
     * any other possible capitalization; these are reserved. A resource group name
     * must be unique within each Amazon Web Services Region in your Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateGroupRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the resource group. Descriptions can consist of letters,
     * numbers, hyphens, underscores, periods, and spaces.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource query that determines which Amazon Web Services resources are
     * members of this group. For more information about resource queries, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html#gettingstarted-query-cli-tag">Create
     * a tag-based group in Resource Groups</a>. </p>  <p>A resource group can
     * contain either a <code>ResourceQuery</code> or a <code>Configuration</code>, but
     * not both.</p> 
     */
    inline const ResourceQuery& GetResourceQuery() const{ return m_resourceQuery; }
    inline bool ResourceQueryHasBeenSet() const { return m_resourceQueryHasBeenSet; }
    inline void SetResourceQuery(const ResourceQuery& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = value; }
    inline void SetResourceQuery(ResourceQuery&& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = std::move(value); }
    inline CreateGroupRequest& WithResourceQuery(const ResourceQuery& value) { SetResourceQuery(value); return *this;}
    inline CreateGroupRequest& WithResourceQuery(ResourceQuery&& value) { SetResourceQuery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A configuration associates the resource group with an Amazon Web Services
     * service and specifies how the service can interact with the resources in the
     * group. A configuration is an array of <a>GroupConfigurationItem</a> elements.
     * For details about the syntax of service configurations, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for Resource Groups</a>.</p>  <p>A resource group can
     * contain either a <code>Configuration</code> or a <code>ResourceQuery</code>, but
     * not both.</p> 
     */
    inline const Aws::Vector<GroupConfigurationItem>& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const Aws::Vector<GroupConfigurationItem>& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(Aws::Vector<GroupConfigurationItem>&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline CreateGroupRequest& WithConfiguration(const Aws::Vector<GroupConfigurationItem>& value) { SetConfiguration(value); return *this;}
    inline CreateGroupRequest& WithConfiguration(Aws::Vector<GroupConfigurationItem>&& value) { SetConfiguration(std::move(value)); return *this;}
    inline CreateGroupRequest& AddConfiguration(const GroupConfigurationItem& value) { m_configurationHasBeenSet = true; m_configuration.push_back(value); return *this; }
    inline CreateGroupRequest& AddConfiguration(GroupConfigurationItem&& value) { m_configurationHasBeenSet = true; m_configuration.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ResourceQuery m_resourceQuery;
    bool m_resourceQueryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<GroupConfigurationItem> m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
