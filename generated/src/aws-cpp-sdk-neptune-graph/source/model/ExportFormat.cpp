/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ExportFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NeptuneGraph
  {
    namespace Model
    {
      namespace ExportFormatMapper
      {

        static const int PARQUET_HASH = HashingUtils::HashString("PARQUET");
        static const int CSV_HASH = HashingUtils::HashString("CSV");


        ExportFormat GetExportFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PARQUET_HASH)
          {
            return ExportFormat::PARQUET;
          }
          else if (hashCode == CSV_HASH)
          {
            return ExportFormat::CSV;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportFormat>(hashCode);
          }

          return ExportFormat::NOT_SET;
        }

        Aws::String GetNameForExportFormat(ExportFormat enumValue)
        {
          switch(enumValue)
          {
          case ExportFormat::NOT_SET:
            return {};
          case ExportFormat::PARQUET:
            return "PARQUET";
          case ExportFormat::CSV:
            return "CSV";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportFormatMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws
