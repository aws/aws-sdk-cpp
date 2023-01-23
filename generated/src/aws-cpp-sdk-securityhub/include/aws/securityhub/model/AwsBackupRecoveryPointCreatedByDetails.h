/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
   * <p>Contains information about the backup plan and rule that Backup used to
   * initiate the recovery point backup. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsBackupRecoveryPointCreatedByDetails">AWS
   * API Reference</a></p>
   */
  class AwsBackupRecoveryPointCreatedByDetails
  {
  public:
    AWS_SECURITYHUB_API AwsBackupRecoveryPointCreatedByDetails();
    AWS_SECURITYHUB_API AwsBackupRecoveryPointCreatedByDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupRecoveryPointCreatedByDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan. </p>
     */
    inline const Aws::String& GetBackupPlanArn() const{ return m_backupPlanArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan. </p>
     */
    inline bool BackupPlanArnHasBeenSet() const { return m_backupPlanArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan. </p>
     */
    inline void SetBackupPlanArn(const Aws::String& value) { m_backupPlanArnHasBeenSet = true; m_backupPlanArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan. </p>
     */
    inline void SetBackupPlanArn(Aws::String&& value) { m_backupPlanArnHasBeenSet = true; m_backupPlanArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan. </p>
     */
    inline void SetBackupPlanArn(const char* value) { m_backupPlanArnHasBeenSet = true; m_backupPlanArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan. </p>
     */
    inline AwsBackupRecoveryPointCreatedByDetails& WithBackupPlanArn(const Aws::String& value) { SetBackupPlanArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan. </p>
     */
    inline AwsBackupRecoveryPointCreatedByDetails& WithBackupPlanArn(Aws::String&& value) { SetBackupPlanArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan. </p>
     */
    inline AwsBackupRecoveryPointCreatedByDetails& WithBackupPlanArn(const char* value) { SetBackupPlanArn(value); return *this;}


    /**
     * <p>Uniquely identifies a backup plan. </p>
     */
    inline const Aws::String& GetBackupPlanId() const{ return m_backupPlanId; }

    /**
     * <p>Uniquely identifies a backup plan. </p>
     */
    inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }

    /**
     * <p>Uniquely identifies a backup plan. </p>
     */
    inline void SetBackupPlanId(const Aws::String& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = value; }

    /**
     * <p>Uniquely identifies a backup plan. </p>
     */
    inline void SetBackupPlanId(Aws::String&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::move(value); }

    /**
     * <p>Uniquely identifies a backup plan. </p>
     */
    inline void SetBackupPlanId(const char* value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId.assign(value); }

    /**
     * <p>Uniquely identifies a backup plan. </p>
     */
    inline AwsBackupRecoveryPointCreatedByDetails& WithBackupPlanId(const Aws::String& value) { SetBackupPlanId(value); return *this;}

    /**
     * <p>Uniquely identifies a backup plan. </p>
     */
    inline AwsBackupRecoveryPointCreatedByDetails& WithBackupPlanId(Aws::String&& value) { SetBackupPlanId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a backup plan. </p>
     */
    inline AwsBackupRecoveryPointCreatedByDetails& WithBackupPlanId(const char* value) { SetBackupPlanId(value); return *this;}


    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited. </p>
     */
    inline const Aws::String& GetBackupPlanVersion() const{ return m_backupPlanVersion; }

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited. </p>
     */
    inline bool BackupPlanVersionHasBeenSet() const { return m_backupPlanVersionHasBeenSet; }

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited. </p>
     */
    inline void SetBackupPlanVersion(const Aws::String& value) { m_backupPlanVersionHasBeenSet = true; m_backupPlanVersion = value; }

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited. </p>
     */
    inline void SetBackupPlanVersion(Aws::String&& value) { m_backupPlanVersionHasBeenSet = true; m_backupPlanVersion = std::move(value); }

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited. </p>
     */
    inline void SetBackupPlanVersion(const char* value) { m_backupPlanVersionHasBeenSet = true; m_backupPlanVersion.assign(value); }

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited. </p>
     */
    inline AwsBackupRecoveryPointCreatedByDetails& WithBackupPlanVersion(const Aws::String& value) { SetBackupPlanVersion(value); return *this;}

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited. </p>
     */
    inline AwsBackupRecoveryPointCreatedByDetails& WithBackupPlanVersion(Aws::String&& value) { SetBackupPlanVersion(std::move(value)); return *this;}

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited. </p>
     */
    inline AwsBackupRecoveryPointCreatedByDetails& WithBackupPlanVersion(const char* value) { SetBackupPlanVersion(value); return *this;}


    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources. </p>
     */
    inline const Aws::String& GetBackupRuleId() const{ return m_backupRuleId; }

    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources. </p>
     */
    inline bool BackupRuleIdHasBeenSet() const { return m_backupRuleIdHasBeenSet; }

    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources. </p>
     */
    inline void SetBackupRuleId(const Aws::String& value) { m_backupRuleIdHasBeenSet = true; m_backupRuleId = value; }

    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources. </p>
     */
    inline void SetBackupRuleId(Aws::String&& value) { m_backupRuleIdHasBeenSet = true; m_backupRuleId = std::move(value); }

    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources. </p>
     */
    inline void SetBackupRuleId(const char* value) { m_backupRuleIdHasBeenSet = true; m_backupRuleId.assign(value); }

    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources. </p>
     */
    inline AwsBackupRecoveryPointCreatedByDetails& WithBackupRuleId(const Aws::String& value) { SetBackupRuleId(value); return *this;}

    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources. </p>
     */
    inline AwsBackupRecoveryPointCreatedByDetails& WithBackupRuleId(Aws::String&& value) { SetBackupRuleId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources. </p>
     */
    inline AwsBackupRecoveryPointCreatedByDetails& WithBackupRuleId(const char* value) { SetBackupRuleId(value); return *this;}

  private:

    Aws::String m_backupPlanArn;
    bool m_backupPlanArnHasBeenSet = false;

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet = false;

    Aws::String m_backupPlanVersion;
    bool m_backupPlanVersionHasBeenSet = false;

    Aws::String m_backupRuleId;
    bool m_backupRuleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
