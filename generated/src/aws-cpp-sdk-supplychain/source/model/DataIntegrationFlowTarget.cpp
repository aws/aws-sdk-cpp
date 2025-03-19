/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowTarget.h>
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

DataIntegrationFlowTarget::DataIntegrationFlowTarget(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationFlowTarget& DataIntegrationFlowTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetType"))
  {
    m_targetType = DataIntegrationFlowTargetTypeMapper::GetDataIntegrationFlowTargetTypeForName(jsonValue.GetString("targetType"));
    m_targetTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Target"))
  {
    m_s3Target = jsonValue.GetObject("s3Target");
    m_s3TargetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("datasetTarget"))
  {
    m_datasetTarget = jsonValue.GetObject("datasetTarget");
    m_datasetTargetHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationFlowTarget::Jsonize() const
{
  JsonValue payload;

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("targetType", DataIntegrationFlowTargetTypeMapper::GetNameForDataIntegrationFlowTargetType(m_targetType));
  }

  if(m_s3TargetHasBeenSet)
  {
   payload.WithObject("s3Target", m_s3Target.Jsonize());

  }

  if(m_datasetTargetHasBeenSet)
  {
   payload.WithObject("datasetTarget", m_datasetTarget.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
