/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/IncludeExecutionDataOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace IncludeExecutionDataOptionMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");


        IncludeExecutionDataOption GetIncludeExecutionDataOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return IncludeExecutionDataOption::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IncludeExecutionDataOption>(hashCode);
          }

          return IncludeExecutionDataOption::NOT_SET;
        }

        Aws::String GetNameForIncludeExecutionDataOption(IncludeExecutionDataOption enumValue)
        {
          switch(enumValue)
          {
          case IncludeExecutionDataOption::NOT_SET:
            return {};
          case IncludeExecutionDataOption::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IncludeExecutionDataOptionMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws
