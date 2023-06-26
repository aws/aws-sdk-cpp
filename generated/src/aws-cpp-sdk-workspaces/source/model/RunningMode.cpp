/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/RunningMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace RunningModeMapper
      {

        static const int AUTO_STOP_HASH = HashingUtils::HashString("AUTO_STOP");
        static const int ALWAYS_ON_HASH = HashingUtils::HashString("ALWAYS_ON");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        RunningMode GetRunningModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_STOP_HASH)
          {
            return RunningMode::AUTO_STOP;
          }
          else if (hashCode == ALWAYS_ON_HASH)
          {
            return RunningMode::ALWAYS_ON;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return RunningMode::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RunningMode>(hashCode);
          }

          return RunningMode::NOT_SET;
        }

        Aws::String GetNameForRunningMode(RunningMode enumValue)
        {
          switch(enumValue)
          {
          case RunningMode::AUTO_STOP:
            return "AUTO_STOP";
          case RunningMode::ALWAYS_ON:
            return "ALWAYS_ON";
          case RunningMode::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RunningModeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
