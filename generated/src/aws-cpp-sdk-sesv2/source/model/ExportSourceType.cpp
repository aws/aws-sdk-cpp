/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ExportSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace ExportSourceTypeMapper
      {

        static const int METRICS_DATA_HASH = HashingUtils::HashString("METRICS_DATA");
        static const int MESSAGE_INSIGHTS_HASH = HashingUtils::HashString("MESSAGE_INSIGHTS");


        ExportSourceType GetExportSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == METRICS_DATA_HASH)
          {
            return ExportSourceType::METRICS_DATA;
          }
          else if (hashCode == MESSAGE_INSIGHTS_HASH)
          {
            return ExportSourceType::MESSAGE_INSIGHTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportSourceType>(hashCode);
          }

          return ExportSourceType::NOT_SET;
        }

        Aws::String GetNameForExportSourceType(ExportSourceType enumValue)
        {
          switch(enumValue)
          {
          case ExportSourceType::NOT_SET:
            return {};
          case ExportSourceType::METRICS_DATA:
            return "METRICS_DATA";
          case ExportSourceType::MESSAGE_INSIGHTS:
            return "MESSAGE_INSIGHTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportSourceTypeMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
