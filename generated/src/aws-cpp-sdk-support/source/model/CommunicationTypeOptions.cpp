/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/CommunicationTypeOptions.h>
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

CommunicationTypeOptions::CommunicationTypeOptions() : 
    m_typeHasBeenSet(false),
    m_supportedHoursHasBeenSet(false),
    m_datesWithoutSupportHasBeenSet(false)
{
}

CommunicationTypeOptions::CommunicationTypeOptions(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_supportedHoursHasBeenSet(false),
    m_datesWithoutSupportHasBeenSet(false)
{
  *this = jsonValue;
}

CommunicationTypeOptions& CommunicationTypeOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedHours"))
  {
    Aws::Utils::Array<JsonView> supportedHoursJsonList = jsonValue.GetArray("supportedHours");
    for(unsigned supportedHoursIndex = 0; supportedHoursIndex < supportedHoursJsonList.GetLength(); ++supportedHoursIndex)
    {
      m_supportedHours.push_back(supportedHoursJsonList[supportedHoursIndex].AsObject());
    }
    m_supportedHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datesWithoutSupport"))
  {
    Aws::Utils::Array<JsonView> datesWithoutSupportJsonList = jsonValue.GetArray("datesWithoutSupport");
    for(unsigned datesWithoutSupportIndex = 0; datesWithoutSupportIndex < datesWithoutSupportJsonList.GetLength(); ++datesWithoutSupportIndex)
    {
      m_datesWithoutSupport.push_back(datesWithoutSupportJsonList[datesWithoutSupportIndex].AsObject());
    }
    m_datesWithoutSupportHasBeenSet = true;
  }

  return *this;
}

JsonValue CommunicationTypeOptions::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_supportedHoursHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedHoursJsonList(m_supportedHours.size());
   for(unsigned supportedHoursIndex = 0; supportedHoursIndex < supportedHoursJsonList.GetLength(); ++supportedHoursIndex)
   {
     supportedHoursJsonList[supportedHoursIndex].AsObject(m_supportedHours[supportedHoursIndex].Jsonize());
   }
   payload.WithArray("supportedHours", std::move(supportedHoursJsonList));

  }

  if(m_datesWithoutSupportHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> datesWithoutSupportJsonList(m_datesWithoutSupport.size());
   for(unsigned datesWithoutSupportIndex = 0; datesWithoutSupportIndex < datesWithoutSupportJsonList.GetLength(); ++datesWithoutSupportIndex)
   {
     datesWithoutSupportJsonList[datesWithoutSupportIndex].AsObject(m_datesWithoutSupport[datesWithoutSupportIndex].Jsonize());
   }
   payload.WithArray("datesWithoutSupport", std::move(datesWithoutSupportJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws
