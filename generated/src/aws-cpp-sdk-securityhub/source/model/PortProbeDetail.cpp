/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/PortProbeDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

PortProbeDetail::PortProbeDetail() : 
    m_localPortDetailsHasBeenSet(false),
    m_localIpDetailsHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false)
{
}

PortProbeDetail::PortProbeDetail(JsonView jsonValue) : 
    m_localPortDetailsHasBeenSet(false),
    m_localIpDetailsHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

PortProbeDetail& PortProbeDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocalPortDetails"))
  {
    m_localPortDetails = jsonValue.GetObject("LocalPortDetails");

    m_localPortDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalIpDetails"))
  {
    m_localIpDetails = jsonValue.GetObject("LocalIpDetails");

    m_localIpDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoteIpDetails"))
  {
    m_remoteIpDetails = jsonValue.GetObject("RemoteIpDetails");

    m_remoteIpDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue PortProbeDetail::Jsonize() const
{
  JsonValue payload;

  if(m_localPortDetailsHasBeenSet)
  {
   payload.WithObject("LocalPortDetails", m_localPortDetails.Jsonize());

  }

  if(m_localIpDetailsHasBeenSet)
  {
   payload.WithObject("LocalIpDetails", m_localIpDetails.Jsonize());

  }

  if(m_remoteIpDetailsHasBeenSet)
  {
   payload.WithObject("RemoteIpDetails", m_remoteIpDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
