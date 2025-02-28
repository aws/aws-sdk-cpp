/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/TrackType.h>
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
      namespace TrackTypeMapper
      {

        static const int video_HASH = HashingUtils::HashString("video");
        static const int audio_HASH = HashingUtils::HashString("audio");
        static const int data_HASH = HashingUtils::HashString("data");


        TrackType GetTrackTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == video_HASH)
          {
            return TrackType::video;
          }
          else if (hashCode == audio_HASH)
          {
            return TrackType::audio;
          }
          else if (hashCode == data_HASH)
          {
            return TrackType::data;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrackType>(hashCode);
          }

          return TrackType::NOT_SET;
        }

        Aws::String GetNameForTrackType(TrackType enumValue)
        {
          switch(enumValue)
          {
          case TrackType::NOT_SET:
            return {};
          case TrackType::video:
            return "video";
          case TrackType::audio:
            return "audio";
          case TrackType::data:
            return "data";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrackTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
