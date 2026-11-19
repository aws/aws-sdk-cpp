/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/AssetLanguage.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace AssetLanguageMapper {

static const int en_HASH = HashingUtils::HashString("en");
static const int es_HASH = HashingUtils::HashString("es");
static const int es_419_HASH = HashingUtils::HashString("es-419");
static const int fr_HASH = HashingUtils::HashString("fr");
static const int de_HASH = HashingUtils::HashString("de");
static const int it_HASH = HashingUtils::HashString("it");
static const int pt_BR_HASH = HashingUtils::HashString("pt-BR");
static const int id_HASH = HashingUtils::HashString("id");
static const int tr_HASH = HashingUtils::HashString("tr");
static const int ja_HASH = HashingUtils::HashString("ja");
static const int ko_HASH = HashingUtils::HashString("ko");
static const int zh_Hans_HASH = HashingUtils::HashString("zh-Hans");
static const int zh_Hant_HASH = HashingUtils::HashString("zh-Hant");
static const int ar_HASH = HashingUtils::HashString("ar");

AssetLanguage GetAssetLanguageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == en_HASH) {
    return AssetLanguage::en;
  } else if (hashCode == es_HASH) {
    return AssetLanguage::es;
  } else if (hashCode == es_419_HASH) {
    return AssetLanguage::es_419;
  } else if (hashCode == fr_HASH) {
    return AssetLanguage::fr;
  } else if (hashCode == de_HASH) {
    return AssetLanguage::de;
  } else if (hashCode == it_HASH) {
    return AssetLanguage::it;
  } else if (hashCode == pt_BR_HASH) {
    return AssetLanguage::pt_BR;
  } else if (hashCode == id_HASH) {
    return AssetLanguage::id;
  } else if (hashCode == tr_HASH) {
    return AssetLanguage::tr;
  } else if (hashCode == ja_HASH) {
    return AssetLanguage::ja;
  } else if (hashCode == ko_HASH) {
    return AssetLanguage::ko;
  } else if (hashCode == zh_Hans_HASH) {
    return AssetLanguage::zh_Hans;
  } else if (hashCode == zh_Hant_HASH) {
    return AssetLanguage::zh_Hant;
  } else if (hashCode == ar_HASH) {
    return AssetLanguage::ar;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssetLanguage>(hashCode);
  }

  return AssetLanguage::NOT_SET;
}

Aws::String GetNameForAssetLanguage(AssetLanguage enumValue) {
  switch (enumValue) {
    case AssetLanguage::NOT_SET:
      return {};
    case AssetLanguage::en:
      return "en";
    case AssetLanguage::es:
      return "es";
    case AssetLanguage::es_419:
      return "es-419";
    case AssetLanguage::fr:
      return "fr";
    case AssetLanguage::de:
      return "de";
    case AssetLanguage::it:
      return "it";
    case AssetLanguage::pt_BR:
      return "pt-BR";
    case AssetLanguage::id:
      return "id";
    case AssetLanguage::tr:
      return "tr";
    case AssetLanguage::ja:
      return "ja";
    case AssetLanguage::ko:
      return "ko";
    case AssetLanguage::zh_Hans:
      return "zh-Hans";
    case AssetLanguage::zh_Hant:
      return "zh-Hant";
    case AssetLanguage::ar:
      return "ar";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssetLanguageMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
