/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ReplicationJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

ReplicationJob::ReplicationJob() : 
    m_replicationJobIdHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_serverType(ServerType::NOT_SET),
    m_serverTypeHasBeenSet(false),
    m_vmServerHasBeenSet(false),
    m_seedReplicationTimeHasBeenSet(false),
    m_frequency(0),
    m_frequencyHasBeenSet(false),
    m_runOnce(false),
    m_runOnceHasBeenSet(false),
    m_nextReplicationRunStartTimeHasBeenSet(false),
    m_licenseType(LicenseType::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_latestAmiIdHasBeenSet(false),
    m_state(ReplicationJobState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_numberOfRecentAmisToKeep(0),
    m_numberOfRecentAmisToKeepHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_replicationRunListHasBeenSet(false)
{
}

ReplicationJob::ReplicationJob(JsonView jsonValue) : 
    m_replicationJobIdHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_serverType(ServerType::NOT_SET),
    m_serverTypeHasBeenSet(false),
    m_vmServerHasBeenSet(false),
    m_seedReplicationTimeHasBeenSet(false),
    m_frequency(0),
    m_frequencyHasBeenSet(false),
    m_runOnce(false),
    m_runOnceHasBeenSet(false),
    m_nextReplicationRunStartTimeHasBeenSet(false),
    m_licenseType(LicenseType::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_latestAmiIdHasBeenSet(false),
    m_state(ReplicationJobState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_numberOfRecentAmisToKeep(0),
    m_numberOfRecentAmisToKeepHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_replicationRunListHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationJob& ReplicationJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("replicationJobId"))
  {
    m_replicationJobId = jsonValue.GetString("replicationJobId");

    m_replicationJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverId"))
  {
    m_serverId = jsonValue.GetString("serverId");

    m_serverIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverType"))
  {
    m_serverType = ServerTypeMapper::GetServerTypeForName(jsonValue.GetString("serverType"));

    m_serverTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vmServer"))
  {
    m_vmServer = jsonValue.GetObject("vmServer");

    m_vmServerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("seedReplicationTime"))
  {
    m_seedReplicationTime = jsonValue.GetDouble("seedReplicationTime");

    m_seedReplicationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frequency"))
  {
    m_frequency = jsonValue.GetInteger("frequency");

    m_frequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runOnce"))
  {
    m_runOnce = jsonValue.GetBool("runOnce");

    m_runOnceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nextReplicationRunStartTime"))
  {
    m_nextReplicationRunStartTime = jsonValue.GetDouble("nextReplicationRunStartTime");

    m_nextReplicationRunStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseType"))
  {
    m_licenseType = LicenseTypeMapper::GetLicenseTypeForName(jsonValue.GetString("licenseType"));

    m_licenseTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleName"))
  {
    m_roleName = jsonValue.GetString("roleName");

    m_roleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestAmiId"))
  {
    m_latestAmiId = jsonValue.GetString("latestAmiId");

    m_latestAmiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ReplicationJobStateMapper::GetReplicationJobStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfRecentAmisToKeep"))
  {
    m_numberOfRecentAmisToKeep = jsonValue.GetInteger("numberOfRecentAmisToKeep");

    m_numberOfRecentAmisToKeepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encrypted"))
  {
    m_encrypted = jsonValue.GetBool("encrypted");

    m_encryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationRunList"))
  {
    Aws::Utils::Array<JsonView> replicationRunListJsonList = jsonValue.GetArray("replicationRunList");
    for(unsigned replicationRunListIndex = 0; replicationRunListIndex < replicationRunListJsonList.GetLength(); ++replicationRunListIndex)
    {
      m_replicationRunList.push_back(replicationRunListJsonList[replicationRunListIndex].AsObject());
    }
    m_replicationRunListHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationJob::Jsonize() const
{
  JsonValue payload;

  if(m_replicationJobIdHasBeenSet)
  {
   payload.WithString("replicationJobId", m_replicationJobId);

  }

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("serverId", m_serverId);

  }

  if(m_serverTypeHasBeenSet)
  {
   payload.WithString("serverType", ServerTypeMapper::GetNameForServerType(m_serverType));
  }

  if(m_vmServerHasBeenSet)
  {
   payload.WithObject("vmServer", m_vmServer.Jsonize());

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

  if(m_latestAmiIdHasBeenSet)
  {
   payload.WithString("latestAmiId", m_latestAmiId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ReplicationJobStateMapper::GetNameForReplicationJobState(m_state));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

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

  if(m_replicationRunListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicationRunListJsonList(m_replicationRunList.size());
   for(unsigned replicationRunListIndex = 0; replicationRunListIndex < replicationRunListJsonList.GetLength(); ++replicationRunListIndex)
   {
     replicationRunListJsonList[replicationRunListIndex].AsObject(m_replicationRunList[replicationRunListIndex].Jsonize());
   }
   payload.WithArray("replicationRunList", std::move(replicationRunListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
