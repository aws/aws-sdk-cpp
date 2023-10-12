/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DolbyEProgramSelection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace DolbyEProgramSelectionMapper
      {

        static constexpr uint32_t ALL_CHANNELS_HASH = ConstExprHashingUtils::HashString("ALL_CHANNELS");
        static constexpr uint32_t PROGRAM_1_HASH = ConstExprHashingUtils::HashString("PROGRAM_1");
        static constexpr uint32_t PROGRAM_2_HASH = ConstExprHashingUtils::HashString("PROGRAM_2");
        static constexpr uint32_t PROGRAM_3_HASH = ConstExprHashingUtils::HashString("PROGRAM_3");
        static constexpr uint32_t PROGRAM_4_HASH = ConstExprHashingUtils::HashString("PROGRAM_4");
        static constexpr uint32_t PROGRAM_5_HASH = ConstExprHashingUtils::HashString("PROGRAM_5");
        static constexpr uint32_t PROGRAM_6_HASH = ConstExprHashingUtils::HashString("PROGRAM_6");
        static constexpr uint32_t PROGRAM_7_HASH = ConstExprHashingUtils::HashString("PROGRAM_7");
        static constexpr uint32_t PROGRAM_8_HASH = ConstExprHashingUtils::HashString("PROGRAM_8");


        DolbyEProgramSelection GetDolbyEProgramSelectionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_CHANNELS_HASH)
          {
            return DolbyEProgramSelection::ALL_CHANNELS;
          }
          else if (hashCode == PROGRAM_1_HASH)
          {
            return DolbyEProgramSelection::PROGRAM_1;
          }
          else if (hashCode == PROGRAM_2_HASH)
          {
            return DolbyEProgramSelection::PROGRAM_2;
          }
          else if (hashCode == PROGRAM_3_HASH)
          {
            return DolbyEProgramSelection::PROGRAM_3;
          }
          else if (hashCode == PROGRAM_4_HASH)
          {
            return DolbyEProgramSelection::PROGRAM_4;
          }
          else if (hashCode == PROGRAM_5_HASH)
          {
            return DolbyEProgramSelection::PROGRAM_5;
          }
          else if (hashCode == PROGRAM_6_HASH)
          {
            return DolbyEProgramSelection::PROGRAM_6;
          }
          else if (hashCode == PROGRAM_7_HASH)
          {
            return DolbyEProgramSelection::PROGRAM_7;
          }
          else if (hashCode == PROGRAM_8_HASH)
          {
            return DolbyEProgramSelection::PROGRAM_8;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DolbyEProgramSelection>(hashCode);
          }

          return DolbyEProgramSelection::NOT_SET;
        }

        Aws::String GetNameForDolbyEProgramSelection(DolbyEProgramSelection enumValue)
        {
          switch(enumValue)
          {
          case DolbyEProgramSelection::NOT_SET:
            return {};
          case DolbyEProgramSelection::ALL_CHANNELS:
            return "ALL_CHANNELS";
          case DolbyEProgramSelection::PROGRAM_1:
            return "PROGRAM_1";
          case DolbyEProgramSelection::PROGRAM_2:
            return "PROGRAM_2";
          case DolbyEProgramSelection::PROGRAM_3:
            return "PROGRAM_3";
          case DolbyEProgramSelection::PROGRAM_4:
            return "PROGRAM_4";
          case DolbyEProgramSelection::PROGRAM_5:
            return "PROGRAM_5";
          case DolbyEProgramSelection::PROGRAM_6:
            return "PROGRAM_6";
          case DolbyEProgramSelection::PROGRAM_7:
            return "PROGRAM_7";
          case DolbyEProgramSelection::PROGRAM_8:
            return "PROGRAM_8";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DolbyEProgramSelectionMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
