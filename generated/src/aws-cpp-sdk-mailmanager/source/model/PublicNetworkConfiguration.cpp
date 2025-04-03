/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/PublicNetworkConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

PublicNetworkConfiguration::PublicNetworkConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PublicNetworkConfiguration& PublicNetworkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpType"))
  {
    m_ipType = IpTypeMapper::GetIpTypeForName(jsonValue.GetString("IpType"));
    m_ipTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue PublicNetworkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_ipTypeHasBeenSet)
  {
   payload.WithString("IpType", IpTypeMapper::GetNameForIpType(m_ipType));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
