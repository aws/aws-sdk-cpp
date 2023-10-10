/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/PeeringType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace PeeringTypeMapper
      {

        static const int TRANSIT_GATEWAY_HASH = HashingUtils::HashString("TRANSIT_GATEWAY");


        PeeringType GetPeeringTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRANSIT_GATEWAY_HASH)
          {
            return PeeringType::TRANSIT_GATEWAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PeeringType>(hashCode);
          }

          return PeeringType::NOT_SET;
        }

        Aws::String GetNameForPeeringType(PeeringType enumValue)
        {
          switch(enumValue)
          {
          case PeeringType::NOT_SET:
            return {};
          case PeeringType::TRANSIT_GATEWAY:
            return "TRANSIT_GATEWAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PeeringTypeMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
