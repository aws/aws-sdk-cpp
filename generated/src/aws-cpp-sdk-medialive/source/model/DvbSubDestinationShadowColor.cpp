/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DvbSubDestinationShadowColor.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace DvbSubDestinationShadowColorMapper
      {

        static const int BLACK_HASH = HashingUtils::HashString("BLACK");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int WHITE_HASH = HashingUtils::HashString("WHITE");


        DvbSubDestinationShadowColor GetDvbSubDestinationShadowColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLACK_HASH)
          {
            return DvbSubDestinationShadowColor::BLACK;
          }
          else if (hashCode == NONE_HASH)
          {
            return DvbSubDestinationShadowColor::NONE;
          }
          else if (hashCode == WHITE_HASH)
          {
            return DvbSubDestinationShadowColor::WHITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubDestinationShadowColor>(hashCode);
          }

          return DvbSubDestinationShadowColor::NOT_SET;
        }

        Aws::String GetNameForDvbSubDestinationShadowColor(DvbSubDestinationShadowColor enumValue)
        {
          switch(enumValue)
          {
          case DvbSubDestinationShadowColor::BLACK:
            return "BLACK";
          case DvbSubDestinationShadowColor::NONE:
            return "NONE";
          case DvbSubDestinationShadowColor::WHITE:
            return "WHITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DvbSubDestinationShadowColorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
