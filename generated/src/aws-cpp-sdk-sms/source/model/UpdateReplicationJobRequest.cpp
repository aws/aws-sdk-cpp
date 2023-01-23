/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/UpdateReplicationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateReplicationJobRequest::UpdateReplicationJobRequest() : 
    m_replicationJobIdHasBeenSet(false),
    m_frequency(0),
    m_frequencyHasBeenSet(false),
    m_nextReplicationRunStartTimeHasBeenSet(false),
    m_licenseType(LicenseType::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_numberOfRecentAmisToKeep(0),
    m_numberOfRecentAmisToKeepHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

Aws::String UpdateReplicationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationJobIdHasBeenSet)
  {
   payload.WithString("replicationJobId", m_replicationJobId);

  }

  if(m_frequencyHasBeenSet)
  {
   payload.WithInteger("frequency", m_frequency);

  }

  if(m_nextReplicationRunStartTimeHasBeenSet)
  {
   payload.WithDouble("nextReplicationRunStartTime", m_nextReplicationRunStartTime.SecondsWithMSPrecision());
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

Aws::Http::HeaderValueCollection UpdateReplicationJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.UpdateReplicationJob"));
  return headers;

}




