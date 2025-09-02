/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/NotificationConfigurationSubtype.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Notifications
  {
    namespace Model
    {
      namespace NotificationConfigurationSubtypeMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int ADMIN_MANAGED_HASH = HashingUtils::HashString("ADMIN_MANAGED");


        NotificationConfigurationSubtype GetNotificationConfigurationSubtypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return NotificationConfigurationSubtype::ACCOUNT;
          }
          else if (hashCode == ADMIN_MANAGED_HASH)
          {
            return NotificationConfigurationSubtype::ADMIN_MANAGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationConfigurationSubtype>(hashCode);
          }

          return NotificationConfigurationSubtype::NOT_SET;
        }

        Aws::String GetNameForNotificationConfigurationSubtype(NotificationConfigurationSubtype enumValue)
        {
          switch(enumValue)
          {
          case NotificationConfigurationSubtype::NOT_SET:
            return {};
          case NotificationConfigurationSubtype::ACCOUNT:
            return "ACCOUNT";
          case NotificationConfigurationSubtype::ADMIN_MANAGED:
            return "ADMIN_MANAGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationConfigurationSubtypeMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws
