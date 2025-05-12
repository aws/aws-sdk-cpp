/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowDatasetOptions.h>
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

DataIntegrationFlowDatasetOptions::DataIntegrationFlowDatasetOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationFlowDatasetOptions& DataIntegrationFlowDatasetOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("loadType"))
  {
    m_loadType = DataIntegrationFlowLoadTypeMapper::GetDataIntegrationFlowLoadTypeForName(jsonValue.GetString("loadType"));
    m_loadTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dedupeRecords"))
  {
    m_dedupeRecords = jsonValue.GetBool("dedupeRecords");
    m_dedupeRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dedupeStrategy"))
  {
    m_dedupeStrategy = jsonValue.GetObject("dedupeStrategy");
    m_dedupeStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationFlowDatasetOptions::Jsonize() const
{
  JsonValue payload;

  if(m_loadTypeHasBeenSet)
  {
   payload.WithString("loadType", DataIntegrationFlowLoadTypeMapper::GetNameForDataIntegrationFlowLoadType(m_loadType));
  }

  if(m_dedupeRecordsHasBeenSet)
  {
   payload.WithBool("dedupeRecords", m_dedupeRecords);

  }

  if(m_dedupeStrategyHasBeenSet)
  {
   payload.WithObject("dedupeStrategy", m_dedupeStrategy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
