/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RefreshFailureEmailAlert.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

RefreshFailureEmailAlert::RefreshFailureEmailAlert(JsonView jsonValue)
{
  *this = jsonValue;
}

RefreshFailureEmailAlert& RefreshFailureEmailAlert::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlertStatus"))
  {
    m_alertStatus = RefreshFailureAlertStatusMapper::GetRefreshFailureAlertStatusForName(jsonValue.GetString("AlertStatus"));
    m_alertStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue RefreshFailureEmailAlert::Jsonize() const
{
  JsonValue payload;

  if(m_alertStatusHasBeenSet)
  {
   payload.WithString("AlertStatus", RefreshFailureAlertStatusMapper::GetNameForRefreshFailureAlertStatus(m_alertStatus));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
