/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DataLakeReplicationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

DataLakeReplicationConfiguration::DataLakeReplicationConfiguration() : 
    m_regionsHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

DataLakeReplicationConfiguration::DataLakeReplicationConfiguration(JsonView jsonValue) : 
    m_regionsHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

DataLakeReplicationConfiguration& DataLakeReplicationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLakeReplicationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("regions", std::move(regionsJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
