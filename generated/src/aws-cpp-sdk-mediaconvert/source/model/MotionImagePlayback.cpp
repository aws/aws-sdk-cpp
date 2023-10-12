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

        static constexpr uint32_t ONCE_HASH = ConstExprHashingUtils::HashString("ONCE");
        static constexpr uint32_t REPEAT_HASH = ConstExprHashingUtils::HashString("REPEAT");


        MotionImagePlayback GetMotionImagePlaybackForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case MotionImagePlayback::NOT_SET:
            return {};
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
