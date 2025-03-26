/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/LogConfiguration.h>
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

LogConfiguration::LogConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

LogConfiguration& LogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PercentEnabled"))
  {
    m_percentEnabled = jsonValue.GetInteger("PercentEnabled");
    m_percentEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnabledLoggingStrategies"))
  {
    Aws::Utils::Array<JsonView> enabledLoggingStrategiesJsonList = jsonValue.GetArray("EnabledLoggingStrategies");
    for(unsigned enabledLoggingStrategiesIndex = 0; enabledLoggingStrategiesIndex < enabledLoggingStrategiesJsonList.GetLength(); ++enabledLoggingStrategiesIndex)
    {
      m_enabledLoggingStrategies.push_back(LoggingStrategyMapper::GetLoggingStrategyForName(enabledLoggingStrategiesJsonList[enabledLoggingStrategiesIndex].AsString()));
    }
    m_enabledLoggingStrategiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdsInteractionLog"))
  {
    m_adsInteractionLog = jsonValue.GetObject("AdsInteractionLog");
    m_adsInteractionLogHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManifestServiceInteractionLog"))
  {
    m_manifestServiceInteractionLog = jsonValue.GetObject("ManifestServiceInteractionLog");
    m_manifestServiceInteractionLogHasBeenSet = true;
  }
  return *this;
}

JsonValue LogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_percentEnabledHasBeenSet)
  {
   payload.WithInteger("PercentEnabled", m_percentEnabled);

  }

  if(m_enabledLoggingStrategiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledLoggingStrategiesJsonList(m_enabledLoggingStrategies.size());
   for(unsigned enabledLoggingStrategiesIndex = 0; enabledLoggingStrategiesIndex < enabledLoggingStrategiesJsonList.GetLength(); ++enabledLoggingStrategiesIndex)
   {
     enabledLoggingStrategiesJsonList[enabledLoggingStrategiesIndex].AsString(LoggingStrategyMapper::GetNameForLoggingStrategy(m_enabledLoggingStrategies[enabledLoggingStrategiesIndex]));
   }
   payload.WithArray("EnabledLoggingStrategies", std::move(enabledLoggingStrategiesJsonList));

  }

  if(m_adsInteractionLogHasBeenSet)
  {
   payload.WithObject("AdsInteractionLog", m_adsInteractionLog.Jsonize());

  }

  if(m_manifestServiceInteractionLogHasBeenSet)
  {
   payload.WithObject("ManifestServiceInteractionLog", m_manifestServiceInteractionLog.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
