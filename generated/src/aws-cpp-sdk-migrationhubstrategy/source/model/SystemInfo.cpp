/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/SystemInfo.h>
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

SystemInfo::SystemInfo() : 
    m_cpuArchitectureHasBeenSet(false),
    m_fileSystemTypeHasBeenSet(false),
    m_networkInfoListHasBeenSet(false),
    m_osInfoHasBeenSet(false)
{
}

SystemInfo::SystemInfo(JsonView jsonValue) : 
    m_cpuArchitectureHasBeenSet(false),
    m_fileSystemTypeHasBeenSet(false),
    m_networkInfoListHasBeenSet(false),
    m_osInfoHasBeenSet(false)
{
  *this = jsonValue;
}

SystemInfo& SystemInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cpuArchitecture"))
  {
    m_cpuArchitecture = jsonValue.GetString("cpuArchitecture");

    m_cpuArchitectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileSystemType"))
  {
    m_fileSystemType = jsonValue.GetString("fileSystemType");

    m_fileSystemTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInfoList"))
  {
    Aws::Utils::Array<JsonView> networkInfoListJsonList = jsonValue.GetArray("networkInfoList");
    for(unsigned networkInfoListIndex = 0; networkInfoListIndex < networkInfoListJsonList.GetLength(); ++networkInfoListIndex)
    {
      m_networkInfoList.push_back(networkInfoListJsonList[networkInfoListIndex].AsObject());
    }
    m_networkInfoListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("osInfo"))
  {
    m_osInfo = jsonValue.GetObject("osInfo");

    m_osInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue SystemInfo::Jsonize() const
{
  JsonValue payload;

  if(m_cpuArchitectureHasBeenSet)
  {
   payload.WithString("cpuArchitecture", m_cpuArchitecture);

  }

  if(m_fileSystemTypeHasBeenSet)
  {
   payload.WithString("fileSystemType", m_fileSystemType);

  }

  if(m_networkInfoListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInfoListJsonList(m_networkInfoList.size());
   for(unsigned networkInfoListIndex = 0; networkInfoListIndex < networkInfoListJsonList.GetLength(); ++networkInfoListIndex)
   {
     networkInfoListJsonList[networkInfoListIndex].AsObject(m_networkInfoList[networkInfoListIndex].Jsonize());
   }
   payload.WithArray("networkInfoList", std::move(networkInfoListJsonList));

  }

  if(m_osInfoHasBeenSet)
  {
   payload.WithObject("osInfo", m_osInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
