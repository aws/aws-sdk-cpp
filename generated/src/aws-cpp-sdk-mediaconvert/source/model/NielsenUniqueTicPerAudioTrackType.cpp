/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/NielsenUniqueTicPerAudioTrackType.h>
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
      namespace NielsenUniqueTicPerAudioTrackTypeMapper
      {

        static const int RESERVE_UNIQUE_TICS_PER_TRACK_HASH = HashingUtils::HashString("RESERVE_UNIQUE_TICS_PER_TRACK");
        static const int SAME_TICS_PER_TRACK_HASH = HashingUtils::HashString("SAME_TICS_PER_TRACK");


        NielsenUniqueTicPerAudioTrackType GetNielsenUniqueTicPerAudioTrackTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESERVE_UNIQUE_TICS_PER_TRACK_HASH)
          {
            return NielsenUniqueTicPerAudioTrackType::RESERVE_UNIQUE_TICS_PER_TRACK;
          }
          else if (hashCode == SAME_TICS_PER_TRACK_HASH)
          {
            return NielsenUniqueTicPerAudioTrackType::SAME_TICS_PER_TRACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NielsenUniqueTicPerAudioTrackType>(hashCode);
          }

          return NielsenUniqueTicPerAudioTrackType::NOT_SET;
        }

        Aws::String GetNameForNielsenUniqueTicPerAudioTrackType(NielsenUniqueTicPerAudioTrackType enumValue)
        {
          switch(enumValue)
          {
          case NielsenUniqueTicPerAudioTrackType::RESERVE_UNIQUE_TICS_PER_TRACK:
            return "RESERVE_UNIQUE_TICS_PER_TRACK";
          case NielsenUniqueTicPerAudioTrackType::SAME_TICS_PER_TRACK:
            return "SAME_TICS_PER_TRACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NielsenUniqueTicPerAudioTrackTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
