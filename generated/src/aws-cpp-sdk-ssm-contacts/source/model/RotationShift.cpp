/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/RotationShift.h>
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

RotationShift::RotationShift() : 
    m_contactIdsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_type(ShiftType::NOT_SET),
    m_typeHasBeenSet(false),
    m_shiftDetailsHasBeenSet(false)
{
}

RotationShift::RotationShift(JsonView jsonValue) : 
    m_contactIdsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_type(ShiftType::NOT_SET),
    m_typeHasBeenSet(false),
    m_shiftDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

RotationShift& RotationShift::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ShiftTypeMapper::GetShiftTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShiftDetails"))
  {
    m_shiftDetails = jsonValue.GetObject("ShiftDetails");

    m_shiftDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue RotationShift::Jsonize() const
{
  JsonValue payload;

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

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ShiftTypeMapper::GetNameForShiftType(m_type));
  }

  if(m_shiftDetailsHasBeenSet)
  {
   payload.WithObject("ShiftDetails", m_shiftDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
