/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MovMpeg2FourCCControl.h>
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
      namespace MovMpeg2FourCCControlMapper
      {

        static constexpr uint32_t XDCAM_HASH = ConstExprHashingUtils::HashString("XDCAM");
        static constexpr uint32_t MPEG_HASH = ConstExprHashingUtils::HashString("MPEG");


        MovMpeg2FourCCControl GetMovMpeg2FourCCControlForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == XDCAM_HASH)
          {
            return MovMpeg2FourCCControl::XDCAM;
          }
          else if (hashCode == MPEG_HASH)
          {
            return MovMpeg2FourCCControl::MPEG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MovMpeg2FourCCControl>(hashCode);
          }

          return MovMpeg2FourCCControl::NOT_SET;
        }

        Aws::String GetNameForMovMpeg2FourCCControl(MovMpeg2FourCCControl enumValue)
        {
          switch(enumValue)
          {
          case MovMpeg2FourCCControl::NOT_SET:
            return {};
          case MovMpeg2FourCCControl::XDCAM:
            return "XDCAM";
          case MovMpeg2FourCCControl::MPEG:
            return "MPEG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MovMpeg2FourCCControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
