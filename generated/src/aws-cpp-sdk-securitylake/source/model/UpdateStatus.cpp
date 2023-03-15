/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/UpdateStatus.h>
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

UpdateStatus::UpdateStatus() : 
    m_lastUpdateFailureHasBeenSet(false),
    m_lastUpdateRequestIdHasBeenSet(false),
    m_lastUpdateStatus(SettingsStatus::NOT_SET),
    m_lastUpdateStatusHasBeenSet(false)
{
}

UpdateStatus::UpdateStatus(JsonView jsonValue) : 
    m_lastUpdateFailureHasBeenSet(false),
    m_lastUpdateRequestIdHasBeenSet(false),
    m_lastUpdateStatus(SettingsStatus::NOT_SET),
    m_lastUpdateStatusHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateStatus& UpdateStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lastUpdateFailure"))
  {
    m_lastUpdateFailure = jsonValue.GetObject("lastUpdateFailure");

    m_lastUpdateFailureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateRequestId"))
  {
    m_lastUpdateRequestId = jsonValue.GetString("lastUpdateRequestId");

    m_lastUpdateRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateStatus"))
  {
    m_lastUpdateStatus = SettingsStatusMapper::GetSettingsStatusForName(jsonValue.GetString("lastUpdateStatus"));

    m_lastUpdateStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateStatus::Jsonize() const
{
  JsonValue payload;

  if(m_lastUpdateFailureHasBeenSet)
  {
   payload.WithObject("lastUpdateFailure", m_lastUpdateFailure.Jsonize());

  }

  if(m_lastUpdateRequestIdHasBeenSet)
  {
   payload.WithString("lastUpdateRequestId", m_lastUpdateRequestId);

  }

  if(m_lastUpdateStatusHasBeenSet)
  {
   payload.WithString("lastUpdateStatus", SettingsStatusMapper::GetNameForSettingsStatus(m_lastUpdateStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
