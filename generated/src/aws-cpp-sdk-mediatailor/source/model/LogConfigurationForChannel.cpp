/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/LogConfigurationForChannel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

LogConfigurationForChannel::LogConfigurationForChannel() : 
    m_logTypesHasBeenSet(false)
{
}

LogConfigurationForChannel::LogConfigurationForChannel(JsonView jsonValue) : 
    m_logTypesHasBeenSet(false)
{
  *this = jsonValue;
}

LogConfigurationForChannel& LogConfigurationForChannel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogTypes"))
  {
    Aws::Utils::Array<JsonView> logTypesJsonList = jsonValue.GetArray("LogTypes");
    for(unsigned logTypesIndex = 0; logTypesIndex < logTypesJsonList.GetLength(); ++logTypesIndex)
    {
      m_logTypes.push_back(LogTypeMapper::GetLogTypeForName(logTypesJsonList[logTypesIndex].AsString()));
    }
    m_logTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue LogConfigurationForChannel::Jsonize() const
{
  JsonValue payload;

  if(m_logTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logTypesJsonList(m_logTypes.size());
   for(unsigned logTypesIndex = 0; logTypesIndex < logTypesJsonList.GetLength(); ++logTypesIndex)
   {
     logTypesJsonList[logTypesIndex].AsString(LogTypeMapper::GetNameForLogType(m_logTypes[logTypesIndex]));
   }
   payload.WithArray("LogTypes", std::move(logTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
