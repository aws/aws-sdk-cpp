/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsBackupBackupVaultDetails.h>
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

AwsBackupBackupVaultDetails::AwsBackupBackupVaultDetails() : 
    m_backupVaultArnHasBeenSet(false),
    m_backupVaultNameHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_notificationsHasBeenSet(false),
    m_accessPolicyHasBeenSet(false)
{
}

AwsBackupBackupVaultDetails::AwsBackupBackupVaultDetails(JsonView jsonValue) : 
    m_backupVaultArnHasBeenSet(false),
    m_backupVaultNameHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_notificationsHasBeenSet(false),
    m_accessPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

AwsBackupBackupVaultDetails& AwsBackupBackupVaultDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupVaultArn"))
  {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");

    m_backupVaultArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupVaultName"))
  {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");

    m_backupVaultNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");

    m_encryptionKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Notifications"))
  {
    m_notifications = jsonValue.GetObject("Notifications");

    m_notificationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessPolicy"))
  {
    m_accessPolicy = jsonValue.GetString("AccessPolicy");

    m_accessPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsBackupBackupVaultDetails::Jsonize() const
{
  JsonValue payload;

  if(m_backupVaultArnHasBeenSet)
  {
   payload.WithString("BackupVaultArn", m_backupVaultArn);

  }

  if(m_backupVaultNameHasBeenSet)
  {
   payload.WithString("BackupVaultName", m_backupVaultName);

  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("EncryptionKeyArn", m_encryptionKeyArn);

  }

  if(m_notificationsHasBeenSet)
  {
   payload.WithObject("Notifications", m_notifications.Jsonize());

  }

  if(m_accessPolicyHasBeenSet)
  {
   payload.WithString("AccessPolicy", m_accessPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
