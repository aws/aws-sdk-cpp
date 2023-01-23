/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFRegional
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int APPLICATION_LOAD_BALANCER_HASH = HashingUtils::HashString("APPLICATION_LOAD_BALANCER");
        static const int API_GATEWAY_HASH = HashingUtils::HashString("API_GATEWAY");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLICATION_LOAD_BALANCER_HASH)
          {
            return ResourceType::APPLICATION_LOAD_BALANCER;
          }
          else if (hashCode == API_GATEWAY_HASH)
          {
            return ResourceType::API_GATEWAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::APPLICATION_LOAD_BALANCER:
            return "APPLICATION_LOAD_BALANCER";
          case ResourceType::API_GATEWAY:
            return "API_GATEWAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace WAFRegional
} // namespace Aws
