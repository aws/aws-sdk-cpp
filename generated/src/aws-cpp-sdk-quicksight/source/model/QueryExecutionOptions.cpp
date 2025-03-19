/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/QueryExecutionOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

QueryExecutionOptions::QueryExecutionOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryExecutionOptions& QueryExecutionOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueryExecutionMode"))
  {
    m_queryExecutionMode = QueryExecutionModeMapper::GetQueryExecutionModeForName(jsonValue.GetString("QueryExecutionMode"));
    m_queryExecutionModeHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryExecutionOptions::Jsonize() const
{
  JsonValue payload;

  if(m_queryExecutionModeHasBeenSet)
  {
   payload.WithString("QueryExecutionMode", QueryExecutionModeMapper::GetNameForQueryExecutionMode(m_queryExecutionMode));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
