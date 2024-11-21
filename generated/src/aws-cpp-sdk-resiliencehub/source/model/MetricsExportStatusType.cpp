/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/MetricsExportStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace MetricsExportStatusTypeMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Success_HASH = HashingUtils::HashString("Success");


        MetricsExportStatusType GetMetricsExportStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return MetricsExportStatusType::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return MetricsExportStatusType::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return MetricsExportStatusType::Failed;
          }
          else if (hashCode == Success_HASH)
          {
            return MetricsExportStatusType::Success;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricsExportStatusType>(hashCode);
          }

          return MetricsExportStatusType::NOT_SET;
        }

        Aws::String GetNameForMetricsExportStatusType(MetricsExportStatusType enumValue)
        {
          switch(enumValue)
          {
          case MetricsExportStatusType::NOT_SET:
            return {};
          case MetricsExportStatusType::Pending:
            return "Pending";
          case MetricsExportStatusType::InProgress:
            return "InProgress";
          case MetricsExportStatusType::Failed:
            return "Failed";
          case MetricsExportStatusType::Success:
            return "Success";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricsExportStatusTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
