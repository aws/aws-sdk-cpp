/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/GatewayCapacity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace StorageGateway
  {
    namespace Model
    {
      namespace GatewayCapacityMapper
      {

        static const int Small_HASH = HashingUtils::HashString("Small");
        static const int Medium_HASH = HashingUtils::HashString("Medium");
        static const int Large_HASH = HashingUtils::HashString("Large");


        GatewayCapacity GetGatewayCapacityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Small_HASH)
          {
            return GatewayCapacity::Small;
          }
          else if (hashCode == Medium_HASH)
          {
            return GatewayCapacity::Medium;
          }
          else if (hashCode == Large_HASH)
          {
            return GatewayCapacity::Large;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GatewayCapacity>(hashCode);
          }

          return GatewayCapacity::NOT_SET;
        }

        Aws::String GetNameForGatewayCapacity(GatewayCapacity enumValue)
        {
          switch(enumValue)
          {
          case GatewayCapacity::NOT_SET:
            return {};
          case GatewayCapacity::Small:
            return "Small";
          case GatewayCapacity::Medium:
            return "Medium";
          case GatewayCapacity::Large:
            return "Large";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GatewayCapacityMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
