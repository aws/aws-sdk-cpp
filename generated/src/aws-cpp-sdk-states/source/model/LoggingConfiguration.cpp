/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/LoggingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

LoggingConfiguration::LoggingConfiguration() : 
    m_level(LogLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_includeExecutionData(false),
    m_includeExecutionDataHasBeenSet(false),
    m_destinationsHasBeenSet(false)
{
}

LoggingConfiguration::LoggingConfiguration(JsonView jsonValue) : 
    m_level(LogLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_includeExecutionData(false),
    m_includeExecutionDataHasBeenSet(false),
    m_destinationsHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingConfiguration& LoggingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("level"))
  {
    m_level = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("level"));

    m_levelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeExecutionData"))
  {
    m_includeExecutionData = jsonValue.GetBool("includeExecutionData");

    m_includeExecutionDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_levelHasBeenSet)
  {
   payload.WithString("level", LogLevelMapper::GetNameForLogLevel(m_level));
  }

  if(m_includeExecutionDataHasBeenSet)
  {
   payload.WithBool("includeExecutionData", m_includeExecutionData);

  }

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("destinations", std::move(destinationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
