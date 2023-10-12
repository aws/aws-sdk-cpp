/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M3u8AudioDuration.h>
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
      namespace M3u8AudioDurationMapper
      {

        static constexpr uint32_t DEFAULT_CODEC_DURATION_HASH = ConstExprHashingUtils::HashString("DEFAULT_CODEC_DURATION");
        static constexpr uint32_t MATCH_VIDEO_DURATION_HASH = ConstExprHashingUtils::HashString("MATCH_VIDEO_DURATION");


        M3u8AudioDuration GetM3u8AudioDurationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_CODEC_DURATION_HASH)
          {
            return M3u8AudioDuration::DEFAULT_CODEC_DURATION;
          }
          else if (hashCode == MATCH_VIDEO_DURATION_HASH)
          {
            return M3u8AudioDuration::MATCH_VIDEO_DURATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M3u8AudioDuration>(hashCode);
          }

          return M3u8AudioDuration::NOT_SET;
        }

        Aws::String GetNameForM3u8AudioDuration(M3u8AudioDuration enumValue)
        {
          switch(enumValue)
          {
          case M3u8AudioDuration::NOT_SET:
            return {};
          case M3u8AudioDuration::DEFAULT_CODEC_DURATION:
            return "DEFAULT_CODEC_DURATION";
          case M3u8AudioDuration::MATCH_VIDEO_DURATION:
            return "MATCH_VIDEO_DURATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M3u8AudioDurationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
