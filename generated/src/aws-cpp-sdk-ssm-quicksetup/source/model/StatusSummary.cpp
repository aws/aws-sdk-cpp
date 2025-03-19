/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/StatusSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMQuickSetup
{
namespace Model
{

StatusSummary::StatusSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

StatusSummary& StatusSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusDetails"))
  {
    Aws::Map<Aws::String, JsonView> statusDetailsJsonMap = jsonValue.GetObject("StatusDetails").GetAllObjects();
    for(auto& statusDetailsItem : statusDetailsJsonMap)
    {
      m_statusDetails[statusDetailsItem.first] = statusDetailsItem.second.AsString();
    }
    m_statusDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusType"))
  {
    m_statusType = StatusTypeMapper::GetStatusTypeForName(jsonValue.GetString("StatusType"));
    m_statusTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue StatusSummary::Jsonize() const
{
  JsonValue payload;

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("LastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_statusDetailsHasBeenSet)
  {
   JsonValue statusDetailsJsonMap;
   for(auto& statusDetailsItem : m_statusDetails)
   {
     statusDetailsJsonMap.WithString(statusDetailsItem.first, statusDetailsItem.second);
   }
   payload.WithObject("StatusDetails", std::move(statusDetailsJsonMap));

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_statusTypeHasBeenSet)
  {
   payload.WithString("StatusType", StatusTypeMapper::GetNameForStatusType(m_statusType));
  }

  return payload;
}

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
