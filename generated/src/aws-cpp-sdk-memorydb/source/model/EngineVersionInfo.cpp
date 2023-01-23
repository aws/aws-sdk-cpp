/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/EngineVersionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

EngineVersionInfo::EngineVersionInfo() : 
    m_engineVersionHasBeenSet(false),
    m_enginePatchVersionHasBeenSet(false),
    m_parameterGroupFamilyHasBeenSet(false)
{
}

EngineVersionInfo::EngineVersionInfo(JsonView jsonValue) : 
    m_engineVersionHasBeenSet(false),
    m_enginePatchVersionHasBeenSet(false),
    m_parameterGroupFamilyHasBeenSet(false)
{
  *this = jsonValue;
}

EngineVersionInfo& EngineVersionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnginePatchVersion"))
  {
    m_enginePatchVersion = jsonValue.GetString("EnginePatchVersion");

    m_enginePatchVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterGroupFamily"))
  {
    m_parameterGroupFamily = jsonValue.GetString("ParameterGroupFamily");

    m_parameterGroupFamilyHasBeenSet = true;
  }

  return *this;
}

JsonValue EngineVersionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_enginePatchVersionHasBeenSet)
  {
   payload.WithString("EnginePatchVersion", m_enginePatchVersion);

  }

  if(m_parameterGroupFamilyHasBeenSet)
  {
   payload.WithString("ParameterGroupFamily", m_parameterGroupFamily);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
