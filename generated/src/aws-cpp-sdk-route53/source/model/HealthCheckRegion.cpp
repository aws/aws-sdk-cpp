/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/HealthCheckRegion.h>
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
      namespace HealthCheckRegionMapper
      {

        static constexpr uint32_t us_east_1_HASH = ConstExprHashingUtils::HashString("us-east-1");
        static constexpr uint32_t us_west_1_HASH = ConstExprHashingUtils::HashString("us-west-1");
        static constexpr uint32_t us_west_2_HASH = ConstExprHashingUtils::HashString("us-west-2");
        static constexpr uint32_t eu_west_1_HASH = ConstExprHashingUtils::HashString("eu-west-1");
        static constexpr uint32_t ap_southeast_1_HASH = ConstExprHashingUtils::HashString("ap-southeast-1");
        static constexpr uint32_t ap_southeast_2_HASH = ConstExprHashingUtils::HashString("ap-southeast-2");
        static constexpr uint32_t ap_northeast_1_HASH = ConstExprHashingUtils::HashString("ap-northeast-1");
        static constexpr uint32_t sa_east_1_HASH = ConstExprHashingUtils::HashString("sa-east-1");


        HealthCheckRegion GetHealthCheckRegionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == us_east_1_HASH)
          {
            return HealthCheckRegion::us_east_1;
          }
          else if (hashCode == us_west_1_HASH)
          {
            return HealthCheckRegion::us_west_1;
          }
          else if (hashCode == us_west_2_HASH)
          {
            return HealthCheckRegion::us_west_2;
          }
          else if (hashCode == eu_west_1_HASH)
          {
            return HealthCheckRegion::eu_west_1;
          }
          else if (hashCode == ap_southeast_1_HASH)
          {
            return HealthCheckRegion::ap_southeast_1;
          }
          else if (hashCode == ap_southeast_2_HASH)
          {
            return HealthCheckRegion::ap_southeast_2;
          }
          else if (hashCode == ap_northeast_1_HASH)
          {
            return HealthCheckRegion::ap_northeast_1;
          }
          else if (hashCode == sa_east_1_HASH)
          {
            return HealthCheckRegion::sa_east_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HealthCheckRegion>(hashCode);
          }

          return HealthCheckRegion::NOT_SET;
        }

        Aws::String GetNameForHealthCheckRegion(HealthCheckRegion enumValue)
        {
          switch(enumValue)
          {
          case HealthCheckRegion::NOT_SET:
            return {};
          case HealthCheckRegion::us_east_1:
            return "us-east-1";
          case HealthCheckRegion::us_west_1:
            return "us-west-1";
          case HealthCheckRegion::us_west_2:
            return "us-west-2";
          case HealthCheckRegion::eu_west_1:
            return "eu-west-1";
          case HealthCheckRegion::ap_southeast_1:
            return "ap-southeast-1";
          case HealthCheckRegion::ap_southeast_2:
            return "ap-southeast-2";
          case HealthCheckRegion::ap_northeast_1:
            return "ap-northeast-1";
          case HealthCheckRegion::sa_east_1:
            return "sa-east-1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HealthCheckRegionMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws
