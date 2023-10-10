/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte27OcrLanguage.h>
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
      namespace Scte27OcrLanguageMapper
      {

        static const int DEU_HASH = HashingUtils::HashString("DEU");
        static const int ENG_HASH = HashingUtils::HashString("ENG");
        static const int FRA_HASH = HashingUtils::HashString("FRA");
        static const int NLD_HASH = HashingUtils::HashString("NLD");
        static const int POR_HASH = HashingUtils::HashString("POR");
        static const int SPA_HASH = HashingUtils::HashString("SPA");


        Scte27OcrLanguage GetScte27OcrLanguageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEU_HASH)
          {
            return Scte27OcrLanguage::DEU;
          }
          else if (hashCode == ENG_HASH)
          {
            return Scte27OcrLanguage::ENG;
          }
          else if (hashCode == FRA_HASH)
          {
            return Scte27OcrLanguage::FRA;
          }
          else if (hashCode == NLD_HASH)
          {
            return Scte27OcrLanguage::NLD;
          }
          else if (hashCode == POR_HASH)
          {
            return Scte27OcrLanguage::POR;
          }
          else if (hashCode == SPA_HASH)
          {
            return Scte27OcrLanguage::SPA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scte27OcrLanguage>(hashCode);
          }

          return Scte27OcrLanguage::NOT_SET;
        }

        Aws::String GetNameForScte27OcrLanguage(Scte27OcrLanguage enumValue)
        {
          switch(enumValue)
          {
          case Scte27OcrLanguage::NOT_SET:
            return {};
          case Scte27OcrLanguage::DEU:
            return "DEU";
          case Scte27OcrLanguage::ENG:
            return "ENG";
          case Scte27OcrLanguage::FRA:
            return "FRA";
          case Scte27OcrLanguage::NLD:
            return "NLD";
          case Scte27OcrLanguage::POR:
            return "POR";
          case Scte27OcrLanguage::SPA:
            return "SPA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Scte27OcrLanguageMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
