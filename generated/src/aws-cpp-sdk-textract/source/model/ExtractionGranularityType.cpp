/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/textract/model/ExtractionGranularityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Textract {
namespace Model {
namespace ExtractionGranularityTypeMapper {

static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");
static const int PAGE_HASH = HashingUtils::HashString("PAGE");
static const int ELEMENT_HASH = HashingUtils::HashString("ELEMENT");
static const int WORD_HASH = HashingUtils::HashString("WORD");
static const int LINE_HASH = HashingUtils::HashString("LINE");

ExtractionGranularityType GetExtractionGranularityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DOCUMENT_HASH) {
    return ExtractionGranularityType::DOCUMENT;
  } else if (hashCode == PAGE_HASH) {
    return ExtractionGranularityType::PAGE;
  } else if (hashCode == ELEMENT_HASH) {
    return ExtractionGranularityType::ELEMENT;
  } else if (hashCode == WORD_HASH) {
    return ExtractionGranularityType::WORD;
  } else if (hashCode == LINE_HASH) {
    return ExtractionGranularityType::LINE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExtractionGranularityType>(hashCode);
  }

  return ExtractionGranularityType::NOT_SET;
}

Aws::String GetNameForExtractionGranularityType(ExtractionGranularityType enumValue) {
  switch (enumValue) {
    case ExtractionGranularityType::NOT_SET:
      return {};
    case ExtractionGranularityType::DOCUMENT:
      return "DOCUMENT";
    case ExtractionGranularityType::PAGE:
      return "PAGE";
    case ExtractionGranularityType::ELEMENT:
      return "ELEMENT";
    case ExtractionGranularityType::WORD:
      return "WORD";
    case ExtractionGranularityType::LINE:
      return "LINE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExtractionGranularityTypeMapper
}  // namespace Model
}  // namespace Textract
}  // namespace Aws
