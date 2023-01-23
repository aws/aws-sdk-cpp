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

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int FORCE_601_HASH = HashingUtils::HashString("FORCE_601");
        static const int FORCE_709_HASH = HashingUtils::HashString("FORCE_709");
        static const int FORCE_HDR10_HASH = HashingUtils::HashString("FORCE_HDR10");
        static const int FORCE_HLG_2020_HASH = HashingUtils::HashString("FORCE_HLG_2020");
        static const int FORCE_P3DCI_HASH = HashingUtils::HashString("FORCE_P3DCI");
        static const int FORCE_P3D65_SDR_HASH = HashingUtils::HashString("FORCE_P3D65_SDR");


        ColorSpaceConversion GetColorSpaceConversionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
