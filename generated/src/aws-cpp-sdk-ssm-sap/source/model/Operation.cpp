/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/Operation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

Operation::Operation() : 
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_status(OperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

Operation::Operation(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_status(OperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Operation& Operation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OperationStatusMapper::GetOperationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Properties"))
  {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("Properties").GetAllObjects();
    for(auto& propertiesItem : propertiesJsonMap)
    {
      m_properties[propertiesItem.first] = propertiesItem.second.AsString();
    }
    m_propertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Operation::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OperationStatusMapper::GetNameForOperationStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_propertiesHasBeenSet)
  {
   JsonValue propertiesJsonMap;
   for(auto& propertiesItem : m_properties)
   {
     propertiesJsonMap.WithString(propertiesItem.first, propertiesItem.second);
   }
   payload.WithObject("Properties", std::move(propertiesJsonMap));

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
