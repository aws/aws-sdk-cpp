/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ProvisionedCapacityRequest.h>
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

ProvisionedCapacityRequest::ProvisionedCapacityRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

ProvisionedCapacityRequest& ProvisionedCapacityRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetQueryTCU"))
  {
    m_targetQueryTCU = jsonValue.GetInteger("TargetQueryTCU");
    m_targetQueryTCUHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NotificationConfiguration"))
  {
    m_notificationConfiguration = jsonValue.GetObject("NotificationConfiguration");
    m_notificationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ProvisionedCapacityRequest::Jsonize() const
{
  JsonValue payload;

  if(m_targetQueryTCUHasBeenSet)
  {
   payload.WithInteger("TargetQueryTCU", m_targetQueryTCU);

  }

  if(m_notificationConfigurationHasBeenSet)
  {
   payload.WithObject("NotificationConfiguration", m_notificationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
