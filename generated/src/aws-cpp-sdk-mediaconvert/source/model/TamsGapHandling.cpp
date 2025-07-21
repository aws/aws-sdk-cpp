/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/TamsGapHandling.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace TamsGapHandlingMapper
      {

        static const int SKIP_GAPS_HASH = HashingUtils::HashString("SKIP_GAPS");
        static const int FILL_WITH_BLACK_HASH = HashingUtils::HashString("FILL_WITH_BLACK");
        static const int HOLD_LAST_FRAME_HASH = HashingUtils::HashString("HOLD_LAST_FRAME");


        TamsGapHandling GetTamsGapHandlingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SKIP_GAPS_HASH)
          {
            return TamsGapHandling::SKIP_GAPS;
          }
          else if (hashCode == FILL_WITH_BLACK_HASH)
          {
            return TamsGapHandling::FILL_WITH_BLACK;
          }
          else if (hashCode == HOLD_LAST_FRAME_HASH)
          {
            return TamsGapHandling::HOLD_LAST_FRAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TamsGapHandling>(hashCode);
          }

          return TamsGapHandling::NOT_SET;
        }

        Aws::String GetNameForTamsGapHandling(TamsGapHandling enumValue)
        {
          switch(enumValue)
          {
          case TamsGapHandling::NOT_SET:
            return {};
          case TamsGapHandling::SKIP_GAPS:
            return "SKIP_GAPS";
          case TamsGapHandling::FILL_WITH_BLACK:
            return "FILL_WITH_BLACK";
          case TamsGapHandling::HOLD_LAST_FRAME:
            return "HOLD_LAST_FRAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TamsGapHandlingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
