/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/UserSettingActionEnum.h>
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
      namespace UserSettingActionEnumMapper
      {

        static const int CLIPBOARD_COPY_FROM_LOCAL_DEVICE_HASH = HashingUtils::HashString("CLIPBOARD_COPY_FROM_LOCAL_DEVICE");
        static const int CLIPBOARD_COPY_TO_LOCAL_DEVICE_HASH = HashingUtils::HashString("CLIPBOARD_COPY_TO_LOCAL_DEVICE");
        static const int PRINTING_TO_LOCAL_DEVICE_HASH = HashingUtils::HashString("PRINTING_TO_LOCAL_DEVICE");
        static const int SMART_CARD_HASH = HashingUtils::HashString("SMART_CARD");


        UserSettingActionEnum GetUserSettingActionEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLIPBOARD_COPY_FROM_LOCAL_DEVICE_HASH)
          {
            return UserSettingActionEnum::CLIPBOARD_COPY_FROM_LOCAL_DEVICE;
          }
          else if (hashCode == CLIPBOARD_COPY_TO_LOCAL_DEVICE_HASH)
          {
            return UserSettingActionEnum::CLIPBOARD_COPY_TO_LOCAL_DEVICE;
          }
          else if (hashCode == PRINTING_TO_LOCAL_DEVICE_HASH)
          {
            return UserSettingActionEnum::PRINTING_TO_LOCAL_DEVICE;
          }
          else if (hashCode == SMART_CARD_HASH)
          {
            return UserSettingActionEnum::SMART_CARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserSettingActionEnum>(hashCode);
          }

          return UserSettingActionEnum::NOT_SET;
        }

        Aws::String GetNameForUserSettingActionEnum(UserSettingActionEnum enumValue)
        {
          switch(enumValue)
          {
          case UserSettingActionEnum::NOT_SET:
            return {};
          case UserSettingActionEnum::CLIPBOARD_COPY_FROM_LOCAL_DEVICE:
            return "CLIPBOARD_COPY_FROM_LOCAL_DEVICE";
          case UserSettingActionEnum::CLIPBOARD_COPY_TO_LOCAL_DEVICE:
            return "CLIPBOARD_COPY_TO_LOCAL_DEVICE";
          case UserSettingActionEnum::PRINTING_TO_LOCAL_DEVICE:
            return "PRINTING_TO_LOCAL_DEVICE";
          case UserSettingActionEnum::SMART_CARD:
            return "SMART_CARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserSettingActionEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
