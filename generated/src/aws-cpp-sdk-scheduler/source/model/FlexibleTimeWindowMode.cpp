/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/FlexibleTimeWindowMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Scheduler
  {
    namespace Model
    {
      namespace FlexibleTimeWindowModeMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int FLEXIBLE_HASH = HashingUtils::HashString("FLEXIBLE");


        FlexibleTimeWindowMode GetFlexibleTimeWindowModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return FlexibleTimeWindowMode::OFF;
          }
          else if (hashCode == FLEXIBLE_HASH)
          {
            return FlexibleTimeWindowMode::FLEXIBLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlexibleTimeWindowMode>(hashCode);
          }

          return FlexibleTimeWindowMode::NOT_SET;
        }

        Aws::String GetNameForFlexibleTimeWindowMode(FlexibleTimeWindowMode enumValue)
        {
          switch(enumValue)
          {
          case FlexibleTimeWindowMode::OFF:
            return "OFF";
          case FlexibleTimeWindowMode::FLEXIBLE:
            return "FLEXIBLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlexibleTimeWindowModeMapper
    } // namespace Model
  } // namespace Scheduler
} // namespace Aws
