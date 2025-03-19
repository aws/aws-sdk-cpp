/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ScheduledQueryInsights.h>
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

ScheduledQueryInsights::ScheduledQueryInsights(JsonView jsonValue)
{
  *this = jsonValue;
}

ScheduledQueryInsights& ScheduledQueryInsights::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = ScheduledQueryInsightsModeMapper::GetScheduledQueryInsightsModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduledQueryInsights::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", ScheduledQueryInsightsModeMapper::GetNameForScheduledQueryInsightsMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
