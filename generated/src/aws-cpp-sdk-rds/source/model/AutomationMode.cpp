/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/AutomationMode.h>
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
      namespace AutomationModeMapper
      {

        static const int full_HASH = HashingUtils::HashString("full");
        static const int all_paused_HASH = HashingUtils::HashString("all-paused");


        AutomationMode GetAutomationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == full_HASH)
          {
            return AutomationMode::full;
          }
          else if (hashCode == all_paused_HASH)
          {
            return AutomationMode::all_paused;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomationMode>(hashCode);
          }

          return AutomationMode::NOT_SET;
        }

        Aws::String GetNameForAutomationMode(AutomationMode enumValue)
        {
          switch(enumValue)
          {
          case AutomationMode::NOT_SET:
            return {};
          case AutomationMode::full:
            return "full";
          case AutomationMode::all_paused:
            return "all-paused";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomationModeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
