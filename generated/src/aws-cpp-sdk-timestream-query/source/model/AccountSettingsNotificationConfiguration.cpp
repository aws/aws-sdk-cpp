/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/AccountSettingsNotificationConfiguration.h>
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

AccountSettingsNotificationConfiguration::AccountSettingsNotificationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AccountSettingsNotificationConfiguration& AccountSettingsNotificationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SnsConfiguration"))
  {
    m_snsConfiguration = jsonValue.GetObject("SnsConfiguration");
    m_snsConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountSettingsNotificationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_snsConfigurationHasBeenSet)
  {
   payload.WithObject("SnsConfiguration", m_snsConfiguration.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
