﻿/**
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
    AWS_RESOURCEGROUPS_API AccountSettings();
    AWS_RESOURCEGROUPS_API AccountSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API AccountSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The desired target status of the group lifecycle events feature. If</p>
     */
    inline const GroupLifecycleEventsDesiredStatus& GetGroupLifecycleEventsDesiredStatus() const{ return m_groupLifecycleEventsDesiredStatus; }
    inline bool GroupLifecycleEventsDesiredStatusHasBeenSet() const { return m_groupLifecycleEventsDesiredStatusHasBeenSet; }
    inline void SetGroupLifecycleEventsDesiredStatus(const GroupLifecycleEventsDesiredStatus& value) { m_groupLifecycleEventsDesiredStatusHasBeenSet = true; m_groupLifecycleEventsDesiredStatus = value; }
    inline void SetGroupLifecycleEventsDesiredStatus(GroupLifecycleEventsDesiredStatus&& value) { m_groupLifecycleEventsDesiredStatusHasBeenSet = true; m_groupLifecycleEventsDesiredStatus = std::move(value); }
    inline AccountSettings& WithGroupLifecycleEventsDesiredStatus(const GroupLifecycleEventsDesiredStatus& value) { SetGroupLifecycleEventsDesiredStatus(value); return *this;}
    inline AccountSettings& WithGroupLifecycleEventsDesiredStatus(GroupLifecycleEventsDesiredStatus&& value) { SetGroupLifecycleEventsDesiredStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the group lifecycle events feature.</p>
     */
    inline const GroupLifecycleEventsStatus& GetGroupLifecycleEventsStatus() const{ return m_groupLifecycleEventsStatus; }
    inline bool GroupLifecycleEventsStatusHasBeenSet() const { return m_groupLifecycleEventsStatusHasBeenSet; }
    inline void SetGroupLifecycleEventsStatus(const GroupLifecycleEventsStatus& value) { m_groupLifecycleEventsStatusHasBeenSet = true; m_groupLifecycleEventsStatus = value; }
    inline void SetGroupLifecycleEventsStatus(GroupLifecycleEventsStatus&& value) { m_groupLifecycleEventsStatusHasBeenSet = true; m_groupLifecycleEventsStatus = std::move(value); }
    inline AccountSettings& WithGroupLifecycleEventsStatus(const GroupLifecycleEventsStatus& value) { SetGroupLifecycleEventsStatus(value); return *this;}
    inline AccountSettings& WithGroupLifecycleEventsStatus(GroupLifecycleEventsStatus&& value) { SetGroupLifecycleEventsStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of any error message occurs during an attempt to turn group
     * lifecycle events on or off.</p>
     */
    inline const Aws::String& GetGroupLifecycleEventsStatusMessage() const{ return m_groupLifecycleEventsStatusMessage; }
    inline bool GroupLifecycleEventsStatusMessageHasBeenSet() const { return m_groupLifecycleEventsStatusMessageHasBeenSet; }
    inline void SetGroupLifecycleEventsStatusMessage(const Aws::String& value) { m_groupLifecycleEventsStatusMessageHasBeenSet = true; m_groupLifecycleEventsStatusMessage = value; }
    inline void SetGroupLifecycleEventsStatusMessage(Aws::String&& value) { m_groupLifecycleEventsStatusMessageHasBeenSet = true; m_groupLifecycleEventsStatusMessage = std::move(value); }
    inline void SetGroupLifecycleEventsStatusMessage(const char* value) { m_groupLifecycleEventsStatusMessageHasBeenSet = true; m_groupLifecycleEventsStatusMessage.assign(value); }
    inline AccountSettings& WithGroupLifecycleEventsStatusMessage(const Aws::String& value) { SetGroupLifecycleEventsStatusMessage(value); return *this;}
    inline AccountSettings& WithGroupLifecycleEventsStatusMessage(Aws::String&& value) { SetGroupLifecycleEventsStatusMessage(std::move(value)); return *this;}
    inline AccountSettings& WithGroupLifecycleEventsStatusMessage(const char* value) { SetGroupLifecycleEventsStatusMessage(value); return *this;}
    ///@}
  private:

    GroupLifecycleEventsDesiredStatus m_groupLifecycleEventsDesiredStatus;
    bool m_groupLifecycleEventsDesiredStatusHasBeenSet = false;

    GroupLifecycleEventsStatus m_groupLifecycleEventsStatus;
    bool m_groupLifecycleEventsStatusHasBeenSet = false;

    Aws::String m_groupLifecycleEventsStatusMessage;
    bool m_groupLifecycleEventsStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
