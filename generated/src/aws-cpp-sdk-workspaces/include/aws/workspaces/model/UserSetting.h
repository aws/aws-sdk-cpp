/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/UserSettingActionEnum.h>
#include <aws/workspaces/model/UserSettingPermissionEnum.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Information about the user's permission settings.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UserSetting">AWS
   * API Reference</a></p>
   */
  class UserSetting
  {
  public:
    AWS_WORKSPACES_API UserSetting() = default;
    AWS_WORKSPACES_API UserSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API UserSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the type of action.</p>
     */
    inline UserSettingActionEnum GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(UserSettingActionEnum value) { m_actionHasBeenSet = true; m_action = value; }
    inline UserSetting& WithAction(UserSettingActionEnum value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the setting is enabled or disabled.</p>
     */
    inline UserSettingPermissionEnum GetPermission() const { return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(UserSettingPermissionEnum value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline UserSetting& WithPermission(UserSettingPermissionEnum value) { SetPermission(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the maximum character length for the specified user setting.</p>
     */
    inline int GetMaximumLength() const { return m_maximumLength; }
    inline bool MaximumLengthHasBeenSet() const { return m_maximumLengthHasBeenSet; }
    inline void SetMaximumLength(int value) { m_maximumLengthHasBeenSet = true; m_maximumLength = value; }
    inline UserSetting& WithMaximumLength(int value) { SetMaximumLength(value); return *this;}
    ///@}
  private:

    UserSettingActionEnum m_action{UserSettingActionEnum::NOT_SET};
    bool m_actionHasBeenSet = false;

    UserSettingPermissionEnum m_permission{UserSettingPermissionEnum::NOT_SET};
    bool m_permissionHasBeenSet = false;

    int m_maximumLength{0};
    bool m_maximumLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
