/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/Rotation.h>
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

Rotation::Rotation() : 
    m_rotationArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contactIdsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_timeZoneIdHasBeenSet(false),
    m_recurrenceHasBeenSet(false)
{
}

Rotation::Rotation(JsonView jsonValue) : 
    m_rotationArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contactIdsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_timeZoneIdHasBeenSet(false),
    m_recurrenceHasBeenSet(false)
{
  *this = jsonValue;
}

Rotation& Rotation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RotationArn"))
  {
    m_rotationArn = jsonValue.GetString("RotationArn");

    m_rotationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactIds"))
  {
    Aws::Utils::Array<JsonView> contactIdsJsonList = jsonValue.GetArray("ContactIds");
    for(unsigned contactIdsIndex = 0; contactIdsIndex < contactIdsJsonList.GetLength(); ++contactIdsIndex)
    {
      m_contactIds.push_back(contactIdsJsonList[contactIdsIndex].AsString());
    }
    m_contactIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeZoneId"))
  {
    m_timeZoneId = jsonValue.GetString("TimeZoneId");

    m_timeZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Recurrence"))
  {
    m_recurrence = jsonValue.GetObject("Recurrence");

    m_recurrenceHasBeenSet = true;
  }

  return *this;
}

JsonValue Rotation::Jsonize() const
{
  JsonValue payload;

  if(m_rotationArnHasBeenSet)
  {
   payload.WithString("RotationArn", m_rotationArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_contactIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contactIdsJsonList(m_contactIds.size());
   for(unsigned contactIdsIndex = 0; contactIdsIndex < contactIdsJsonList.GetLength(); ++contactIdsIndex)
   {
     contactIdsJsonList[contactIdsIndex].AsString(m_contactIds[contactIdsIndex]);
   }
   payload.WithArray("ContactIds", std::move(contactIdsJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_timeZoneIdHasBeenSet)
  {
   payload.WithString("TimeZoneId", m_timeZoneId);

  }

  if(m_recurrenceHasBeenSet)
  {
   payload.WithObject("Recurrence", m_recurrence.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
