/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeLogConfigurationParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeLogConfigurationParameters::PipeLogConfigurationParameters() : 
    m_cloudwatchLogsLogDestinationHasBeenSet(false),
    m_firehoseLogDestinationHasBeenSet(false),
    m_includeExecutionDataHasBeenSet(false),
    m_level(LogLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_s3LogDestinationHasBeenSet(false)
{
}

PipeLogConfigurationParameters::PipeLogConfigurationParameters(JsonView jsonValue) : 
    m_cloudwatchLogsLogDestinationHasBeenSet(false),
    m_firehoseLogDestinationHasBeenSet(false),
    m_includeExecutionDataHasBeenSet(false),
    m_level(LogLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_s3LogDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

PipeLogConfigurationParameters& PipeLogConfigurationParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudwatchLogsLogDestination"))
  {
    m_cloudwatchLogsLogDestination = jsonValue.GetObject("CloudwatchLogsLogDestination");

    m_cloudwatchLogsLogDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirehoseLogDestination"))
  {
    m_firehoseLogDestination = jsonValue.GetObject("FirehoseLogDestination");

    m_firehoseLogDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeExecutionData"))
  {
    Aws::Utils::Array<JsonView> includeExecutionDataJsonList = jsonValue.GetArray("IncludeExecutionData");
    for(unsigned includeExecutionDataIndex = 0; includeExecutionDataIndex < includeExecutionDataJsonList.GetLength(); ++includeExecutionDataIndex)
    {
      m_includeExecutionData.push_back(IncludeExecutionDataOptionMapper::GetIncludeExecutionDataOptionForName(includeExecutionDataJsonList[includeExecutionDataIndex].AsString()));
    }
    m_includeExecutionDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Level"))
  {
    m_level = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("Level"));

    m_levelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3LogDestination"))
  {
    m_s3LogDestination = jsonValue.GetObject("S3LogDestination");

    m_s3LogDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeLogConfigurationParameters::Jsonize() const
{
  JsonValue payload;

  if(m_cloudwatchLogsLogDestinationHasBeenSet)
  {
   payload.WithObject("CloudwatchLogsLogDestination", m_cloudwatchLogsLogDestination.Jsonize());

  }

  if(m_firehoseLogDestinationHasBeenSet)
  {
   payload.WithObject("FirehoseLogDestination", m_firehoseLogDestination.Jsonize());

  }

  if(m_includeExecutionDataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeExecutionDataJsonList(m_includeExecutionData.size());
   for(unsigned includeExecutionDataIndex = 0; includeExecutionDataIndex < includeExecutionDataJsonList.GetLength(); ++includeExecutionDataIndex)
   {
     includeExecutionDataJsonList[includeExecutionDataIndex].AsString(IncludeExecutionDataOptionMapper::GetNameForIncludeExecutionDataOption(m_includeExecutionData[includeExecutionDataIndex]));
   }
   payload.WithArray("IncludeExecutionData", std::move(includeExecutionDataJsonList));

  }

  if(m_levelHasBeenSet)
  {
   payload.WithString("Level", LogLevelMapper::GetNameForLogLevel(m_level));
  }

  if(m_s3LogDestinationHasBeenSet)
  {
   payload.WithObject("S3LogDestination", m_s3LogDestination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
