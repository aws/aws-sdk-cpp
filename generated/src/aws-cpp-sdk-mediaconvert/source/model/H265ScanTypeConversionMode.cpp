/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265ScanTypeConversionMode.h>
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
      namespace H265ScanTypeConversionModeMapper
      {

        static constexpr uint32_t INTERLACED_HASH = ConstExprHashingUtils::HashString("INTERLACED");
        static constexpr uint32_t INTERLACED_OPTIMIZE_HASH = ConstExprHashingUtils::HashString("INTERLACED_OPTIMIZE");


        H265ScanTypeConversionMode GetH265ScanTypeConversionModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERLACED_HASH)
          {
            return H265ScanTypeConversionMode::INTERLACED;
          }
          else if (hashCode == INTERLACED_OPTIMIZE_HASH)
          {
            return H265ScanTypeConversionMode::INTERLACED_OPTIMIZE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265ScanTypeConversionMode>(hashCode);
          }

          return H265ScanTypeConversionMode::NOT_SET;
        }

        Aws::String GetNameForH265ScanTypeConversionMode(H265ScanTypeConversionMode enumValue)
        {
          switch(enumValue)
          {
          case H265ScanTypeConversionMode::NOT_SET:
            return {};
          case H265ScanTypeConversionMode::INTERLACED:
            return "INTERLACED";
          case H265ScanTypeConversionMode::INTERLACED_OPTIMIZE:
            return "INTERLACED_OPTIMIZE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265ScanTypeConversionModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
