/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3AtmosMeteringMode.h>
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
      namespace Eac3AtmosMeteringModeMapper
      {

        static const int LEQ_A_HASH = HashingUtils::HashString("LEQ_A");
        static const int ITU_BS_1770_1_HASH = HashingUtils::HashString("ITU_BS_1770_1");
        static const int ITU_BS_1770_2_HASH = HashingUtils::HashString("ITU_BS_1770_2");
        static const int ITU_BS_1770_3_HASH = HashingUtils::HashString("ITU_BS_1770_3");
        static const int ITU_BS_1770_4_HASH = HashingUtils::HashString("ITU_BS_1770_4");


        Eac3AtmosMeteringMode GetEac3AtmosMeteringModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LEQ_A_HASH)
          {
            return Eac3AtmosMeteringMode::LEQ_A;
          }
          else if (hashCode == ITU_BS_1770_1_HASH)
          {
            return Eac3AtmosMeteringMode::ITU_BS_1770_1;
          }
          else if (hashCode == ITU_BS_1770_2_HASH)
          {
            return Eac3AtmosMeteringMode::ITU_BS_1770_2;
          }
          else if (hashCode == ITU_BS_1770_3_HASH)
          {
            return Eac3AtmosMeteringMode::ITU_BS_1770_3;
          }
          else if (hashCode == ITU_BS_1770_4_HASH)
          {
            return Eac3AtmosMeteringMode::ITU_BS_1770_4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3AtmosMeteringMode>(hashCode);
          }

          return Eac3AtmosMeteringMode::NOT_SET;
        }

        Aws::String GetNameForEac3AtmosMeteringMode(Eac3AtmosMeteringMode enumValue)
        {
          switch(enumValue)
          {
          case Eac3AtmosMeteringMode::LEQ_A:
            return "LEQ_A";
          case Eac3AtmosMeteringMode::ITU_BS_1770_1:
            return "ITU_BS_1770_1";
          case Eac3AtmosMeteringMode::ITU_BS_1770_2:
            return "ITU_BS_1770_2";
          case Eac3AtmosMeteringMode::ITU_BS_1770_3:
            return "ITU_BS_1770_3";
          case Eac3AtmosMeteringMode::ITU_BS_1770_4:
            return "ITU_BS_1770_4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3AtmosMeteringModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
