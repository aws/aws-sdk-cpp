/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/HealthCheckType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace HealthCheckTypeMapper
      {

        static constexpr uint32_t HTTP_HASH = ConstExprHashingUtils::HashString("HTTP");
        static constexpr uint32_t HTTPS_HASH = ConstExprHashingUtils::HashString("HTTPS");
        static constexpr uint32_t HTTP_STR_MATCH_HASH = ConstExprHashingUtils::HashString("HTTP_STR_MATCH");
        static constexpr uint32_t HTTPS_STR_MATCH_HASH = ConstExprHashingUtils::HashString("HTTPS_STR_MATCH");
        static constexpr uint32_t TCP_HASH = ConstExprHashingUtils::HashString("TCP");
        static constexpr uint32_t CALCULATED_HASH = ConstExprHashingUtils::HashString("CALCULATED");
        static constexpr uint32_t CLOUDWATCH_METRIC_HASH = ConstExprHashingUtils::HashString("CLOUDWATCH_METRIC");
        static constexpr uint32_t RECOVERY_CONTROL_HASH = ConstExprHashingUtils::HashString("RECOVERY_CONTROL");


        HealthCheckType GetHealthCheckTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_HASH)
          {
            return HealthCheckType::HTTP;
          }
          else if (hashCode == HTTPS_HASH)
          {
            return HealthCheckType::HTTPS;
          }
          else if (hashCode == HTTP_STR_MATCH_HASH)
          {
            return HealthCheckType::HTTP_STR_MATCH;
          }
          else if (hashCode == HTTPS_STR_MATCH_HASH)
          {
            return HealthCheckType::HTTPS_STR_MATCH;
          }
          else if (hashCode == TCP_HASH)
          {
            return HealthCheckType::TCP;
          }
          else if (hashCode == CALCULATED_HASH)
          {
            return HealthCheckType::CALCULATED;
          }
          else if (hashCode == CLOUDWATCH_METRIC_HASH)
          {
            return HealthCheckType::CLOUDWATCH_METRIC;
          }
          else if (hashCode == RECOVERY_CONTROL_HASH)
          {
            return HealthCheckType::RECOVERY_CONTROL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HealthCheckType>(hashCode);
          }

          return HealthCheckType::NOT_SET;
        }

        Aws::String GetNameForHealthCheckType(HealthCheckType enumValue)
        {
          switch(enumValue)
          {
          case HealthCheckType::NOT_SET:
            return {};
          case HealthCheckType::HTTP:
            return "HTTP";
          case HealthCheckType::HTTPS:
            return "HTTPS";
          case HealthCheckType::HTTP_STR_MATCH:
            return "HTTP_STR_MATCH";
          case HealthCheckType::HTTPS_STR_MATCH:
            return "HTTPS_STR_MATCH";
          case HealthCheckType::TCP:
            return "TCP";
          case HealthCheckType::CALCULATED:
            return "CALCULATED";
          case HealthCheckType::CLOUDWATCH_METRIC:
            return "CLOUDWATCH_METRIC";
          case HealthCheckType::RECOVERY_CONTROL:
            return "RECOVERY_CONTROL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HealthCheckTypeMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws
