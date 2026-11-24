/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/textract/model/OutputTextFormatType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Textract {
namespace Model {
namespace OutputTextFormatTypeMapper {

static const int PLAIN_TEXT_HASH = HashingUtils::HashString("PLAIN_TEXT");
static const int MARKDOWN_HASH = HashingUtils::HashString("MARKDOWN");
static const int HTML_HASH = HashingUtils::HashString("HTML");
static const int CSV_HASH = HashingUtils::HashString("CSV");

OutputTextFormatType GetOutputTextFormatTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PLAIN_TEXT_HASH) {
    return OutputTextFormatType::PLAIN_TEXT;
  } else if (hashCode == MARKDOWN_HASH) {
    return OutputTextFormatType::MARKDOWN;
  } else if (hashCode == HTML_HASH) {
    return OutputTextFormatType::HTML;
  } else if (hashCode == CSV_HASH) {
    return OutputTextFormatType::CSV;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OutputTextFormatType>(hashCode);
  }

  return OutputTextFormatType::NOT_SET;
}

Aws::String GetNameForOutputTextFormatType(OutputTextFormatType enumValue) {
  switch (enumValue) {
    case OutputTextFormatType::NOT_SET:
      return {};
    case OutputTextFormatType::PLAIN_TEXT:
      return "PLAIN_TEXT";
    case OutputTextFormatType::MARKDOWN:
      return "MARKDOWN";
    case OutputTextFormatType::HTML:
      return "HTML";
    case OutputTextFormatType::CSV:
      return "CSV";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OutputTextFormatTypeMapper
}  // namespace Model
}  // namespace Textract
}  // namespace Aws
