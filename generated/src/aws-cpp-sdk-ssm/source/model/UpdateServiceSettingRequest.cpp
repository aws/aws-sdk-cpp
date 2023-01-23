/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/UpdateServiceSettingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServiceSettingRequest::UpdateServiceSettingRequest() : 
    m_settingIdHasBeenSet(false),
    m_settingValueHasBeenSet(false)
{
}

Aws::String UpdateServiceSettingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_settingIdHasBeenSet)
  {
   payload.WithString("SettingId", m_settingId);

  }

  if(m_settingValueHasBeenSet)
  {
   payload.WithString("SettingValue", m_settingValue);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateServiceSettingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.UpdateServiceSetting"));
  return headers;

}




