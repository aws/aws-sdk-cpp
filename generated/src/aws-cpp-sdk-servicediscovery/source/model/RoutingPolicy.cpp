/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/RoutingPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace RoutingPolicyMapper
      {

        static constexpr uint32_t MULTIVALUE_HASH = ConstExprHashingUtils::HashString("MULTIVALUE");
        static constexpr uint32_t WEIGHTED_HASH = ConstExprHashingUtils::HashString("WEIGHTED");


        RoutingPolicy GetRoutingPolicyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MULTIVALUE_HASH)
          {
            return RoutingPolicy::MULTIVALUE;
          }
          else if (hashCode == WEIGHTED_HASH)
          {
            return RoutingPolicy::WEIGHTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoutingPolicy>(hashCode);
          }

          return RoutingPolicy::NOT_SET;
        }

        Aws::String GetNameForRoutingPolicy(RoutingPolicy enumValue)
        {
          switch(enumValue)
          {
          case RoutingPolicy::NOT_SET:
            return {};
          case RoutingPolicy::MULTIVALUE:
            return "MULTIVALUE";
          case RoutingPolicy::WEIGHTED:
            return "WEIGHTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoutingPolicyMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws
