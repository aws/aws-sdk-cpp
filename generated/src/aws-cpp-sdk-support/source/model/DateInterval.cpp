/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DateInterval.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

DateInterval::DateInterval() : 
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
}

DateInterval::DateInterval(JsonView jsonValue) : 
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DateInterval& DateInterval::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startDateTime"))
  {
    m_startDateTime = jsonValue.GetString("startDateTime");

    m_startDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endDateTime"))
  {
    m_endDateTime = jsonValue.GetString("endDateTime");

    m_endDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DateInterval::Jsonize() const
{
  JsonValue payload;

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithString("startDateTime", m_startDateTime);

  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithString("endDateTime", m_endDateTime);

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws
