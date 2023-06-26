/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ShipmentState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace ShipmentStateMapper
      {

        static const int RECEIVED_HASH = HashingUtils::HashString("RECEIVED");
        static const int RETURNED_HASH = HashingUtils::HashString("RETURNED");


        ShipmentState GetShipmentStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECEIVED_HASH)
          {
            return ShipmentState::RECEIVED;
          }
          else if (hashCode == RETURNED_HASH)
          {
            return ShipmentState::RETURNED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShipmentState>(hashCode);
          }

          return ShipmentState::NOT_SET;
        }

        Aws::String GetNameForShipmentState(ShipmentState enumValue)
        {
          switch(enumValue)
          {
          case ShipmentState::RECEIVED:
            return "RECEIVED";
          case ShipmentState::RETURNED:
            return "RETURNED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShipmentStateMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
