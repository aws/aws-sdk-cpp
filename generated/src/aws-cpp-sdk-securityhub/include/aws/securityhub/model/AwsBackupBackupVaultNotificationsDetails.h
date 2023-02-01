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
    AWS_SECURITYHUB_API AwsBackupBackupVaultNotificationsDetails();
    AWS_SECURITYHUB_API AwsBackupBackupVaultNotificationsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupBackupVaultNotificationsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault. The following events are supported:</p> <ul> <li> <p>
     * <code>BACKUP_JOB_STARTED | BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED | COPY_JOB_SUCCESSFUL | COPY_JOB_FAILED</code> </p> </li>
     * <li> <p> <code>RESTORE_JOB_STARTED | RESTORE_JOB_COMPLETED |
     * RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p> <code>S3_BACKUP_OBJECT_FAILED
     * | S3_RESTORE_OBJECT_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetBackupVaultEvents() const{ return m_backupVaultEvents; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault. The following events are supported:</p> <ul> <li> <p>
     * <code>BACKUP_JOB_STARTED | BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED | COPY_JOB_SUCCESSFUL | COPY_JOB_FAILED</code> </p> </li>
     * <li> <p> <code>RESTORE_JOB_STARTED | RESTORE_JOB_COMPLETED |
     * RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p> <code>S3_BACKUP_OBJECT_FAILED
     * | S3_RESTORE_OBJECT_FAILED</code> </p> </li> </ul>
     */
    inline bool BackupVaultEventsHasBeenSet() const { return m_backupVaultEventsHasBeenSet; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault. The following events are supported:</p> <ul> <li> <p>
     * <code>BACKUP_JOB_STARTED | BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED | COPY_JOB_SUCCESSFUL | COPY_JOB_FAILED</code> </p> </li>
     * <li> <p> <code>RESTORE_JOB_STARTED | RESTORE_JOB_COMPLETED |
     * RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p> <code>S3_BACKUP_OBJECT_FAILED
     * | S3_RESTORE_OBJECT_FAILED</code> </p> </li> </ul>
     */
    inline void SetBackupVaultEvents(const Aws::Vector<Aws::String>& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents = value; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault. The following events are supported:</p> <ul> <li> <p>
     * <code>BACKUP_JOB_STARTED | BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED | COPY_JOB_SUCCESSFUL | COPY_JOB_FAILED</code> </p> </li>
     * <li> <p> <code>RESTORE_JOB_STARTED | RESTORE_JOB_COMPLETED |
     * RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p> <code>S3_BACKUP_OBJECT_FAILED
     * | S3_RESTORE_OBJECT_FAILED</code> </p> </li> </ul>
     */
    inline void SetBackupVaultEvents(Aws::Vector<Aws::String>&& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents = std::move(value); }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault. The following events are supported:</p> <ul> <li> <p>
     * <code>BACKUP_JOB_STARTED | BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED | COPY_JOB_SUCCESSFUL | COPY_JOB_FAILED</code> </p> </li>
     * <li> <p> <code>RESTORE_JOB_STARTED | RESTORE_JOB_COMPLETED |
     * RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p> <code>S3_BACKUP_OBJECT_FAILED
     * | S3_RESTORE_OBJECT_FAILED</code> </p> </li> </ul>
     */
    inline AwsBackupBackupVaultNotificationsDetails& WithBackupVaultEvents(const Aws::Vector<Aws::String>& value) { SetBackupVaultEvents(value); return *this;}

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault. The following events are supported:</p> <ul> <li> <p>
     * <code>BACKUP_JOB_STARTED | BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED | COPY_JOB_SUCCESSFUL | COPY_JOB_FAILED</code> </p> </li>
     * <li> <p> <code>RESTORE_JOB_STARTED | RESTORE_JOB_COMPLETED |
     * RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p> <code>S3_BACKUP_OBJECT_FAILED
     * | S3_RESTORE_OBJECT_FAILED</code> </p> </li> </ul>
     */
    inline AwsBackupBackupVaultNotificationsDetails& WithBackupVaultEvents(Aws::Vector<Aws::String>&& value) { SetBackupVaultEvents(std::move(value)); return *this;}

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault. The following events are supported:</p> <ul> <li> <p>
     * <code>BACKUP_JOB_STARTED | BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED | COPY_JOB_SUCCESSFUL | COPY_JOB_FAILED</code> </p> </li>
     * <li> <p> <code>RESTORE_JOB_STARTED | RESTORE_JOB_COMPLETED |
     * RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p> <code>S3_BACKUP_OBJECT_FAILED
     * | S3_RESTORE_OBJECT_FAILED</code> </p> </li> </ul>
     */
    inline AwsBackupBackupVaultNotificationsDetails& AddBackupVaultEvents(const Aws::String& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents.push_back(value); return *this; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault. The following events are supported:</p> <ul> <li> <p>
     * <code>BACKUP_JOB_STARTED | BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED | COPY_JOB_SUCCESSFUL | COPY_JOB_FAILED</code> </p> </li>
     * <li> <p> <code>RESTORE_JOB_STARTED | RESTORE_JOB_COMPLETED |
     * RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p> <code>S3_BACKUP_OBJECT_FAILED
     * | S3_RESTORE_OBJECT_FAILED</code> </p> </li> </ul>
     */
    inline AwsBackupBackupVaultNotificationsDetails& AddBackupVaultEvents(Aws::String&& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault. The following events are supported:</p> <ul> <li> <p>
     * <code>BACKUP_JOB_STARTED | BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED | COPY_JOB_SUCCESSFUL | COPY_JOB_FAILED</code> </p> </li>
     * <li> <p> <code>RESTORE_JOB_STARTED | RESTORE_JOB_COMPLETED |
     * RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p> <code>S3_BACKUP_OBJECT_FAILED
     * | S3_RESTORE_OBJECT_FAILED</code> </p> </li> </ul>
     */
    inline AwsBackupBackupVaultNotificationsDetails& AddBackupVaultEvents(const char* value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents.push_back(value); return *this; }


    /**
     * <p>An ARN that uniquely identifies the Amazon SNS topic for a backup vault’s
     * events. </p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>An ARN that uniquely identifies the Amazon SNS topic for a backup vault’s
     * events. </p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies the Amazon SNS topic for a backup vault’s
     * events. </p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>An ARN that uniquely identifies the Amazon SNS topic for a backup vault’s
     * events. </p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies the Amazon SNS topic for a backup vault’s
     * events. </p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies the Amazon SNS topic for a backup vault’s
     * events. </p>
     */
    inline AwsBackupBackupVaultNotificationsDetails& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies the Amazon SNS topic for a backup vault’s
     * events. </p>
     */
    inline AwsBackupBackupVaultNotificationsDetails& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies the Amazon SNS topic for a backup vault’s
     * events. </p>
     */
    inline AwsBackupBackupVaultNotificationsDetails& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_backupVaultEvents;
    bool m_backupVaultEventsHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
