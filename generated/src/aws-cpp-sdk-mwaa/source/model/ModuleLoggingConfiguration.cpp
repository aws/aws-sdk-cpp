/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/ModuleLoggingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MWAA
{
namespace Model
{

ModuleLoggingConfiguration::ModuleLoggingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ModuleLoggingConfiguration& ModuleLoggingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogLevel"))
  {
    m_logLevel = LoggingLevelMapper::GetLoggingLevelForName(jsonValue.GetString("LogLevel"));
    m_logLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CloudWatchLogGroupArn"))
  {
    m_cloudWatchLogGroupArn = jsonValue.GetString("CloudWatchLogGroupArn");
    m_cloudWatchLogGroupArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ModuleLoggingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("LogLevel", LoggingLevelMapper::GetNameForLoggingLevel(m_logLevel));
  }

  if(m_cloudWatchLogGroupArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogGroupArn", m_cloudWatchLogGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace MWAA
} // namespace Aws
