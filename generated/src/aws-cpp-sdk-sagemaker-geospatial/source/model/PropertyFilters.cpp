/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/PropertyFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

PropertyFilters::PropertyFilters() : 
    m_logicalOperator(LogicalOperator::NOT_SET),
    m_logicalOperatorHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

PropertyFilters::PropertyFilters(JsonView jsonValue) : 
    m_logicalOperator(LogicalOperator::NOT_SET),
    m_logicalOperatorHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyFilters& PropertyFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogicalOperator"))
  {
    m_logicalOperator = LogicalOperatorMapper::GetLogicalOperatorForName(jsonValue.GetString("LogicalOperator"));

    m_logicalOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Properties"))
  {
    Aws::Utils::Array<JsonView> propertiesJsonList = jsonValue.GetArray("Properties");
    for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
    {
      m_properties.push_back(propertiesJsonList[propertiesIndex].AsObject());
    }
    m_propertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyFilters::Jsonize() const
{
  JsonValue payload;

  if(m_logicalOperatorHasBeenSet)
  {
   payload.WithString("LogicalOperator", LogicalOperatorMapper::GetNameForLogicalOperator(m_logicalOperator));
  }

  if(m_propertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertiesJsonList(m_properties.size());
   for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
   {
     propertiesJsonList[propertiesIndex].AsObject(m_properties[propertiesIndex].Jsonize());
   }
   payload.WithArray("Properties", std::move(propertiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
