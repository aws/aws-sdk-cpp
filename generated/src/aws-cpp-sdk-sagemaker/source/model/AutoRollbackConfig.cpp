/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoRollbackConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AutoRollbackConfig::AutoRollbackConfig() : 
    m_alarmsHasBeenSet(false)
{
}

AutoRollbackConfig::AutoRollbackConfig(JsonView jsonValue) : 
    m_alarmsHasBeenSet(false)
{
  *this = jsonValue;
}

AutoRollbackConfig& AutoRollbackConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Alarms"))
  {
    Aws::Utils::Array<JsonView> alarmsJsonList = jsonValue.GetArray("Alarms");
    for(unsigned alarmsIndex = 0; alarmsIndex < alarmsJsonList.GetLength(); ++alarmsIndex)
    {
      m_alarms.push_back(alarmsJsonList[alarmsIndex].AsObject());
    }
    m_alarmsHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoRollbackConfig::Jsonize() const
{
  JsonValue payload;

  if(m_alarmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> alarmsJsonList(m_alarms.size());
   for(unsigned alarmsIndex = 0; alarmsIndex < alarmsJsonList.GetLength(); ++alarmsIndex)
   {
     alarmsJsonList[alarmsIndex].AsObject(m_alarms[alarmsIndex].Jsonize());
   }
   payload.WithArray("Alarms", std::move(alarmsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
