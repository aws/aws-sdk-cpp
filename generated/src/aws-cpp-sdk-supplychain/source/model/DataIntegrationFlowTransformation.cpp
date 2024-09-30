/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowTransformation.h>
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

DataIntegrationFlowTransformation::DataIntegrationFlowTransformation() : 
    m_transformationType(DataIntegrationFlowTransformationType::NOT_SET),
    m_transformationTypeHasBeenSet(false),
    m_sqlTransformationHasBeenSet(false)
{
}

DataIntegrationFlowTransformation::DataIntegrationFlowTransformation(JsonView jsonValue)
  : DataIntegrationFlowTransformation()
{
  *this = jsonValue;
}

DataIntegrationFlowTransformation& DataIntegrationFlowTransformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("transformationType"))
  {
    m_transformationType = DataIntegrationFlowTransformationTypeMapper::GetDataIntegrationFlowTransformationTypeForName(jsonValue.GetString("transformationType"));

    m_transformationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sqlTransformation"))
  {
    m_sqlTransformation = jsonValue.GetObject("sqlTransformation");

    m_sqlTransformationHasBeenSet = true;
  }

  return *this;
}

JsonValue DataIntegrationFlowTransformation::Jsonize() const
{
  JsonValue payload;

  if(m_transformationTypeHasBeenSet)
  {
   payload.WithString("transformationType", DataIntegrationFlowTransformationTypeMapper::GetNameForDataIntegrationFlowTransformationType(m_transformationType));
  }

  if(m_sqlTransformationHasBeenSet)
  {
   payload.WithObject("sqlTransformation", m_sqlTransformation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
