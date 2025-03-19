/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/GroupLifecycleEventsDesiredStatus.h>
#include <aws/resource-groups/model/GroupLifecycleEventsStatus.h>
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
   * <p>The Resource Groups settings for this Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/AccountSettings">AWS
   * API Reference</a></p>
   */
  class AccountSettings
  {
  public:
    AWS_RESOURCEGROUPS_API AccountSettings() = default;
    AWS_RESOURCEGROUPS_API AccountSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API AccountSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The desired target status of the group lifecycle events feature. If</p>
     */
    inline GroupLifecycleEventsDesiredStatus GetGroupLifecycleEventsDesiredStatus() const { return m_groupLifecycleEventsDesiredStatus; }
    inline bool GroupLifecycleEventsDesiredStatusHasBeenSet() const { return m_groupLifecycleEventsDesiredStatusHasBeenSet; }
    inline void SetGroupLifecycleEventsDesiredStatus(GroupLifecycleEventsDesiredStatus value) { m_groupLifecycleEventsDesiredStatusHasBeenSet = true; m_groupLifecycleEventsDesiredStatus = value; }
    inline AccountSettings& WithGroupLifecycleEventsDesiredStatus(GroupLifecycleEventsDesiredStatus value) { SetGroupLifecycleEventsDesiredStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the group lifecycle events feature.</p>
     */
    inline GroupLifecycleEventsStatus GetGroupLifecycleEventsStatus() const { return m_groupLifecycleEventsStatus; }
    inline bool GroupLifecycleEventsStatusHasBeenSet() const { return m_groupLifecycleEventsStatusHasBeenSet; }
    inline void SetGroupLifecycleEventsStatus(GroupLifecycleEventsStatus value) { m_groupLifecycleEventsStatusHasBeenSet = true; m_groupLifecycleEventsStatus = value; }
    inline AccountSettings& WithGroupLifecycleEventsStatus(GroupLifecycleEventsStatus value) { SetGroupLifecycleEventsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of any error message occurs during an attempt to turn group
     * lifecycle events on or off.</p>
     */
    inline const Aws::String& GetGroupLifecycleEventsStatusMessage() const { return m_groupLifecycleEventsStatusMessage; }
    inline bool GroupLifecycleEventsStatusMessageHasBeenSet() const { return m_groupLifecycleEventsStatusMessageHasBeenSet; }
    template<typename GroupLifecycleEventsStatusMessageT = Aws::String>
    void SetGroupLifecycleEventsStatusMessage(GroupLifecycleEventsStatusMessageT&& value) { m_groupLifecycleEventsStatusMessageHasBeenSet = true; m_groupLifecycleEventsStatusMessage = std::forward<GroupLifecycleEventsStatusMessageT>(value); }
    template<typename GroupLifecycleEventsStatusMessageT = Aws::String>
    AccountSettings& WithGroupLifecycleEventsStatusMessage(GroupLifecycleEventsStatusMessageT&& value) { SetGroupLifecycleEventsStatusMessage(std::forward<GroupLifecycleEventsStatusMessageT>(value)); return *this;}
    ///@}
  private:

    GroupLifecycleEventsDesiredStatus m_groupLifecycleEventsDesiredStatus{GroupLifecycleEventsDesiredStatus::NOT_SET};
    bool m_groupLifecycleEventsDesiredStatusHasBeenSet = false;

    GroupLifecycleEventsStatus m_groupLifecycleEventsStatus{GroupLifecycleEventsStatus::NOT_SET};
    bool m_groupLifecycleEventsStatusHasBeenSet = false;

    Aws::String m_groupLifecycleEventsStatusMessage;
    bool m_groupLifecycleEventsStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
