/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/PadVideo.h>
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
      namespace PadVideoMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t BLACK_HASH = ConstExprHashingUtils::HashString("BLACK");


        PadVideo GetPadVideoForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return PadVideo::DISABLED;
          }
          else if (hashCode == BLACK_HASH)
          {
            return PadVideo::BLACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PadVideo>(hashCode);
          }

          return PadVideo::NOT_SET;
        }

        Aws::String GetNameForPadVideo(PadVideo enumValue)
        {
          switch(enumValue)
          {
          case PadVideo::NOT_SET:
            return {};
          case PadVideo::DISABLED:
            return "DISABLED";
          case PadVideo::BLACK:
            return "BLACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PadVideoMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
