/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/PutTemplateActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutTemplateActionRequest::PutTemplateActionRequest() : 
    m_actionIDHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_documentIdentifierHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_launchConfigurationTemplateIDHasBeenSet(false),
    m_mustSucceedForCutover(false),
    m_mustSucceedForCutoverHasBeenSet(false),
    m_operatingSystemHasBeenSet(false),
    m_order(0),
    m_orderHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false)
{
}

Aws::String PutTemplateActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionIDHasBeenSet)
  {
   payload.WithString("actionID", m_actionID);

  }

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", m_actionName);

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("active", m_active);

  }

  if(m_documentIdentifierHasBeenSet)
  {
   payload.WithString("documentIdentifier", m_documentIdentifier);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("documentVersion", m_documentVersion);

  }

  if(m_launchConfigurationTemplateIDHasBeenSet)
  {
   payload.WithString("launchConfigurationTemplateID", m_launchConfigurationTemplateID);

  }

  if(m_mustSucceedForCutoverHasBeenSet)
  {
   payload.WithBool("mustSucceedForCutover", m_mustSucceedForCutover);

  }

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("operatingSystem", m_operatingSystem);

  }

  if(m_orderHasBeenSet)
  {
   payload.WithInteger("order", m_order);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     Aws::Utils::Array<JsonValue> ssmParameterStoreParametersJsonList(parametersItem.second.size());
     for(unsigned ssmParameterStoreParametersIndex = 0; ssmParameterStoreParametersIndex < ssmParameterStoreParametersJsonList.GetLength(); ++ssmParameterStoreParametersIndex)
     {
       ssmParameterStoreParametersJsonList[ssmParameterStoreParametersIndex].AsObject(parametersItem.second[ssmParameterStoreParametersIndex].Jsonize());
     }
     parametersJsonMap.WithArray(parametersItem.first, std::move(ssmParameterStoreParametersJsonList));
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  if(m_timeoutSecondsHasBeenSet)
  {
   payload.WithInteger("timeoutSeconds", m_timeoutSeconds);

  }

  return payload.View().WriteReadable();
}




