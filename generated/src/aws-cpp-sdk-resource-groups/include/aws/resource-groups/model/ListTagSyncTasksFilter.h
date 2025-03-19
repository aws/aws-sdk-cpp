/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Returns tag-sync tasks filtered by the Amazon resource name (ARN) or name of
   * a specified application group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ListTagSyncTasksFilter">AWS
   * API Reference</a></p>
   */
  class ListTagSyncTasksFilter
  {
  public:
    AWS_RESOURCEGROUPS_API ListTagSyncTasksFilter() = default;
    AWS_RESOURCEGROUPS_API ListTagSyncTasksFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API ListTagSyncTasksFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the application group. </p>
     */
    inline const Aws::String& GetGroupArn() const { return m_groupArn; }
    inline bool GroupArnHasBeenSet() const { return m_groupArnHasBeenSet; }
    template<typename GroupArnT = Aws::String>
    void SetGroupArn(GroupArnT&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::forward<GroupArnT>(value); }
    template<typename GroupArnT = Aws::String>
    ListTagSyncTasksFilter& WithGroupArn(GroupArnT&& value) { SetGroupArn(std::forward<GroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application group. </p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    ListTagSyncTasksFilter& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupArn;
    bool m_groupArnHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
