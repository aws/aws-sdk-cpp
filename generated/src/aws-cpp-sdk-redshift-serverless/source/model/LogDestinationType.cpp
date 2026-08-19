/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/redshift-serverless/model/LogDestinationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace RedshiftServerless {
namespace Model {
namespace LogDestinationTypeMapper {

static const int s3table_HASH = HashingUtils::HashString("s3table");
static const int cloudwatch_HASH = HashingUtils::HashString("cloudwatch");

LogDestinationType GetLogDestinationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == s3table_HASH) {
    return LogDestinationType::s3table;
  } else if (hashCode == cloudwatch_HASH) {
    return LogDestinationType::cloudwatch;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LogDestinationType>(hashCode);
  }

  return LogDestinationType::NOT_SET;
}

Aws::String GetNameForLogDestinationType(LogDestinationType enumValue) {
  switch (enumValue) {
    case LogDestinationType::NOT_SET:
      return {};
    case LogDestinationType::s3table:
      return "s3table";
    case LogDestinationType::cloudwatch:
      return "cloudwatch";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LogDestinationTypeMapper
}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
