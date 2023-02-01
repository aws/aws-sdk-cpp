/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/EmptyVisual.h>
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

EmptyVisual::EmptyVisual() : 
    m_visualIdHasBeenSet(false),
    m_dataSetIdentifierHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

EmptyVisual::EmptyVisual(JsonView jsonValue) : 
    m_visualIdHasBeenSet(false),
    m_dataSetIdentifierHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
  *this = jsonValue;
}

EmptyVisual& EmptyVisual::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VisualId"))
  {
    m_visualId = jsonValue.GetString("VisualId");

    m_visualIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetIdentifier"))
  {
    m_dataSetIdentifier = jsonValue.GetString("DataSetIdentifier");

    m_dataSetIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }

  return *this;
}

JsonValue EmptyVisual::Jsonize() const
{
  JsonValue payload;

  if(m_visualIdHasBeenSet)
  {
   payload.WithString("VisualId", m_visualId);

  }

  if(m_dataSetIdentifierHasBeenSet)
  {
   payload.WithString("DataSetIdentifier", m_dataSetIdentifier);

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
