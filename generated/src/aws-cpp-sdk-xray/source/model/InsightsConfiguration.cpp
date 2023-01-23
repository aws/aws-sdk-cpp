/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/InsightsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

InsightsConfiguration::InsightsConfiguration() : 
    m_insightsEnabled(false),
    m_insightsEnabledHasBeenSet(false),
    m_notificationsEnabled(false),
    m_notificationsEnabledHasBeenSet(false)
{
}

InsightsConfiguration::InsightsConfiguration(JsonView jsonValue) : 
    m_insightsEnabled(false),
    m_insightsEnabledHasBeenSet(false),
    m_notificationsEnabled(false),
    m_notificationsEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

InsightsConfiguration& InsightsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InsightsEnabled"))
  {
    m_insightsEnabled = jsonValue.GetBool("InsightsEnabled");

    m_insightsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationsEnabled"))
  {
    m_notificationsEnabled = jsonValue.GetBool("NotificationsEnabled");

    m_notificationsEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_insightsEnabledHasBeenSet)
  {
   payload.WithBool("InsightsEnabled", m_insightsEnabled);

  }

  if(m_notificationsEnabledHasBeenSet)
  {
   payload.WithBool("NotificationsEnabled", m_notificationsEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
