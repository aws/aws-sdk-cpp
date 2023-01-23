/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/Snapshot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

Snapshot::Snapshot() : 
    m_accountsWithProvisionedRestoreAccessHasBeenSet(false),
    m_accountsWithRestoreAccessHasBeenSet(false),
    m_actualIncrementalBackupSizeInMegaBytes(0.0),
    m_actualIncrementalBackupSizeInMegaBytesHasBeenSet(false),
    m_adminUsernameHasBeenSet(false),
    m_backupProgressInMegaBytes(0.0),
    m_backupProgressInMegaBytesHasBeenSet(false),
    m_currentBackupRateInMegaBytesPerSecond(0.0),
    m_currentBackupRateInMegaBytesPerSecondHasBeenSet(false),
    m_elapsedTimeInSeconds(0),
    m_elapsedTimeInSecondsHasBeenSet(false),
    m_estimatedSecondsToCompletion(0),
    m_estimatedSecondsToCompletionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_namespaceArnHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_snapshotArnHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_snapshotRemainingDays(0),
    m_snapshotRemainingDaysHasBeenSet(false),
    m_snapshotRetentionPeriod(0),
    m_snapshotRetentionPeriodHasBeenSet(false),
    m_snapshotRetentionStartTimeHasBeenSet(false),
    m_status(SnapshotStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_totalBackupSizeInMegaBytes(0.0),
    m_totalBackupSizeInMegaBytesHasBeenSet(false)
{
}

Snapshot::Snapshot(JsonView jsonValue) : 
    m_accountsWithProvisionedRestoreAccessHasBeenSet(false),
    m_accountsWithRestoreAccessHasBeenSet(false),
    m_actualIncrementalBackupSizeInMegaBytes(0.0),
    m_actualIncrementalBackupSizeInMegaBytesHasBeenSet(false),
    m_adminUsernameHasBeenSet(false),
    m_backupProgressInMegaBytes(0.0),
    m_backupProgressInMegaBytesHasBeenSet(false),
    m_currentBackupRateInMegaBytesPerSecond(0.0),
    m_currentBackupRateInMegaBytesPerSecondHasBeenSet(false),
    m_elapsedTimeInSeconds(0),
    m_elapsedTimeInSecondsHasBeenSet(false),
    m_estimatedSecondsToCompletion(0),
    m_estimatedSecondsToCompletionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_namespaceArnHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_snapshotArnHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_snapshotRemainingDays(0),
    m_snapshotRemainingDaysHasBeenSet(false),
    m_snapshotRetentionPeriod(0),
    m_snapshotRetentionPeriodHasBeenSet(false),
    m_snapshotRetentionStartTimeHasBeenSet(false),
    m_status(SnapshotStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_totalBackupSizeInMegaBytes(0.0),
    m_totalBackupSizeInMegaBytesHasBeenSet(false)
{
  *this = jsonValue;
}

Snapshot& Snapshot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountsWithProvisionedRestoreAccess"))
  {
    Aws::Utils::Array<JsonView> accountsWithProvisionedRestoreAccessJsonList = jsonValue.GetArray("accountsWithProvisionedRestoreAccess");
    for(unsigned accountsWithProvisionedRestoreAccessIndex = 0; accountsWithProvisionedRestoreAccessIndex < accountsWithProvisionedRestoreAccessJsonList.GetLength(); ++accountsWithProvisionedRestoreAccessIndex)
    {
      m_accountsWithProvisionedRestoreAccess.push_back(accountsWithProvisionedRestoreAccessJsonList[accountsWithProvisionedRestoreAccessIndex].AsString());
    }
    m_accountsWithProvisionedRestoreAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountsWithRestoreAccess"))
  {
    Aws::Utils::Array<JsonView> accountsWithRestoreAccessJsonList = jsonValue.GetArray("accountsWithRestoreAccess");
    for(unsigned accountsWithRestoreAccessIndex = 0; accountsWithRestoreAccessIndex < accountsWithRestoreAccessJsonList.GetLength(); ++accountsWithRestoreAccessIndex)
    {
      m_accountsWithRestoreAccess.push_back(accountsWithRestoreAccessJsonList[accountsWithRestoreAccessIndex].AsString());
    }
    m_accountsWithRestoreAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actualIncrementalBackupSizeInMegaBytes"))
  {
    m_actualIncrementalBackupSizeInMegaBytes = jsonValue.GetDouble("actualIncrementalBackupSizeInMegaBytes");

    m_actualIncrementalBackupSizeInMegaBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("adminUsername"))
  {
    m_adminUsername = jsonValue.GetString("adminUsername");

    m_adminUsernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("backupProgressInMegaBytes"))
  {
    m_backupProgressInMegaBytes = jsonValue.GetDouble("backupProgressInMegaBytes");

    m_backupProgressInMegaBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentBackupRateInMegaBytesPerSecond"))
  {
    m_currentBackupRateInMegaBytesPerSecond = jsonValue.GetDouble("currentBackupRateInMegaBytesPerSecond");

    m_currentBackupRateInMegaBytesPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("elapsedTimeInSeconds"))
  {
    m_elapsedTimeInSeconds = jsonValue.GetInt64("elapsedTimeInSeconds");

    m_elapsedTimeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedSecondsToCompletion"))
  {
    m_estimatedSecondsToCompletion = jsonValue.GetInt64("estimatedSecondsToCompletion");

    m_estimatedSecondsToCompletionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespaceArn"))
  {
    m_namespaceArn = jsonValue.GetString("namespaceArn");

    m_namespaceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

    m_namespaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("ownerAccount");

    m_ownerAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotArn"))
  {
    m_snapshotArn = jsonValue.GetString("snapshotArn");

    m_snapshotArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotCreateTime"))
  {
    m_snapshotCreateTime = jsonValue.GetString("snapshotCreateTime");

    m_snapshotCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotName"))
  {
    m_snapshotName = jsonValue.GetString("snapshotName");

    m_snapshotNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotRemainingDays"))
  {
    m_snapshotRemainingDays = jsonValue.GetInteger("snapshotRemainingDays");

    m_snapshotRemainingDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotRetentionPeriod"))
  {
    m_snapshotRetentionPeriod = jsonValue.GetInteger("snapshotRetentionPeriod");

    m_snapshotRetentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotRetentionStartTime"))
  {
    m_snapshotRetentionStartTime = jsonValue.GetString("snapshotRetentionStartTime");

    m_snapshotRetentionStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SnapshotStatusMapper::GetSnapshotStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalBackupSizeInMegaBytes"))
  {
    m_totalBackupSizeInMegaBytes = jsonValue.GetDouble("totalBackupSizeInMegaBytes");

    m_totalBackupSizeInMegaBytesHasBeenSet = true;
  }

  return *this;
}

JsonValue Snapshot::Jsonize() const
{
  JsonValue payload;

  if(m_accountsWithProvisionedRestoreAccessHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountsWithProvisionedRestoreAccessJsonList(m_accountsWithProvisionedRestoreAccess.size());
   for(unsigned accountsWithProvisionedRestoreAccessIndex = 0; accountsWithProvisionedRestoreAccessIndex < accountsWithProvisionedRestoreAccessJsonList.GetLength(); ++accountsWithProvisionedRestoreAccessIndex)
   {
     accountsWithProvisionedRestoreAccessJsonList[accountsWithProvisionedRestoreAccessIndex].AsString(m_accountsWithProvisionedRestoreAccess[accountsWithProvisionedRestoreAccessIndex]);
   }
   payload.WithArray("accountsWithProvisionedRestoreAccess", std::move(accountsWithProvisionedRestoreAccessJsonList));

  }

  if(m_accountsWithRestoreAccessHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountsWithRestoreAccessJsonList(m_accountsWithRestoreAccess.size());
   for(unsigned accountsWithRestoreAccessIndex = 0; accountsWithRestoreAccessIndex < accountsWithRestoreAccessJsonList.GetLength(); ++accountsWithRestoreAccessIndex)
   {
     accountsWithRestoreAccessJsonList[accountsWithRestoreAccessIndex].AsString(m_accountsWithRestoreAccess[accountsWithRestoreAccessIndex]);
   }
   payload.WithArray("accountsWithRestoreAccess", std::move(accountsWithRestoreAccessJsonList));

  }

  if(m_actualIncrementalBackupSizeInMegaBytesHasBeenSet)
  {
   payload.WithDouble("actualIncrementalBackupSizeInMegaBytes", m_actualIncrementalBackupSizeInMegaBytes);

  }

  if(m_adminUsernameHasBeenSet)
  {
   payload.WithString("adminUsername", m_adminUsername);

  }

  if(m_backupProgressInMegaBytesHasBeenSet)
  {
   payload.WithDouble("backupProgressInMegaBytes", m_backupProgressInMegaBytes);

  }

  if(m_currentBackupRateInMegaBytesPerSecondHasBeenSet)
  {
   payload.WithDouble("currentBackupRateInMegaBytesPerSecond", m_currentBackupRateInMegaBytesPerSecond);

  }

  if(m_elapsedTimeInSecondsHasBeenSet)
  {
   payload.WithInt64("elapsedTimeInSeconds", m_elapsedTimeInSeconds);

  }

  if(m_estimatedSecondsToCompletionHasBeenSet)
  {
   payload.WithInt64("estimatedSecondsToCompletion", m_estimatedSecondsToCompletion);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_namespaceArnHasBeenSet)
  {
   payload.WithString("namespaceArn", m_namespaceArn);

  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  if(m_ownerAccountHasBeenSet)
  {
   payload.WithString("ownerAccount", m_ownerAccount);

  }

  if(m_snapshotArnHasBeenSet)
  {
   payload.WithString("snapshotArn", m_snapshotArn);

  }

  if(m_snapshotCreateTimeHasBeenSet)
  {
   payload.WithString("snapshotCreateTime", m_snapshotCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("snapshotName", m_snapshotName);

  }

  if(m_snapshotRemainingDaysHasBeenSet)
  {
   payload.WithInteger("snapshotRemainingDays", m_snapshotRemainingDays);

  }

  if(m_snapshotRetentionPeriodHasBeenSet)
  {
   payload.WithInteger("snapshotRetentionPeriod", m_snapshotRetentionPeriod);

  }

  if(m_snapshotRetentionStartTimeHasBeenSet)
  {
   payload.WithString("snapshotRetentionStartTime", m_snapshotRetentionStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SnapshotStatusMapper::GetNameForSnapshotStatus(m_status));
  }

  if(m_totalBackupSizeInMegaBytesHasBeenSet)
  {
   payload.WithDouble("totalBackupSizeInMegaBytes", m_totalBackupSizeInMegaBytes);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
