/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BurnInDestinationSubtitleRows.h>
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
      namespace BurnInDestinationSubtitleRowsMapper
      {

        static const int ROWS_16_HASH = HashingUtils::HashString("ROWS_16");
        static const int ROWS_20_HASH = HashingUtils::HashString("ROWS_20");
        static const int ROWS_24_HASH = HashingUtils::HashString("ROWS_24");


        BurnInDestinationSubtitleRows GetBurnInDestinationSubtitleRowsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROWS_16_HASH)
          {
            return BurnInDestinationSubtitleRows::ROWS_16;
          }
          else if (hashCode == ROWS_20_HASH)
          {
            return BurnInDestinationSubtitleRows::ROWS_20;
          }
          else if (hashCode == ROWS_24_HASH)
          {
            return BurnInDestinationSubtitleRows::ROWS_24;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurnInDestinationSubtitleRows>(hashCode);
          }

          return BurnInDestinationSubtitleRows::NOT_SET;
        }

        Aws::String GetNameForBurnInDestinationSubtitleRows(BurnInDestinationSubtitleRows enumValue)
        {
          switch(enumValue)
          {
          case BurnInDestinationSubtitleRows::NOT_SET:
            return {};
          case BurnInDestinationSubtitleRows::ROWS_16:
            return "ROWS_16";
          case BurnInDestinationSubtitleRows::ROWS_20:
            return "ROWS_20";
          case BurnInDestinationSubtitleRows::ROWS_24:
            return "ROWS_24";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BurnInDestinationSubtitleRowsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
