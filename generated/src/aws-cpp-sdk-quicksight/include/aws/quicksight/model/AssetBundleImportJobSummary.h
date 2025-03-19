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
    AWS_QUICKSIGHT_API AssetBundleImportJobSummary() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current status of the import job.</p>
     */
    inline AssetBundleImportJobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(AssetBundleImportJobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline AssetBundleImportJobSummary& WithJobStatus(AssetBundleImportJobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the import job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AssetBundleImportJobSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    AssetBundleImportJobSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline const Aws::String& GetAssetBundleImportJobId() const { return m_assetBundleImportJobId; }
    inline bool AssetBundleImportJobIdHasBeenSet() const { return m_assetBundleImportJobIdHasBeenSet; }
    template<typename AssetBundleImportJobIdT = Aws::String>
    void SetAssetBundleImportJobId(AssetBundleImportJobIdT&& value) { m_assetBundleImportJobIdHasBeenSet = true; m_assetBundleImportJobId = std::forward<AssetBundleImportJobIdT>(value); }
    template<typename AssetBundleImportJobIdT = Aws::String>
    AssetBundleImportJobSummary& WithAssetBundleImportJobId(AssetBundleImportJobIdT&& value) { SetAssetBundleImportJobId(std::forward<AssetBundleImportJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure action for the import job.</p>
     */
    inline AssetBundleImportFailureAction GetFailureAction() const { return m_failureAction; }
    inline bool FailureActionHasBeenSet() const { return m_failureActionHasBeenSet; }
    inline void SetFailureAction(AssetBundleImportFailureAction value) { m_failureActionHasBeenSet = true; m_failureAction = value; }
    inline AssetBundleImportJobSummary& WithFailureAction(AssetBundleImportFailureAction value) { SetFailureAction(value); return *this;}
    ///@}
  private:

    AssetBundleImportJobStatus m_jobStatus{AssetBundleImportJobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_assetBundleImportJobId;
    bool m_assetBundleImportJobIdHasBeenSet = false;

    AssetBundleImportFailureAction m_failureAction{AssetBundleImportFailureAction::NOT_SET};
    bool m_failureActionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
