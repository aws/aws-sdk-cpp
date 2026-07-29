/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/PreParseTextTransformationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace PreParseTextTransformationTypeMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int URL_DECODE_HASH = HashingUtils::HashString("URL_DECODE");
static const int URL_DECODE_UNI_HASH = HashingUtils::HashString("URL_DECODE_UNI");
static const int COMBINE_DUPLICATE_QUERY_ARGS_BY_COMMA_HASH = HashingUtils::HashString("COMBINE_DUPLICATE_QUERY_ARGS_BY_COMMA");
static const int REPLACE_SEMICOLONS_WITH_AMPERSANDS_HASH = HashingUtils::HashString("REPLACE_SEMICOLONS_WITH_AMPERSANDS");

PreParseTextTransformationType GetPreParseTextTransformationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return PreParseTextTransformationType::NONE;
  } else if (hashCode == URL_DECODE_HASH) {
    return PreParseTextTransformationType::URL_DECODE;
  } else if (hashCode == URL_DECODE_UNI_HASH) {
    return PreParseTextTransformationType::URL_DECODE_UNI;
  } else if (hashCode == COMBINE_DUPLICATE_QUERY_ARGS_BY_COMMA_HASH) {
    return PreParseTextTransformationType::COMBINE_DUPLICATE_QUERY_ARGS_BY_COMMA;
  } else if (hashCode == REPLACE_SEMICOLONS_WITH_AMPERSANDS_HASH) {
    return PreParseTextTransformationType::REPLACE_SEMICOLONS_WITH_AMPERSANDS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PreParseTextTransformationType>(hashCode);
  }

  return PreParseTextTransformationType::NOT_SET;
}

Aws::String GetNameForPreParseTextTransformationType(PreParseTextTransformationType enumValue) {
  switch (enumValue) {
    case PreParseTextTransformationType::NOT_SET:
      return {};
    case PreParseTextTransformationType::NONE:
      return "NONE";
    case PreParseTextTransformationType::URL_DECODE:
      return "URL_DECODE";
    case PreParseTextTransformationType::URL_DECODE_UNI:
      return "URL_DECODE_UNI";
    case PreParseTextTransformationType::COMBINE_DUPLICATE_QUERY_ARGS_BY_COMMA:
      return "COMBINE_DUPLICATE_QUERY_ARGS_BY_COMMA";
    case PreParseTextTransformationType::REPLACE_SEMICOLONS_WITH_AMPERSANDS:
      return "REPLACE_SEMICOLONS_WITH_AMPERSANDS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PreParseTextTransformationTypeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
