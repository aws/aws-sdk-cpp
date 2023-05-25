/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/StreamOrder.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackageVod
  {
    namespace Model
    {
      namespace StreamOrderMapper
      {

        static const int ORIGINAL_HASH = HashingUtils::HashString("ORIGINAL");
        static const int VIDEO_BITRATE_ASCENDING_HASH = HashingUtils::HashString("VIDEO_BITRATE_ASCENDING");
        static const int VIDEO_BITRATE_DESCENDING_HASH = HashingUtils::HashString("VIDEO_BITRATE_DESCENDING");


        StreamOrder GetStreamOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ORIGINAL_HASH)
          {
            return StreamOrder::ORIGINAL;
          }
          else if (hashCode == VIDEO_BITRATE_ASCENDING_HASH)
          {
            return StreamOrder::VIDEO_BITRATE_ASCENDING;
          }
          else if (hashCode == VIDEO_BITRATE_DESCENDING_HASH)
          {
            return StreamOrder::VIDEO_BITRATE_DESCENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamOrder>(hashCode);
          }

          return StreamOrder::NOT_SET;
        }

        Aws::String GetNameForStreamOrder(StreamOrder enumValue)
        {
          switch(enumValue)
          {
          case StreamOrder::ORIGINAL:
            return "ORIGINAL";
          case StreamOrder::VIDEO_BITRATE_ASCENDING:
            return "VIDEO_BITRATE_ASCENDING";
          case StreamOrder::VIDEO_BITRATE_DESCENDING:
            return "VIDEO_BITRATE_DESCENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamOrderMapper
    } // namespace Model
  } // namespace MediaPackageVod
} // namespace Aws
