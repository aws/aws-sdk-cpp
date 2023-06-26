/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DataLakeSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

DataLakeSource::DataLakeSource() : 
    m_accountHasBeenSet(false),
    m_eventClassesHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceStatusesHasBeenSet(false)
{
}

DataLakeSource::DataLakeSource(JsonView jsonValue) : 
    m_accountHasBeenSet(false),
    m_eventClassesHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceStatusesHasBeenSet(false)
{
  *this = jsonValue;
}

DataLakeSource& DataLakeSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("account"))
  {
    m_account = jsonValue.GetString("account");

    m_accountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventClasses"))
  {
    Aws::Utils::Array<JsonView> eventClassesJsonList = jsonValue.GetArray("eventClasses");
    for(unsigned eventClassesIndex = 0; eventClassesIndex < eventClassesJsonList.GetLength(); ++eventClassesIndex)
    {
      m_eventClasses.push_back(eventClassesJsonList[eventClassesIndex].AsString());
    }
    m_eventClassesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceName"))
  {
    m_sourceName = jsonValue.GetString("sourceName");

    m_sourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceStatuses"))
  {
    Aws::Utils::Array<JsonView> sourceStatusesJsonList = jsonValue.GetArray("sourceStatuses");
    for(unsigned sourceStatusesIndex = 0; sourceStatusesIndex < sourceStatusesJsonList.GetLength(); ++sourceStatusesIndex)
    {
      m_sourceStatuses.push_back(sourceStatusesJsonList[sourceStatusesIndex].AsObject());
    }
    m_sourceStatusesHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLakeSource::Jsonize() const
{
  JsonValue payload;

  if(m_accountHasBeenSet)
  {
   payload.WithString("account", m_account);

  }

  if(m_eventClassesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventClassesJsonList(m_eventClasses.size());
   for(unsigned eventClassesIndex = 0; eventClassesIndex < eventClassesJsonList.GetLength(); ++eventClassesIndex)
   {
     eventClassesJsonList[eventClassesIndex].AsString(m_eventClasses[eventClassesIndex]);
   }
   payload.WithArray("eventClasses", std::move(eventClassesJsonList));

  }

  if(m_sourceNameHasBeenSet)
  {
   payload.WithString("sourceName", m_sourceName);

  }

  if(m_sourceStatusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceStatusesJsonList(m_sourceStatuses.size());
   for(unsigned sourceStatusesIndex = 0; sourceStatusesIndex < sourceStatusesJsonList.GetLength(); ++sourceStatusesIndex)
   {
     sourceStatusesJsonList[sourceStatusesIndex].AsObject(m_sourceStatuses[sourceStatusesIndex].Jsonize());
   }
   payload.WithArray("sourceStatuses", std::move(sourceStatusesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
