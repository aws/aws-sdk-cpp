/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DvbSubOcrLanguage.h>
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
      namespace DvbSubOcrLanguageMapper
      {

        static const int DEU_HASH = HashingUtils::HashString("DEU");
        static const int ENG_HASH = HashingUtils::HashString("ENG");
        static const int FRA_HASH = HashingUtils::HashString("FRA");
        static const int NLD_HASH = HashingUtils::HashString("NLD");
        static const int POR_HASH = HashingUtils::HashString("POR");
        static const int SPA_HASH = HashingUtils::HashString("SPA");


        DvbSubOcrLanguage GetDvbSubOcrLanguageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEU_HASH)
          {
            return DvbSubOcrLanguage::DEU;
          }
          else if (hashCode == ENG_HASH)
          {
            return DvbSubOcrLanguage::ENG;
          }
          else if (hashCode == FRA_HASH)
          {
            return DvbSubOcrLanguage::FRA;
          }
          else if (hashCode == NLD_HASH)
          {
            return DvbSubOcrLanguage::NLD;
          }
          else if (hashCode == POR_HASH)
          {
            return DvbSubOcrLanguage::POR;
          }
          else if (hashCode == SPA_HASH)
          {
            return DvbSubOcrLanguage::SPA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubOcrLanguage>(hashCode);
          }

          return DvbSubOcrLanguage::NOT_SET;
        }

        Aws::String GetNameForDvbSubOcrLanguage(DvbSubOcrLanguage enumValue)
        {
          switch(enumValue)
          {
          case DvbSubOcrLanguage::NOT_SET:
            return {};
          case DvbSubOcrLanguage::DEU:
            return "DEU";
          case DvbSubOcrLanguage::ENG:
            return "ENG";
          case DvbSubOcrLanguage::FRA:
            return "FRA";
          case DvbSubOcrLanguage::NLD:
            return "NLD";
          case DvbSubOcrLanguage::POR:
            return "POR";
          case DvbSubOcrLanguage::SPA:
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

      } // namespace DvbSubOcrLanguageMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
