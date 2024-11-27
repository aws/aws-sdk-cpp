/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/TelemetryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ObservabilityAdmin
  {
    namespace Model
    {
      namespace TelemetryTypeMapper
      {

        static const int Logs_HASH = HashingUtils::HashString("Logs");
        static const int Metrics_HASH = HashingUtils::HashString("Metrics");
        static const int Traces_HASH = HashingUtils::HashString("Traces");


        TelemetryType GetTelemetryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Logs_HASH)
          {
            return TelemetryType::Logs;
          }
          else if (hashCode == Metrics_HASH)
          {
            return TelemetryType::Metrics;
          }
          else if (hashCode == Traces_HASH)
          {
            return TelemetryType::Traces;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TelemetryType>(hashCode);
          }

          return TelemetryType::NOT_SET;
        }

        Aws::String GetNameForTelemetryType(TelemetryType enumValue)
        {
          switch(enumValue)
          {
          case TelemetryType::NOT_SET:
            return {};
          case TelemetryType::Logs:
            return "Logs";
          case TelemetryType::Metrics:
            return "Metrics";
          case TelemetryType::Traces:
            return "Traces";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TelemetryTypeMapper
    } // namespace Model
  } // namespace ObservabilityAdmin
} // namespace Aws
