/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/RunType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Synthetics
  {
    namespace Model
    {
      namespace RunTypeMapper
      {

        static const int CANARY_RUN_HASH = HashingUtils::HashString("CANARY_RUN");
        static const int DRY_RUN_HASH = HashingUtils::HashString("DRY_RUN");


        RunType GetRunTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CANARY_RUN_HASH)
          {
            return RunType::CANARY_RUN;
          }
          else if (hashCode == DRY_RUN_HASH)
          {
            return RunType::DRY_RUN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RunType>(hashCode);
          }

          return RunType::NOT_SET;
        }

        Aws::String GetNameForRunType(RunType enumValue)
        {
          switch(enumValue)
          {
          case RunType::NOT_SET:
            return {};
          case RunType::CANARY_RUN:
            return "CANARY_RUN";
          case RunType::DRY_RUN:
            return "DRY_RUN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RunTypeMapper
    } // namespace Model
  } // namespace Synthetics
} // namespace Aws
