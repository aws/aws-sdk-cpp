/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/DeviceIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

DeviceIdentifier::DeviceIdentifier() : 
    m_createdAtHasBeenSet(false),
    m_deviceIdentifierArnHasBeenSet(false),
    m_iccidHasBeenSet(false),
    m_imsiHasBeenSet(false),
    m_networkArnHasBeenSet(false),
    m_orderArnHasBeenSet(false),
    m_status(DeviceIdentifierStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_trafficGroupArnHasBeenSet(false),
    m_vendorHasBeenSet(false)
{
}

DeviceIdentifier::DeviceIdentifier(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_deviceIdentifierArnHasBeenSet(false),
    m_iccidHasBeenSet(false),
    m_imsiHasBeenSet(false),
    m_networkArnHasBeenSet(false),
    m_orderArnHasBeenSet(false),
    m_status(DeviceIdentifierStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_trafficGroupArnHasBeenSet(false),
    m_vendorHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceIdentifier& DeviceIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceIdentifierArn"))
  {
    m_deviceIdentifierArn = jsonValue.GetString("deviceIdentifierArn");

    m_deviceIdentifierArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iccid"))
  {
    m_iccid = jsonValue.GetString("iccid");

    m_iccidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imsi"))
  {
    m_imsi = jsonValue.GetString("imsi");

    m_imsiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkArn"))
  {
    m_networkArn = jsonValue.GetString("networkArn");

    m_networkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orderArn"))
  {
    m_orderArn = jsonValue.GetString("orderArn");

    m_orderArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DeviceIdentifierStatusMapper::GetDeviceIdentifierStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trafficGroupArn"))
  {
    m_trafficGroupArn = jsonValue.GetString("trafficGroupArn");

    m_trafficGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vendor"))
  {
    m_vendor = jsonValue.GetString("vendor");

    m_vendorHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_deviceIdentifierArnHasBeenSet)
  {
   payload.WithString("deviceIdentifierArn", m_deviceIdentifierArn);

  }

  if(m_iccidHasBeenSet)
  {
   payload.WithString("iccid", m_iccid);

  }

  if(m_imsiHasBeenSet)
  {
   payload.WithString("imsi", m_imsi);

  }

  if(m_networkArnHasBeenSet)
  {
   payload.WithString("networkArn", m_networkArn);

  }

  if(m_orderArnHasBeenSet)
  {
   payload.WithString("orderArn", m_orderArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DeviceIdentifierStatusMapper::GetNameForDeviceIdentifierStatus(m_status));
  }

  if(m_trafficGroupArnHasBeenSet)
  {
   payload.WithString("trafficGroupArn", m_trafficGroupArn);

  }

  if(m_vendorHasBeenSet)
  {
   payload.WithString("vendor", m_vendor);

  }

  return payload;
}

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
