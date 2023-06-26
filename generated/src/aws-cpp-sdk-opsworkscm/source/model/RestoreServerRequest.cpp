/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/RestoreServerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorksCM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RestoreServerRequest::RestoreServerRequest() : 
    m_backupIdHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_keyPairHasBeenSet(false)
{
}

Aws::String RestoreServerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backupIdHasBeenSet)
  {
   payload.WithString("BackupId", m_backupId);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_keyPairHasBeenSet)
  {
   payload.WithString("KeyPair", m_keyPair);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RestoreServerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorksCM_V2016_11_01.RestoreServer"));
  return headers;

}




