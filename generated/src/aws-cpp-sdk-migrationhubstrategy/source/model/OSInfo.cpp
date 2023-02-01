/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/OSInfo.h>
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

OSInfo::OSInfo() : 
    m_type(OSType::NOT_SET),
    m_typeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

OSInfo::OSInfo(JsonView jsonValue) : 
    m_type(OSType::NOT_SET),
    m_typeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

OSInfo& OSInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = OSTypeMapper::GetOSTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue OSInfo::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", OSTypeMapper::GetNameForOSType(m_type));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
