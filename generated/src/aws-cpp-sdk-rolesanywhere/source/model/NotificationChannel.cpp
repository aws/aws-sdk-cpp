/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/NotificationChannel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RolesAnywhere
  {
    namespace Model
    {
      namespace NotificationChannelMapper
      {

        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");


        NotificationChannel GetNotificationChannelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return NotificationChannel::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationChannel>(hashCode);
          }

          return NotificationChannel::NOT_SET;
        }

        Aws::String GetNameForNotificationChannel(NotificationChannel enumValue)
        {
          switch(enumValue)
          {
          case NotificationChannel::NOT_SET:
            return {};
          case NotificationChannel::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationChannelMapper
    } // namespace Model
  } // namespace RolesAnywhere
} // namespace Aws
