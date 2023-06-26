/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SelectAllValueOptions.h>
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
      namespace SelectAllValueOptionsMapper
      {

        static const int ALL_VALUES_HASH = HashingUtils::HashString("ALL_VALUES");


        SelectAllValueOptions GetSelectAllValueOptionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_VALUES_HASH)
          {
            return SelectAllValueOptions::ALL_VALUES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SelectAllValueOptions>(hashCode);
          }

          return SelectAllValueOptions::NOT_SET;
        }

        Aws::String GetNameForSelectAllValueOptions(SelectAllValueOptions enumValue)
        {
          switch(enumValue)
          {
          case SelectAllValueOptions::ALL_VALUES:
            return "ALL_VALUES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SelectAllValueOptionsMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
