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

        static const int US_LETTER_HASH = HashingUtils::HashString("US_LETTER");
        static const int US_LEGAL_HASH = HashingUtils::HashString("US_LEGAL");
        static const int US_TABLOID_LEDGER_HASH = HashingUtils::HashString("US_TABLOID_LEDGER");
        static const int A0_HASH = HashingUtils::HashString("A0");
        static const int A1_HASH = HashingUtils::HashString("A1");
        static const int A2_HASH = HashingUtils::HashString("A2");
        static const int A3_HASH = HashingUtils::HashString("A3");
        static const int A4_HASH = HashingUtils::HashString("A4");
        static const int A5_HASH = HashingUtils::HashString("A5");
        static const int JIS_B4_HASH = HashingUtils::HashString("JIS_B4");
        static const int JIS_B5_HASH = HashingUtils::HashString("JIS_B5");


        PaperSize GetPaperSizeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
