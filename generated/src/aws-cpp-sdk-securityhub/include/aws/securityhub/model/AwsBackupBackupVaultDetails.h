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
    AWS_SECURITYHUB_API AwsBackupBackupVaultDetails() = default;
    AWS_SECURITYHUB_API AwsBackupBackupVaultDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupBackupVaultDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline const Aws::String& GetBackupVaultArn() const { return m_backupVaultArn; }
    inline bool BackupVaultArnHasBeenSet() const { return m_backupVaultArnHasBeenSet; }
    template<typename BackupVaultArnT = Aws::String>
    void SetBackupVaultArn(BackupVaultArnT&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::forward<BackupVaultArnT>(value); }
    template<typename BackupVaultArnT = Aws::String>
    AwsBackupBackupVaultDetails& WithBackupVaultArn(BackupVaultArnT&& value) { SetBackupVaultArn(std::forward<BackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    AwsBackupBackupVaultDetails& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN associated with the server-side encryption key. You can
     * specify a key to encrypt your backups from services that support full Backup
     * management. If you don't specify a key, Backup creates an KMS key for you by
     * default. </p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    AwsBackupBackupVaultDetails& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS event notifications for the specified backup vault. </p>
     */
    inline const AwsBackupBackupVaultNotificationsDetails& GetNotifications() const { return m_notifications; }
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }
    template<typename NotificationsT = AwsBackupBackupVaultNotificationsDetails>
    void SetNotifications(NotificationsT&& value) { m_notificationsHasBeenSet = true; m_notifications = std::forward<NotificationsT>(value); }
    template<typename NotificationsT = AwsBackupBackupVaultNotificationsDetails>
    AwsBackupBackupVaultDetails& WithNotifications(NotificationsT&& value) { SetNotifications(std::forward<NotificationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A resource-based policy that is used to manage access permissions on the
     * target backup vault. </p>
     */
    inline const Aws::String& GetAccessPolicy() const { return m_accessPolicy; }
    inline bool AccessPolicyHasBeenSet() const { return m_accessPolicyHasBeenSet; }
    template<typename AccessPolicyT = Aws::String>
    void SetAccessPolicy(AccessPolicyT&& value) { m_accessPolicyHasBeenSet = true; m_accessPolicy = std::forward<AccessPolicyT>(value); }
    template<typename AccessPolicyT = Aws::String>
    AwsBackupBackupVaultDetails& WithAccessPolicy(AccessPolicyT&& value) { SetAccessPolicy(std::forward<AccessPolicyT>(value)); return *this;}
    ///@}
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
