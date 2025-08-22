/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DvbSubDestinationSubtitleRows.h>
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
      namespace DvbSubDestinationSubtitleRowsMapper
      {

        static const int ROWS_16_HASH = HashingUtils::HashString("ROWS_16");
        static const int ROWS_20_HASH = HashingUtils::HashString("ROWS_20");
        static const int ROWS_24_HASH = HashingUtils::HashString("ROWS_24");


        DvbSubDestinationSubtitleRows GetDvbSubDestinationSubtitleRowsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROWS_16_HASH)
          {
            return DvbSubDestinationSubtitleRows::ROWS_16;
          }
          else if (hashCode == ROWS_20_HASH)
          {
            return DvbSubDestinationSubtitleRows::ROWS_20;
          }
          else if (hashCode == ROWS_24_HASH)
          {
            return DvbSubDestinationSubtitleRows::ROWS_24;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubDestinationSubtitleRows>(hashCode);
          }

          return DvbSubDestinationSubtitleRows::NOT_SET;
        }

        Aws::String GetNameForDvbSubDestinationSubtitleRows(DvbSubDestinationSubtitleRows enumValue)
        {
          switch(enumValue)
          {
          case DvbSubDestinationSubtitleRows::NOT_SET:
            return {};
          case DvbSubDestinationSubtitleRows::ROWS_16:
            return "ROWS_16";
          case DvbSubDestinationSubtitleRows::ROWS_20:
            return "ROWS_20";
          case DvbSubDestinationSubtitleRows::ROWS_24:
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

      } // namespace DvbSubDestinationSubtitleRowsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
