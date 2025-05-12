/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowDedupeStrategy.h>
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

DataIntegrationFlowDedupeStrategy::DataIntegrationFlowDedupeStrategy(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationFlowDedupeStrategy& DataIntegrationFlowDedupeStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = DataIntegrationFlowDedupeStrategyTypeMapper::GetDataIntegrationFlowDedupeStrategyTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fieldPriority"))
  {
    m_fieldPriority = jsonValue.GetObject("fieldPriority");
    m_fieldPriorityHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationFlowDedupeStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DataIntegrationFlowDedupeStrategyTypeMapper::GetNameForDataIntegrationFlowDedupeStrategyType(m_type));
  }

  if(m_fieldPriorityHasBeenSet)
  {
   payload.WithObject("fieldPriority", m_fieldPriority.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
