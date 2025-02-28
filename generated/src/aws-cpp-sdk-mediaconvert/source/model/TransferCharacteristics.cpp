/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/TransferCharacteristics.h>
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
      namespace TransferCharacteristicsMapper
      {

        static const int ITU_709_HASH = HashingUtils::HashString("ITU_709");
        static const int UNSPECIFIED_HASH = HashingUtils::HashString("UNSPECIFIED");
        static const int RESERVED_HASH = HashingUtils::HashString("RESERVED");
        static const int ITU_470M_HASH = HashingUtils::HashString("ITU_470M");
        static const int ITU_470BG_HASH = HashingUtils::HashString("ITU_470BG");
        static const int SMPTE_170M_HASH = HashingUtils::HashString("SMPTE_170M");
        static const int SMPTE_240M_HASH = HashingUtils::HashString("SMPTE_240M");
        static const int LINEAR_HASH = HashingUtils::HashString("LINEAR");
        static const int LOG10_2_HASH = HashingUtils::HashString("LOG10_2");
        static const int LOC10_2_5_HASH = HashingUtils::HashString("LOC10_2_5");
        static const int IEC_61966_2_4_HASH = HashingUtils::HashString("IEC_61966_2_4");
        static const int ITU_1361_HASH = HashingUtils::HashString("ITU_1361");
        static const int IEC_61966_2_1_HASH = HashingUtils::HashString("IEC_61966_2_1");
        static const int ITU_2020_10bit_HASH = HashingUtils::HashString("ITU_2020_10bit");
        static const int ITU_2020_12bit_HASH = HashingUtils::HashString("ITU_2020_12bit");
        static const int SMPTE_2084_HASH = HashingUtils::HashString("SMPTE_2084");
        static const int SMPTE_428_1_HASH = HashingUtils::HashString("SMPTE_428_1");
        static const int ARIB_B67_HASH = HashingUtils::HashString("ARIB_B67");
        static const int LAST_HASH = HashingUtils::HashString("LAST");


        TransferCharacteristics GetTransferCharacteristicsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ITU_709_HASH)
          {
            return TransferCharacteristics::ITU_709;
          }
          else if (hashCode == UNSPECIFIED_HASH)
          {
            return TransferCharacteristics::UNSPECIFIED;
          }
          else if (hashCode == RESERVED_HASH)
          {
            return TransferCharacteristics::RESERVED;
          }
          else if (hashCode == ITU_470M_HASH)
          {
            return TransferCharacteristics::ITU_470M;
          }
          else if (hashCode == ITU_470BG_HASH)
          {
            return TransferCharacteristics::ITU_470BG;
          }
          else if (hashCode == SMPTE_170M_HASH)
          {
            return TransferCharacteristics::SMPTE_170M;
          }
          else if (hashCode == SMPTE_240M_HASH)
          {
            return TransferCharacteristics::SMPTE_240M;
          }
          else if (hashCode == LINEAR_HASH)
          {
            return TransferCharacteristics::LINEAR;
          }
          else if (hashCode == LOG10_2_HASH)
          {
            return TransferCharacteristics::LOG10_2;
          }
          else if (hashCode == LOC10_2_5_HASH)
          {
            return TransferCharacteristics::LOC10_2_5;
          }
          else if (hashCode == IEC_61966_2_4_HASH)
          {
            return TransferCharacteristics::IEC_61966_2_4;
          }
          else if (hashCode == ITU_1361_HASH)
          {
            return TransferCharacteristics::ITU_1361;
          }
          else if (hashCode == IEC_61966_2_1_HASH)
          {
            return TransferCharacteristics::IEC_61966_2_1;
          }
          else if (hashCode == ITU_2020_10bit_HASH)
          {
            return TransferCharacteristics::ITU_2020_10bit;
          }
          else if (hashCode == ITU_2020_12bit_HASH)
          {
            return TransferCharacteristics::ITU_2020_12bit;
          }
          else if (hashCode == SMPTE_2084_HASH)
          {
            return TransferCharacteristics::SMPTE_2084;
          }
          else if (hashCode == SMPTE_428_1_HASH)
          {
            return TransferCharacteristics::SMPTE_428_1;
          }
          else if (hashCode == ARIB_B67_HASH)
          {
            return TransferCharacteristics::ARIB_B67;
          }
          else if (hashCode == LAST_HASH)
          {
            return TransferCharacteristics::LAST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransferCharacteristics>(hashCode);
          }

          return TransferCharacteristics::NOT_SET;
        }

        Aws::String GetNameForTransferCharacteristics(TransferCharacteristics enumValue)
        {
          switch(enumValue)
          {
          case TransferCharacteristics::NOT_SET:
            return {};
          case TransferCharacteristics::ITU_709:
            return "ITU_709";
          case TransferCharacteristics::UNSPECIFIED:
            return "UNSPECIFIED";
          case TransferCharacteristics::RESERVED:
            return "RESERVED";
          case TransferCharacteristics::ITU_470M:
            return "ITU_470M";
          case TransferCharacteristics::ITU_470BG:
            return "ITU_470BG";
          case TransferCharacteristics::SMPTE_170M:
            return "SMPTE_170M";
          case TransferCharacteristics::SMPTE_240M:
            return "SMPTE_240M";
          case TransferCharacteristics::LINEAR:
            return "LINEAR";
          case TransferCharacteristics::LOG10_2:
            return "LOG10_2";
          case TransferCharacteristics::LOC10_2_5:
            return "LOC10_2_5";
          case TransferCharacteristics::IEC_61966_2_4:
            return "IEC_61966_2_4";
          case TransferCharacteristics::ITU_1361:
            return "ITU_1361";
          case TransferCharacteristics::IEC_61966_2_1:
            return "IEC_61966_2_1";
          case TransferCharacteristics::ITU_2020_10bit:
            return "ITU_2020_10bit";
          case TransferCharacteristics::ITU_2020_12bit:
            return "ITU_2020_12bit";
          case TransferCharacteristics::SMPTE_2084:
            return "SMPTE_2084";
          case TransferCharacteristics::SMPTE_428_1:
            return "SMPTE_428_1";
          case TransferCharacteristics::ARIB_B67:
            return "ARIB_B67";
          case TransferCharacteristics::LAST:
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

      } // namespace TransferCharacteristicsMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
