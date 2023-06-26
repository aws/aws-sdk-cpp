/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/WindowStartTime.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

WindowStartTime::WindowStartTime() : 
    m_hours(0),
    m_hoursHasBeenSet(false),
    m_minutes(0),
    m_minutesHasBeenSet(false)
{
}

WindowStartTime::WindowStartTime(JsonView jsonValue) : 
    m_hours(0),
    m_hoursHasBeenSet(false),
    m_minutes(0),
    m_minutesHasBeenSet(false)
{
  *this = jsonValue;
}

WindowStartTime& WindowStartTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Hours"))
  {
    m_hours = jsonValue.GetInt64("Hours");

    m_hoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Minutes"))
  {
    m_minutes = jsonValue.GetInt64("Minutes");

    m_minutesHasBeenSet = true;
  }

  return *this;
}

JsonValue WindowStartTime::Jsonize() const
{
  JsonValue payload;

  if(m_hoursHasBeenSet)
  {
   payload.WithInt64("Hours", m_hours);

  }

  if(m_minutesHasBeenSet)
  {
   payload.WithInt64("Minutes", m_minutes);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
