/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/OptimizationObjective.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

OptimizationObjective::OptimizationObjective() : 
    m_itemAttributeHasBeenSet(false),
    m_objectiveSensitivity(ObjectiveSensitivity::NOT_SET),
    m_objectiveSensitivityHasBeenSet(false)
{
}

OptimizationObjective::OptimizationObjective(JsonView jsonValue) : 
    m_itemAttributeHasBeenSet(false),
    m_objectiveSensitivity(ObjectiveSensitivity::NOT_SET),
    m_objectiveSensitivityHasBeenSet(false)
{
  *this = jsonValue;
}

OptimizationObjective& OptimizationObjective::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("itemAttribute"))
  {
    m_itemAttribute = jsonValue.GetString("itemAttribute");

    m_itemAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("objectiveSensitivity"))
  {
    m_objectiveSensitivity = ObjectiveSensitivityMapper::GetObjectiveSensitivityForName(jsonValue.GetString("objectiveSensitivity"));

    m_objectiveSensitivityHasBeenSet = true;
  }

  return *this;
}

JsonValue OptimizationObjective::Jsonize() const
{
  JsonValue payload;

  if(m_itemAttributeHasBeenSet)
  {
   payload.WithString("itemAttribute", m_itemAttribute);

  }

  if(m_objectiveSensitivityHasBeenSet)
  {
   payload.WithString("objectiveSensitivity", ObjectiveSensitivityMapper::GetNameForObjectiveSensitivity(m_objectiveSensitivity));
  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
