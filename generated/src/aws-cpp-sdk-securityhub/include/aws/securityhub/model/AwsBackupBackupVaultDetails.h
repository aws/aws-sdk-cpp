/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsBackupBackupVaultNotificationsDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about an Backup backup vault. In Backup, a backup vault is a
   * container that stores and organizes your backups. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsBackupBackupVaultDetails">AWS
   * API Reference</a></p>
   */
  class AwsBackupBackupVaultDetails
  {
  public:
    AWS_SECURITYHUB_API AwsBackupBackupVaultDetails();
    AWS_SECURITYHUB_API AwsBackupBackupVaultDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupBackupVaultDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline bool BackupVaultArnHasBeenSet() const { return m_backupVaultArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline AwsBackupBackupVaultDetails& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline AwsBackupBackupVaultDetails& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline AwsBackupBackupVaultDetails& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline AwsBackupBackupVaultDetails& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline AwsBackupBackupVaultDetails& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline AwsBackupBackupVaultDetails& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


    /**
     * <p>The unique ARN associated with the server-side encryption key. You can
     * specify a key to encrypt your backups from services that support full Backup
     * management. If you do not specify a key, Backup creates an KMS key for you by
     * default. </p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }

    /**
     * <p>The unique ARN associated with the server-side encryption key. You can
     * specify a key to encrypt your backups from services that support full Backup
     * management. If you do not specify a key, Backup creates an KMS key for you by
     * default. </p>
     */
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }

    /**
     * <p>The unique ARN associated with the server-side encryption key. You can
     * specify a key to encrypt your backups from services that support full Backup
     * management. If you do not specify a key, Backup creates an KMS key for you by
     * default. </p>
     */
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }

    /**
     * <p>The unique ARN associated with the server-side encryption key. You can
     * specify a key to encrypt your backups from services that support full Backup
     * management. If you do not specify a key, Backup creates an KMS key for you by
     * default. </p>
     */
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }

    /**
     * <p>The unique ARN associated with the server-side encryption key. You can
     * specify a key to encrypt your backups from services that support full Backup
     * management. If you do not specify a key, Backup creates an KMS key for you by
     * default. </p>
     */
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }

    /**
     * <p>The unique ARN associated with the server-side encryption key. You can
     * specify a key to encrypt your backups from services that support full Backup
     * management. If you do not specify a key, Backup creates an KMS key for you by
     * default. </p>
     */
    inline AwsBackupBackupVaultDetails& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>The unique ARN associated with the server-side encryption key. You can
     * specify a key to encrypt your backups from services that support full Backup
     * management. If you do not specify a key, Backup creates an KMS key for you by
     * default. </p>
     */
    inline AwsBackupBackupVaultDetails& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN associated with the server-side encryption key. You can
     * specify a key to encrypt your backups from services that support full Backup
     * management. If you do not specify a key, Backup creates an KMS key for you by
     * default. </p>
     */
    inline AwsBackupBackupVaultDetails& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}


    /**
     * <p>The Amazon SNS event notifications for the specified backup vault. </p>
     */
    inline const AwsBackupBackupVaultNotificationsDetails& GetNotifications() const{ return m_notifications; }

    /**
     * <p>The Amazon SNS event notifications for the specified backup vault. </p>
     */
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }

    /**
     * <p>The Amazon SNS event notifications for the specified backup vault. </p>
     */
    inline void SetNotifications(const AwsBackupBackupVaultNotificationsDetails& value) { m_notificationsHasBeenSet = true; m_notifications = value; }

    /**
     * <p>The Amazon SNS event notifications for the specified backup vault. </p>
     */
    inline void SetNotifications(AwsBackupBackupVaultNotificationsDetails&& value) { m_notificationsHasBeenSet = true; m_notifications = std::move(value); }

    /**
     * <p>The Amazon SNS event notifications for the specified backup vault. </p>
     */
    inline AwsBackupBackupVaultDetails& WithNotifications(const AwsBackupBackupVaultNotificationsDetails& value) { SetNotifications(value); return *this;}

    /**
     * <p>The Amazon SNS event notifications for the specified backup vault. </p>
     */
    inline AwsBackupBackupVaultDetails& WithNotifications(AwsBackupBackupVaultNotificationsDetails&& value) { SetNotifications(std::move(value)); return *this;}


    /**
     * <p>A resource-based policy that is used to manage access permissions on the
     * target backup vault. </p>
     */
    inline const Aws::String& GetAccessPolicy() const{ return m_accessPolicy; }

    /**
     * <p>A resource-based policy that is used to manage access permissions on the
     * target backup vault. </p>
     */
    inline bool AccessPolicyHasBeenSet() const { return m_accessPolicyHasBeenSet; }

    /**
     * <p>A resource-based policy that is used to manage access permissions on the
     * target backup vault. </p>
     */
    inline void SetAccessPolicy(const Aws::String& value) { m_accessPolicyHasBeenSet = true; m_accessPolicy = value; }

    /**
     * <p>A resource-based policy that is used to manage access permissions on the
     * target backup vault. </p>
     */
    inline void SetAccessPolicy(Aws::String&& value) { m_accessPolicyHasBeenSet = true; m_accessPolicy = std::move(value); }

    /**
     * <p>A resource-based policy that is used to manage access permissions on the
     * target backup vault. </p>
     */
    inline void SetAccessPolicy(const char* value) { m_accessPolicyHasBeenSet = true; m_accessPolicy.assign(value); }

    /**
     * <p>A resource-based policy that is used to manage access permissions on the
     * target backup vault. </p>
     */
    inline AwsBackupBackupVaultDetails& WithAccessPolicy(const Aws::String& value) { SetAccessPolicy(value); return *this;}

    /**
     * <p>A resource-based policy that is used to manage access permissions on the
     * target backup vault. </p>
     */
    inline AwsBackupBackupVaultDetails& WithAccessPolicy(Aws::String&& value) { SetAccessPolicy(std::move(value)); return *this;}

    /**
     * <p>A resource-based policy that is used to manage access permissions on the
     * target backup vault. </p>
     */
    inline AwsBackupBackupVaultDetails& WithAccessPolicy(const char* value) { SetAccessPolicy(value); return *this;}

  private:

    Aws::String m_backupVaultArn;
    bool m_backupVaultArnHasBeenSet = false;

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    AwsBackupBackupVaultNotificationsDetails m_notifications;
    bool m_notificationsHasBeenSet = false;

    Aws::String m_accessPolicy;
    bool m_accessPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
