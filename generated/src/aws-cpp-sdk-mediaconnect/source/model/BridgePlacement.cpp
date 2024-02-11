/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/BridgePlacement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace BridgePlacementMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int LOCKED_HASH = HashingUtils::HashString("LOCKED");


        BridgePlacement GetBridgePlacementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return BridgePlacement::AVAILABLE;
          }
          else if (hashCode == LOCKED_HASH)
          {
            return BridgePlacement::LOCKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BridgePlacement>(hashCode);
          }

          return BridgePlacement::NOT_SET;
        }

        Aws::String GetNameForBridgePlacement(BridgePlacement enumValue)
        {
          switch(enumValue)
          {
          case BridgePlacement::NOT_SET:
            return {};
          case BridgePlacement::AVAILABLE:
            return "AVAILABLE";
          case BridgePlacement::LOCKED:
            return "LOCKED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BridgePlacementMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
