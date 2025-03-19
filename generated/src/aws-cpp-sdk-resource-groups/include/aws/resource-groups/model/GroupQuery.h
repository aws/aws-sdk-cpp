/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/ResourceQuery.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>A mapping of a query attached to a resource group that determines the Amazon
   * Web Services resources that are members of the group.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GroupQuery">AWS
   * API Reference</a></p>
   */
  class GroupQuery
  {
  public:
    AWS_RESOURCEGROUPS_API GroupQuery() = default;
    AWS_RESOURCEGROUPS_API GroupQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API GroupQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the resource group that is associated with the specified resource
     * query.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    GroupQuery& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource query that determines which Amazon Web Services resources are
     * members of the associated resource group.</p>
     */
    inline const ResourceQuery& GetResourceQuery() const { return m_resourceQuery; }
    inline bool ResourceQueryHasBeenSet() const { return m_resourceQueryHasBeenSet; }
    template<typename ResourceQueryT = ResourceQuery>
    void SetResourceQuery(ResourceQueryT&& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = std::forward<ResourceQueryT>(value); }
    template<typename ResourceQueryT = ResourceQuery>
    GroupQuery& WithResourceQuery(ResourceQueryT&& value) { SetResourceQuery(std::forward<ResourceQueryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    ResourceQuery m_resourceQuery;
    bool m_resourceQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
