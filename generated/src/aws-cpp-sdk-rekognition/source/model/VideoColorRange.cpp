/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/VideoColorRange.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace VideoColorRangeMapper
      {

        static const int FULL_HASH = HashingUtils::HashString("FULL");
        static const int LIMITED_HASH = HashingUtils::HashString("LIMITED");


        VideoColorRange GetVideoColorRangeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_HASH)
          {
            return VideoColorRange::FULL;
          }
          else if (hashCode == LIMITED_HASH)
          {
            return VideoColorRange::LIMITED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoColorRange>(hashCode);
          }

          return VideoColorRange::NOT_SET;
        }

        Aws::String GetNameForVideoColorRange(VideoColorRange enumValue)
        {
          switch(enumValue)
          {
          case VideoColorRange::NOT_SET:
            return {};
          case VideoColorRange::FULL:
            return "FULL";
          case VideoColorRange::LIMITED:
            return "LIMITED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoColorRangeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
