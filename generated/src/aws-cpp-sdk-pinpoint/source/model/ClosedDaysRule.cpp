/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ClosedDaysRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

ClosedDaysRule::ClosedDaysRule() : 
    m_nameHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
}

ClosedDaysRule::ClosedDaysRule(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ClosedDaysRule& ClosedDaysRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartDateTime"))
  {
    m_startDateTime = jsonValue.GetString("StartDateTime");

    m_startDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDateTime"))
  {
    m_endDateTime = jsonValue.GetString("EndDateTime");

    m_endDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ClosedDaysRule::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithString("StartDateTime", m_startDateTime);

  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithString("EndDateTime", m_endDateTime);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
