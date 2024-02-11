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
    AWS_QUICKSIGHT_API AssetBundleExportJobSummary();
    AWS_QUICKSIGHT_API AssetBundleExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status of the export job.</p>
     */
    inline const AssetBundleExportJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the export job.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>The current status of the export job.</p>
     */
    inline void SetJobStatus(const AssetBundleExportJobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The current status of the export job.</p>
     */
    inline void SetJobStatus(AssetBundleExportJobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the export job.</p>
     */
    inline AssetBundleExportJobSummary& WithJobStatus(const AssetBundleExportJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the export job.</p>
     */
    inline AssetBundleExportJobSummary& WithJobStatus(AssetBundleExportJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN of the export job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the export job.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the export job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the export job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the export job.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the export job.</p>
     */
    inline AssetBundleExportJobSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the export job.</p>
     */
    inline AssetBundleExportJobSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the export job.</p>
     */
    inline AssetBundleExportJobSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time that the export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that the export job was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time that the export job was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time that the export job was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time that the export job was created.</p>
     */
    inline AssetBundleExportJobSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that the export job was created.</p>
     */
    inline AssetBundleExportJobSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the export job.</p>
     */
    inline const Aws::String& GetAssetBundleExportJobId() const{ return m_assetBundleExportJobId; }

    /**
     * <p>The ID of the export job.</p>
     */
    inline bool AssetBundleExportJobIdHasBeenSet() const { return m_assetBundleExportJobIdHasBeenSet; }

    /**
     * <p>The ID of the export job.</p>
     */
    inline void SetAssetBundleExportJobId(const Aws::String& value) { m_assetBundleExportJobIdHasBeenSet = true; m_assetBundleExportJobId = value; }

    /**
     * <p>The ID of the export job.</p>
     */
    inline void SetAssetBundleExportJobId(Aws::String&& value) { m_assetBundleExportJobIdHasBeenSet = true; m_assetBundleExportJobId = std::move(value); }

    /**
     * <p>The ID of the export job.</p>
     */
    inline void SetAssetBundleExportJobId(const char* value) { m_assetBundleExportJobIdHasBeenSet = true; m_assetBundleExportJobId.assign(value); }

    /**
     * <p>The ID of the export job.</p>
     */
    inline AssetBundleExportJobSummary& WithAssetBundleExportJobId(const Aws::String& value) { SetAssetBundleExportJobId(value); return *this;}

    /**
     * <p>The ID of the export job.</p>
     */
    inline AssetBundleExportJobSummary& WithAssetBundleExportJobId(Aws::String&& value) { SetAssetBundleExportJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the export job.</p>
     */
    inline AssetBundleExportJobSummary& WithAssetBundleExportJobId(const char* value) { SetAssetBundleExportJobId(value); return *this;}


    /**
     * <p>The flag that determines the inclusion of resource dependencies in the
     * returned asset bundle.</p>
     */
    inline bool GetIncludeAllDependencies() const{ return m_includeAllDependencies; }

    /**
     * <p>The flag that determines the inclusion of resource dependencies in the
     * returned asset bundle.</p>
     */
    inline bool IncludeAllDependenciesHasBeenSet() const { return m_includeAllDependenciesHasBeenSet; }

    /**
     * <p>The flag that determines the inclusion of resource dependencies in the
     * returned asset bundle.</p>
     */
    inline void SetIncludeAllDependencies(bool value) { m_includeAllDependenciesHasBeenSet = true; m_includeAllDependencies = value; }

    /**
     * <p>The flag that determines the inclusion of resource dependencies in the
     * returned asset bundle.</p>
     */
    inline AssetBundleExportJobSummary& WithIncludeAllDependencies(bool value) { SetIncludeAllDependencies(value); return *this;}


    /**
     * <p>The format for the export job.</p>
     */
    inline const AssetBundleExportFormat& GetExportFormat() const{ return m_exportFormat; }

    /**
     * <p>The format for the export job.</p>
     */
    inline bool ExportFormatHasBeenSet() const { return m_exportFormatHasBeenSet; }

    /**
     * <p>The format for the export job.</p>
     */
    inline void SetExportFormat(const AssetBundleExportFormat& value) { m_exportFormatHasBeenSet = true; m_exportFormat = value; }

    /**
     * <p>The format for the export job.</p>
     */
    inline void SetExportFormat(AssetBundleExportFormat&& value) { m_exportFormatHasBeenSet = true; m_exportFormat = std::move(value); }

    /**
     * <p>The format for the export job.</p>
     */
    inline AssetBundleExportJobSummary& WithExportFormat(const AssetBundleExportFormat& value) { SetExportFormat(value); return *this;}

    /**
     * <p>The format for the export job.</p>
     */
    inline AssetBundleExportJobSummary& WithExportFormat(AssetBundleExportFormat&& value) { SetExportFormat(std::move(value)); return *this;}


    /**
     * <p>The flag that determines the inclusion of permissions associated with each
     * resource ARN.</p>
     */
    inline bool GetIncludePermissions() const{ return m_includePermissions; }

    /**
     * <p>The flag that determines the inclusion of permissions associated with each
     * resource ARN.</p>
     */
    inline bool IncludePermissionsHasBeenSet() const { return m_includePermissionsHasBeenSet; }

    /**
     * <p>The flag that determines the inclusion of permissions associated with each
     * resource ARN.</p>
     */
    inline void SetIncludePermissions(bool value) { m_includePermissionsHasBeenSet = true; m_includePermissions = value; }

    /**
     * <p>The flag that determines the inclusion of permissions associated with each
     * resource ARN.</p>
     */
    inline AssetBundleExportJobSummary& WithIncludePermissions(bool value) { SetIncludePermissions(value); return *this;}


    /**
     * <p>The flag that determines the inclusion of tags associated with each resource
     * ARN.</p>
     */
    inline bool GetIncludeTags() const{ return m_includeTags; }

    /**
     * <p>The flag that determines the inclusion of tags associated with each resource
     * ARN.</p>
     */
    inline bool IncludeTagsHasBeenSet() const { return m_includeTagsHasBeenSet; }

    /**
     * <p>The flag that determines the inclusion of tags associated with each resource
     * ARN.</p>
     */
    inline void SetIncludeTags(bool value) { m_includeTagsHasBeenSet = true; m_includeTags = value; }

    /**
     * <p>The flag that determines the inclusion of tags associated with each resource
     * ARN.</p>
     */
    inline AssetBundleExportJobSummary& WithIncludeTags(bool value) { SetIncludeTags(value); return *this;}

  private:

    AssetBundleExportJobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_assetBundleExportJobId;
    bool m_assetBundleExportJobIdHasBeenSet = false;

    bool m_includeAllDependencies;
    bool m_includeAllDependenciesHasBeenSet = false;

    AssetBundleExportFormat m_exportFormat;
    bool m_exportFormatHasBeenSet = false;

    bool m_includePermissions;
    bool m_includePermissionsHasBeenSet = false;

    bool m_includeTags;
    bool m_includeTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
