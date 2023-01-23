/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/IpAddressResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

IpAddressResponse::IpAddressResponse() : 
    m_ipIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_status(IpAddressStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false)
{
}

IpAddressResponse::IpAddressResponse(JsonView jsonValue) : 
    m_ipIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_status(IpAddressStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

IpAddressResponse& IpAddressResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpId"))
  {
    m_ipId = jsonValue.GetString("IpId");

    m_ipIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ip"))
  {
    m_ip = jsonValue.GetString("Ip");

    m_ipHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = IpAddressStatusMapper::GetIpAddressStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModificationTime"))
  {
    m_modificationTime = jsonValue.GetString("ModificationTime");

    m_modificationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue IpAddressResponse::Jsonize() const
{
  JsonValue payload;

  if(m_ipIdHasBeenSet)
  {
   payload.WithString("IpId", m_ipId);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_ipHasBeenSet)
  {
   payload.WithString("Ip", m_ip);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", IpAddressStatusMapper::GetNameForIpAddressStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime);

  }

  if(m_modificationTimeHasBeenSet)
  {
   payload.WithString("ModificationTime", m_modificationTime);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
