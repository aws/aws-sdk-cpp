/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SameSheetTargetVisualConfiguration.h>
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

SameSheetTargetVisualConfiguration::SameSheetTargetVisualConfiguration() : 
    m_targetVisualsHasBeenSet(false),
    m_targetVisualOptions(TargetVisualOptions::NOT_SET),
    m_targetVisualOptionsHasBeenSet(false)
{
}

SameSheetTargetVisualConfiguration::SameSheetTargetVisualConfiguration(JsonView jsonValue) : 
    m_targetVisualsHasBeenSet(false),
    m_targetVisualOptions(TargetVisualOptions::NOT_SET),
    m_targetVisualOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

SameSheetTargetVisualConfiguration& SameSheetTargetVisualConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetVisuals"))
  {
    Aws::Utils::Array<JsonView> targetVisualsJsonList = jsonValue.GetArray("TargetVisuals");
    for(unsigned targetVisualsIndex = 0; targetVisualsIndex < targetVisualsJsonList.GetLength(); ++targetVisualsIndex)
    {
      m_targetVisuals.push_back(targetVisualsJsonList[targetVisualsIndex].AsString());
    }
    m_targetVisualsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetVisualOptions"))
  {
    m_targetVisualOptions = TargetVisualOptionsMapper::GetTargetVisualOptionsForName(jsonValue.GetString("TargetVisualOptions"));

    m_targetVisualOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SameSheetTargetVisualConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_targetVisualsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetVisualsJsonList(m_targetVisuals.size());
   for(unsigned targetVisualsIndex = 0; targetVisualsIndex < targetVisualsJsonList.GetLength(); ++targetVisualsIndex)
   {
     targetVisualsJsonList[targetVisualsIndex].AsString(m_targetVisuals[targetVisualsIndex]);
   }
   payload.WithArray("TargetVisuals", std::move(targetVisualsJsonList));

  }

  if(m_targetVisualOptionsHasBeenSet)
  {
   payload.WithString("TargetVisualOptions", TargetVisualOptionsMapper::GetNameForTargetVisualOptions(m_targetVisualOptions));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
