/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ScheduleState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace ScheduleStateMapper
      {

        static const int MODIFYING_HASH = HashingUtils::HashString("MODIFYING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ScheduleState GetScheduleStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MODIFYING_HASH)
          {
            return ScheduleState::MODIFYING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ScheduleState::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ScheduleState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduleState>(hashCode);
          }

          return ScheduleState::NOT_SET;
        }

        Aws::String GetNameForScheduleState(ScheduleState enumValue)
        {
          switch(enumValue)
          {
          case ScheduleState::MODIFYING:
            return "MODIFYING";
          case ScheduleState::ACTIVE:
            return "ACTIVE";
          case ScheduleState::FAILED:
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

      } // namespace ScheduleStateMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
