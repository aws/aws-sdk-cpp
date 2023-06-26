/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AssetBundleImportJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/AssetBundleImportFailureAction.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A summary of the import job that includes details of the requested job's
   * configuration and its current status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobSummary">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobSummary
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobSummary();
    AWS_QUICKSIGHT_API AssetBundleImportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status of the import job.</p>
     */
    inline const AssetBundleImportJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the import job.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>The current status of the import job.</p>
     */
    inline void SetJobStatus(const AssetBundleImportJobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The current status of the import job.</p>
     */
    inline void SetJobStatus(AssetBundleImportJobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the import job.</p>
     */
    inline AssetBundleImportJobSummary& WithJobStatus(const AssetBundleImportJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the import job.</p>
     */
    inline AssetBundleImportJobSummary& WithJobStatus(AssetBundleImportJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN of the import job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the import job.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the import job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the import job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the import job.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the import job.</p>
     */
    inline AssetBundleImportJobSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the import job.</p>
     */
    inline AssetBundleImportJobSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the import job.</p>
     */
    inline AssetBundleImportJobSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time that the import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that the import job was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time that the import job was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time that the import job was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time that the import job was created.</p>
     */
    inline AssetBundleImportJobSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that the import job was created.</p>
     */
    inline AssetBundleImportJobSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline const Aws::String& GetAssetBundleImportJobId() const{ return m_assetBundleImportJobId; }

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline bool AssetBundleImportJobIdHasBeenSet() const { return m_assetBundleImportJobIdHasBeenSet; }

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline void SetAssetBundleImportJobId(const Aws::String& value) { m_assetBundleImportJobIdHasBeenSet = true; m_assetBundleImportJobId = value; }

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline void SetAssetBundleImportJobId(Aws::String&& value) { m_assetBundleImportJobIdHasBeenSet = true; m_assetBundleImportJobId = std::move(value); }

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline void SetAssetBundleImportJobId(const char* value) { m_assetBundleImportJobIdHasBeenSet = true; m_assetBundleImportJobId.assign(value); }

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline AssetBundleImportJobSummary& WithAssetBundleImportJobId(const Aws::String& value) { SetAssetBundleImportJobId(value); return *this;}

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline AssetBundleImportJobSummary& WithAssetBundleImportJobId(Aws::String&& value) { SetAssetBundleImportJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline AssetBundleImportJobSummary& WithAssetBundleImportJobId(const char* value) { SetAssetBundleImportJobId(value); return *this;}


    /**
     * <p>The failure action for the import job.</p>
     */
    inline const AssetBundleImportFailureAction& GetFailureAction() const{ return m_failureAction; }

    /**
     * <p>The failure action for the import job.</p>
     */
    inline bool FailureActionHasBeenSet() const { return m_failureActionHasBeenSet; }

    /**
     * <p>The failure action for the import job.</p>
     */
    inline void SetFailureAction(const AssetBundleImportFailureAction& value) { m_failureActionHasBeenSet = true; m_failureAction = value; }

    /**
     * <p>The failure action for the import job.</p>
     */
    inline void SetFailureAction(AssetBundleImportFailureAction&& value) { m_failureActionHasBeenSet = true; m_failureAction = std::move(value); }

    /**
     * <p>The failure action for the import job.</p>
     */
    inline AssetBundleImportJobSummary& WithFailureAction(const AssetBundleImportFailureAction& value) { SetFailureAction(value); return *this;}

    /**
     * <p>The failure action for the import job.</p>
     */
    inline AssetBundleImportJobSummary& WithFailureAction(AssetBundleImportFailureAction&& value) { SetFailureAction(std::move(value)); return *this;}

  private:

    AssetBundleImportJobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_assetBundleImportJobId;
    bool m_assetBundleImportJobIdHasBeenSet = false;

    AssetBundleImportFailureAction m_failureAction;
    bool m_failureActionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
