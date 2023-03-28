/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/RotationOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

RotationOverride::RotationOverride() : 
    m_rotationOverrideIdHasBeenSet(false),
    m_newContactIdsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

RotationOverride::RotationOverride(JsonView jsonValue) : 
    m_rotationOverrideIdHasBeenSet(false),
    m_newContactIdsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
  *this = jsonValue;
}

RotationOverride& RotationOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RotationOverrideId"))
  {
    m_rotationOverrideId = jsonValue.GetString("RotationOverrideId");

    m_rotationOverrideIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewContactIds"))
  {
    Aws::Utils::Array<JsonView> newContactIdsJsonList = jsonValue.GetArray("NewContactIds");
    for(unsigned newContactIdsIndex = 0; newContactIdsIndex < newContactIdsJsonList.GetLength(); ++newContactIdsIndex)
    {
      m_newContactIds.push_back(newContactIdsJsonList[newContactIdsIndex].AsString());
    }
    m_newContactIdsHasBeenSet = true;
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

  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");

    m_createTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue RotationOverride::Jsonize() const
{
  JsonValue payload;

  if(m_rotationOverrideIdHasBeenSet)
  {
   payload.WithString("RotationOverrideId", m_rotationOverrideId);

  }

  if(m_newContactIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> newContactIdsJsonList(m_newContactIds.size());
   for(unsigned newContactIdsIndex = 0; newContactIdsIndex < newContactIdsJsonList.GetLength(); ++newContactIdsIndex)
   {
     newContactIdsJsonList[newContactIdsIndex].AsString(m_newContactIds[newContactIdsIndex]);
   }
   payload.WithArray("NewContactIds", std::move(newContactIdsJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
