/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration::DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration& DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fields"))
  {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("fields");
    for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
    {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
   for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
   {
     fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
   }
   payload.WithArray("fields", std::move(fieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
