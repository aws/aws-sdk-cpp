/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/NotificationContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

NotificationContext::NotificationContext() : 
    m_validationIdHasBeenSet(false),
    m_status(ValidationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

NotificationContext::NotificationContext(JsonView jsonValue) : 
    m_validationIdHasBeenSet(false),
    m_status(ValidationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationContext& NotificationContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("validationId"))
  {
    m_validationId = jsonValue.GetString("validationId");

    m_validationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ValidationStatusMapper::GetValidationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationContext::Jsonize() const
{
  JsonValue payload;

  if(m_validationIdHasBeenSet)
  {
   payload.WithString("validationId", m_validationId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ValidationStatusMapper::GetNameForValidationStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
