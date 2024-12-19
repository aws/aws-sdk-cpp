/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/TimecodeTrack.h>
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
      namespace TimecodeTrackMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        TimecodeTrack GetTimecodeTrackForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return TimecodeTrack::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return TimecodeTrack::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimecodeTrack>(hashCode);
          }

          return TimecodeTrack::NOT_SET;
        }

        Aws::String GetNameForTimecodeTrack(TimecodeTrack enumValue)
        {
          switch(enumValue)
          {
          case TimecodeTrack::NOT_SET:
            return {};
          case TimecodeTrack::DISABLED:
            return "DISABLED";
          case TimecodeTrack::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimecodeTrackMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
