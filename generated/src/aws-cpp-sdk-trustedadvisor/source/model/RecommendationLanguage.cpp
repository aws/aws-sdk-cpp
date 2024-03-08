/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/RecommendationLanguage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TrustedAdvisor
  {
    namespace Model
    {
      namespace RecommendationLanguageMapper
      {

        static const int en_HASH = HashingUtils::HashString("en");
        static const int ja_HASH = HashingUtils::HashString("ja");
        static const int zh_HASH = HashingUtils::HashString("zh");
        static const int fr_HASH = HashingUtils::HashString("fr");
        static const int de_HASH = HashingUtils::HashString("de");
        static const int ko_HASH = HashingUtils::HashString("ko");
        static const int zh_TW_HASH = HashingUtils::HashString("zh_TW");
        static const int it_HASH = HashingUtils::HashString("it");
        static const int es_HASH = HashingUtils::HashString("es");
        static const int pt_BR_HASH = HashingUtils::HashString("pt_BR");
        static const int id_HASH = HashingUtils::HashString("id");


        RecommendationLanguage GetRecommendationLanguageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_HASH)
          {
            return RecommendationLanguage::en;
          }
          else if (hashCode == ja_HASH)
          {
            return RecommendationLanguage::ja;
          }
          else if (hashCode == zh_HASH)
          {
            return RecommendationLanguage::zh;
          }
          else if (hashCode == fr_HASH)
          {
            return RecommendationLanguage::fr;
          }
          else if (hashCode == de_HASH)
          {
            return RecommendationLanguage::de;
          }
          else if (hashCode == ko_HASH)
          {
            return RecommendationLanguage::ko;
          }
          else if (hashCode == zh_TW_HASH)
          {
            return RecommendationLanguage::zh_TW;
          }
          else if (hashCode == it_HASH)
          {
            return RecommendationLanguage::it;
          }
          else if (hashCode == es_HASH)
          {
            return RecommendationLanguage::es;
          }
          else if (hashCode == pt_BR_HASH)
          {
            return RecommendationLanguage::pt_BR;
          }
          else if (hashCode == id_HASH)
          {
            return RecommendationLanguage::id;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationLanguage>(hashCode);
          }

          return RecommendationLanguage::NOT_SET;
        }

        Aws::String GetNameForRecommendationLanguage(RecommendationLanguage enumValue)
        {
          switch(enumValue)
          {
          case RecommendationLanguage::NOT_SET:
            return {};
          case RecommendationLanguage::en:
            return "en";
          case RecommendationLanguage::ja:
            return "ja";
          case RecommendationLanguage::zh:
            return "zh";
          case RecommendationLanguage::fr:
            return "fr";
          case RecommendationLanguage::de:
            return "de";
          case RecommendationLanguage::ko:
            return "ko";
          case RecommendationLanguage::zh_TW:
            return "zh_TW";
          case RecommendationLanguage::it:
            return "it";
          case RecommendationLanguage::es:
            return "es";
          case RecommendationLanguage::pt_BR:
            return "pt_BR";
          case RecommendationLanguage::id:
            return "id";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationLanguageMapper
    } // namespace Model
  } // namespace TrustedAdvisor
} // namespace Aws
