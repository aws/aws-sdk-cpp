/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/MetricStreamOutputFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatch
  {
    namespace Model
    {
      namespace MetricStreamOutputFormatMapper
      {

        static constexpr uint32_t json_HASH = ConstExprHashingUtils::HashString("json");
        static constexpr uint32_t opentelemetry0_7_HASH = ConstExprHashingUtils::HashString("opentelemetry0.7");


        MetricStreamOutputFormat GetMetricStreamOutputFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == json_HASH)
          {
            return MetricStreamOutputFormat::json;
          }
          else if (hashCode == opentelemetry0_7_HASH)
          {
            return MetricStreamOutputFormat::opentelemetry0_7;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricStreamOutputFormat>(hashCode);
          }

          return MetricStreamOutputFormat::NOT_SET;
        }

        Aws::String GetNameForMetricStreamOutputFormat(MetricStreamOutputFormat enumValue)
        {
          switch(enumValue)
          {
          case MetricStreamOutputFormat::NOT_SET:
            return {};
          case MetricStreamOutputFormat::json:
            return "json";
          case MetricStreamOutputFormat::opentelemetry0_7:
            return "opentelemetry0.7";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricStreamOutputFormatMapper
    } // namespace Model
  } // namespace CloudWatch
} // namespace Aws
