/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/UpdateServerConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServerConfigRequest::UpdateServerConfigRequest() : 
    m_serverIdHasBeenSet(false),
    m_strategyOptionHasBeenSet(false)
{
}

Aws::String UpdateServerConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("serverId", m_serverId);

  }

  if(m_strategyOptionHasBeenSet)
  {
   payload.WithObject("strategyOption", m_strategyOption.Jsonize());

  }

  return payload.View().WriteReadable();
}




