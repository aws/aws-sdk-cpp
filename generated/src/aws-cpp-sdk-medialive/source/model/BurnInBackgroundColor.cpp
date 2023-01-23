/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BurnInBackgroundColor.h>
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
      namespace BurnInBackgroundColorMapper
      {

        static const int BLACK_HASH = HashingUtils::HashString("BLACK");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int WHITE_HASH = HashingUtils::HashString("WHITE");


        BurnInBackgroundColor GetBurnInBackgroundColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLACK_HASH)
          {
            return BurnInBackgroundColor::BLACK;
          }
          else if (hashCode == NONE_HASH)
          {
            return BurnInBackgroundColor::NONE;
          }
          else if (hashCode == WHITE_HASH)
          {
            return BurnInBackgroundColor::WHITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurnInBackgroundColor>(hashCode);
          }

          return BurnInBackgroundColor::NOT_SET;
        }

        Aws::String GetNameForBurnInBackgroundColor(BurnInBackgroundColor enumValue)
        {
          switch(enumValue)
          {
          case BurnInBackgroundColor::BLACK:
            return "BLACK";
          case BurnInBackgroundColor::NONE:
            return "NONE";
          case BurnInBackgroundColor::WHITE:
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

      } // namespace BurnInBackgroundColorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
