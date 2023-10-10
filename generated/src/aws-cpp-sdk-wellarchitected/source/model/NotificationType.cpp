/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/NotificationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace NotificationTypeMapper
      {

        static const int LENS_VERSION_UPGRADED_HASH = HashingUtils::HashString("LENS_VERSION_UPGRADED");
        static const int LENS_VERSION_DEPRECATED_HASH = HashingUtils::HashString("LENS_VERSION_DEPRECATED");


        NotificationType GetNotificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LENS_VERSION_UPGRADED_HASH)
          {
            return NotificationType::LENS_VERSION_UPGRADED;
          }
          else if (hashCode == LENS_VERSION_DEPRECATED_HASH)
          {
            return NotificationType::LENS_VERSION_DEPRECATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationType>(hashCode);
          }

          return NotificationType::NOT_SET;
        }

        Aws::String GetNameForNotificationType(NotificationType enumValue)
        {
          switch(enumValue)
          {
          case NotificationType::NOT_SET:
            return {};
          case NotificationType::LENS_VERSION_UPGRADED:
            return "LENS_VERSION_UPGRADED";
          case NotificationType::LENS_VERSION_DEPRECATED:
            return "LENS_VERSION_DEPRECATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationTypeMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
