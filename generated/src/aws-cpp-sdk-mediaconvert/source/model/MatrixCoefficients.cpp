/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MatrixCoefficients.h>
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
      namespace MatrixCoefficientsMapper
      {

        static const int RGB_HASH = HashingUtils::HashString("RGB");
        static const int ITU_709_HASH = HashingUtils::HashString("ITU_709");
        static const int UNSPECIFIED_HASH = HashingUtils::HashString("UNSPECIFIED");
        static const int RESERVED_HASH = HashingUtils::HashString("RESERVED");
        static const int FCC_HASH = HashingUtils::HashString("FCC");
        static const int ITU_470BG_HASH = HashingUtils::HashString("ITU_470BG");
        static const int SMPTE_170M_HASH = HashingUtils::HashString("SMPTE_170M");
        static const int SMPTE_240M_HASH = HashingUtils::HashString("SMPTE_240M");
        static const int YCgCo_HASH = HashingUtils::HashString("YCgCo");
        static const int ITU_2020_NCL_HASH = HashingUtils::HashString("ITU_2020_NCL");
        static const int ITU_2020_CL_HASH = HashingUtils::HashString("ITU_2020_CL");
        static const int SMPTE_2085_HASH = HashingUtils::HashString("SMPTE_2085");
        static const int CD_NCL_HASH = HashingUtils::HashString("CD_NCL");
        static const int CD_CL_HASH = HashingUtils::HashString("CD_CL");
        static const int ITU_2100ICtCp_HASH = HashingUtils::HashString("ITU_2100ICtCp");
        static const int IPT_HASH = HashingUtils::HashString("IPT");
        static const int EBU3213_HASH = HashingUtils::HashString("EBU3213");
        static const int LAST_HASH = HashingUtils::HashString("LAST");


        MatrixCoefficients GetMatrixCoefficientsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RGB_HASH)
          {
            return MatrixCoefficients::RGB;
          }
          else if (hashCode == ITU_709_HASH)
          {
            return MatrixCoefficients::ITU_709;
          }
          else if (hashCode == UNSPECIFIED_HASH)
          {
            return MatrixCoefficients::UNSPECIFIED;
          }
          else if (hashCode == RESERVED_HASH)
          {
            return MatrixCoefficients::RESERVED;
          }
          else if (hashCode == FCC_HASH)
          {
            return MatrixCoefficients::FCC;
          }
          else if (hashCode == ITU_470BG_HASH)
          {
            return MatrixCoefficients::ITU_470BG;
          }
          else if (hashCode == SMPTE_170M_HASH)
          {
            return MatrixCoefficients::SMPTE_170M;
          }
          else if (hashCode == SMPTE_240M_HASH)
          {
            return MatrixCoefficients::SMPTE_240M;
          }
          else if (hashCode == YCgCo_HASH)
          {
            return MatrixCoefficients::YCgCo;
          }
          else if (hashCode == ITU_2020_NCL_HASH)
          {
            return MatrixCoefficients::ITU_2020_NCL;
          }
          else if (hashCode == ITU_2020_CL_HASH)
          {
            return MatrixCoefficients::ITU_2020_CL;
          }
          else if (hashCode == SMPTE_2085_HASH)
          {
            return MatrixCoefficients::SMPTE_2085;
          }
          else if (hashCode == CD_NCL_HASH)
          {
            return MatrixCoefficients::CD_NCL;
          }
          else if (hashCode == CD_CL_HASH)
          {
            return MatrixCoefficients::CD_CL;
          }
          else if (hashCode == ITU_2100ICtCp_HASH)
          {
            return MatrixCoefficients::ITU_2100ICtCp;
          }
          else if (hashCode == IPT_HASH)
          {
            return MatrixCoefficients::IPT;
          }
          else if (hashCode == EBU3213_HASH)
          {
            return MatrixCoefficients::EBU3213;
          }
          else if (hashCode == LAST_HASH)
          {
            return MatrixCoefficients::LAST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MatrixCoefficients>(hashCode);
          }

          return MatrixCoefficients::NOT_SET;
        }

        Aws::String GetNameForMatrixCoefficients(MatrixCoefficients enumValue)
        {
          switch(enumValue)
          {
          case MatrixCoefficients::NOT_SET:
            return {};
          case MatrixCoefficients::RGB:
            return "RGB";
          case MatrixCoefficients::ITU_709:
            return "ITU_709";
          case MatrixCoefficients::UNSPECIFIED:
            return "UNSPECIFIED";
          case MatrixCoefficients::RESERVED:
            return "RESERVED";
          case MatrixCoefficients::FCC:
            return "FCC";
          case MatrixCoefficients::ITU_470BG:
            return "ITU_470BG";
          case MatrixCoefficients::SMPTE_170M:
            return "SMPTE_170M";
          case MatrixCoefficients::SMPTE_240M:
            return "SMPTE_240M";
          case MatrixCoefficients::YCgCo:
            return "YCgCo";
          case MatrixCoefficients::ITU_2020_NCL:
            return "ITU_2020_NCL";
          case MatrixCoefficients::ITU_2020_CL:
            return "ITU_2020_CL";
          case MatrixCoefficients::SMPTE_2085:
            return "SMPTE_2085";
          case MatrixCoefficients::CD_NCL:
            return "CD_NCL";
          case MatrixCoefficients::CD_CL:
            return "CD_CL";
          case MatrixCoefficients::ITU_2100ICtCp:
            return "ITU_2100ICtCp";
          case MatrixCoefficients::IPT:
            return "IPT";
          case MatrixCoefficients::EBU3213:
            return "EBU3213";
          case MatrixCoefficients::LAST:
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

      } // namespace MatrixCoefficientsMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
