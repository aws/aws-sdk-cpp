/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SingleYAxisOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace SingleYAxisOptionMapper
      {

        static const int PRIMARY_Y_AXIS_HASH = HashingUtils::HashString("PRIMARY_Y_AXIS");


        SingleYAxisOption GetSingleYAxisOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIMARY_Y_AXIS_HASH)
          {
            return SingleYAxisOption::PRIMARY_Y_AXIS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SingleYAxisOption>(hashCode);
          }

          return SingleYAxisOption::NOT_SET;
        }

        Aws::String GetNameForSingleYAxisOption(SingleYAxisOption enumValue)
        {
          switch(enumValue)
          {
          case SingleYAxisOption::NOT_SET:
            return {};
          case SingleYAxisOption::PRIMARY_Y_AXIS:
            return "PRIMARY_Y_AXIS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SingleYAxisOptionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
