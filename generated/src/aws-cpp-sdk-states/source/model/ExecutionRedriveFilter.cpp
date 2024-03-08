/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ExecutionRedriveFilter.h>
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
      namespace ExecutionRedriveFilterMapper
      {

        static const int REDRIVEN_HASH = HashingUtils::HashString("REDRIVEN");
        static const int NOT_REDRIVEN_HASH = HashingUtils::HashString("NOT_REDRIVEN");


        ExecutionRedriveFilter GetExecutionRedriveFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REDRIVEN_HASH)
          {
            return ExecutionRedriveFilter::REDRIVEN;
          }
          else if (hashCode == NOT_REDRIVEN_HASH)
          {
            return ExecutionRedriveFilter::NOT_REDRIVEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionRedriveFilter>(hashCode);
          }

          return ExecutionRedriveFilter::NOT_SET;
        }

        Aws::String GetNameForExecutionRedriveFilter(ExecutionRedriveFilter enumValue)
        {
          switch(enumValue)
          {
          case ExecutionRedriveFilter::NOT_SET:
            return {};
          case ExecutionRedriveFilter::REDRIVEN:
            return "REDRIVEN";
          case ExecutionRedriveFilter::NOT_REDRIVEN:
            return "NOT_REDRIVEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionRedriveFilterMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
