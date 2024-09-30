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
    AWS_RESOURCEGROUPS_API ListTagSyncTasksFilter();
    AWS_RESOURCEGROUPS_API ListTagSyncTasksFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API ListTagSyncTasksFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the application group. </p>
     */
    inline const Aws::String& GetGroupArn() const{ return m_groupArn; }
    inline bool GroupArnHasBeenSet() const { return m_groupArnHasBeenSet; }
    inline void SetGroupArn(const Aws::String& value) { m_groupArnHasBeenSet = true; m_groupArn = value; }
    inline void SetGroupArn(Aws::String&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::move(value); }
    inline void SetGroupArn(const char* value) { m_groupArnHasBeenSet = true; m_groupArn.assign(value); }
    inline ListTagSyncTasksFilter& WithGroupArn(const Aws::String& value) { SetGroupArn(value); return *this;}
    inline ListTagSyncTasksFilter& WithGroupArn(Aws::String&& value) { SetGroupArn(std::move(value)); return *this;}
    inline ListTagSyncTasksFilter& WithGroupArn(const char* value) { SetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application group. </p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline ListTagSyncTasksFilter& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline ListTagSyncTasksFilter& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline ListTagSyncTasksFilter& WithGroupName(const char* value) { SetGroupName(value); return *this;}
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
