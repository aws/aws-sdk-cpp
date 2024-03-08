/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/LimitlessDatabaseStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace LimitlessDatabaseStatusMapper
      {

        static const int active_HASH = HashingUtils::HashString("active");
        static const int not_in_use_HASH = HashingUtils::HashString("not-in-use");
        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int enabling_HASH = HashingUtils::HashString("enabling");
        static const int disabling_HASH = HashingUtils::HashString("disabling");
        static const int modifying_max_capacity_HASH = HashingUtils::HashString("modifying-max-capacity");
        static const int error_HASH = HashingUtils::HashString("error");


        LimitlessDatabaseStatus GetLimitlessDatabaseStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return LimitlessDatabaseStatus::active;
          }
          else if (hashCode == not_in_use_HASH)
          {
            return LimitlessDatabaseStatus::not_in_use;
          }
          else if (hashCode == enabled_HASH)
          {
            return LimitlessDatabaseStatus::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return LimitlessDatabaseStatus::disabled;
          }
          else if (hashCode == enabling_HASH)
          {
            return LimitlessDatabaseStatus::enabling;
          }
          else if (hashCode == disabling_HASH)
          {
            return LimitlessDatabaseStatus::disabling;
          }
          else if (hashCode == modifying_max_capacity_HASH)
          {
            return LimitlessDatabaseStatus::modifying_max_capacity;
          }
          else if (hashCode == error_HASH)
          {
            return LimitlessDatabaseStatus::error;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LimitlessDatabaseStatus>(hashCode);
          }

          return LimitlessDatabaseStatus::NOT_SET;
        }

        Aws::String GetNameForLimitlessDatabaseStatus(LimitlessDatabaseStatus enumValue)
        {
          switch(enumValue)
          {
          case LimitlessDatabaseStatus::NOT_SET:
            return {};
          case LimitlessDatabaseStatus::active:
            return "active";
          case LimitlessDatabaseStatus::not_in_use:
            return "not-in-use";
          case LimitlessDatabaseStatus::enabled:
            return "enabled";
          case LimitlessDatabaseStatus::disabled:
            return "disabled";
          case LimitlessDatabaseStatus::enabling:
            return "enabling";
          case LimitlessDatabaseStatus::disabling:
            return "disabling";
          case LimitlessDatabaseStatus::modifying_max_capacity:
            return "modifying-max-capacity";
          case LimitlessDatabaseStatus::error:
            return "error";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LimitlessDatabaseStatusMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
