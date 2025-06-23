/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/PrivateDnsNameOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

PrivateDnsNameOptionsRequest::PrivateDnsNameOptionsRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

PrivateDnsNameOptionsRequest& PrivateDnsNameOptionsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HostnameType"))
  {
    m_hostnameType = HostnameTypeEnumMapper::GetHostnameTypeEnumForName(jsonValue.GetString("HostnameType"));
    m_hostnameTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnableResourceNameDnsARecord"))
  {
    m_enableResourceNameDnsARecord = jsonValue.GetBool("EnableResourceNameDnsARecord");
    m_enableResourceNameDnsARecordHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnableResourceNameDnsAAAARecord"))
  {
    m_enableResourceNameDnsAAAARecord = jsonValue.GetBool("EnableResourceNameDnsAAAARecord");
    m_enableResourceNameDnsAAAARecordHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivateDnsNameOptionsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_hostnameTypeHasBeenSet)
  {
   payload.WithString("HostnameType", HostnameTypeEnumMapper::GetNameForHostnameTypeEnum(m_hostnameType));
  }

  if(m_enableResourceNameDnsARecordHasBeenSet)
  {
   payload.WithBool("EnableResourceNameDnsARecord", m_enableResourceNameDnsARecord);

  }

  if(m_enableResourceNameDnsAAAARecordHasBeenSet)
  {
   payload.WithBool("EnableResourceNameDnsAAAARecord", m_enableResourceNameDnsAAAARecord);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
