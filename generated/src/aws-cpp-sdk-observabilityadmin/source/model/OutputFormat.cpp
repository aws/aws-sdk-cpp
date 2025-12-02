/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/OutputFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace OutputFormatMapper {

static const int plain_HASH = HashingUtils::HashString("plain");
static const int json_HASH = HashingUtils::HashString("json");

OutputFormat GetOutputFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == plain_HASH) {
    return OutputFormat::plain;
  } else if (hashCode == json_HASH) {
    return OutputFormat::json;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OutputFormat>(hashCode);
  }

  return OutputFormat::NOT_SET;
}

Aws::String GetNameForOutputFormat(OutputFormat enumValue) {
  switch (enumValue) {
    case OutputFormat::NOT_SET:
      return {};
    case OutputFormat::plain:
      return "plain";
    case OutputFormat::json:
      return "json";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OutputFormatMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
