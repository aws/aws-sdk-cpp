/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/AccessStatus.h>
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
      namespace AccessStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AccessStatus GetAccessStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AccessStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AccessStatus::DISABLED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return AccessStatus::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AccessStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessStatus>(hashCode);
          }

          return AccessStatus::NOT_SET;
        }

        Aws::String GetNameForAccessStatus(AccessStatus enumValue)
        {
          switch(enumValue)
          {
          case AccessStatus::NOT_SET:
            return {};
          case AccessStatus::ENABLED:
            return "ENABLED";
          case AccessStatus::DISABLED:
            return "DISABLED";
          case AccessStatus::PENDING:
            return "PENDING";
          case AccessStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessStatusMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws
