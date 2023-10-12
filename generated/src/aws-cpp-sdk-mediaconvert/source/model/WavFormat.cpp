/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/WavFormat.h>
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
      namespace WavFormatMapper
      {

        static constexpr uint32_t RIFF_HASH = ConstExprHashingUtils::HashString("RIFF");
        static constexpr uint32_t RF64_HASH = ConstExprHashingUtils::HashString("RF64");


        WavFormat GetWavFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RIFF_HASH)
          {
            return WavFormat::RIFF;
          }
          else if (hashCode == RF64_HASH)
          {
            return WavFormat::RF64;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WavFormat>(hashCode);
          }

          return WavFormat::NOT_SET;
        }

        Aws::String GetNameForWavFormat(WavFormat enumValue)
        {
          switch(enumValue)
          {
          case WavFormat::NOT_SET:
            return {};
          case WavFormat::RIFF:
            return "RIFF";
          case WavFormat::RF64:
            return "RF64";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WavFormatMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
