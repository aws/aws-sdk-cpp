/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StudioWebPortalSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

StudioWebPortalSettings::StudioWebPortalSettings() : 
    m_hiddenMlToolsHasBeenSet(false),
    m_hiddenAppTypesHasBeenSet(false)
{
}

StudioWebPortalSettings::StudioWebPortalSettings(JsonView jsonValue)
  : StudioWebPortalSettings()
{
  *this = jsonValue;
}

StudioWebPortalSettings& StudioWebPortalSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HiddenMlTools"))
  {
    Aws::Utils::Array<JsonView> hiddenMlToolsJsonList = jsonValue.GetArray("HiddenMlTools");
    for(unsigned hiddenMlToolsIndex = 0; hiddenMlToolsIndex < hiddenMlToolsJsonList.GetLength(); ++hiddenMlToolsIndex)
    {
      m_hiddenMlTools.push_back(MlToolsMapper::GetMlToolsForName(hiddenMlToolsJsonList[hiddenMlToolsIndex].AsString()));
    }
    m_hiddenMlToolsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HiddenAppTypes"))
  {
    Aws::Utils::Array<JsonView> hiddenAppTypesJsonList = jsonValue.GetArray("HiddenAppTypes");
    for(unsigned hiddenAppTypesIndex = 0; hiddenAppTypesIndex < hiddenAppTypesJsonList.GetLength(); ++hiddenAppTypesIndex)
    {
      m_hiddenAppTypes.push_back(AppTypeMapper::GetAppTypeForName(hiddenAppTypesJsonList[hiddenAppTypesIndex].AsString()));
    }
    m_hiddenAppTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue StudioWebPortalSettings::Jsonize() const
{
  JsonValue payload;

  if(m_hiddenMlToolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hiddenMlToolsJsonList(m_hiddenMlTools.size());
   for(unsigned hiddenMlToolsIndex = 0; hiddenMlToolsIndex < hiddenMlToolsJsonList.GetLength(); ++hiddenMlToolsIndex)
   {
     hiddenMlToolsJsonList[hiddenMlToolsIndex].AsString(MlToolsMapper::GetNameForMlTools(m_hiddenMlTools[hiddenMlToolsIndex]));
   }
   payload.WithArray("HiddenMlTools", std::move(hiddenMlToolsJsonList));

  }

  if(m_hiddenAppTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hiddenAppTypesJsonList(m_hiddenAppTypes.size());
   for(unsigned hiddenAppTypesIndex = 0; hiddenAppTypesIndex < hiddenAppTypesJsonList.GetLength(); ++hiddenAppTypesIndex)
   {
     hiddenAppTypesJsonList[hiddenAppTypesIndex].AsString(AppTypeMapper::GetNameForAppType(m_hiddenAppTypes[hiddenAppTypesIndex]));
   }
   payload.WithArray("HiddenAppTypes", std::move(hiddenAppTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
