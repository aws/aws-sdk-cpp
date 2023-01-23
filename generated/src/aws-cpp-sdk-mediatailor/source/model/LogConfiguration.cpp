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

LogConfiguration::LogConfiguration() : 
    m_percentEnabled(0),
    m_percentEnabledHasBeenSet(false)
{
}

LogConfiguration::LogConfiguration(JsonView jsonValue) : 
    m_percentEnabled(0),
    m_percentEnabledHasBeenSet(false)
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

  return *this;
}

JsonValue LogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_percentEnabledHasBeenSet)
  {
   payload.WithInteger("PercentEnabled", m_percentEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
