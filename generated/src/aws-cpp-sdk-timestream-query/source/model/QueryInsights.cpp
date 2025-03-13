/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/QueryInsights.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

QueryInsights::QueryInsights(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryInsights& QueryInsights::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = QueryInsightsModeMapper::GetQueryInsightsModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryInsights::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", QueryInsightsModeMapper::GetNameForQueryInsightsMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
