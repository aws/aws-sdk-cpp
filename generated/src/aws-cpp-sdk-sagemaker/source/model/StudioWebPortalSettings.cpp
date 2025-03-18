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

StudioWebPortalSettings::StudioWebPortalSettings(JsonView jsonValue)
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
  if(jsonValue.ValueExists("HiddenInstanceTypes"))
  {
    Aws::Utils::Array<JsonView> hiddenInstanceTypesJsonList = jsonValue.GetArray("HiddenInstanceTypes");
    for(unsigned hiddenInstanceTypesIndex = 0; hiddenInstanceTypesIndex < hiddenInstanceTypesJsonList.GetLength(); ++hiddenInstanceTypesIndex)
    {
      m_hiddenInstanceTypes.push_back(AppInstanceTypeMapper::GetAppInstanceTypeForName(hiddenInstanceTypesJsonList[hiddenInstanceTypesIndex].AsString()));
    }
    m_hiddenInstanceTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HiddenSageMakerImageVersionAliases"))
  {
    Aws::Utils::Array<JsonView> hiddenSageMakerImageVersionAliasesJsonList = jsonValue.GetArray("HiddenSageMakerImageVersionAliases");
    for(unsigned hiddenSageMakerImageVersionAliasesIndex = 0; hiddenSageMakerImageVersionAliasesIndex < hiddenSageMakerImageVersionAliasesJsonList.GetLength(); ++hiddenSageMakerImageVersionAliasesIndex)
    {
      m_hiddenSageMakerImageVersionAliases.push_back(hiddenSageMakerImageVersionAliasesJsonList[hiddenSageMakerImageVersionAliasesIndex].AsObject());
    }
    m_hiddenSageMakerImageVersionAliasesHasBeenSet = true;
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

  if(m_hiddenInstanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hiddenInstanceTypesJsonList(m_hiddenInstanceTypes.size());
   for(unsigned hiddenInstanceTypesIndex = 0; hiddenInstanceTypesIndex < hiddenInstanceTypesJsonList.GetLength(); ++hiddenInstanceTypesIndex)
   {
     hiddenInstanceTypesJsonList[hiddenInstanceTypesIndex].AsString(AppInstanceTypeMapper::GetNameForAppInstanceType(m_hiddenInstanceTypes[hiddenInstanceTypesIndex]));
   }
   payload.WithArray("HiddenInstanceTypes", std::move(hiddenInstanceTypesJsonList));

  }

  if(m_hiddenSageMakerImageVersionAliasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hiddenSageMakerImageVersionAliasesJsonList(m_hiddenSageMakerImageVersionAliases.size());
   for(unsigned hiddenSageMakerImageVersionAliasesIndex = 0; hiddenSageMakerImageVersionAliasesIndex < hiddenSageMakerImageVersionAliasesJsonList.GetLength(); ++hiddenSageMakerImageVersionAliasesIndex)
   {
     hiddenSageMakerImageVersionAliasesJsonList[hiddenSageMakerImageVersionAliasesIndex].AsObject(m_hiddenSageMakerImageVersionAliases[hiddenSageMakerImageVersionAliasesIndex].Jsonize());
   }
   payload.WithArray("HiddenSageMakerImageVersionAliases", std::move(hiddenSageMakerImageVersionAliasesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
