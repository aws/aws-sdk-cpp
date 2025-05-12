/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationEventDatasetTargetDetails.h>
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

DataIntegrationEventDatasetTargetDetails::DataIntegrationEventDatasetTargetDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationEventDatasetTargetDetails& DataIntegrationEventDatasetTargetDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("datasetIdentifier"))
  {
    m_datasetIdentifier = jsonValue.GetString("datasetIdentifier");
    m_datasetIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operationType"))
  {
    m_operationType = DataIntegrationEventDatasetOperationTypeMapper::GetDataIntegrationEventDatasetOperationTypeForName(jsonValue.GetString("operationType"));
    m_operationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("datasetLoadExecution"))
  {
    m_datasetLoadExecution = jsonValue.GetObject("datasetLoadExecution");
    m_datasetLoadExecutionHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationEventDatasetTargetDetails::Jsonize() const
{
  JsonValue payload;

  if(m_datasetIdentifierHasBeenSet)
  {
   payload.WithString("datasetIdentifier", m_datasetIdentifier);

  }

  if(m_operationTypeHasBeenSet)
  {
   payload.WithString("operationType", DataIntegrationEventDatasetOperationTypeMapper::GetNameForDataIntegrationEventDatasetOperationType(m_operationType));
  }

  if(m_datasetLoadExecutionHasBeenSet)
  {
   payload.WithObject("datasetLoadExecution", m_datasetLoadExecution.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
