/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/RecordFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace RecordFormatMapper {

static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int JSON_HASH = HashingUtils::HashString("JSON");

RecordFormat GetRecordFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRING_HASH) {
    return RecordFormat::STRING;
  } else if (hashCode == JSON_HASH) {
    return RecordFormat::JSON;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecordFormat>(hashCode);
  }

  return RecordFormat::NOT_SET;
}

Aws::String GetNameForRecordFormat(RecordFormat enumValue) {
  switch (enumValue) {
    case RecordFormat::NOT_SET:
      return {};
    case RecordFormat::STRING:
      return "STRING";
    case RecordFormat::JSON:
      return "JSON";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecordFormatMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
