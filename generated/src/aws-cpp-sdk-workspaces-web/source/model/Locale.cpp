/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces-web/model/Locale.h>

using namespace Aws::Utils;

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {
namespace LocaleMapper {

static const int de_DE_HASH = HashingUtils::HashString("de-DE");
static const int en_US_HASH = HashingUtils::HashString("en-US");
static const int es_ES_HASH = HashingUtils::HashString("es-ES");
static const int fr_FR_HASH = HashingUtils::HashString("fr-FR");
static const int id_ID_HASH = HashingUtils::HashString("id-ID");
static const int it_IT_HASH = HashingUtils::HashString("it-IT");
static const int ja_JP_HASH = HashingUtils::HashString("ja-JP");
static const int ko_KR_HASH = HashingUtils::HashString("ko-KR");
static const int pt_BR_HASH = HashingUtils::HashString("pt-BR");
static const int zh_CN_HASH = HashingUtils::HashString("zh-CN");
static const int zh_TW_HASH = HashingUtils::HashString("zh-TW");

Locale GetLocaleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == de_DE_HASH) {
    return Locale::de_DE;
  } else if (hashCode == en_US_HASH) {
    return Locale::en_US;
  } else if (hashCode == es_ES_HASH) {
    return Locale::es_ES;
  } else if (hashCode == fr_FR_HASH) {
    return Locale::fr_FR;
  } else if (hashCode == id_ID_HASH) {
    return Locale::id_ID;
  } else if (hashCode == it_IT_HASH) {
    return Locale::it_IT;
  } else if (hashCode == ja_JP_HASH) {
    return Locale::ja_JP;
  } else if (hashCode == ko_KR_HASH) {
    return Locale::ko_KR;
  } else if (hashCode == pt_BR_HASH) {
    return Locale::pt_BR;
  } else if (hashCode == zh_CN_HASH) {
    return Locale::zh_CN;
  } else if (hashCode == zh_TW_HASH) {
    return Locale::zh_TW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Locale>(hashCode);
  }

  return Locale::NOT_SET;
}

Aws::String GetNameForLocale(Locale enumValue) {
  switch (enumValue) {
    case Locale::NOT_SET:
      return {};
    case Locale::de_DE:
      return "de-DE";
    case Locale::en_US:
      return "en-US";
    case Locale::es_ES:
      return "es-ES";
    case Locale::fr_FR:
      return "fr-FR";
    case Locale::id_ID:
      return "id-ID";
    case Locale::it_IT:
      return "it-IT";
    case Locale::ja_JP:
      return "ja-JP";
    case Locale::ko_KR:
      return "ko-KR";
    case Locale::pt_BR:
      return "pt-BR";
    case Locale::zh_CN:
      return "zh-CN";
    case Locale::zh_TW:
      return "zh-TW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LocaleMapper
}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
