/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M2tsEbpAudioInterval.h>
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
      namespace M2tsEbpAudioIntervalMapper
      {

        static const int VIDEO_AND_FIXED_INTERVALS_HASH = HashingUtils::HashString("VIDEO_AND_FIXED_INTERVALS");
        static const int VIDEO_INTERVAL_HASH = HashingUtils::HashString("VIDEO_INTERVAL");


        M2tsEbpAudioInterval GetM2tsEbpAudioIntervalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VIDEO_AND_FIXED_INTERVALS_HASH)
          {
            return M2tsEbpAudioInterval::VIDEO_AND_FIXED_INTERVALS;
          }
          else if (hashCode == VIDEO_INTERVAL_HASH)
          {
            return M2tsEbpAudioInterval::VIDEO_INTERVAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsEbpAudioInterval>(hashCode);
          }

          return M2tsEbpAudioInterval::NOT_SET;
        }

        Aws::String GetNameForM2tsEbpAudioInterval(M2tsEbpAudioInterval enumValue)
        {
          switch(enumValue)
          {
          case M2tsEbpAudioInterval::VIDEO_AND_FIXED_INTERVALS:
            return "VIDEO_AND_FIXED_INTERVALS";
          case M2tsEbpAudioInterval::VIDEO_INTERVAL:
            return "VIDEO_INTERVAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsEbpAudioIntervalMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
