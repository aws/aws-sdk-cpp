/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides details about the Amazon SNS event notifications for the specified
   * backup vault. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsBackupBackupVaultNotificationsDetails">AWS
   * API Reference</a></p>
   */
  class AwsBackupBackupVaultNotificationsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsBackupBackupVaultNotificationsDetails() = default;
    AWS_SECURITYHUB_API AwsBackupBackupVaultNotificationsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupBackupVaultNotificationsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault. The following events are supported:</p> <ul> <li> <p>
     * <code>BACKUP_JOB_STARTED | BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED | COPY_JOB_SUCCESSFUL | COPY_JOB_FAILED</code> </p> </li>
     * <li> <p> <code>RESTORE_JOB_STARTED | RESTORE_JOB_COMPLETED |
     * RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p> <code>S3_BACKUP_OBJECT_FAILED
     * | S3_RESTORE_OBJECT_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetBackupVaultEvents() const { return m_backupVaultEvents; }
    inline bool BackupVaultEventsHasBeenSet() const { return m_backupVaultEventsHasBeenSet; }
    template<typename BackupVaultEventsT = Aws::Vector<Aws::String>>
    void SetBackupVaultEvents(BackupVaultEventsT&& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents = std::forward<BackupVaultEventsT>(value); }
    template<typename BackupVaultEventsT = Aws::Vector<Aws::String>>
    AwsBackupBackupVaultNotificationsDetails& WithBackupVaultEvents(BackupVaultEventsT&& value) { SetBackupVaultEvents(std::forward<BackupVaultEventsT>(value)); return *this;}
    template<typename BackupVaultEventsT = Aws::String>
    AwsBackupBackupVaultNotificationsDetails& AddBackupVaultEvents(BackupVaultEventsT&& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents.emplace_back(std::forward<BackupVaultEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the Amazon SNS topic
     * for a backup vault's events. </p>
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    AwsBackupBackupVaultNotificationsDetails& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_backupVaultEvents;
    bool m_backupVaultEventsHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
