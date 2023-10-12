/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SmoothGroupAudioOnlyTimecodeControl.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace SmoothGroupAudioOnlyTimecodeControlMapper
      {

        static constexpr uint32_t PASSTHROUGH_HASH = ConstExprHashingUtils::HashString("PASSTHROUGH");
        static constexpr uint32_t USE_CONFIGURED_CLOCK_HASH = ConstExprHashingUtils::HashString("USE_CONFIGURED_CLOCK");


        SmoothGroupAudioOnlyTimecodeControl GetSmoothGroupAudioOnlyTimecodeControlForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSTHROUGH_HASH)
          {
            return SmoothGroupAudioOnlyTimecodeControl::PASSTHROUGH;
          }
          else if (hashCode == USE_CONFIGURED_CLOCK_HASH)
          {
            return SmoothGroupAudioOnlyTimecodeControl::USE_CONFIGURED_CLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmoothGroupAudioOnlyTimecodeControl>(hashCode);
          }

          return SmoothGroupAudioOnlyTimecodeControl::NOT_SET;
        }

        Aws::String GetNameForSmoothGroupAudioOnlyTimecodeControl(SmoothGroupAudioOnlyTimecodeControl enumValue)
        {
          switch(enumValue)
          {
          case SmoothGroupAudioOnlyTimecodeControl::NOT_SET:
            return {};
          case SmoothGroupAudioOnlyTimecodeControl::PASSTHROUGH:
            return "PASSTHROUGH";
          case SmoothGroupAudioOnlyTimecodeControl::USE_CONFIGURED_CLOCK:
            return "USE_CONFIGURED_CLOCK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SmoothGroupAudioOnlyTimecodeControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
