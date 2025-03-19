/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AssetBundleExportJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/AssetBundleExportFormat.h>
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
   * <p>A summary of the export job that includes details of the job's configuration
   * and its current status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleExportJobSummary">AWS
   * API Reference</a></p>
   */
  class AssetBundleExportJobSummary
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleExportJobSummary() = default;
    AWS_QUICKSIGHT_API AssetBundleExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current status of the export job.</p>
     */
    inline AssetBundleExportJobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(AssetBundleExportJobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline AssetBundleExportJobSummary& WithJobStatus(AssetBundleExportJobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the export job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AssetBundleExportJobSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    AssetBundleExportJobSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the export job.</p>
     */
    inline const Aws::String& GetAssetBundleExportJobId() const { return m_assetBundleExportJobId; }
    inline bool AssetBundleExportJobIdHasBeenSet() const { return m_assetBundleExportJobIdHasBeenSet; }
    template<typename AssetBundleExportJobIdT = Aws::String>
    void SetAssetBundleExportJobId(AssetBundleExportJobIdT&& value) { m_assetBundleExportJobIdHasBeenSet = true; m_assetBundleExportJobId = std::forward<AssetBundleExportJobIdT>(value); }
    template<typename AssetBundleExportJobIdT = Aws::String>
    AssetBundleExportJobSummary& WithAssetBundleExportJobId(AssetBundleExportJobIdT&& value) { SetAssetBundleExportJobId(std::forward<AssetBundleExportJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flag that determines the inclusion of resource dependencies in the
     * returned asset bundle.</p>
     */
    inline bool GetIncludeAllDependencies() const { return m_includeAllDependencies; }
    inline bool IncludeAllDependenciesHasBeenSet() const { return m_includeAllDependenciesHasBeenSet; }
    inline void SetIncludeAllDependencies(bool value) { m_includeAllDependenciesHasBeenSet = true; m_includeAllDependencies = value; }
    inline AssetBundleExportJobSummary& WithIncludeAllDependencies(bool value) { SetIncludeAllDependencies(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format for the export job.</p>
     */
    inline AssetBundleExportFormat GetExportFormat() const { return m_exportFormat; }
    inline bool ExportFormatHasBeenSet() const { return m_exportFormatHasBeenSet; }
    inline void SetExportFormat(AssetBundleExportFormat value) { m_exportFormatHasBeenSet = true; m_exportFormat = value; }
    inline AssetBundleExportJobSummary& WithExportFormat(AssetBundleExportFormat value) { SetExportFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flag that determines the inclusion of permissions associated with each
     * resource ARN.</p>
     */
    inline bool GetIncludePermissions() const { return m_includePermissions; }
    inline bool IncludePermissionsHasBeenSet() const { return m_includePermissionsHasBeenSet; }
    inline void SetIncludePermissions(bool value) { m_includePermissionsHasBeenSet = true; m_includePermissions = value; }
    inline AssetBundleExportJobSummary& WithIncludePermissions(bool value) { SetIncludePermissions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flag that determines the inclusion of tags associated with each resource
     * ARN.</p>
     */
    inline bool GetIncludeTags() const { return m_includeTags; }
    inline bool IncludeTagsHasBeenSet() const { return m_includeTagsHasBeenSet; }
    inline void SetIncludeTags(bool value) { m_includeTagsHasBeenSet = true; m_includeTags = value; }
    inline AssetBundleExportJobSummary& WithIncludeTags(bool value) { SetIncludeTags(value); return *this;}
    ///@}
  private:

    AssetBundleExportJobStatus m_jobStatus{AssetBundleExportJobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_assetBundleExportJobId;
    bool m_assetBundleExportJobIdHasBeenSet = false;

    bool m_includeAllDependencies{false};
    bool m_includeAllDependenciesHasBeenSet = false;

    AssetBundleExportFormat m_exportFormat{AssetBundleExportFormat::NOT_SET};
    bool m_exportFormatHasBeenSet = false;

    bool m_includePermissions{false};
    bool m_includePermissionsHasBeenSet = false;

    bool m_includeTags{false};
    bool m_includeTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
