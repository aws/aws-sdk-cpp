/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RefreshFailureAlertStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace RefreshFailureAlertStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        RefreshFailureAlertStatus GetRefreshFailureAlertStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return RefreshFailureAlertStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return RefreshFailureAlertStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RefreshFailureAlertStatus>(hashCode);
          }

          return RefreshFailureAlertStatus::NOT_SET;
        }

        Aws::String GetNameForRefreshFailureAlertStatus(RefreshFailureAlertStatus enumValue)
        {
          switch(enumValue)
          {
          case RefreshFailureAlertStatus::NOT_SET:
            return {};
          case RefreshFailureAlertStatus::ENABLED:
            return "ENABLED";
          case RefreshFailureAlertStatus::DISABLED:
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

      } // namespace RefreshFailureAlertStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
