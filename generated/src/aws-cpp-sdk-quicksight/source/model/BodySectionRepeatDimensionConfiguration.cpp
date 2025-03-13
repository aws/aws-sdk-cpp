/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BodySectionRepeatDimensionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

BodySectionRepeatDimensionConfiguration::BodySectionRepeatDimensionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BodySectionRepeatDimensionConfiguration& BodySectionRepeatDimensionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DynamicCategoryDimensionConfiguration"))
  {
    m_dynamicCategoryDimensionConfiguration = jsonValue.GetObject("DynamicCategoryDimensionConfiguration");
    m_dynamicCategoryDimensionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamicNumericDimensionConfiguration"))
  {
    m_dynamicNumericDimensionConfiguration = jsonValue.GetObject("DynamicNumericDimensionConfiguration");
    m_dynamicNumericDimensionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue BodySectionRepeatDimensionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dynamicCategoryDimensionConfigurationHasBeenSet)
  {
   payload.WithObject("DynamicCategoryDimensionConfiguration", m_dynamicCategoryDimensionConfiguration.Jsonize());

  }

  if(m_dynamicNumericDimensionConfigurationHasBeenSet)
  {
   payload.WithObject("DynamicNumericDimensionConfiguration", m_dynamicNumericDimensionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
