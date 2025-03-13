/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class PutGroupConfigurationRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API PutGroupConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutGroupConfiguration"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or Amazon resource name (ARN) of the resource group with the
     * configuration that you want to update.</p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    PutGroupConfigurationRequest& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new configuration to associate with the specified group. A configuration
     * associates the resource group with an Amazon Web Services service and specifies
     * how the service can interact with the resources in the group. A configuration is
     * an array of <a>GroupConfigurationItem</a> elements.</p> <p>For information about
     * the syntax of a service configuration, see <a
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
    PutGroupConfigurationRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    template<typename ConfigurationT = GroupConfigurationItem>
    PutGroupConfigurationRequest& AddConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration.emplace_back(std::forward<ConfigurationT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::Vector<GroupConfigurationItem> m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
