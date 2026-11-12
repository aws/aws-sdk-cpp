/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/monitoring/model/QueryType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatch {
namespace Model {
namespace QueryTypeMapper {

static const int PROMQL_HASH = HashingUtils::HashString("PROMQL");
static const int SQL_HASH = HashingUtils::HashString("SQL");
static const int METRIC_MATH_HASH = HashingUtils::HashString("METRIC_MATH");

QueryType GetQueryTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROMQL_HASH) {
    return QueryType::PROMQL;
  } else if (hashCode == SQL_HASH) {
    return QueryType::SQL;
  } else if (hashCode == METRIC_MATH_HASH) {
    return QueryType::METRIC_MATH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QueryType>(hashCode);
  }

  return QueryType::NOT_SET;
}

Aws::String GetNameForQueryType(QueryType enumValue) {
  switch (enumValue) {
    case QueryType::NOT_SET:
      return {};
    case QueryType::PROMQL:
      return "PROMQL";
    case QueryType::SQL:
      return "SQL";
    case QueryType::METRIC_MATH:
      return "METRIC_MATH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QueryTypeMapper
}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
