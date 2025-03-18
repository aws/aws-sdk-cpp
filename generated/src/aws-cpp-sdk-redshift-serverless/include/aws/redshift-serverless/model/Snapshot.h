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
    AWS_REDSHIFTSERVERLESS_API Snapshot() = default;
    AWS_REDSHIFTSERVERLESS_API Snapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Snapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a provisioned cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountsWithProvisionedRestoreAccess() const { return m_accountsWithProvisionedRestoreAccess; }
    inline bool AccountsWithProvisionedRestoreAccessHasBeenSet() const { return m_accountsWithProvisionedRestoreAccessHasBeenSet; }
    template<typename AccountsWithProvisionedRestoreAccessT = Aws::Vector<Aws::String>>
    void SetAccountsWithProvisionedRestoreAccess(AccountsWithProvisionedRestoreAccessT&& value) { m_accountsWithProvisionedRestoreAccessHasBeenSet = true; m_accountsWithProvisionedRestoreAccess = std::forward<AccountsWithProvisionedRestoreAccessT>(value); }
    template<typename AccountsWithProvisionedRestoreAccessT = Aws::Vector<Aws::String>>
    Snapshot& WithAccountsWithProvisionedRestoreAccess(AccountsWithProvisionedRestoreAccessT&& value) { SetAccountsWithProvisionedRestoreAccess(std::forward<AccountsWithProvisionedRestoreAccessT>(value)); return *this;}
    template<typename AccountsWithProvisionedRestoreAccessT = Aws::String>
    Snapshot& AddAccountsWithProvisionedRestoreAccess(AccountsWithProvisionedRestoreAccessT&& value) { m_accountsWithProvisionedRestoreAccessHasBeenSet = true; m_accountsWithProvisionedRestoreAccess.emplace_back(std::forward<AccountsWithProvisionedRestoreAccessT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a namespace.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountsWithRestoreAccess() const { return m_accountsWithRestoreAccess; }
    inline bool AccountsWithRestoreAccessHasBeenSet() const { return m_accountsWithRestoreAccessHasBeenSet; }
    template<typename AccountsWithRestoreAccessT = Aws::Vector<Aws::String>>
    void SetAccountsWithRestoreAccess(AccountsWithRestoreAccessT&& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess = std::forward<AccountsWithRestoreAccessT>(value); }
    template<typename AccountsWithRestoreAccessT = Aws::Vector<Aws::String>>
    Snapshot& WithAccountsWithRestoreAccess(AccountsWithRestoreAccessT&& value) { SetAccountsWithRestoreAccess(std::forward<AccountsWithRestoreAccessT>(value)); return *this;}
    template<typename AccountsWithRestoreAccessT = Aws::String>
    Snapshot& AddAccountsWithRestoreAccess(AccountsWithRestoreAccessT&& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess.emplace_back(std::forward<AccountsWithRestoreAccessT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size of the incremental backup in megabytes.</p>
     */
    inline double GetActualIncrementalBackupSizeInMegaBytes() const { return m_actualIncrementalBackupSizeInMegaBytes; }
    inline bool ActualIncrementalBackupSizeInMegaBytesHasBeenSet() const { return m_actualIncrementalBackupSizeInMegaBytesHasBeenSet; }
    inline void SetActualIncrementalBackupSizeInMegaBytes(double value) { m_actualIncrementalBackupSizeInMegaBytesHasBeenSet = true; m_actualIncrementalBackupSizeInMegaBytes = value; }
    inline Snapshot& WithActualIncrementalBackupSizeInMegaBytes(double value) { SetActualIncrementalBackupSizeInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the namespace's admin user credentials
     * secret.</p>
     */
    inline const Aws::String& GetAdminPasswordSecretArn() const { return m_adminPasswordSecretArn; }
    inline bool AdminPasswordSecretArnHasBeenSet() const { return m_adminPasswordSecretArnHasBeenSet; }
    template<typename AdminPasswordSecretArnT = Aws::String>
    void SetAdminPasswordSecretArn(AdminPasswordSecretArnT&& value) { m_adminPasswordSecretArnHasBeenSet = true; m_adminPasswordSecretArn = std::forward<AdminPasswordSecretArnT>(value); }
    template<typename AdminPasswordSecretArnT = Aws::String>
    Snapshot& WithAdminPasswordSecretArn(AdminPasswordSecretArnT&& value) { SetAdminPasswordSecretArn(std::forward<AdminPasswordSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt and store the
     * namespace's admin credentials secret.</p>
     */
    inline const Aws::String& GetAdminPasswordSecretKmsKeyId() const { return m_adminPasswordSecretKmsKeyId; }
    inline bool AdminPasswordSecretKmsKeyIdHasBeenSet() const { return m_adminPasswordSecretKmsKeyIdHasBeenSet; }
    template<typename AdminPasswordSecretKmsKeyIdT = Aws::String>
    void SetAdminPasswordSecretKmsKeyId(AdminPasswordSecretKmsKeyIdT&& value) { m_adminPasswordSecretKmsKeyIdHasBeenSet = true; m_adminPasswordSecretKmsKeyId = std::forward<AdminPasswordSecretKmsKeyIdT>(value); }
    template<typename AdminPasswordSecretKmsKeyIdT = Aws::String>
    Snapshot& WithAdminPasswordSecretKmsKeyId(AdminPasswordSecretKmsKeyIdT&& value) { SetAdminPasswordSecretKmsKeyId(std::forward<AdminPasswordSecretKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the database within a snapshot.</p>
     */
    inline const Aws::String& GetAdminUsername() const { return m_adminUsername; }
    inline bool AdminUsernameHasBeenSet() const { return m_adminUsernameHasBeenSet; }
    template<typename AdminUsernameT = Aws::String>
    void SetAdminUsername(AdminUsernameT&& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = std::forward<AdminUsernameT>(value); }
    template<typename AdminUsernameT = Aws::String>
    Snapshot& WithAdminUsername(AdminUsernameT&& value) { SetAdminUsername(std::forward<AdminUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size in megabytes of the data that has been backed up to a snapshot.</p>
     */
    inline double GetBackupProgressInMegaBytes() const { return m_backupProgressInMegaBytes; }
    inline bool BackupProgressInMegaBytesHasBeenSet() const { return m_backupProgressInMegaBytesHasBeenSet; }
    inline void SetBackupProgressInMegaBytes(double value) { m_backupProgressInMegaBytesHasBeenSet = true; m_backupProgressInMegaBytes = value; }
    inline Snapshot& WithBackupProgressInMegaBytes(double value) { SetBackupProgressInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rate at which data is backed up into a snapshot in megabytes per
     * second.</p>
     */
    inline double GetCurrentBackupRateInMegaBytesPerSecond() const { return m_currentBackupRateInMegaBytesPerSecond; }
    inline bool CurrentBackupRateInMegaBytesPerSecondHasBeenSet() const { return m_currentBackupRateInMegaBytesPerSecondHasBeenSet; }
    inline void SetCurrentBackupRateInMegaBytesPerSecond(double value) { m_currentBackupRateInMegaBytesPerSecondHasBeenSet = true; m_currentBackupRateInMegaBytesPerSecond = value; }
    inline Snapshot& WithCurrentBackupRateInMegaBytesPerSecond(double value) { SetCurrentBackupRateInMegaBytesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time it took to back up data into a snapshot.</p>
     */
    inline long long GetElapsedTimeInSeconds() const { return m_elapsedTimeInSeconds; }
    inline bool ElapsedTimeInSecondsHasBeenSet() const { return m_elapsedTimeInSecondsHasBeenSet; }
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSecondsHasBeenSet = true; m_elapsedTimeInSeconds = value; }
    inline Snapshot& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated amount of seconds until the snapshot completes backup.</p>
     */
    inline long long GetEstimatedSecondsToCompletion() const { return m_estimatedSecondsToCompletion; }
    inline bool EstimatedSecondsToCompletionHasBeenSet() const { return m_estimatedSecondsToCompletionHasBeenSet; }
    inline void SetEstimatedSecondsToCompletion(long long value) { m_estimatedSecondsToCompletionHasBeenSet = true; m_estimatedSecondsToCompletion = value; }
    inline Snapshot& WithEstimatedSecondsToCompletion(long long value) { SetEstimatedSecondsToCompletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the KMS key used to encrypt the snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    Snapshot& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the snapshot was created
     * from.</p>
     */
    inline const Aws::String& GetNamespaceArn() const { return m_namespaceArn; }
    inline bool NamespaceArnHasBeenSet() const { return m_namespaceArnHasBeenSet; }
    template<typename NamespaceArnT = Aws::String>
    void SetNamespaceArn(NamespaceArnT&& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = std::forward<NamespaceArnT>(value); }
    template<typename NamespaceArnT = Aws::String>
    Snapshot& WithNamespaceArn(NamespaceArnT&& value) { SetNamespaceArn(std::forward<NamespaceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namepsace.</p>
     */
    inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    template<typename NamespaceNameT = Aws::String>
    void SetNamespaceName(NamespaceNameT&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::forward<NamespaceNameT>(value); }
    template<typename NamespaceNameT = Aws::String>
    Snapshot& WithNamespaceName(NamespaceNameT&& value) { SetNamespaceName(std::forward<NamespaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner Amazon Web Services; account of the snapshot.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    Snapshot& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotArn() const { return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    template<typename SnapshotArnT = Aws::String>
    void SetSnapshotArn(SnapshotArnT&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::forward<SnapshotArnT>(value); }
    template<typename SnapshotArnT = Aws::String>
    Snapshot& WithSnapshotArn(SnapshotArnT&& value) { SetSnapshotArn(std::forward<SnapshotArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const { return m_snapshotCreateTime; }
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }
    template<typename SnapshotCreateTimeT = Aws::Utils::DateTime>
    void SetSnapshotCreateTime(SnapshotCreateTimeT&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::forward<SnapshotCreateTimeT>(value); }
    template<typename SnapshotCreateTimeT = Aws::Utils::DateTime>
    Snapshot& WithSnapshotCreateTime(SnapshotCreateTimeT&& value) { SetSnapshotCreateTime(std::forward<SnapshotCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    template<typename SnapshotNameT = Aws::String>
    void SetSnapshotName(SnapshotNameT&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::forward<SnapshotNameT>(value); }
    template<typename SnapshotNameT = Aws::String>
    Snapshot& WithSnapshotName(SnapshotNameT&& value) { SetSnapshotName(std::forward<SnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of days until the snapshot is deleted.</p>
     */
    inline int GetSnapshotRemainingDays() const { return m_snapshotRemainingDays; }
    inline bool SnapshotRemainingDaysHasBeenSet() const { return m_snapshotRemainingDaysHasBeenSet; }
    inline void SetSnapshotRemainingDays(int value) { m_snapshotRemainingDaysHasBeenSet = true; m_snapshotRemainingDays = value; }
    inline Snapshot& WithSnapshotRemainingDays(int value) { SetSnapshotRemainingDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period of time, in days, of how long the snapshot is retained.</p>
     */
    inline int GetSnapshotRetentionPeriod() const { return m_snapshotRetentionPeriod; }
    inline bool SnapshotRetentionPeriodHasBeenSet() const { return m_snapshotRetentionPeriodHasBeenSet; }
    inline void SetSnapshotRetentionPeriod(int value) { m_snapshotRetentionPeriodHasBeenSet = true; m_snapshotRetentionPeriod = value; }
    inline Snapshot& WithSnapshotRetentionPeriod(int value) { SetSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when data within the snapshot started getting retained.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotRetentionStartTime() const { return m_snapshotRetentionStartTime; }
    inline bool SnapshotRetentionStartTimeHasBeenSet() const { return m_snapshotRetentionStartTimeHasBeenSet; }
    template<typename SnapshotRetentionStartTimeT = Aws::Utils::DateTime>
    void SetSnapshotRetentionStartTime(SnapshotRetentionStartTimeT&& value) { m_snapshotRetentionStartTimeHasBeenSet = true; m_snapshotRetentionStartTime = std::forward<SnapshotRetentionStartTimeT>(value); }
    template<typename SnapshotRetentionStartTimeT = Aws::Utils::DateTime>
    Snapshot& WithSnapshotRetentionStartTime(SnapshotRetentionStartTimeT&& value) { SetSnapshotRetentionStartTime(std::forward<SnapshotRetentionStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the snapshot.</p>
     */
    inline SnapshotStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SnapshotStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Snapshot& WithStatus(SnapshotStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size, in megabytes, of how big the snapshot is.</p>
     */
    inline double GetTotalBackupSizeInMegaBytes() const { return m_totalBackupSizeInMegaBytes; }
    inline bool TotalBackupSizeInMegaBytesHasBeenSet() const { return m_totalBackupSizeInMegaBytesHasBeenSet; }
    inline void SetTotalBackupSizeInMegaBytes(double value) { m_totalBackupSizeInMegaBytesHasBeenSet = true; m_totalBackupSizeInMegaBytes = value; }
    inline Snapshot& WithTotalBackupSizeInMegaBytes(double value) { SetTotalBackupSizeInMegaBytes(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountsWithProvisionedRestoreAccess;
    bool m_accountsWithProvisionedRestoreAccessHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountsWithRestoreAccess;
    bool m_accountsWithRestoreAccessHasBeenSet = false;

    double m_actualIncrementalBackupSizeInMegaBytes{0.0};
    bool m_actualIncrementalBackupSizeInMegaBytesHasBeenSet = false;

    Aws::String m_adminPasswordSecretArn;
    bool m_adminPasswordSecretArnHasBeenSet = false;

    Aws::String m_adminPasswordSecretKmsKeyId;
    bool m_adminPasswordSecretKmsKeyIdHasBeenSet = false;

    Aws::String m_adminUsername;
    bool m_adminUsernameHasBeenSet = false;

    double m_backupProgressInMegaBytes{0.0};
    bool m_backupProgressInMegaBytesHasBeenSet = false;

    double m_currentBackupRateInMegaBytesPerSecond{0.0};
    bool m_currentBackupRateInMegaBytesPerSecondHasBeenSet = false;

    long long m_elapsedTimeInSeconds{0};
    bool m_elapsedTimeInSecondsHasBeenSet = false;

    long long m_estimatedSecondsToCompletion{0};
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

    Aws::Utils::DateTime m_snapshotCreateTime{};
    bool m_snapshotCreateTimeHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    int m_snapshotRemainingDays{0};
    bool m_snapshotRemainingDaysHasBeenSet = false;

    int m_snapshotRetentionPeriod{0};
    bool m_snapshotRetentionPeriodHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotRetentionStartTime{};
    bool m_snapshotRetentionStartTimeHasBeenSet = false;

    SnapshotStatus m_status{SnapshotStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    double m_totalBackupSizeInMegaBytes{0.0};
    bool m_totalBackupSizeInMegaBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
