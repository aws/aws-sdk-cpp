/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/HostedZoneLimitType.h>
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
      namespace HostedZoneLimitTypeMapper
      {

        static const int MAX_RRSETS_BY_ZONE_HASH = HashingUtils::HashString("MAX_RRSETS_BY_ZONE");
        static const int MAX_VPCS_ASSOCIATED_BY_ZONE_HASH = HashingUtils::HashString("MAX_VPCS_ASSOCIATED_BY_ZONE");


        HostedZoneLimitType GetHostedZoneLimitTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAX_RRSETS_BY_ZONE_HASH)
          {
            return HostedZoneLimitType::MAX_RRSETS_BY_ZONE;
          }
          else if (hashCode == MAX_VPCS_ASSOCIATED_BY_ZONE_HASH)
          {
            return HostedZoneLimitType::MAX_VPCS_ASSOCIATED_BY_ZONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HostedZoneLimitType>(hashCode);
          }

          return HostedZoneLimitType::NOT_SET;
        }

        Aws::String GetNameForHostedZoneLimitType(HostedZoneLimitType enumValue)
        {
          switch(enumValue)
          {
          case HostedZoneLimitType::MAX_RRSETS_BY_ZONE:
            return "MAX_RRSETS_BY_ZONE";
          case HostedZoneLimitType::MAX_VPCS_ASSOCIATED_BY_ZONE:
            return "MAX_VPCS_ASSOCIATED_BY_ZONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HostedZoneLimitTypeMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws
