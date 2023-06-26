/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/MobileDeviceAccessOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

MobileDeviceAccessOverride::MobileDeviceAccessOverride() : 
    m_userIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_effect(MobileDeviceAccessRuleEffect::NOT_SET),
    m_effectHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateModifiedHasBeenSet(false)
{
}

MobileDeviceAccessOverride::MobileDeviceAccessOverride(JsonView jsonValue) : 
    m_userIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_effect(MobileDeviceAccessRuleEffect::NOT_SET),
    m_effectHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateModifiedHasBeenSet(false)
{
  *this = jsonValue;
}

MobileDeviceAccessOverride& MobileDeviceAccessOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

    m_deviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Effect"))
  {
    m_effect = MobileDeviceAccessRuleEffectMapper::GetMobileDeviceAccessRuleEffectForName(jsonValue.GetString("Effect"));

    m_effectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateCreated"))
  {
    m_dateCreated = jsonValue.GetDouble("DateCreated");

    m_dateCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateModified"))
  {
    m_dateModified = jsonValue.GetDouble("DateModified");

    m_dateModifiedHasBeenSet = true;
  }

  return *this;
}

JsonValue MobileDeviceAccessOverride::Jsonize() const
{
  JsonValue payload;

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  if(m_effectHasBeenSet)
  {
   payload.WithString("Effect", MobileDeviceAccessRuleEffectMapper::GetNameForMobileDeviceAccessRuleEffect(m_effect));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithDouble("DateCreated", m_dateCreated.SecondsWithMSPrecision());
  }

  if(m_dateModifiedHasBeenSet)
  {
   payload.WithDouble("DateModified", m_dateModified.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
