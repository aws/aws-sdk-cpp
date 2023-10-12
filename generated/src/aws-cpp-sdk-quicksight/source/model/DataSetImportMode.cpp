/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSetImportMode.h>
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
      namespace DataSetImportModeMapper
      {

        static constexpr uint32_t SPICE_HASH = ConstExprHashingUtils::HashString("SPICE");
        static constexpr uint32_t DIRECT_QUERY_HASH = ConstExprHashingUtils::HashString("DIRECT_QUERY");


        DataSetImportMode GetDataSetImportModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPICE_HASH)
          {
            return DataSetImportMode::SPICE;
          }
          else if (hashCode == DIRECT_QUERY_HASH)
          {
            return DataSetImportMode::DIRECT_QUERY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSetImportMode>(hashCode);
          }

          return DataSetImportMode::NOT_SET;
        }

        Aws::String GetNameForDataSetImportMode(DataSetImportMode enumValue)
        {
          switch(enumValue)
          {
          case DataSetImportMode::NOT_SET:
            return {};
          case DataSetImportMode::SPICE:
            return "SPICE";
          case DataSetImportMode::DIRECT_QUERY:
            return "DIRECT_QUERY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSetImportModeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
