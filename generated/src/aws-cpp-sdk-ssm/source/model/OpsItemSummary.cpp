/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OpsItemSummary::OpsItemSummary() : 
    m_createdByHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_status(OpsItemStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_opsItemIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_operationalDataHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_opsItemTypeHasBeenSet(false),
    m_actualStartTimeHasBeenSet(false),
    m_actualEndTimeHasBeenSet(false),
    m_plannedStartTimeHasBeenSet(false),
    m_plannedEndTimeHasBeenSet(false)
{
}

OpsItemSummary::OpsItemSummary(JsonView jsonValue) : 
    m_createdByHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_status(OpsItemStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_opsItemIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_operationalDataHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_opsItemTypeHasBeenSet(false),
    m_actualStartTimeHasBeenSet(false),
    m_actualEndTimeHasBeenSet(false),
    m_plannedStartTimeHasBeenSet(false),
    m_plannedEndTimeHasBeenSet(false)
{
  *this = jsonValue;
}

OpsItemSummary& OpsItemSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OpsItemStatusMapper::GetOpsItemStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OpsItemId"))
  {
    m_opsItemId = jsonValue.GetString("OpsItemId");

    m_opsItemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperationalData"))
  {
    Aws::Map<Aws::String, JsonView> operationalDataJsonMap = jsonValue.GetObject("OperationalData").GetAllObjects();
    for(auto& operationalDataItem : operationalDataJsonMap)
    {
      m_operationalData[operationalDataItem.first] = operationalDataItem.second.AsObject();
    }
    m_operationalDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Category"))
  {
    m_category = jsonValue.GetString("Category");

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = jsonValue.GetString("Severity");

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OpsItemType"))
  {
    m_opsItemType = jsonValue.GetString("OpsItemType");

    m_opsItemTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActualStartTime"))
  {
    m_actualStartTime = jsonValue.GetDouble("ActualStartTime");

    m_actualStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActualEndTime"))
  {
    m_actualEndTime = jsonValue.GetDouble("ActualEndTime");

    m_actualEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlannedStartTime"))
  {
    m_plannedStartTime = jsonValue.GetDouble("PlannedStartTime");

    m_plannedStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlannedEndTime"))
  {
    m_plannedEndTime = jsonValue.GetDouble("PlannedEndTime");

    m_plannedEndTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue OpsItemSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdByHasBeenSet)
  {
   payload.WithString("CreatedBy", m_createdBy);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithString("LastModifiedBy", m_lastModifiedBy);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OpsItemStatusMapper::GetNameForOpsItemStatus(m_status));
  }

  if(m_opsItemIdHasBeenSet)
  {
   payload.WithString("OpsItemId", m_opsItemId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_operationalDataHasBeenSet)
  {
   JsonValue operationalDataJsonMap;
   for(auto& operationalDataItem : m_operationalData)
   {
     operationalDataJsonMap.WithObject(operationalDataItem.first, operationalDataItem.second.Jsonize());
   }
   payload.WithObject("OperationalData", std::move(operationalDataJsonMap));

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", m_category);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", m_severity);

  }

  if(m_opsItemTypeHasBeenSet)
  {
   payload.WithString("OpsItemType", m_opsItemType);

  }

  if(m_actualStartTimeHasBeenSet)
  {
   payload.WithDouble("ActualStartTime", m_actualStartTime.SecondsWithMSPrecision());
  }

  if(m_actualEndTimeHasBeenSet)
  {
   payload.WithDouble("ActualEndTime", m_actualEndTime.SecondsWithMSPrecision());
  }

  if(m_plannedStartTimeHasBeenSet)
  {
   payload.WithDouble("PlannedStartTime", m_plannedStartTime.SecondsWithMSPrecision());
  }

  if(m_plannedEndTimeHasBeenSet)
  {
   payload.WithDouble("PlannedEndTime", m_plannedEndTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
