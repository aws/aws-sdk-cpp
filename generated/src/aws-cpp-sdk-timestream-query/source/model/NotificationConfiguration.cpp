/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/NotificationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

NotificationConfiguration::NotificationConfiguration() : 
    m_snsConfigurationHasBeenSet(false)
{
}

NotificationConfiguration::NotificationConfiguration(JsonView jsonValue) : 
    m_snsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationConfiguration& NotificationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SnsConfiguration"))
  {
    m_snsConfiguration = jsonValue.GetObject("SnsConfiguration");

    m_snsConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_snsConfigurationHasBeenSet)
  {
   payload.WithObject("SnsConfiguration", m_snsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
