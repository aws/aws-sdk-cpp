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

        static constexpr uint32_t AUTO_STOP_HASH = ConstExprHashingUtils::HashString("AUTO_STOP");
        static constexpr uint32_t ALWAYS_ON_HASH = ConstExprHashingUtils::HashString("ALWAYS_ON");
        static constexpr uint32_t MANUAL_HASH = ConstExprHashingUtils::HashString("MANUAL");


        RunningMode GetRunningModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case RunningMode::NOT_SET:
            return {};
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
