/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UpdateSecurityControlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSecurityControlRequest::UpdateSecurityControlRequest() : 
    m_securityControlIdHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_lastUpdateReasonHasBeenSet(false)
{
}

Aws::String UpdateSecurityControlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_securityControlIdHasBeenSet)
  {
   payload.WithString("SecurityControlId", m_securityControlId);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.Jsonize());
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_lastUpdateReasonHasBeenSet)
  {
   payload.WithString("LastUpdateReason", m_lastUpdateReason);

  }

  return payload.View().WriteReadable();
}




