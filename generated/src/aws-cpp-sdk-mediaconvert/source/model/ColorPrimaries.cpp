/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ColorPrimaries.h>
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
      namespace ColorPrimariesMapper
      {

        static const int ITU_709_HASH = HashingUtils::HashString("ITU_709");
        static const int UNSPECIFIED_HASH = HashingUtils::HashString("UNSPECIFIED");
        static const int RESERVED_HASH = HashingUtils::HashString("RESERVED");
        static const int ITU_470M_HASH = HashingUtils::HashString("ITU_470M");
        static const int ITU_470BG_HASH = HashingUtils::HashString("ITU_470BG");
        static const int SMPTE_170M_HASH = HashingUtils::HashString("SMPTE_170M");
        static const int SMPTE_240M_HASH = HashingUtils::HashString("SMPTE_240M");
        static const int GENERIC_FILM_HASH = HashingUtils::HashString("GENERIC_FILM");
        static const int ITU_2020_HASH = HashingUtils::HashString("ITU_2020");
        static const int SMPTE_428_1_HASH = HashingUtils::HashString("SMPTE_428_1");
        static const int SMPTE_431_2_HASH = HashingUtils::HashString("SMPTE_431_2");
        static const int SMPTE_EG_432_1_HASH = HashingUtils::HashString("SMPTE_EG_432_1");
        static const int IPT_HASH = HashingUtils::HashString("IPT");
        static const int SMPTE_2067XYZ_HASH = HashingUtils::HashString("SMPTE_2067XYZ");
        static const int EBU_3213_E_HASH = HashingUtils::HashString("EBU_3213_E");
        static const int LAST_HASH = HashingUtils::HashString("LAST");


        ColorPrimaries GetColorPrimariesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ITU_709_HASH)
          {
            return ColorPrimaries::ITU_709;
          }
          else if (hashCode == UNSPECIFIED_HASH)
          {
            return ColorPrimaries::UNSPECIFIED;
          }
          else if (hashCode == RESERVED_HASH)
          {
            return ColorPrimaries::RESERVED;
          }
          else if (hashCode == ITU_470M_HASH)
          {
            return ColorPrimaries::ITU_470M;
          }
          else if (hashCode == ITU_470BG_HASH)
          {
            return ColorPrimaries::ITU_470BG;
          }
          else if (hashCode == SMPTE_170M_HASH)
          {
            return ColorPrimaries::SMPTE_170M;
          }
          else if (hashCode == SMPTE_240M_HASH)
          {
            return ColorPrimaries::SMPTE_240M;
          }
          else if (hashCode == GENERIC_FILM_HASH)
          {
            return ColorPrimaries::GENERIC_FILM;
          }
          else if (hashCode == ITU_2020_HASH)
          {
            return ColorPrimaries::ITU_2020;
          }
          else if (hashCode == SMPTE_428_1_HASH)
          {
            return ColorPrimaries::SMPTE_428_1;
          }
          else if (hashCode == SMPTE_431_2_HASH)
          {
            return ColorPrimaries::SMPTE_431_2;
          }
          else if (hashCode == SMPTE_EG_432_1_HASH)
          {
            return ColorPrimaries::SMPTE_EG_432_1;
          }
          else if (hashCode == IPT_HASH)
          {
            return ColorPrimaries::IPT;
          }
          else if (hashCode == SMPTE_2067XYZ_HASH)
          {
            return ColorPrimaries::SMPTE_2067XYZ;
          }
          else if (hashCode == EBU_3213_E_HASH)
          {
            return ColorPrimaries::EBU_3213_E;
          }
          else if (hashCode == LAST_HASH)
          {
            return ColorPrimaries::LAST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColorPrimaries>(hashCode);
          }

          return ColorPrimaries::NOT_SET;
        }

        Aws::String GetNameForColorPrimaries(ColorPrimaries enumValue)
        {
          switch(enumValue)
          {
          case ColorPrimaries::NOT_SET:
            return {};
          case ColorPrimaries::ITU_709:
            return "ITU_709";
          case ColorPrimaries::UNSPECIFIED:
            return "UNSPECIFIED";
          case ColorPrimaries::RESERVED:
            return "RESERVED";
          case ColorPrimaries::ITU_470M:
            return "ITU_470M";
          case ColorPrimaries::ITU_470BG:
            return "ITU_470BG";
          case ColorPrimaries::SMPTE_170M:
            return "SMPTE_170M";
          case ColorPrimaries::SMPTE_240M:
            return "SMPTE_240M";
          case ColorPrimaries::GENERIC_FILM:
            return "GENERIC_FILM";
          case ColorPrimaries::ITU_2020:
            return "ITU_2020";
          case ColorPrimaries::SMPTE_428_1:
            return "SMPTE_428_1";
          case ColorPrimaries::SMPTE_431_2:
            return "SMPTE_431_2";
          case ColorPrimaries::SMPTE_EG_432_1:
            return "SMPTE_EG_432_1";
          case ColorPrimaries::IPT:
            return "IPT";
          case ColorPrimaries::SMPTE_2067XYZ:
            return "SMPTE_2067XYZ";
          case ColorPrimaries::EBU_3213_E:
            return "EBU_3213_E";
          case ColorPrimaries::LAST:
            return "LAST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColorPrimariesMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
