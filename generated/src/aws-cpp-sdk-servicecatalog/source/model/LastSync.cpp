/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/LastSync.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

LastSync::LastSync() : 
    m_lastSyncTimeHasBeenSet(false),
    m_lastSyncStatus(LastSyncStatus::NOT_SET),
    m_lastSyncStatusHasBeenSet(false),
    m_lastSyncStatusMessageHasBeenSet(false),
    m_lastSuccessfulSyncTimeHasBeenSet(false),
    m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet(false)
{
}

LastSync::LastSync(JsonView jsonValue) : 
    m_lastSyncTimeHasBeenSet(false),
    m_lastSyncStatus(LastSyncStatus::NOT_SET),
    m_lastSyncStatusHasBeenSet(false),
    m_lastSyncStatusMessageHasBeenSet(false),
    m_lastSuccessfulSyncTimeHasBeenSet(false),
    m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet(false)
{
  *this = jsonValue;
}

LastSync& LastSync::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastSyncTime"))
  {
    m_lastSyncTime = jsonValue.GetDouble("LastSyncTime");

    m_lastSyncTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSyncStatus"))
  {
    m_lastSyncStatus = LastSyncStatusMapper::GetLastSyncStatusForName(jsonValue.GetString("LastSyncStatus"));

    m_lastSyncStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSyncStatusMessage"))
  {
    m_lastSyncStatusMessage = jsonValue.GetString("LastSyncStatusMessage");

    m_lastSyncStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulSyncTime"))
  {
    m_lastSuccessfulSyncTime = jsonValue.GetDouble("LastSuccessfulSyncTime");

    m_lastSuccessfulSyncTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulSyncProvisioningArtifactId"))
  {
    m_lastSuccessfulSyncProvisioningArtifactId = jsonValue.GetString("LastSuccessfulSyncProvisioningArtifactId");

    m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet = true;
  }

  return *this;
}

JsonValue LastSync::Jsonize() const
{
  JsonValue payload;

  if(m_lastSyncTimeHasBeenSet)
  {
   payload.WithDouble("LastSyncTime", m_lastSyncTime.SecondsWithMSPrecision());
  }

  if(m_lastSyncStatusHasBeenSet)
  {
   payload.WithString("LastSyncStatus", LastSyncStatusMapper::GetNameForLastSyncStatus(m_lastSyncStatus));
  }

  if(m_lastSyncStatusMessageHasBeenSet)
  {
   payload.WithString("LastSyncStatusMessage", m_lastSyncStatusMessage);

  }

  if(m_lastSuccessfulSyncTimeHasBeenSet)
  {
   payload.WithDouble("LastSuccessfulSyncTime", m_lastSuccessfulSyncTime.SecondsWithMSPrecision());
  }

  if(m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet)
  {
   payload.WithString("LastSuccessfulSyncProvisioningArtifactId", m_lastSuccessfulSyncProvisioningArtifactId);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
