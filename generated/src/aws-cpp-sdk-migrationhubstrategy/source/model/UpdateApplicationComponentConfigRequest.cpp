/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/UpdateApplicationComponentConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApplicationComponentConfigRequest::UpdateApplicationComponentConfigRequest() : 
    m_appType(AppType::NOT_SET),
    m_appTypeHasBeenSet(false),
    m_applicationComponentIdHasBeenSet(false),
    m_configureOnly(false),
    m_configureOnlyHasBeenSet(false),
    m_inclusionStatus(InclusionStatus::NOT_SET),
    m_inclusionStatusHasBeenSet(false),
    m_secretsManagerKeyHasBeenSet(false),
    m_sourceCodeListHasBeenSet(false),
    m_strategyOptionHasBeenSet(false)
{
}

Aws::String UpdateApplicationComponentConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appTypeHasBeenSet)
  {
   payload.WithString("appType", AppTypeMapper::GetNameForAppType(m_appType));
  }

  if(m_applicationComponentIdHasBeenSet)
  {
   payload.WithString("applicationComponentId", m_applicationComponentId);

  }

  if(m_configureOnlyHasBeenSet)
  {
   payload.WithBool("configureOnly", m_configureOnly);

  }

  if(m_inclusionStatusHasBeenSet)
  {
   payload.WithString("inclusionStatus", InclusionStatusMapper::GetNameForInclusionStatus(m_inclusionStatus));
  }

  if(m_secretsManagerKeyHasBeenSet)
  {
   payload.WithString("secretsManagerKey", m_secretsManagerKey);

  }

  if(m_sourceCodeListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceCodeListJsonList(m_sourceCodeList.size());
   for(unsigned sourceCodeListIndex = 0; sourceCodeListIndex < sourceCodeListJsonList.GetLength(); ++sourceCodeListIndex)
   {
     sourceCodeListJsonList[sourceCodeListIndex].AsObject(m_sourceCodeList[sourceCodeListIndex].Jsonize());
   }
   payload.WithArray("sourceCodeList", std::move(sourceCodeListJsonList));

  }

  if(m_strategyOptionHasBeenSet)
  {
   payload.WithObject("strategyOption", m_strategyOption.Jsonize());

  }

  return payload.View().WriteReadable();
}




