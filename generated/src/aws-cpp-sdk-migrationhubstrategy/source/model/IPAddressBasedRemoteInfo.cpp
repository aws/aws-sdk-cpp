/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/IPAddressBasedRemoteInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

IPAddressBasedRemoteInfo::IPAddressBasedRemoteInfo() : 
    m_authType(AuthType::NOT_SET),
    m_authTypeHasBeenSet(false),
    m_ipAddressConfigurationTimeStampHasBeenSet(false),
    m_osType(OSType::NOT_SET),
    m_osTypeHasBeenSet(false)
{
}

IPAddressBasedRemoteInfo::IPAddressBasedRemoteInfo(JsonView jsonValue) : 
    m_authType(AuthType::NOT_SET),
    m_authTypeHasBeenSet(false),
    m_ipAddressConfigurationTimeStampHasBeenSet(false),
    m_osType(OSType::NOT_SET),
    m_osTypeHasBeenSet(false)
{
  *this = jsonValue;
}

IPAddressBasedRemoteInfo& IPAddressBasedRemoteInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authType"))
  {
    m_authType = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("authType"));

    m_authTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddressConfigurationTimeStamp"))
  {
    m_ipAddressConfigurationTimeStamp = jsonValue.GetString("ipAddressConfigurationTimeStamp");

    m_ipAddressConfigurationTimeStampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("osType"))
  {
    m_osType = OSTypeMapper::GetOSTypeForName(jsonValue.GetString("osType"));

    m_osTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue IPAddressBasedRemoteInfo::Jsonize() const
{
  JsonValue payload;

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", AuthTypeMapper::GetNameForAuthType(m_authType));
  }

  if(m_ipAddressConfigurationTimeStampHasBeenSet)
  {
   payload.WithString("ipAddressConfigurationTimeStamp", m_ipAddressConfigurationTimeStamp);

  }

  if(m_osTypeHasBeenSet)
  {
   payload.WithString("osType", OSTypeMapper::GetNameForOSType(m_osType));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
