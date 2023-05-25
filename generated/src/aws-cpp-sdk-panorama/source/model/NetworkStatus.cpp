/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/NetworkStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

NetworkStatus::NetworkStatus() : 
    m_ethernet0StatusHasBeenSet(false),
    m_ethernet1StatusHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_ntpStatusHasBeenSet(false)
{
}

NetworkStatus::NetworkStatus(JsonView jsonValue) : 
    m_ethernet0StatusHasBeenSet(false),
    m_ethernet1StatusHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_ntpStatusHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkStatus& NetworkStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ethernet0Status"))
  {
    m_ethernet0Status = jsonValue.GetObject("Ethernet0Status");

    m_ethernet0StatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ethernet1Status"))
  {
    m_ethernet1Status = jsonValue.GetObject("Ethernet1Status");

    m_ethernet1StatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NtpStatus"))
  {
    m_ntpStatus = jsonValue.GetObject("NtpStatus");

    m_ntpStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkStatus::Jsonize() const
{
  JsonValue payload;

  if(m_ethernet0StatusHasBeenSet)
  {
   payload.WithObject("Ethernet0Status", m_ethernet0Status.Jsonize());

  }

  if(m_ethernet1StatusHasBeenSet)
  {
   payload.WithObject("Ethernet1Status", m_ethernet1Status.Jsonize());

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_ntpStatusHasBeenSet)
  {
   payload.WithObject("NtpStatus", m_ntpStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
