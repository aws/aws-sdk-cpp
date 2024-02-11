/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SmallMultiplesAxisPlacement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace SmallMultiplesAxisPlacementMapper
      {

        static const int OUTSIDE_HASH = HashingUtils::HashString("OUTSIDE");
        static const int INSIDE_HASH = HashingUtils::HashString("INSIDE");


        SmallMultiplesAxisPlacement GetSmallMultiplesAxisPlacementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OUTSIDE_HASH)
          {
            return SmallMultiplesAxisPlacement::OUTSIDE;
          }
          else if (hashCode == INSIDE_HASH)
          {
            return SmallMultiplesAxisPlacement::INSIDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmallMultiplesAxisPlacement>(hashCode);
          }

          return SmallMultiplesAxisPlacement::NOT_SET;
        }

        Aws::String GetNameForSmallMultiplesAxisPlacement(SmallMultiplesAxisPlacement enumValue)
        {
          switch(enumValue)
          {
          case SmallMultiplesAxisPlacement::NOT_SET:
            return {};
          case SmallMultiplesAxisPlacement::OUTSIDE:
            return "OUTSIDE";
          case SmallMultiplesAxisPlacement::INSIDE:
            return "INSIDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SmallMultiplesAxisPlacementMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
