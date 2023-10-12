/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PaperSize.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace PaperSizeMapper
      {

        static constexpr uint32_t US_LETTER_HASH = ConstExprHashingUtils::HashString("US_LETTER");
        static constexpr uint32_t US_LEGAL_HASH = ConstExprHashingUtils::HashString("US_LEGAL");
        static constexpr uint32_t US_TABLOID_LEDGER_HASH = ConstExprHashingUtils::HashString("US_TABLOID_LEDGER");
        static constexpr uint32_t A0_HASH = ConstExprHashingUtils::HashString("A0");
        static constexpr uint32_t A1_HASH = ConstExprHashingUtils::HashString("A1");
        static constexpr uint32_t A2_HASH = ConstExprHashingUtils::HashString("A2");
        static constexpr uint32_t A3_HASH = ConstExprHashingUtils::HashString("A3");
        static constexpr uint32_t A4_HASH = ConstExprHashingUtils::HashString("A4");
        static constexpr uint32_t A5_HASH = ConstExprHashingUtils::HashString("A5");
        static constexpr uint32_t JIS_B4_HASH = ConstExprHashingUtils::HashString("JIS_B4");
        static constexpr uint32_t JIS_B5_HASH = ConstExprHashingUtils::HashString("JIS_B5");


        PaperSize GetPaperSizeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == US_LETTER_HASH)
          {
            return PaperSize::US_LETTER;
          }
          else if (hashCode == US_LEGAL_HASH)
          {
            return PaperSize::US_LEGAL;
          }
          else if (hashCode == US_TABLOID_LEDGER_HASH)
          {
            return PaperSize::US_TABLOID_LEDGER;
          }
          else if (hashCode == A0_HASH)
          {
            return PaperSize::A0;
          }
          else if (hashCode == A1_HASH)
          {
            return PaperSize::A1;
          }
          else if (hashCode == A2_HASH)
          {
            return PaperSize::A2;
          }
          else if (hashCode == A3_HASH)
          {
            return PaperSize::A3;
          }
          else if (hashCode == A4_HASH)
          {
            return PaperSize::A4;
          }
          else if (hashCode == A5_HASH)
          {
            return PaperSize::A5;
          }
          else if (hashCode == JIS_B4_HASH)
          {
            return PaperSize::JIS_B4;
          }
          else if (hashCode == JIS_B5_HASH)
          {
            return PaperSize::JIS_B5;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PaperSize>(hashCode);
          }

          return PaperSize::NOT_SET;
        }

        Aws::String GetNameForPaperSize(PaperSize enumValue)
        {
          switch(enumValue)
          {
          case PaperSize::NOT_SET:
            return {};
          case PaperSize::US_LETTER:
            return "US_LETTER";
          case PaperSize::US_LEGAL:
            return "US_LEGAL";
          case PaperSize::US_TABLOID_LEDGER:
            return "US_TABLOID_LEDGER";
          case PaperSize::A0:
            return "A0";
          case PaperSize::A1:
            return "A1";
          case PaperSize::A2:
            return "A2";
          case PaperSize::A3:
            return "A3";
          case PaperSize::A4:
            return "A4";
          case PaperSize::A5:
            return "A5";
          case PaperSize::JIS_B4:
            return "JIS_B4";
          case PaperSize::JIS_B5:
            return "JIS_B5";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PaperSizeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
