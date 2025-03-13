/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicVisual.h>
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

TopicVisual::TopicVisual(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicVisual& TopicVisual::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VisualId"))
  {
    m_visualId = jsonValue.GetString("VisualId");
    m_visualIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Role"))
  {
    m_role = VisualRoleMapper::GetVisualRoleForName(jsonValue.GetString("Role"));
    m_roleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ir"))
  {
    m_ir = jsonValue.GetObject("Ir");
    m_irHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportingVisuals"))
  {
    Aws::Utils::Array<JsonView> supportingVisualsJsonList = jsonValue.GetArray("SupportingVisuals");
    for(unsigned supportingVisualsIndex = 0; supportingVisualsIndex < supportingVisualsJsonList.GetLength(); ++supportingVisualsIndex)
    {
      m_supportingVisuals.push_back(supportingVisualsJsonList[supportingVisualsIndex].AsObject());
    }
    m_supportingVisualsHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicVisual::Jsonize() const
{
  JsonValue payload;

  if(m_visualIdHasBeenSet)
  {
   payload.WithString("VisualId", m_visualId);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", VisualRoleMapper::GetNameForVisualRole(m_role));
  }

  if(m_irHasBeenSet)
  {
   payload.WithObject("Ir", m_ir.Jsonize());

  }

  if(m_supportingVisualsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportingVisualsJsonList(m_supportingVisuals.size());
   for(unsigned supportingVisualsIndex = 0; supportingVisualsIndex < supportingVisualsJsonList.GetLength(); ++supportingVisualsIndex)
   {
     supportingVisualsJsonList[supportingVisualsIndex].AsObject(m_supportingVisuals[supportingVisualsIndex].Jsonize());
   }
   payload.WithArray("SupportingVisuals", std::move(supportingVisualsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
