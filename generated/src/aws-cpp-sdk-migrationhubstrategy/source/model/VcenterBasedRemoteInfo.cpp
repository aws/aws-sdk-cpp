/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/VcenterBasedRemoteInfo.h>
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

VcenterBasedRemoteInfo::VcenterBasedRemoteInfo() : 
    m_osType(OSType::NOT_SET),
    m_osTypeHasBeenSet(false),
    m_vcenterConfigurationTimeStampHasBeenSet(false)
{
}

VcenterBasedRemoteInfo::VcenterBasedRemoteInfo(JsonView jsonValue) : 
    m_osType(OSType::NOT_SET),
    m_osTypeHasBeenSet(false),
    m_vcenterConfigurationTimeStampHasBeenSet(false)
{
  *this = jsonValue;
}

VcenterBasedRemoteInfo& VcenterBasedRemoteInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("osType"))
  {
    m_osType = OSTypeMapper::GetOSTypeForName(jsonValue.GetString("osType"));

    m_osTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vcenterConfigurationTimeStamp"))
  {
    m_vcenterConfigurationTimeStamp = jsonValue.GetString("vcenterConfigurationTimeStamp");

    m_vcenterConfigurationTimeStampHasBeenSet = true;
  }

  return *this;
}

JsonValue VcenterBasedRemoteInfo::Jsonize() const
{
  JsonValue payload;

  if(m_osTypeHasBeenSet)
  {
   payload.WithString("osType", OSTypeMapper::GetNameForOSType(m_osType));
  }

  if(m_vcenterConfigurationTimeStampHasBeenSet)
  {
   payload.WithString("vcenterConfigurationTimeStamp", m_vcenterConfigurationTimeStamp);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
