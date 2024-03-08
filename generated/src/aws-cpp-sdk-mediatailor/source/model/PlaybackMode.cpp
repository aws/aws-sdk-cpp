/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/PlaybackMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace PlaybackModeMapper
      {

        static const int LOOP_HASH = HashingUtils::HashString("LOOP");
        static const int LINEAR_HASH = HashingUtils::HashString("LINEAR");


        PlaybackMode GetPlaybackModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOOP_HASH)
          {
            return PlaybackMode::LOOP;
          }
          else if (hashCode == LINEAR_HASH)
          {
            return PlaybackMode::LINEAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlaybackMode>(hashCode);
          }

          return PlaybackMode::NOT_SET;
        }

        Aws::String GetNameForPlaybackMode(PlaybackMode enumValue)
        {
          switch(enumValue)
          {
          case PlaybackMode::NOT_SET:
            return {};
          case PlaybackMode::LOOP:
            return "LOOP";
          case PlaybackMode::LINEAR:
            return "LINEAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlaybackModeMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
