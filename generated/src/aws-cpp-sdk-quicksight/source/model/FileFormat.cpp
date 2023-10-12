/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FileFormat.h>
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
      namespace FileFormatMapper
      {

        static constexpr uint32_t CSV_HASH = ConstExprHashingUtils::HashString("CSV");
        static constexpr uint32_t TSV_HASH = ConstExprHashingUtils::HashString("TSV");
        static constexpr uint32_t CLF_HASH = ConstExprHashingUtils::HashString("CLF");
        static constexpr uint32_t ELF_HASH = ConstExprHashingUtils::HashString("ELF");
        static constexpr uint32_t XLSX_HASH = ConstExprHashingUtils::HashString("XLSX");
        static constexpr uint32_t JSON_HASH = ConstExprHashingUtils::HashString("JSON");


        FileFormat GetFileFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return FileFormat::CSV;
          }
          else if (hashCode == TSV_HASH)
          {
            return FileFormat::TSV;
          }
          else if (hashCode == CLF_HASH)
          {
            return FileFormat::CLF;
          }
          else if (hashCode == ELF_HASH)
          {
            return FileFormat::ELF;
          }
          else if (hashCode == XLSX_HASH)
          {
            return FileFormat::XLSX;
          }
          else if (hashCode == JSON_HASH)
          {
            return FileFormat::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileFormat>(hashCode);
          }

          return FileFormat::NOT_SET;
        }

        Aws::String GetNameForFileFormat(FileFormat enumValue)
        {
          switch(enumValue)
          {
          case FileFormat::NOT_SET:
            return {};
          case FileFormat::CSV:
            return "CSV";
          case FileFormat::TSV:
            return "TSV";
          case FileFormat::CLF:
            return "CLF";
          case FileFormat::ELF:
            return "ELF";
          case FileFormat::XLSX:
            return "XLSX";
          case FileFormat::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileFormatMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
