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

        static const int MULTIVALUE_HASH = HashingUtils::HashString("MULTIVALUE");
        static const int WEIGHTED_HASH = HashingUtils::HashString("WEIGHTED");


        RoutingPolicy GetRoutingPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
