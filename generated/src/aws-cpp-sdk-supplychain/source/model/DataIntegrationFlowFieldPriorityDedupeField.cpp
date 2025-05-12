/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowFieldPriorityDedupeField.h>
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

DataIntegrationFlowFieldPriorityDedupeField::DataIntegrationFlowFieldPriorityDedupeField(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationFlowFieldPriorityDedupeField& DataIntegrationFlowFieldPriorityDedupeField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = DataIntegrationFlowFieldPriorityDedupeSortOrderMapper::GetDataIntegrationFlowFieldPriorityDedupeSortOrderForName(jsonValue.GetString("sortOrder"));
    m_sortOrderHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationFlowFieldPriorityDedupeField::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", DataIntegrationFlowFieldPriorityDedupeSortOrderMapper::GetNameForDataIntegrationFlowFieldPriorityDedupeSortOrder(m_sortOrder));
  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
