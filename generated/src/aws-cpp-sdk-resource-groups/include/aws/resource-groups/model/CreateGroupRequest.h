/**
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
    AWS_RESOURCEGROUPS_API CreateGroupRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateGroupRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the resource group. Descriptions can consist of letters,
     * numbers, hyphens, underscores, periods, and spaces.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline const ResourceQuery& GetResourceQuery() const { return m_resourceQuery; }
    inline bool ResourceQueryHasBeenSet() const { return m_resourceQueryHasBeenSet; }
    template<typename ResourceQueryT = ResourceQuery>
    void SetResourceQuery(ResourceQueryT&& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = std::forward<ResourceQueryT>(value); }
    template<typename ResourceQueryT = ResourceQuery>
    CreateGroupRequest& WithResourceQuery(ResourceQueryT&& value) { SetResourceQuery(std::forward<ResourceQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateGroupRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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
    inline const Aws::Vector<GroupConfigurationItem>& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = Aws::Vector<GroupConfigurationItem>>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::Vector<GroupConfigurationItem>>
    CreateGroupRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    template<typename ConfigurationT = GroupConfigurationItem>
    CreateGroupRequest& AddConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration.emplace_back(std::forward<ConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The critical rank of the application group on a scale of 1 to 10, with a rank
     * of 1 being the most critical, and a rank of 10 being least critical.</p>
     */
    inline int GetCriticality() const { return m_criticality; }
    inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }
    inline void SetCriticality(int value) { m_criticalityHasBeenSet = true; m_criticality = value; }
    inline CreateGroupRequest& WithCriticality(int value) { SetCriticality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name, email address or other identifier for the person or group who is
     * considered as the owner of this application group within your organization. </p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    CreateGroupRequest& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application group, which you can change at any time. </p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateGroupRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
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

    int m_criticality{0};
    bool m_criticalityHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
