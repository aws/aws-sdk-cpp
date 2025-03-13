/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ProvisionedCapacityResponse.h>
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

ProvisionedCapacityResponse::ProvisionedCapacityResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

ProvisionedCapacityResponse& ProvisionedCapacityResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActiveQueryTCU"))
  {
    m_activeQueryTCU = jsonValue.GetInteger("ActiveQueryTCU");
    m_activeQueryTCUHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NotificationConfiguration"))
  {
    m_notificationConfiguration = jsonValue.GetObject("NotificationConfiguration");
    m_notificationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdate"))
  {
    m_lastUpdate = jsonValue.GetObject("LastUpdate");
    m_lastUpdateHasBeenSet = true;
  }
  return *this;
}

JsonValue ProvisionedCapacityResponse::Jsonize() const
{
  JsonValue payload;

  if(m_activeQueryTCUHasBeenSet)
  {
   payload.WithInteger("ActiveQueryTCU", m_activeQueryTCU);

  }

  if(m_notificationConfigurationHasBeenSet)
  {
   payload.WithObject("NotificationConfiguration", m_notificationConfiguration.Jsonize());

  }

  if(m_lastUpdateHasBeenSet)
  {
   payload.WithObject("LastUpdate", m_lastUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
