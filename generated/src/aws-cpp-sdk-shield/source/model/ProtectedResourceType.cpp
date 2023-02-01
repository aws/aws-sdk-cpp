/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/ProtectedResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Shield
  {
    namespace Model
    {
      namespace ProtectedResourceTypeMapper
      {

        static const int CLOUDFRONT_DISTRIBUTION_HASH = HashingUtils::HashString("CLOUDFRONT_DISTRIBUTION");
        static const int ROUTE_53_HOSTED_ZONE_HASH = HashingUtils::HashString("ROUTE_53_HOSTED_ZONE");
        static const int ELASTIC_IP_ALLOCATION_HASH = HashingUtils::HashString("ELASTIC_IP_ALLOCATION");
        static const int CLASSIC_LOAD_BALANCER_HASH = HashingUtils::HashString("CLASSIC_LOAD_BALANCER");
        static const int APPLICATION_LOAD_BALANCER_HASH = HashingUtils::HashString("APPLICATION_LOAD_BALANCER");
        static const int GLOBAL_ACCELERATOR_HASH = HashingUtils::HashString("GLOBAL_ACCELERATOR");


        ProtectedResourceType GetProtectedResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUDFRONT_DISTRIBUTION_HASH)
          {
            return ProtectedResourceType::CLOUDFRONT_DISTRIBUTION;
          }
          else if (hashCode == ROUTE_53_HOSTED_ZONE_HASH)
          {
            return ProtectedResourceType::ROUTE_53_HOSTED_ZONE;
          }
          else if (hashCode == ELASTIC_IP_ALLOCATION_HASH)
          {
            return ProtectedResourceType::ELASTIC_IP_ALLOCATION;
          }
          else if (hashCode == CLASSIC_LOAD_BALANCER_HASH)
          {
            return ProtectedResourceType::CLASSIC_LOAD_BALANCER;
          }
          else if (hashCode == APPLICATION_LOAD_BALANCER_HASH)
          {
            return ProtectedResourceType::APPLICATION_LOAD_BALANCER;
          }
          else if (hashCode == GLOBAL_ACCELERATOR_HASH)
          {
            return ProtectedResourceType::GLOBAL_ACCELERATOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectedResourceType>(hashCode);
          }

          return ProtectedResourceType::NOT_SET;
        }

        Aws::String GetNameForProtectedResourceType(ProtectedResourceType enumValue)
        {
          switch(enumValue)
          {
          case ProtectedResourceType::CLOUDFRONT_DISTRIBUTION:
            return "CLOUDFRONT_DISTRIBUTION";
          case ProtectedResourceType::ROUTE_53_HOSTED_ZONE:
            return "ROUTE_53_HOSTED_ZONE";
          case ProtectedResourceType::ELASTIC_IP_ALLOCATION:
            return "ELASTIC_IP_ALLOCATION";
          case ProtectedResourceType::CLASSIC_LOAD_BALANCER:
            return "CLASSIC_LOAD_BALANCER";
          case ProtectedResourceType::APPLICATION_LOAD_BALANCER:
            return "APPLICATION_LOAD_BALANCER";
          case ProtectedResourceType::GLOBAL_ACCELERATOR:
            return "GLOBAL_ACCELERATOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtectedResourceTypeMapper
    } // namespace Model
  } // namespace Shield
} // namespace Aws
