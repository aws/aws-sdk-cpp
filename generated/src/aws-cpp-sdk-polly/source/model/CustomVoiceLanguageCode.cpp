/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/polly/model/CustomVoiceLanguageCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {
namespace CustomVoiceLanguageCodeMapper {

static const int de_DE_HASH = HashingUtils::HashString("de-DE");
static const int en_US_HASH = HashingUtils::HashString("en-US");
static const int es_US_HASH = HashingUtils::HashString("es-US");
static const int fr_FR_HASH = HashingUtils::HashString("fr-FR");
static const int hi_IN_HASH = HashingUtils::HashString("hi-IN");
static const int it_IT_HASH = HashingUtils::HashString("it-IT");
static const int pt_BR_HASH = HashingUtils::HashString("pt-BR");

CustomVoiceLanguageCode GetCustomVoiceLanguageCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == de_DE_HASH) {
    return CustomVoiceLanguageCode::de_DE;
  } else if (hashCode == en_US_HASH) {
    return CustomVoiceLanguageCode::en_US;
  } else if (hashCode == es_US_HASH) {
    return CustomVoiceLanguageCode::es_US;
  } else if (hashCode == fr_FR_HASH) {
    return CustomVoiceLanguageCode::fr_FR;
  } else if (hashCode == hi_IN_HASH) {
    return CustomVoiceLanguageCode::hi_IN;
  } else if (hashCode == it_IT_HASH) {
    return CustomVoiceLanguageCode::it_IT;
  } else if (hashCode == pt_BR_HASH) {
    return CustomVoiceLanguageCode::pt_BR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CustomVoiceLanguageCode>(hashCode);
  }

  return CustomVoiceLanguageCode::NOT_SET;
}

Aws::String GetNameForCustomVoiceLanguageCode(CustomVoiceLanguageCode enumValue) {
  switch (enumValue) {
    case CustomVoiceLanguageCode::NOT_SET:
      return {};
    case CustomVoiceLanguageCode::de_DE:
      return "de-DE";
    case CustomVoiceLanguageCode::en_US:
      return "en-US";
    case CustomVoiceLanguageCode::es_US:
      return "es-US";
    case CustomVoiceLanguageCode::fr_FR:
      return "fr-FR";
    case CustomVoiceLanguageCode::hi_IN:
      return "hi-IN";
    case CustomVoiceLanguageCode::it_IT:
      return "it-IT";
    case CustomVoiceLanguageCode::pt_BR:
      return "pt-BR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CustomVoiceLanguageCodeMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
