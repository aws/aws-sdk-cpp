/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsBackupRecoveryPointCalculatedLifecycleDetails.h>
#include <aws/securityhub/model/AwsBackupRecoveryPointCreatedByDetails.h>
#include <aws/securityhub/model/AwsBackupRecoveryPointLifecycleDetails.h>
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
   * <p>Contains detailed information about the recovery points stored in an Backup
   * backup vault. A backup, or recovery point, represents the content of a resource
   * at a specified time. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsBackupRecoveryPointDetails">AWS
   * API Reference</a></p>
   */
  class AwsBackupRecoveryPointDetails
  {
  public:
    AWS_SECURITYHUB_API AwsBackupRecoveryPointDetails() = default;
    AWS_SECURITYHUB_API AwsBackupRecoveryPointDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupRecoveryPointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The size, in bytes, of a backup. </p>
     */
    inline long long GetBackupSizeInBytes() const { return m_backupSizeInBytes; }
    inline bool BackupSizeInBytesHasBeenSet() const { return m_backupSizeInBytesHasBeenSet; }
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytesHasBeenSet = true; m_backupSizeInBytes = value; }
    inline AwsBackupRecoveryPointDetails& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline const Aws::String& GetBackupVaultArn() const { return m_backupVaultArn; }
    inline bool BackupVaultArnHasBeenSet() const { return m_backupVaultArnHasBeenSet; }
    template<typename BackupVaultArnT = Aws::String>
    void SetBackupVaultArn(BackupVaultArnT&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::forward<BackupVaultArnT>(value); }
    template<typename BackupVaultArnT = Aws::String>
    AwsBackupRecoveryPointDetails& WithBackupVaultArn(BackupVaultArnT&& value) { SetBackupVaultArn(std::forward<BackupVaultArnT>(value)); return *this;}
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
    AwsBackupRecoveryPointDetails& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps. </p>
     */
    inline const AwsBackupRecoveryPointCalculatedLifecycleDetails& GetCalculatedLifecycle() const { return m_calculatedLifecycle; }
    inline bool CalculatedLifecycleHasBeenSet() const { return m_calculatedLifecycleHasBeenSet; }
    template<typename CalculatedLifecycleT = AwsBackupRecoveryPointCalculatedLifecycleDetails>
    void SetCalculatedLifecycle(CalculatedLifecycleT&& value) { m_calculatedLifecycleHasBeenSet = true; m_calculatedLifecycle = std::forward<CalculatedLifecycleT>(value); }
    template<typename CalculatedLifecycleT = AwsBackupRecoveryPointCalculatedLifecycleDetails>
    AwsBackupRecoveryPointDetails& WithCalculatedLifecycle(CalculatedLifecycleT&& value) { SetCalculatedLifecycle(std::forward<CalculatedLifecycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and UTC. The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM. </p>
     */
    inline const Aws::String& GetCompletionDate() const { return m_completionDate; }
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }
    template<typename CompletionDateT = Aws::String>
    void SetCompletionDate(CompletionDateT&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::forward<CompletionDateT>(value); }
    template<typename CompletionDateT = Aws::String>
    AwsBackupRecoveryPointDetails& WithCompletionDate(CompletionDateT&& value) { SetCompletionDate(std::forward<CompletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it. </p>
     */
    inline const AwsBackupRecoveryPointCreatedByDetails& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = AwsBackupRecoveryPointCreatedByDetails>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = AwsBackupRecoveryPointCreatedByDetails>
    AwsBackupRecoveryPointDetails& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a recovery point is created, in Unix format and UTC. The
     * value of <code>CreationDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM. </p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    AwsBackupRecoveryPointDetails& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the server-side encryption key that is used to protect your
     * backups. </p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    AwsBackupRecoveryPointDetails& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point </p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    AwsBackupRecoveryPointDetails& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted. </p>
     */
    inline bool GetIsEncrypted() const { return m_isEncrypted; }
    inline bool IsEncryptedHasBeenSet() const { return m_isEncryptedHasBeenSet; }
    inline void SetIsEncrypted(bool value) { m_isEncryptedHasBeenSet = true; m_isEncrypted = value; }
    inline AwsBackupRecoveryPointDetails& WithIsEncrypted(bool value) { SetIsEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * UTC. The value of <code>LastRestoreTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM. </p>
     */
    inline const Aws::String& GetLastRestoreTime() const { return m_lastRestoreTime; }
    inline bool LastRestoreTimeHasBeenSet() const { return m_lastRestoreTimeHasBeenSet; }
    template<typename LastRestoreTimeT = Aws::String>
    void SetLastRestoreTime(LastRestoreTimeT&& value) { m_lastRestoreTimeHasBeenSet = true; m_lastRestoreTime = std::forward<LastRestoreTimeT>(value); }
    template<typename LastRestoreTimeT = Aws::String>
    AwsBackupRecoveryPointDetails& WithLastRestoreTime(LastRestoreTimeT&& value) { SetLastRestoreTime(std::forward<LastRestoreTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define </p>
     */
    inline const AwsBackupRecoveryPointLifecycleDetails& GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    template<typename LifecycleT = AwsBackupRecoveryPointLifecycleDetails>
    void SetLifecycle(LifecycleT&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::forward<LifecycleT>(value); }
    template<typename LifecycleT = AwsBackupRecoveryPointLifecycleDetails>
    AwsBackupRecoveryPointDetails& WithLifecycle(LifecycleT&& value) { SetLifecycle(std::forward<LifecycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point. </p>
     */
    inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }
    template<typename RecoveryPointArnT = Aws::String>
    void SetRecoveryPointArn(RecoveryPointArnT&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::forward<RecoveryPointArnT>(value); }
    template<typename RecoveryPointArnT = Aws::String>
    AwsBackupRecoveryPointDetails& WithRecoveryPointArn(RecoveryPointArnT&& value) { SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type. </p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    AwsBackupRecoveryPointDetails& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point, such as
     * an Amazon EBS volume or an Amazon RDS database. </p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    AwsBackupRecoveryPointDetails& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the backup vault where the recovery point was originally copied
     * from. If the recovery point is restored to the same account, this value will be
     * null. </p>
     */
    inline const Aws::String& GetSourceBackupVaultArn() const { return m_sourceBackupVaultArn; }
    inline bool SourceBackupVaultArnHasBeenSet() const { return m_sourceBackupVaultArnHasBeenSet; }
    template<typename SourceBackupVaultArnT = Aws::String>
    void SetSourceBackupVaultArn(SourceBackupVaultArnT&& value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn = std::forward<SourceBackupVaultArnT>(value); }
    template<typename SourceBackupVaultArnT = Aws::String>
    AwsBackupRecoveryPointDetails& WithSourceBackupVaultArn(SourceBackupVaultArnT&& value) { SetSourceBackupVaultArn(std::forward<SourceBackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status code specifying the state of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p>
     * <code>DELETING</code> </p> </li> <li> <p> <code>EXPIRED</code> </p> </li> <li>
     * <p> <code>PARTIAL</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsBackupRecoveryPointDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message explaining the reason of the recovery point deletion failure. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    AwsBackupRecoveryPointDetails& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the storage class of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COLD</code> </p> </li> <li> <p>
     * <code>DELETED</code> </p> </li> <li> <p> <code>WARM</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    template<typename StorageClassT = Aws::String>
    void SetStorageClass(StorageClassT&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::forward<StorageClassT>(value); }
    template<typename StorageClassT = Aws::String>
    AwsBackupRecoveryPointDetails& WithStorageClass(StorageClassT&& value) { SetStorageClass(std::forward<StorageClassT>(value)); return *this;}
    ///@}
  private:

    long long m_backupSizeInBytes{0};
    bool m_backupSizeInBytesHasBeenSet = false;

    Aws::String m_backupVaultArn;
    bool m_backupVaultArnHasBeenSet = false;

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    AwsBackupRecoveryPointCalculatedLifecycleDetails m_calculatedLifecycle;
    bool m_calculatedLifecycleHasBeenSet = false;

    Aws::String m_completionDate;
    bool m_completionDateHasBeenSet = false;

    AwsBackupRecoveryPointCreatedByDetails m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    bool m_isEncrypted{false};
    bool m_isEncryptedHasBeenSet = false;

    Aws::String m_lastRestoreTime;
    bool m_lastRestoreTimeHasBeenSet = false;

    AwsBackupRecoveryPointLifecycleDetails m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_sourceBackupVaultArn;
    bool m_sourceBackupVaultArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_storageClass;
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
