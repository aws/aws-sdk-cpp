/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverEndpointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Resolver
  {
    namespace Model
    {
      namespace ResolverEndpointTypeMapper
      {

        static const int IPV6_HASH = HashingUtils::HashString("IPV6");
        static const int IPV4_HASH = HashingUtils::HashString("IPV4");
        static const int DUALSTACK_HASH = HashingUtils::HashString("DUALSTACK");


        ResolverEndpointType GetResolverEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPV6_HASH)
          {
            return ResolverEndpointType::IPV6;
          }
          else if (hashCode == IPV4_HASH)
          {
            return ResolverEndpointType::IPV4;
          }
          else if (hashCode == DUALSTACK_HASH)
          {
            return ResolverEndpointType::DUALSTACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolverEndpointType>(hashCode);
          }

          return ResolverEndpointType::NOT_SET;
        }

        Aws::String GetNameForResolverEndpointType(ResolverEndpointType enumValue)
        {
          switch(enumValue)
          {
          case ResolverEndpointType::NOT_SET:
            return {};
          case ResolverEndpointType::IPV6:
            return "IPV6";
          case ResolverEndpointType::IPV4:
            return "IPV4";
          case ResolverEndpointType::DUALSTACK:
            return "DUALSTACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolverEndpointTypeMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
