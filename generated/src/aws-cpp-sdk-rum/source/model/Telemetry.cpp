/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/Telemetry.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchRUM
  {
    namespace Model
    {
      namespace TelemetryMapper
      {

        static const int errors_HASH = HashingUtils::HashString("errors");
        static const int performance_HASH = HashingUtils::HashString("performance");
        static const int http_HASH = HashingUtils::HashString("http");


        Telemetry GetTelemetryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == errors_HASH)
          {
            return Telemetry::errors;
          }
          else if (hashCode == performance_HASH)
          {
            return Telemetry::performance;
          }
          else if (hashCode == http_HASH)
          {
            return Telemetry::http;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Telemetry>(hashCode);
          }

          return Telemetry::NOT_SET;
        }

        Aws::String GetNameForTelemetry(Telemetry enumValue)
        {
          switch(enumValue)
          {
          case Telemetry::NOT_SET:
            return {};
          case Telemetry::errors:
            return "errors";
          case Telemetry::performance:
            return "performance";
          case Telemetry::http:
            return "http";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TelemetryMapper
    } // namespace Model
  } // namespace CloudWatchRUM
} // namespace Aws
