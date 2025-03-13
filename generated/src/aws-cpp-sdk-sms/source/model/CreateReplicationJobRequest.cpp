/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/CreateReplicationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateReplicationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("serverId", m_serverId);

  }

  if(m_seedReplicationTimeHasBeenSet)
  {
   payload.WithDouble("seedReplicationTime", m_seedReplicationTime.SecondsWithMSPrecision());
  }

  if(m_frequencyHasBeenSet)
  {
   payload.WithInteger("frequency", m_frequency);

  }

  if(m_runOnceHasBeenSet)
  {
   payload.WithBool("runOnce", m_runOnce);

  }

  if(m_licenseTypeHasBeenSet)
  {
   payload.WithString("licenseType", LicenseTypeMapper::GetNameForLicenseType(m_licenseType));
  }

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("roleName", m_roleName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_numberOfRecentAmisToKeepHasBeenSet)
  {
   payload.WithInteger("numberOfRecentAmisToKeep", m_numberOfRecentAmisToKeep);

  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("encrypted", m_encrypted);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateReplicationJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.CreateReplicationJob"));
  return headers;

}




