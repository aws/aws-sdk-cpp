/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/PoolsRunningMode.h>
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
      namespace PoolsRunningModeMapper
      {

        static const int AUTO_STOP_HASH = HashingUtils::HashString("AUTO_STOP");
        static const int ALWAYS_ON_HASH = HashingUtils::HashString("ALWAYS_ON");


        PoolsRunningMode GetPoolsRunningModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_STOP_HASH)
          {
            return PoolsRunningMode::AUTO_STOP;
          }
          else if (hashCode == ALWAYS_ON_HASH)
          {
            return PoolsRunningMode::ALWAYS_ON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PoolsRunningMode>(hashCode);
          }

          return PoolsRunningMode::NOT_SET;
        }

        Aws::String GetNameForPoolsRunningMode(PoolsRunningMode enumValue)
        {
          switch(enumValue)
          {
          case PoolsRunningMode::NOT_SET:
            return {};
          case PoolsRunningMode::AUTO_STOP:
            return "AUTO_STOP";
          case PoolsRunningMode::ALWAYS_ON:
            return "ALWAYS_ON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PoolsRunningModeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
