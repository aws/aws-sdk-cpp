/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnapshotFileFormatType.h>
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
      namespace SnapshotFileFormatTypeMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int PDF_HASH = HashingUtils::HashString("PDF");
        static const int EXCEL_HASH = HashingUtils::HashString("EXCEL");


        SnapshotFileFormatType GetSnapshotFileFormatTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return SnapshotFileFormatType::CSV;
          }
          else if (hashCode == PDF_HASH)
          {
            return SnapshotFileFormatType::PDF;
          }
          else if (hashCode == EXCEL_HASH)
          {
            return SnapshotFileFormatType::EXCEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotFileFormatType>(hashCode);
          }

          return SnapshotFileFormatType::NOT_SET;
        }

        Aws::String GetNameForSnapshotFileFormatType(SnapshotFileFormatType enumValue)
        {
          switch(enumValue)
          {
          case SnapshotFileFormatType::NOT_SET:
            return {};
          case SnapshotFileFormatType::CSV:
            return "CSV";
          case SnapshotFileFormatType::PDF:
            return "PDF";
          case SnapshotFileFormatType::EXCEL:
            return "EXCEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnapshotFileFormatTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
