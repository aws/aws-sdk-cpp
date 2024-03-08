/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ExecutionRedriveStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SFN
  {
    namespace Model
    {
      namespace ExecutionRedriveStatusMapper
      {

        static const int REDRIVABLE_HASH = HashingUtils::HashString("REDRIVABLE");
        static const int NOT_REDRIVABLE_HASH = HashingUtils::HashString("NOT_REDRIVABLE");
        static const int REDRIVABLE_BY_MAP_RUN_HASH = HashingUtils::HashString("REDRIVABLE_BY_MAP_RUN");


        ExecutionRedriveStatus GetExecutionRedriveStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REDRIVABLE_HASH)
          {
            return ExecutionRedriveStatus::REDRIVABLE;
          }
          else if (hashCode == NOT_REDRIVABLE_HASH)
          {
            return ExecutionRedriveStatus::NOT_REDRIVABLE;
          }
          else if (hashCode == REDRIVABLE_BY_MAP_RUN_HASH)
          {
            return ExecutionRedriveStatus::REDRIVABLE_BY_MAP_RUN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionRedriveStatus>(hashCode);
          }

          return ExecutionRedriveStatus::NOT_SET;
        }

        Aws::String GetNameForExecutionRedriveStatus(ExecutionRedriveStatus enumValue)
        {
          switch(enumValue)
          {
          case ExecutionRedriveStatus::NOT_SET:
            return {};
          case ExecutionRedriveStatus::REDRIVABLE:
            return "REDRIVABLE";
          case ExecutionRedriveStatus::NOT_REDRIVABLE:
            return "NOT_REDRIVABLE";
          case ExecutionRedriveStatus::REDRIVABLE_BY_MAP_RUN:
            return "REDRIVABLE_BY_MAP_RUN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionRedriveStatusMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
