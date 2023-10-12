/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ColorSpaceConversion.h>
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
      namespace ColorSpaceConversionMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t FORCE_601_HASH = ConstExprHashingUtils::HashString("FORCE_601");
        static constexpr uint32_t FORCE_709_HASH = ConstExprHashingUtils::HashString("FORCE_709");
        static constexpr uint32_t FORCE_HDR10_HASH = ConstExprHashingUtils::HashString("FORCE_HDR10");
        static constexpr uint32_t FORCE_HLG_2020_HASH = ConstExprHashingUtils::HashString("FORCE_HLG_2020");
        static constexpr uint32_t FORCE_P3DCI_HASH = ConstExprHashingUtils::HashString("FORCE_P3DCI");
        static constexpr uint32_t FORCE_P3D65_SDR_HASH = ConstExprHashingUtils::HashString("FORCE_P3D65_SDR");
        static constexpr uint32_t FORCE_P3D65_HDR_HASH = ConstExprHashingUtils::HashString("FORCE_P3D65_HDR");


        ColorSpaceConversion GetColorSpaceConversionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ColorSpaceConversion::NONE;
          }
          else if (hashCode == FORCE_601_HASH)
          {
            return ColorSpaceConversion::FORCE_601;
          }
          else if (hashCode == FORCE_709_HASH)
          {
            return ColorSpaceConversion::FORCE_709;
          }
          else if (hashCode == FORCE_HDR10_HASH)
          {
            return ColorSpaceConversion::FORCE_HDR10;
          }
          else if (hashCode == FORCE_HLG_2020_HASH)
          {
            return ColorSpaceConversion::FORCE_HLG_2020;
          }
          else if (hashCode == FORCE_P3DCI_HASH)
          {
            return ColorSpaceConversion::FORCE_P3DCI;
          }
          else if (hashCode == FORCE_P3D65_SDR_HASH)
          {
            return ColorSpaceConversion::FORCE_P3D65_SDR;
          }
          else if (hashCode == FORCE_P3D65_HDR_HASH)
          {
            return ColorSpaceConversion::FORCE_P3D65_HDR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColorSpaceConversion>(hashCode);
          }

          return ColorSpaceConversion::NOT_SET;
        }

        Aws::String GetNameForColorSpaceConversion(ColorSpaceConversion enumValue)
        {
          switch(enumValue)
          {
          case ColorSpaceConversion::NOT_SET:
            return {};
          case ColorSpaceConversion::NONE:
            return "NONE";
          case ColorSpaceConversion::FORCE_601:
            return "FORCE_601";
          case ColorSpaceConversion::FORCE_709:
            return "FORCE_709";
          case ColorSpaceConversion::FORCE_HDR10:
            return "FORCE_HDR10";
          case ColorSpaceConversion::FORCE_HLG_2020:
            return "FORCE_HLG_2020";
          case ColorSpaceConversion::FORCE_P3DCI:
            return "FORCE_P3DCI";
          case ColorSpaceConversion::FORCE_P3D65_SDR:
            return "FORCE_P3D65_SDR";
          case ColorSpaceConversion::FORCE_P3D65_HDR:
            return "FORCE_P3D65_HDR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColorSpaceConversionMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
