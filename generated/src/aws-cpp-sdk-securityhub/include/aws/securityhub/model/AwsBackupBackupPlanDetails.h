/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsBackupBackupPlanBackupPlanDetails.h>
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
   * <p>Provides details about an Backup backup plan and an array of
   * <code>BackupRule</code> objects, each of which specifies a backup rule.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsBackupBackupPlanDetails">AWS
   * API Reference</a></p>
   */
  class AwsBackupBackupPlanDetails
  {
  public:
    AWS_SECURITYHUB_API AwsBackupBackupPlanDetails();
    AWS_SECURITYHUB_API AwsBackupBackupPlanDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupBackupPlanDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Uniquely identifies the backup plan to be associated with the selection of
     * resources. </p>
     */
    inline const AwsBackupBackupPlanBackupPlanDetails& GetBackupPlan() const{ return m_backupPlan; }

    /**
     * <p>Uniquely identifies the backup plan to be associated with the selection of
     * resources. </p>
     */
    inline bool BackupPlanHasBeenSet() const { return m_backupPlanHasBeenSet; }

    /**
     * <p>Uniquely identifies the backup plan to be associated with the selection of
     * resources. </p>
     */
    inline void SetBackupPlan(const AwsBackupBackupPlanBackupPlanDetails& value) { m_backupPlanHasBeenSet = true; m_backupPlan = value; }

    /**
     * <p>Uniquely identifies the backup plan to be associated with the selection of
     * resources. </p>
     */
    inline void SetBackupPlan(AwsBackupBackupPlanBackupPlanDetails&& value) { m_backupPlanHasBeenSet = true; m_backupPlan = std::move(value); }

    /**
     * <p>Uniquely identifies the backup plan to be associated with the selection of
     * resources. </p>
     */
    inline AwsBackupBackupPlanDetails& WithBackupPlan(const AwsBackupBackupPlanBackupPlanDetails& value) { SetBackupPlan(value); return *this;}

    /**
     * <p>Uniquely identifies the backup plan to be associated with the selection of
     * resources. </p>
     */
    inline AwsBackupBackupPlanDetails& WithBackupPlan(AwsBackupBackupPlanBackupPlanDetails&& value) { SetBackupPlan(std::move(value)); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the backup plan. </p>
     */
    inline const Aws::String& GetBackupPlanArn() const{ return m_backupPlanArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the backup plan. </p>
     */
    inline bool BackupPlanArnHasBeenSet() const { return m_backupPlanArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the backup plan. </p>
     */
    inline void SetBackupPlanArn(const Aws::String& value) { m_backupPlanArnHasBeenSet = true; m_backupPlanArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the backup plan. </p>
     */
    inline void SetBackupPlanArn(Aws::String&& value) { m_backupPlanArnHasBeenSet = true; m_backupPlanArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the backup plan. </p>
     */
    inline void SetBackupPlanArn(const char* value) { m_backupPlanArnHasBeenSet = true; m_backupPlanArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the backup plan. </p>
     */
    inline AwsBackupBackupPlanDetails& WithBackupPlanArn(const Aws::String& value) { SetBackupPlanArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the backup plan. </p>
     */
    inline AwsBackupBackupPlanDetails& WithBackupPlanArn(Aws::String&& value) { SetBackupPlanArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the backup plan. </p>
     */
    inline AwsBackupBackupPlanDetails& WithBackupPlanArn(const char* value) { SetBackupPlanArn(value); return *this;}


    /**
     * <p>A unique ID for the backup plan. </p>
     */
    inline const Aws::String& GetBackupPlanId() const{ return m_backupPlanId; }

    /**
     * <p>A unique ID for the backup plan. </p>
     */
    inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }

    /**
     * <p>A unique ID for the backup plan. </p>
     */
    inline void SetBackupPlanId(const Aws::String& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = value; }

    /**
     * <p>A unique ID for the backup plan. </p>
     */
    inline void SetBackupPlanId(Aws::String&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::move(value); }

    /**
     * <p>A unique ID for the backup plan. </p>
     */
    inline void SetBackupPlanId(const char* value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId.assign(value); }

    /**
     * <p>A unique ID for the backup plan. </p>
     */
    inline AwsBackupBackupPlanDetails& WithBackupPlanId(const Aws::String& value) { SetBackupPlanId(value); return *this;}

    /**
     * <p>A unique ID for the backup plan. </p>
     */
    inline AwsBackupBackupPlanDetails& WithBackupPlanId(Aws::String&& value) { SetBackupPlanId(std::move(value)); return *this;}

    /**
     * <p>A unique ID for the backup plan. </p>
     */
    inline AwsBackupBackupPlanDetails& WithBackupPlanId(const char* value) { SetBackupPlanId(value); return *this;}


    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings. Version IDs
     * cannot be edited. </p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings. Version IDs
     * cannot be edited. </p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings. Version IDs
     * cannot be edited. </p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings. Version IDs
     * cannot be edited. </p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings. Version IDs
     * cannot be edited. </p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings. Version IDs
     * cannot be edited. </p>
     */
    inline AwsBackupBackupPlanDetails& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings. Version IDs
     * cannot be edited. </p>
     */
    inline AwsBackupBackupPlanDetails& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings. Version IDs
     * cannot be edited. </p>
     */
    inline AwsBackupBackupPlanDetails& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:

    AwsBackupBackupPlanBackupPlanDetails m_backupPlan;
    bool m_backupPlanHasBeenSet = false;

    Aws::String m_backupPlanArn;
    bool m_backupPlanArnHasBeenSet = false;

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
