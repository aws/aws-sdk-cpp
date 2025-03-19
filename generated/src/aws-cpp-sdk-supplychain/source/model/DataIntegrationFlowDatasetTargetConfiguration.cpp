/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowDatasetTargetConfiguration.h>
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

DataIntegrationFlowDatasetTargetConfiguration::DataIntegrationFlowDatasetTargetConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationFlowDatasetTargetConfiguration& DataIntegrationFlowDatasetTargetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("datasetIdentifier"))
  {
    m_datasetIdentifier = jsonValue.GetString("datasetIdentifier");
    m_datasetIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("options"))
  {
    m_options = jsonValue.GetObject("options");
    m_optionsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationFlowDatasetTargetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_datasetIdentifierHasBeenSet)
  {
   payload.WithString("datasetIdentifier", m_datasetIdentifier);

  }

  if(m_optionsHasBeenSet)
  {
   payload.WithObject("options", m_options.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
