/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ExecutionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace ExecutionModeMapper
      {

        static const int Auto_HASH = HashingUtils::HashString("Auto");
        static const int Interactive_HASH = HashingUtils::HashString("Interactive");


        ExecutionMode GetExecutionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Auto_HASH)
          {
            return ExecutionMode::Auto;
          }
          else if (hashCode == Interactive_HASH)
          {
            return ExecutionMode::Interactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionMode>(hashCode);
          }

          return ExecutionMode::NOT_SET;
        }

        Aws::String GetNameForExecutionMode(ExecutionMode enumValue)
        {
          switch(enumValue)
          {
          case ExecutionMode::Auto:
            return "Auto";
          case ExecutionMode::Interactive:
            return "Interactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionModeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
