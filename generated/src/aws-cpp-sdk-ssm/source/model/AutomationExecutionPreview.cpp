/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AutomationExecutionPreview.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

AutomationExecutionPreview::AutomationExecutionPreview(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomationExecutionPreview& AutomationExecutionPreview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StepPreviews"))
  {
    Aws::Map<Aws::String, JsonView> stepPreviewsJsonMap = jsonValue.GetObject("StepPreviews").GetAllObjects();
    for(auto& stepPreviewsItem : stepPreviewsJsonMap)
    {
      m_stepPreviews[ImpactTypeMapper::GetImpactTypeForName(stepPreviewsItem.first)] = stepPreviewsItem.second.AsInteger();
    }
    m_stepPreviewsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("Regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetPreviews"))
  {
    Aws::Utils::Array<JsonView> targetPreviewsJsonList = jsonValue.GetArray("TargetPreviews");
    for(unsigned targetPreviewsIndex = 0; targetPreviewsIndex < targetPreviewsJsonList.GetLength(); ++targetPreviewsIndex)
    {
      m_targetPreviews.push_back(targetPreviewsJsonList[targetPreviewsIndex].AsObject());
    }
    m_targetPreviewsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalAccounts"))
  {
    m_totalAccounts = jsonValue.GetInteger("TotalAccounts");
    m_totalAccountsHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomationExecutionPreview::Jsonize() const
{
  JsonValue payload;

  if(m_stepPreviewsHasBeenSet)
  {
   JsonValue stepPreviewsJsonMap;
   for(auto& stepPreviewsItem : m_stepPreviews)
   {
     stepPreviewsJsonMap.WithInteger(ImpactTypeMapper::GetNameForImpactType(stepPreviewsItem.first), stepPreviewsItem.second);
   }
   payload.WithObject("StepPreviews", std::move(stepPreviewsJsonMap));

  }

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("Regions", std::move(regionsJsonList));

  }

  if(m_targetPreviewsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetPreviewsJsonList(m_targetPreviews.size());
   for(unsigned targetPreviewsIndex = 0; targetPreviewsIndex < targetPreviewsJsonList.GetLength(); ++targetPreviewsIndex)
   {
     targetPreviewsJsonList[targetPreviewsIndex].AsObject(m_targetPreviews[targetPreviewsIndex].Jsonize());
   }
   payload.WithArray("TargetPreviews", std::move(targetPreviewsJsonList));

  }

  if(m_totalAccountsHasBeenSet)
  {
   payload.WithInteger("TotalAccounts", m_totalAccounts);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
