/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/SsmAutomation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

SsmAutomation::SsmAutomation() : 
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_dynamicParametersHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_targetAccount(SsmTargetAccount::NOT_SET),
    m_targetAccountHasBeenSet(false)
{
}

SsmAutomation::SsmAutomation(JsonView jsonValue) : 
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_dynamicParametersHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_targetAccount(SsmTargetAccount::NOT_SET),
    m_targetAccountHasBeenSet(false)
{
  *this = jsonValue;
}

SsmAutomation& SsmAutomation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("documentName"))
  {
    m_documentName = jsonValue.GetString("documentName");

    m_documentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("documentVersion"))
  {
    m_documentVersion = jsonValue.GetString("documentVersion");

    m_documentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dynamicParameters"))
  {
    Aws::Map<Aws::String, JsonView> dynamicParametersJsonMap = jsonValue.GetObject("dynamicParameters").GetAllObjects();
    for(auto& dynamicParametersItem : dynamicParametersJsonMap)
    {
      m_dynamicParameters[dynamicParametersItem.first] = dynamicParametersItem.second.AsObject();
    }
    m_dynamicParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      Aws::Utils::Array<JsonView> ssmParameterValuesJsonList = parametersItem.second.AsArray();
      Aws::Vector<Aws::String> ssmParameterValuesList;
      ssmParameterValuesList.reserve((size_t)ssmParameterValuesJsonList.GetLength());
      for(unsigned ssmParameterValuesIndex = 0; ssmParameterValuesIndex < ssmParameterValuesJsonList.GetLength(); ++ssmParameterValuesIndex)
      {
        ssmParameterValuesList.push_back(ssmParameterValuesJsonList[ssmParameterValuesIndex].AsString());
      }
      m_parameters[parametersItem.first] = std::move(ssmParameterValuesList);
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetAccount"))
  {
    m_targetAccount = SsmTargetAccountMapper::GetSsmTargetAccountForName(jsonValue.GetString("targetAccount"));

    m_targetAccountHasBeenSet = true;
  }

  return *this;
}

JsonValue SsmAutomation::Jsonize() const
{
  JsonValue payload;

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("documentName", m_documentName);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("documentVersion", m_documentVersion);

  }

  if(m_dynamicParametersHasBeenSet)
  {
   JsonValue dynamicParametersJsonMap;
   for(auto& dynamicParametersItem : m_dynamicParameters)
   {
     dynamicParametersJsonMap.WithObject(dynamicParametersItem.first, dynamicParametersItem.second.Jsonize());
   }
   payload.WithObject("dynamicParameters", std::move(dynamicParametersJsonMap));

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     Aws::Utils::Array<JsonValue> ssmParameterValuesJsonList(parametersItem.second.size());
     for(unsigned ssmParameterValuesIndex = 0; ssmParameterValuesIndex < ssmParameterValuesJsonList.GetLength(); ++ssmParameterValuesIndex)
     {
       ssmParameterValuesJsonList[ssmParameterValuesIndex].AsString(parametersItem.second[ssmParameterValuesIndex]);
     }
     parametersJsonMap.WithArray(parametersItem.first, std::move(ssmParameterValuesJsonList));
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_targetAccountHasBeenSet)
  {
   payload.WithString("targetAccount", SsmTargetAccountMapper::GetNameForSsmTargetAccount(m_targetAccount));
  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
