/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/resource-groups/model/GroupLifecycleEventsDesiredStatus.h>
#include <utility>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class UpdateAccountSettingsRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API UpdateAccountSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountSettings"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies whether you want to turn <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/monitor-groups.html">group
     * lifecycle events</a> on or off.</p> <p>You can't turn on group lifecycle events
     * if your resource groups quota is greater than 2,000. </p>
     */
    inline const GroupLifecycleEventsDesiredStatus& GetGroupLifecycleEventsDesiredStatus() const{ return m_groupLifecycleEventsDesiredStatus; }
    inline bool GroupLifecycleEventsDesiredStatusHasBeenSet() const { return m_groupLifecycleEventsDesiredStatusHasBeenSet; }
    inline void SetGroupLifecycleEventsDesiredStatus(const GroupLifecycleEventsDesiredStatus& value) { m_groupLifecycleEventsDesiredStatusHasBeenSet = true; m_groupLifecycleEventsDesiredStatus = value; }
    inline void SetGroupLifecycleEventsDesiredStatus(GroupLifecycleEventsDesiredStatus&& value) { m_groupLifecycleEventsDesiredStatusHasBeenSet = true; m_groupLifecycleEventsDesiredStatus = std::move(value); }
    inline UpdateAccountSettingsRequest& WithGroupLifecycleEventsDesiredStatus(const GroupLifecycleEventsDesiredStatus& value) { SetGroupLifecycleEventsDesiredStatus(value); return *this;}
    inline UpdateAccountSettingsRequest& WithGroupLifecycleEventsDesiredStatus(GroupLifecycleEventsDesiredStatus&& value) { SetGroupLifecycleEventsDesiredStatus(std::move(value)); return *this;}
    ///@}
  private:

    GroupLifecycleEventsDesiredStatus m_groupLifecycleEventsDesiredStatus;
    bool m_groupLifecycleEventsDesiredStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
