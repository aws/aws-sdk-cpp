/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/ResourceQuery.h>
#include <utility>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class UpdateGroupQueryRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API UpdateGroupQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGroupQuery"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or the Amazon resource name (ARN) of the resource group to
     * query.</p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    UpdateGroupQueryRequest& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource query to determine which Amazon Web Services resources are
     * members of this resource group.</p>  <p>A resource group can contain
     * either a <code>Configuration</code> or a <code>ResourceQuery</code>, but not
     * both.</p> 
     */
    inline const ResourceQuery& GetResourceQuery() const { return m_resourceQuery; }
    inline bool ResourceQueryHasBeenSet() const { return m_resourceQueryHasBeenSet; }
    template<typename ResourceQueryT = ResourceQuery>
    void SetResourceQuery(ResourceQueryT&& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = std::forward<ResourceQueryT>(value); }
    template<typename ResourceQueryT = ResourceQuery>
    UpdateGroupQueryRequest& WithResourceQuery(ResourceQueryT&& value) { SetResourceQuery(std::forward<ResourceQueryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    ResourceQuery m_resourceQuery;
    bool m_resourceQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
