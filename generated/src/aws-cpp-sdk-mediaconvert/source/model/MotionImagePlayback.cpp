/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MotionImagePlayback.h>
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
      namespace MotionImagePlaybackMapper
      {

        static const int ONCE_HASH = HashingUtils::HashString("ONCE");
        static const int REPEAT_HASH = HashingUtils::HashString("REPEAT");


        MotionImagePlayback GetMotionImagePlaybackForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONCE_HASH)
          {
            return MotionImagePlayback::ONCE;
          }
          else if (hashCode == REPEAT_HASH)
          {
            return MotionImagePlayback::REPEAT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MotionImagePlayback>(hashCode);
          }

          return MotionImagePlayback::NOT_SET;
        }

        Aws::String GetNameForMotionImagePlayback(MotionImagePlayback enumValue)
        {
          switch(enumValue)
          {
          case MotionImagePlayback::ONCE:
            return "ONCE";
          case MotionImagePlayback::REPEAT:
            return "REPEAT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MotionImagePlaybackMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
