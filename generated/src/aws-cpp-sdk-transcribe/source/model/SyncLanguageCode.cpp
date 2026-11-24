/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/transcribe/model/SyncLanguageCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {
namespace SyncLanguageCodeMapper {

static const int en_US_HASH = HashingUtils::HashString("en-US");
static const int en_AB_HASH = HashingUtils::HashString("en-AB");
static const int en_AU_HASH = HashingUtils::HashString("en-AU");
static const int en_GB_HASH = HashingUtils::HashString("en-GB");
static const int en_IE_HASH = HashingUtils::HashString("en-IE");
static const int en_IN_HASH = HashingUtils::HashString("en-IN");
static const int en_WL_HASH = HashingUtils::HashString("en-WL");
static const int en_ZA_HASH = HashingUtils::HashString("en-ZA");
static const int en_NZ_HASH = HashingUtils::HashString("en-NZ");
static const int es_US_HASH = HashingUtils::HashString("es-US");
static const int es_ES_HASH = HashingUtils::HashString("es-ES");
static const int es_MX_HASH = HashingUtils::HashString("es-MX");
static const int fr_FR_HASH = HashingUtils::HashString("fr-FR");
static const int fr_CA_HASH = HashingUtils::HashString("fr-CA");
static const int it_IT_HASH = HashingUtils::HashString("it-IT");
static const int de_DE_HASH = HashingUtils::HashString("de-DE");
static const int de_CH_HASH = HashingUtils::HashString("de-CH");
static const int ja_JP_HASH = HashingUtils::HashString("ja-JP");
static const int pt_BR_HASH = HashingUtils::HashString("pt-BR");
static const int pt_PT_HASH = HashingUtils::HashString("pt-PT");
static const int zh_CN_HASH = HashingUtils::HashString("zh-CN");
static const int zh_TW_HASH = HashingUtils::HashString("zh-TW");
static const int zh_HK_HASH = HashingUtils::HashString("zh-HK");
static const int ko_KR_HASH = HashingUtils::HashString("ko-KR");

SyncLanguageCode GetSyncLanguageCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == en_US_HASH) {
    return SyncLanguageCode::en_US;
  } else if (hashCode == en_AB_HASH) {
    return SyncLanguageCode::en_AB;
  } else if (hashCode == en_AU_HASH) {
    return SyncLanguageCode::en_AU;
  } else if (hashCode == en_GB_HASH) {
    return SyncLanguageCode::en_GB;
  } else if (hashCode == en_IE_HASH) {
    return SyncLanguageCode::en_IE;
  } else if (hashCode == en_IN_HASH) {
    return SyncLanguageCode::en_IN;
  } else if (hashCode == en_WL_HASH) {
    return SyncLanguageCode::en_WL;
  } else if (hashCode == en_ZA_HASH) {
    return SyncLanguageCode::en_ZA;
  } else if (hashCode == en_NZ_HASH) {
    return SyncLanguageCode::en_NZ;
  } else if (hashCode == es_US_HASH) {
    return SyncLanguageCode::es_US;
  } else if (hashCode == es_ES_HASH) {
    return SyncLanguageCode::es_ES;
  } else if (hashCode == es_MX_HASH) {
    return SyncLanguageCode::es_MX;
  } else if (hashCode == fr_FR_HASH) {
    return SyncLanguageCode::fr_FR;
  } else if (hashCode == fr_CA_HASH) {
    return SyncLanguageCode::fr_CA;
  } else if (hashCode == it_IT_HASH) {
    return SyncLanguageCode::it_IT;
  } else if (hashCode == de_DE_HASH) {
    return SyncLanguageCode::de_DE;
  } else if (hashCode == de_CH_HASH) {
    return SyncLanguageCode::de_CH;
  } else if (hashCode == ja_JP_HASH) {
    return SyncLanguageCode::ja_JP;
  } else if (hashCode == pt_BR_HASH) {
    return SyncLanguageCode::pt_BR;
  } else if (hashCode == pt_PT_HASH) {
    return SyncLanguageCode::pt_PT;
  } else if (hashCode == zh_CN_HASH) {
    return SyncLanguageCode::zh_CN;
  } else if (hashCode == zh_TW_HASH) {
    return SyncLanguageCode::zh_TW;
  } else if (hashCode == zh_HK_HASH) {
    return SyncLanguageCode::zh_HK;
  } else if (hashCode == ko_KR_HASH) {
    return SyncLanguageCode::ko_KR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SyncLanguageCode>(hashCode);
  }

  return SyncLanguageCode::NOT_SET;
}

Aws::String GetNameForSyncLanguageCode(SyncLanguageCode enumValue) {
  switch (enumValue) {
    case SyncLanguageCode::NOT_SET:
      return {};
    case SyncLanguageCode::en_US:
      return "en-US";
    case SyncLanguageCode::en_AB:
      return "en-AB";
    case SyncLanguageCode::en_AU:
      return "en-AU";
    case SyncLanguageCode::en_GB:
      return "en-GB";
    case SyncLanguageCode::en_IE:
      return "en-IE";
    case SyncLanguageCode::en_IN:
      return "en-IN";
    case SyncLanguageCode::en_WL:
      return "en-WL";
    case SyncLanguageCode::en_ZA:
      return "en-ZA";
    case SyncLanguageCode::en_NZ:
      return "en-NZ";
    case SyncLanguageCode::es_US:
      return "es-US";
    case SyncLanguageCode::es_ES:
      return "es-ES";
    case SyncLanguageCode::es_MX:
      return "es-MX";
    case SyncLanguageCode::fr_FR:
      return "fr-FR";
    case SyncLanguageCode::fr_CA:
      return "fr-CA";
    case SyncLanguageCode::it_IT:
      return "it-IT";
    case SyncLanguageCode::de_DE:
      return "de-DE";
    case SyncLanguageCode::de_CH:
      return "de-CH";
    case SyncLanguageCode::ja_JP:
      return "ja-JP";
    case SyncLanguageCode::pt_BR:
      return "pt-BR";
    case SyncLanguageCode::pt_PT:
      return "pt-PT";
    case SyncLanguageCode::zh_CN:
      return "zh-CN";
    case SyncLanguageCode::zh_TW:
      return "zh-TW";
    case SyncLanguageCode::zh_HK:
      return "zh-HK";
    case SyncLanguageCode::ko_KR:
      return "ko-KR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SyncLanguageCodeMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
