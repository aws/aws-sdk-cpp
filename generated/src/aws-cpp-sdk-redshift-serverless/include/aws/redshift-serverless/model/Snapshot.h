/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift-serverless/model/SnapshotStatus.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>A snapshot object that contains databases.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/Snapshot">AWS
   * API Reference</a></p>
   */
  class Snapshot
  {
  public:
    AWS_REDSHIFTSERVERLESS_API Snapshot();
    AWS_REDSHIFTSERVERLESS_API Snapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Snapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a provisioned cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountsWithProvisionedRestoreAccess() const{ return m_accountsWithProvisionedRestoreAccess; }
    inline bool AccountsWithProvisionedRestoreAccessHasBeenSet() const { return m_accountsWithProvisionedRestoreAccessHasBeenSet; }
    inline void SetAccountsWithProvisionedRestoreAccess(const Aws::Vector<Aws::String>& value) { m_accountsWithProvisionedRestoreAccessHasBeenSet = true; m_accountsWithProvisionedRestoreAccess = value; }
    inline void SetAccountsWithProvisionedRestoreAccess(Aws::Vector<Aws::String>&& value) { m_accountsWithProvisionedRestoreAccessHasBeenSet = true; m_accountsWithProvisionedRestoreAccess = std::move(value); }
    inline Snapshot& WithAccountsWithProvisionedRestoreAccess(const Aws::Vector<Aws::String>& value) { SetAccountsWithProvisionedRestoreAccess(value); return *this;}
    inline Snapshot& WithAccountsWithProvisionedRestoreAccess(Aws::Vector<Aws::String>&& value) { SetAccountsWithProvisionedRestoreAccess(std::move(value)); return *this;}
    inline Snapshot& AddAccountsWithProvisionedRestoreAccess(const Aws::String& value) { m_accountsWithProvisionedRestoreAccessHasBeenSet = true; m_accountsWithProvisionedRestoreAccess.push_back(value); return *this; }
    inline Snapshot& AddAccountsWithProvisionedRestoreAccess(Aws::String&& value) { m_accountsWithProvisionedRestoreAccessHasBeenSet = true; m_accountsWithProvisionedRestoreAccess.push_back(std::move(value)); return *this; }
    inline Snapshot& AddAccountsWithProvisionedRestoreAccess(const char* value) { m_accountsWithProvisionedRestoreAccessHasBeenSet = true; m_accountsWithProvisionedRestoreAccess.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a namespace.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountsWithRestoreAccess() const{ return m_accountsWithRestoreAccess; }
    inline bool AccountsWithRestoreAccessHasBeenSet() const { return m_accountsWithRestoreAccessHasBeenSet; }
    inline void SetAccountsWithRestoreAccess(const Aws::Vector<Aws::String>& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess = value; }
    inline void SetAccountsWithRestoreAccess(Aws::Vector<Aws::String>&& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess = std::move(value); }
    inline Snapshot& WithAccountsWithRestoreAccess(const Aws::Vector<Aws::String>& value) { SetAccountsWithRestoreAccess(value); return *this;}
    inline Snapshot& WithAccountsWithRestoreAccess(Aws::Vector<Aws::String>&& value) { SetAccountsWithRestoreAccess(std::move(value)); return *this;}
    inline Snapshot& AddAccountsWithRestoreAccess(const Aws::String& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess.push_back(value); return *this; }
    inline Snapshot& AddAccountsWithRestoreAccess(Aws::String&& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess.push_back(std::move(value)); return *this; }
    inline Snapshot& AddAccountsWithRestoreAccess(const char* value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size of the incremental backup in megabytes.</p>
     */
    inline double GetActualIncrementalBackupSizeInMegaBytes() const{ return m_actualIncrementalBackupSizeInMegaBytes; }
    inline bool ActualIncrementalBackupSizeInMegaBytesHasBeenSet() const { return m_actualIncrementalBackupSizeInMegaBytesHasBeenSet; }
    inline void SetActualIncrementalBackupSizeInMegaBytes(double value) { m_actualIncrementalBackupSizeInMegaBytesHasBeenSet = true; m_actualIncrementalBackupSizeInMegaBytes = value; }
    inline Snapshot& WithActualIncrementalBackupSizeInMegaBytes(double value) { SetActualIncrementalBackupSizeInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the namespace's admin user credentials
     * secret.</p>
     */
    inline const Aws::String& GetAdminPasswordSecretArn() const{ return m_adminPasswordSecretArn; }
    inline bool AdminPasswordSecretArnHasBeenSet() const { return m_adminPasswordSecretArnHasBeenSet; }
    inline void SetAdminPasswordSecretArn(const Aws::String& value) { m_adminPasswordSecretArnHasBeenSet = true; m_adminPasswordSecretArn = value; }
    inline void SetAdminPasswordSecretArn(Aws::String&& value) { m_adminPasswordSecretArnHasBeenSet = true; m_adminPasswordSecretArn = std::move(value); }
    inline void SetAdminPasswordSecretArn(const char* value) { m_adminPasswordSecretArnHasBeenSet = true; m_adminPasswordSecretArn.assign(value); }
    inline Snapshot& WithAdminPasswordSecretArn(const Aws::String& value) { SetAdminPasswordSecretArn(value); return *this;}
    inline Snapshot& WithAdminPasswordSecretArn(Aws::String&& value) { SetAdminPasswordSecretArn(std::move(value)); return *this;}
    inline Snapshot& WithAdminPasswordSecretArn(const char* value) { SetAdminPasswordSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt and store the
     * namespace's admin credentials secret.</p>
     */
    inline const Aws::String& GetAdminPasswordSecretKmsKeyId() const{ return m_adminPasswordSecretKmsKeyId; }
    inline bool AdminPasswordSecretKmsKeyIdHasBeenSet() const { return m_adminPasswordSecretKmsKeyIdHasBeenSet; }
    inline void SetAdminPasswordSecretKmsKeyId(const Aws::String& value) { m_adminPasswordSecretKmsKeyIdHasBeenSet = true; m_adminPasswordSecretKmsKeyId = value; }
    inline void SetAdminPasswordSecretKmsKeyId(Aws::String&& value) { m_adminPasswordSecretKmsKeyIdHasBeenSet = true; m_adminPasswordSecretKmsKeyId = std::move(value); }
    inline void SetAdminPasswordSecretKmsKeyId(const char* value) { m_adminPasswordSecretKmsKeyIdHasBeenSet = true; m_adminPasswordSecretKmsKeyId.assign(value); }
    inline Snapshot& WithAdminPasswordSecretKmsKeyId(const Aws::String& value) { SetAdminPasswordSecretKmsKeyId(value); return *this;}
    inline Snapshot& WithAdminPasswordSecretKmsKeyId(Aws::String&& value) { SetAdminPasswordSecretKmsKeyId(std::move(value)); return *this;}
    inline Snapshot& WithAdminPasswordSecretKmsKeyId(const char* value) { SetAdminPasswordSecretKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the database within a snapshot.</p>
     */
    inline const Aws::String& GetAdminUsername() const{ return m_adminUsername; }
    inline bool AdminUsernameHasBeenSet() const { return m_adminUsernameHasBeenSet; }
    inline void SetAdminUsername(const Aws::String& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = value; }
    inline void SetAdminUsername(Aws::String&& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = std::move(value); }
    inline void SetAdminUsername(const char* value) { m_adminUsernameHasBeenSet = true; m_adminUsername.assign(value); }
    inline Snapshot& WithAdminUsername(const Aws::String& value) { SetAdminUsername(value); return *this;}
    inline Snapshot& WithAdminUsername(Aws::String&& value) { SetAdminUsername(std::move(value)); return *this;}
    inline Snapshot& WithAdminUsername(const char* value) { SetAdminUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size in megabytes of the data that has been backed up to a snapshot.</p>
     */
    inline double GetBackupProgressInMegaBytes() const{ return m_backupProgressInMegaBytes; }
    inline bool BackupProgressInMegaBytesHasBeenSet() const { return m_backupProgressInMegaBytesHasBeenSet; }
    inline void SetBackupProgressInMegaBytes(double value) { m_backupProgressInMegaBytesHasBeenSet = true; m_backupProgressInMegaBytes = value; }
    inline Snapshot& WithBackupProgressInMegaBytes(double value) { SetBackupProgressInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rate at which data is backed up into a snapshot in megabytes per
     * second.</p>
     */
    inline double GetCurrentBackupRateInMegaBytesPerSecond() const{ return m_currentBackupRateInMegaBytesPerSecond; }
    inline bool CurrentBackupRateInMegaBytesPerSecondHasBeenSet() const { return m_currentBackupRateInMegaBytesPerSecondHasBeenSet; }
    inline void SetCurrentBackupRateInMegaBytesPerSecond(double value) { m_currentBackupRateInMegaBytesPerSecondHasBeenSet = true; m_currentBackupRateInMegaBytesPerSecond = value; }
    inline Snapshot& WithCurrentBackupRateInMegaBytesPerSecond(double value) { SetCurrentBackupRateInMegaBytesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time it took to back up data into a snapshot.</p>
     */
    inline long long GetElapsedTimeInSeconds() const{ return m_elapsedTimeInSeconds; }
    inline bool ElapsedTimeInSecondsHasBeenSet() const { return m_elapsedTimeInSecondsHasBeenSet; }
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSecondsHasBeenSet = true; m_elapsedTimeInSeconds = value; }
    inline Snapshot& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated amount of seconds until the snapshot completes backup.</p>
     */
    inline long long GetEstimatedSecondsToCompletion() const{ return m_estimatedSecondsToCompletion; }
    inline bool EstimatedSecondsToCompletionHasBeenSet() const { return m_estimatedSecondsToCompletionHasBeenSet; }
    inline void SetEstimatedSecondsToCompletion(long long value) { m_estimatedSecondsToCompletionHasBeenSet = true; m_estimatedSecondsToCompletion = value; }
    inline Snapshot& WithEstimatedSecondsToCompletion(long long value) { SetEstimatedSecondsToCompletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the KMS key used to encrypt the snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline Snapshot& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline Snapshot& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline Snapshot& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the snapshot was created
     * from.</p>
     */
    inline const Aws::String& GetNamespaceArn() const{ return m_namespaceArn; }
    inline bool NamespaceArnHasBeenSet() const { return m_namespaceArnHasBeenSet; }
    inline void SetNamespaceArn(const Aws::String& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = value; }
    inline void SetNamespaceArn(Aws::String&& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = std::move(value); }
    inline void SetNamespaceArn(const char* value) { m_namespaceArnHasBeenSet = true; m_namespaceArn.assign(value); }
    inline Snapshot& WithNamespaceArn(const Aws::String& value) { SetNamespaceArn(value); return *this;}
    inline Snapshot& WithNamespaceArn(Aws::String&& value) { SetNamespaceArn(std::move(value)); return *this;}
    inline Snapshot& WithNamespaceArn(const char* value) { SetNamespaceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namepsace.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }
    inline Snapshot& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}
    inline Snapshot& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}
    inline Snapshot& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner Amazon Web Services; account of the snapshot.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }
    inline Snapshot& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}
    inline Snapshot& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}
    inline Snapshot& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }
    inline Snapshot& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}
    inline Snapshot& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}
    inline Snapshot& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }
    inline void SetSnapshotCreateTime(const Aws::Utils::DateTime& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }
    inline void SetSnapshotCreateTime(Aws::Utils::DateTime&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::move(value); }
    inline Snapshot& WithSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetSnapshotCreateTime(value); return *this;}
    inline Snapshot& WithSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }
    inline Snapshot& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}
    inline Snapshot& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}
    inline Snapshot& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of days until the snapshot is deleted.</p>
     */
    inline int GetSnapshotRemainingDays() const{ return m_snapshotRemainingDays; }
    inline bool SnapshotRemainingDaysHasBeenSet() const { return m_snapshotRemainingDaysHasBeenSet; }
    inline void SetSnapshotRemainingDays(int value) { m_snapshotRemainingDaysHasBeenSet = true; m_snapshotRemainingDays = value; }
    inline Snapshot& WithSnapshotRemainingDays(int value) { SetSnapshotRemainingDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period of time, in days, of how long the snapshot is retained.</p>
     */
    inline int GetSnapshotRetentionPeriod() const{ return m_snapshotRetentionPeriod; }
    inline bool SnapshotRetentionPeriodHasBeenSet() const { return m_snapshotRetentionPeriodHasBeenSet; }
    inline void SetSnapshotRetentionPeriod(int value) { m_snapshotRetentionPeriodHasBeenSet = true; m_snapshotRetentionPeriod = value; }
    inline Snapshot& WithSnapshotRetentionPeriod(int value) { SetSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when data within the snapshot started getting retained.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotRetentionStartTime() const{ return m_snapshotRetentionStartTime; }
    inline bool SnapshotRetentionStartTimeHasBeenSet() const { return m_snapshotRetentionStartTimeHasBeenSet; }
    inline void SetSnapshotRetentionStartTime(const Aws::Utils::DateTime& value) { m_snapshotRetentionStartTimeHasBeenSet = true; m_snapshotRetentionStartTime = value; }
    inline void SetSnapshotRetentionStartTime(Aws::Utils::DateTime&& value) { m_snapshotRetentionStartTimeHasBeenSet = true; m_snapshotRetentionStartTime = std::move(value); }
    inline Snapshot& WithSnapshotRetentionStartTime(const Aws::Utils::DateTime& value) { SetSnapshotRetentionStartTime(value); return *this;}
    inline Snapshot& WithSnapshotRetentionStartTime(Aws::Utils::DateTime&& value) { SetSnapshotRetentionStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the snapshot.</p>
     */
    inline const SnapshotStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SnapshotStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SnapshotStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Snapshot& WithStatus(const SnapshotStatus& value) { SetStatus(value); return *this;}
    inline Snapshot& WithStatus(SnapshotStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size, in megabytes, of how big the snapshot is.</p>
     */
    inline double GetTotalBackupSizeInMegaBytes() const{ return m_totalBackupSizeInMegaBytes; }
    inline bool TotalBackupSizeInMegaBytesHasBeenSet() const { return m_totalBackupSizeInMegaBytesHasBeenSet; }
    inline void SetTotalBackupSizeInMegaBytes(double value) { m_totalBackupSizeInMegaBytesHasBeenSet = true; m_totalBackupSizeInMegaBytes = value; }
    inline Snapshot& WithTotalBackupSizeInMegaBytes(double value) { SetTotalBackupSizeInMegaBytes(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountsWithProvisionedRestoreAccess;
    bool m_accountsWithProvisionedRestoreAccessHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountsWithRestoreAccess;
    bool m_accountsWithRestoreAccessHasBeenSet = false;

    double m_actualIncrementalBackupSizeInMegaBytes;
    bool m_actualIncrementalBackupSizeInMegaBytesHasBeenSet = false;

    Aws::String m_adminPasswordSecretArn;
    bool m_adminPasswordSecretArnHasBeenSet = false;

    Aws::String m_adminPasswordSecretKmsKeyId;
    bool m_adminPasswordSecretKmsKeyIdHasBeenSet = false;

    Aws::String m_adminUsername;
    bool m_adminUsernameHasBeenSet = false;

    double m_backupProgressInMegaBytes;
    bool m_backupProgressInMegaBytesHasBeenSet = false;

    double m_currentBackupRateInMegaBytesPerSecond;
    bool m_currentBackupRateInMegaBytesPerSecondHasBeenSet = false;

    long long m_elapsedTimeInSeconds;
    bool m_elapsedTimeInSecondsHasBeenSet = false;

    long long m_estimatedSecondsToCompletion;
    bool m_estimatedSecondsToCompletionHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_namespaceArn;
    bool m_namespaceArnHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotCreateTime;
    bool m_snapshotCreateTimeHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    int m_snapshotRemainingDays;
    bool m_snapshotRemainingDaysHasBeenSet = false;

    int m_snapshotRetentionPeriod;
    bool m_snapshotRetentionPeriodHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotRetentionStartTime;
    bool m_snapshotRetentionStartTimeHasBeenSet = false;

    SnapshotStatus m_status;
    bool m_statusHasBeenSet = false;

    double m_totalBackupSizeInMegaBytes;
    bool m_totalBackupSizeInMegaBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
