/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/NotificationSeverityLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SupportApp
  {
    namespace Model
    {
      namespace NotificationSeverityLevelMapper
      {

        static constexpr uint32_t none_HASH = ConstExprHashingUtils::HashString("none");
        static constexpr uint32_t all_HASH = ConstExprHashingUtils::HashString("all");
        static constexpr uint32_t high_HASH = ConstExprHashingUtils::HashString("high");


        NotificationSeverityLevel GetNotificationSeverityLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return NotificationSeverityLevel::none;
          }
          else if (hashCode == all_HASH)
          {
            return NotificationSeverityLevel::all;
          }
          else if (hashCode == high_HASH)
          {
            return NotificationSeverityLevel::high;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationSeverityLevel>(hashCode);
          }

          return NotificationSeverityLevel::NOT_SET;
        }

        Aws::String GetNameForNotificationSeverityLevel(NotificationSeverityLevel enumValue)
        {
          switch(enumValue)
          {
          case NotificationSeverityLevel::NOT_SET:
            return {};
          case NotificationSeverityLevel::none:
            return "none";
          case NotificationSeverityLevel::all:
            return "all";
          case NotificationSeverityLevel::high:
            return "high";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationSeverityLevelMapper
    } // namespace Model
  } // namespace SupportApp
} // namespace Aws
