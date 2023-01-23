/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/CloudWatchLogsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

CloudWatchLogsConfiguration::CloudWatchLogsConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_logStreamsHasBeenSet(false)
{
}

CloudWatchLogsConfiguration::CloudWatchLogsConfiguration(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_logStreamsHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLogsConfiguration& CloudWatchLogsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogStreams"))
  {
    Aws::Utils::Array<JsonView> logStreamsJsonList = jsonValue.GetArray("LogStreams");
    for(unsigned logStreamsIndex = 0; logStreamsIndex < logStreamsJsonList.GetLength(); ++logStreamsIndex)
    {
      m_logStreams.push_back(logStreamsJsonList[logStreamsIndex].AsObject());
    }
    m_logStreamsHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLogsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_logStreamsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logStreamsJsonList(m_logStreams.size());
   for(unsigned logStreamsIndex = 0; logStreamsIndex < logStreamsJsonList.GetLength(); ++logStreamsIndex)
   {
     logStreamsJsonList[logStreamsIndex].AsObject(m_logStreams[logStreamsIndex].Jsonize());
   }
   payload.WithArray("LogStreams", std::move(logStreamsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
