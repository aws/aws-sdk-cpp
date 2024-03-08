/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/MediaStreamType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace MediaStreamTypeMapper
      {

        static const int video_HASH = HashingUtils::HashString("video");
        static const int audio_HASH = HashingUtils::HashString("audio");
        static const int ancillary_data_HASH = HashingUtils::HashString("ancillary-data");


        MediaStreamType GetMediaStreamTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == video_HASH)
          {
            return MediaStreamType::video;
          }
          else if (hashCode == audio_HASH)
          {
            return MediaStreamType::audio;
          }
          else if (hashCode == ancillary_data_HASH)
          {
            return MediaStreamType::ancillary_data;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaStreamType>(hashCode);
          }

          return MediaStreamType::NOT_SET;
        }

        Aws::String GetNameForMediaStreamType(MediaStreamType enumValue)
        {
          switch(enumValue)
          {
          case MediaStreamType::NOT_SET:
            return {};
          case MediaStreamType::video:
            return "video";
          case MediaStreamType::audio:
            return "audio";
          case MediaStreamType::ancillary_data:
            return "ancillary-data";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaStreamTypeMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
