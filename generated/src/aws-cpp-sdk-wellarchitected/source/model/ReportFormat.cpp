/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ReportFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace ReportFormatMapper
      {

        static const int PDF_HASH = HashingUtils::HashString("PDF");
        static const int JSON_HASH = HashingUtils::HashString("JSON");


        ReportFormat GetReportFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PDF_HASH)
          {
            return ReportFormat::PDF;
          }
          else if (hashCode == JSON_HASH)
          {
            return ReportFormat::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportFormat>(hashCode);
          }

          return ReportFormat::NOT_SET;
        }

        Aws::String GetNameForReportFormat(ReportFormat enumValue)
        {
          switch(enumValue)
          {
          case ReportFormat::NOT_SET:
            return {};
          case ReportFormat::PDF:
            return "PDF";
          case ReportFormat::JSON:
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

      } // namespace ReportFormatMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
