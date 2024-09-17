/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/TracingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamInfluxDB
  {
    namespace Model
    {
      namespace TracingTypeMapper
      {

        static const int log_HASH = HashingUtils::HashString("log");
        static const int jaeger_HASH = HashingUtils::HashString("jaeger");


        TracingType GetTracingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == log_HASH)
          {
            return TracingType::log;
          }
          else if (hashCode == jaeger_HASH)
          {
            return TracingType::jaeger;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TracingType>(hashCode);
          }

          return TracingType::NOT_SET;
        }

        Aws::String GetNameForTracingType(TracingType enumValue)
        {
          switch(enumValue)
          {
          case TracingType::NOT_SET:
            return {};
          case TracingType::log:
            return "log";
          case TracingType::jaeger:
            return "jaeger";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TracingTypeMapper
    } // namespace Model
  } // namespace TimestreamInfluxDB
} // namespace Aws
