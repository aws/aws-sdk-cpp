/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleExportJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AssetBundleExportJobSummary::AssetBundleExportJobSummary() : 
    m_jobStatus(AssetBundleExportJobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_assetBundleExportJobIdHasBeenSet(false),
    m_includeAllDependencies(false),
    m_includeAllDependenciesHasBeenSet(false),
    m_exportFormat(AssetBundleExportFormat::NOT_SET),
    m_exportFormatHasBeenSet(false),
    m_includePermissions(false),
    m_includePermissionsHasBeenSet(false),
    m_includeTags(false),
    m_includeTagsHasBeenSet(false)
{
}

AssetBundleExportJobSummary::AssetBundleExportJobSummary(JsonView jsonValue) : 
    m_jobStatus(AssetBundleExportJobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_assetBundleExportJobIdHasBeenSet(false),
    m_includeAllDependencies(false),
    m_includeAllDependenciesHasBeenSet(false),
    m_exportFormat(AssetBundleExportFormat::NOT_SET),
    m_exportFormatHasBeenSet(false),
    m_includePermissions(false),
    m_includePermissionsHasBeenSet(false),
    m_includeTags(false),
    m_includeTagsHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleExportJobSummary& AssetBundleExportJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = AssetBundleExportJobStatusMapper::GetAssetBundleExportJobStatusForName(jsonValue.GetString("JobStatus"));

    m_jobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssetBundleExportJobId"))
  {
    m_assetBundleExportJobId = jsonValue.GetString("AssetBundleExportJobId");

    m_assetBundleExportJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeAllDependencies"))
  {
    m_includeAllDependencies = jsonValue.GetBool("IncludeAllDependencies");

    m_includeAllDependenciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportFormat"))
  {
    m_exportFormat = AssetBundleExportFormatMapper::GetAssetBundleExportFormatForName(jsonValue.GetString("ExportFormat"));

    m_exportFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludePermissions"))
  {
    m_includePermissions = jsonValue.GetBool("IncludePermissions");

    m_includePermissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeTags"))
  {
    m_includeTags = jsonValue.GetBool("IncludeTags");

    m_includeTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleExportJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("JobStatus", AssetBundleExportJobStatusMapper::GetNameForAssetBundleExportJobStatus(m_jobStatus));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_assetBundleExportJobIdHasBeenSet)
  {
   payload.WithString("AssetBundleExportJobId", m_assetBundleExportJobId);

  }

  if(m_includeAllDependenciesHasBeenSet)
  {
   payload.WithBool("IncludeAllDependencies", m_includeAllDependencies);

  }

  if(m_exportFormatHasBeenSet)
  {
   payload.WithString("ExportFormat", AssetBundleExportFormatMapper::GetNameForAssetBundleExportFormat(m_exportFormat));
  }

  if(m_includePermissionsHasBeenSet)
  {
   payload.WithBool("IncludePermissions", m_includePermissions);

  }

  if(m_includeTagsHasBeenSet)
  {
   payload.WithBool("IncludeTags", m_includeTags);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
