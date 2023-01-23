/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ResetServiceSettingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResetServiceSettingRequest::ResetServiceSettingRequest() : 
    m_settingIdHasBeenSet(false)
{
}

Aws::String ResetServiceSettingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_settingIdHasBeenSet)
  {
   payload.WithString("SettingId", m_settingId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ResetServiceSettingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.ResetServiceSetting"));
  return headers;

}




