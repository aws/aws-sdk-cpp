/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsBackupBackupVaultNotificationsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsBackupBackupVaultNotificationsDetails::AwsBackupBackupVaultNotificationsDetails() : 
    m_backupVaultEventsHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false)
{
}

AwsBackupBackupVaultNotificationsDetails::AwsBackupBackupVaultNotificationsDetails(JsonView jsonValue) : 
    m_backupVaultEventsHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsBackupBackupVaultNotificationsDetails& AwsBackupBackupVaultNotificationsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupVaultEvents"))
  {
    Aws::Utils::Array<JsonView> backupVaultEventsJsonList = jsonValue.GetArray("BackupVaultEvents");
    for(unsigned backupVaultEventsIndex = 0; backupVaultEventsIndex < backupVaultEventsJsonList.GetLength(); ++backupVaultEventsIndex)
    {
      m_backupVaultEvents.push_back(backupVaultEventsJsonList[backupVaultEventsIndex].AsString());
    }
    m_backupVaultEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsBackupBackupVaultNotificationsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_backupVaultEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> backupVaultEventsJsonList(m_backupVaultEvents.size());
   for(unsigned backupVaultEventsIndex = 0; backupVaultEventsIndex < backupVaultEventsJsonList.GetLength(); ++backupVaultEventsIndex)
   {
     backupVaultEventsJsonList[backupVaultEventsIndex].AsString(m_backupVaultEvents[backupVaultEventsIndex]);
   }
   payload.WithArray("BackupVaultEvents", std::move(backupVaultEventsJsonList));

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
