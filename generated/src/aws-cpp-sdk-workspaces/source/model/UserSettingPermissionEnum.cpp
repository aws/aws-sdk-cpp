/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/UserSettingPermissionEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace UserSettingPermissionEnumMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        UserSettingPermissionEnum GetUserSettingPermissionEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return UserSettingPermissionEnum::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return UserSettingPermissionEnum::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserSettingPermissionEnum>(hashCode);
          }

          return UserSettingPermissionEnum::NOT_SET;
        }

        Aws::String GetNameForUserSettingPermissionEnum(UserSettingPermissionEnum enumValue)
        {
          switch(enumValue)
          {
          case UserSettingPermissionEnum::NOT_SET:
            return {};
          case UserSettingPermissionEnum::ENABLED:
            return "ENABLED";
          case UserSettingPermissionEnum::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserSettingPermissionEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
