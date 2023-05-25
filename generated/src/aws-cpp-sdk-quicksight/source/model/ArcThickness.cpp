/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ArcThickness.h>
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
      namespace ArcThicknessMapper
      {

        static const int SMALL_HASH = HashingUtils::HashString("SMALL");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LARGE_HASH = HashingUtils::HashString("LARGE");
        static const int WHOLE_HASH = HashingUtils::HashString("WHOLE");


        ArcThickness GetArcThicknessForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMALL_HASH)
          {
            return ArcThickness::SMALL;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return ArcThickness::MEDIUM;
          }
          else if (hashCode == LARGE_HASH)
          {
            return ArcThickness::LARGE;
          }
          else if (hashCode == WHOLE_HASH)
          {
            return ArcThickness::WHOLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArcThickness>(hashCode);
          }

          return ArcThickness::NOT_SET;
        }

        Aws::String GetNameForArcThickness(ArcThickness enumValue)
        {
          switch(enumValue)
          {
          case ArcThickness::SMALL:
            return "SMALL";
          case ArcThickness::MEDIUM:
            return "MEDIUM";
          case ArcThickness::LARGE:
            return "LARGE";
          case ArcThickness::WHOLE:
            return "WHOLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArcThicknessMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
