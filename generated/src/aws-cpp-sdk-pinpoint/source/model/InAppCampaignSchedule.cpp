/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/InAppCampaignSchedule.h>
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

InAppCampaignSchedule::InAppCampaignSchedule(JsonView jsonValue)
{
  *this = jsonValue;
}

InAppCampaignSchedule& InAppCampaignSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndDate"))
  {
    m_endDate = jsonValue.GetString("EndDate");
    m_endDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventFilter"))
  {
    m_eventFilter = jsonValue.GetObject("EventFilter");
    m_eventFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QuietTime"))
  {
    m_quietTime = jsonValue.GetObject("QuietTime");
    m_quietTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue InAppCampaignSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_endDateHasBeenSet)
  {
   payload.WithString("EndDate", m_endDate);

  }

  if(m_eventFilterHasBeenSet)
  {
   payload.WithObject("EventFilter", m_eventFilter.Jsonize());

  }

  if(m_quietTimeHasBeenSet)
  {
   payload.WithObject("QuietTime", m_quietTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
