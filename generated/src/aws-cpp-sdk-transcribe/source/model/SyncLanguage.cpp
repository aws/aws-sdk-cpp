/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/transcribe/model/SyncLanguage.h>

using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {
namespace SyncLanguageMapper {

static const int en_HASH = HashingUtils::HashString("en");
static const int es_HASH = HashingUtils::HashString("es");
static const int fr_HASH = HashingUtils::HashString("fr");
static const int it_HASH = HashingUtils::HashString("it");
static const int de_HASH = HashingUtils::HashString("de");
static const int ja_HASH = HashingUtils::HashString("ja");
static const int pt_HASH = HashingUtils::HashString("pt");
static const int ko_HASH = HashingUtils::HashString("ko");
static const int zh_CN_HASH = HashingUtils::HashString("zh-CN");
static const int zh_TW_HASH = HashingUtils::HashString("zh-TW");
static const int zh_HK_HASH = HashingUtils::HashString("zh-HK");

SyncLanguage GetSyncLanguageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == en_HASH) {
    return SyncLanguage::en;
  } else if (hashCode == es_HASH) {
    return SyncLanguage::es;
  } else if (hashCode == fr_HASH) {
    return SyncLanguage::fr;
  } else if (hashCode == it_HASH) {
    return SyncLanguage::it;
  } else if (hashCode == de_HASH) {
    return SyncLanguage::de;
  } else if (hashCode == ja_HASH) {
    return SyncLanguage::ja;
  } else if (hashCode == pt_HASH) {
    return SyncLanguage::pt;
  } else if (hashCode == ko_HASH) {
    return SyncLanguage::ko;
  } else if (hashCode == zh_CN_HASH) {
    return SyncLanguage::zh_CN;
  } else if (hashCode == zh_TW_HASH) {
    return SyncLanguage::zh_TW;
  } else if (hashCode == zh_HK_HASH) {
    return SyncLanguage::zh_HK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SyncLanguage>(hashCode);
  }

  return SyncLanguage::NOT_SET;
}

Aws::String GetNameForSyncLanguage(SyncLanguage enumValue) {
  switch (enumValue) {
    case SyncLanguage::NOT_SET:
      return {};
    case SyncLanguage::en:
      return "en";
    case SyncLanguage::es:
      return "es";
    case SyncLanguage::fr:
      return "fr";
    case SyncLanguage::it:
      return "it";
    case SyncLanguage::de:
      return "de";
    case SyncLanguage::ja:
      return "ja";
    case SyncLanguage::pt:
      return "pt";
    case SyncLanguage::ko:
      return "ko";
    case SyncLanguage::zh_CN:
      return "zh-CN";
    case SyncLanguage::zh_TW:
      return "zh-TW";
    case SyncLanguage::zh_HK:
      return "zh-HK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SyncLanguageMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
