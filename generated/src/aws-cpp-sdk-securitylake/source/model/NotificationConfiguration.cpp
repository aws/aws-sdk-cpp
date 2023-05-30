/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/NotificationConfiguration.h>
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

NotificationConfiguration::NotificationConfiguration() : 
    m_httpsNotificationConfigurationHasBeenSet(false),
    m_sqsNotificationConfigurationHasBeenSet(false)
{
}

NotificationConfiguration::NotificationConfiguration(JsonView jsonValue) : 
    m_httpsNotificationConfigurationHasBeenSet(false),
    m_sqsNotificationConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationConfiguration& NotificationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("httpsNotificationConfiguration"))
  {
    m_httpsNotificationConfiguration = jsonValue.GetObject("httpsNotificationConfiguration");

    m_httpsNotificationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sqsNotificationConfiguration"))
  {
    m_sqsNotificationConfiguration = jsonValue.GetObject("sqsNotificationConfiguration");

    m_sqsNotificationConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_httpsNotificationConfigurationHasBeenSet)
  {
   payload.WithObject("httpsNotificationConfiguration", m_httpsNotificationConfiguration.Jsonize());

  }

  if(m_sqsNotificationConfigurationHasBeenSet)
  {
   payload.WithObject("sqsNotificationConfiguration", m_sqsNotificationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
