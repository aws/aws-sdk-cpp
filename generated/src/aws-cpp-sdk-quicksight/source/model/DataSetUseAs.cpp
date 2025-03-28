/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSetUseAs.h>
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
      namespace DataSetUseAsMapper
      {

        static const int RLS_RULES_HASH = HashingUtils::HashString("RLS_RULES");


        DataSetUseAs GetDataSetUseAsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RLS_RULES_HASH)
          {
            return DataSetUseAs::RLS_RULES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSetUseAs>(hashCode);
          }

          return DataSetUseAs::NOT_SET;
        }

        Aws::String GetNameForDataSetUseAs(DataSetUseAs enumValue)
        {
          switch(enumValue)
          {
          case DataSetUseAs::NOT_SET:
            return {};
          case DataSetUseAs::RLS_RULES:
            return "RLS_RULES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSetUseAsMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
