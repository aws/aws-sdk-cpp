/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobSummary.h>
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

AssetBundleImportJobSummary::AssetBundleImportJobSummary() : 
    m_jobStatus(AssetBundleImportJobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_assetBundleImportJobIdHasBeenSet(false),
    m_failureAction(AssetBundleImportFailureAction::NOT_SET),
    m_failureActionHasBeenSet(false)
{
}

AssetBundleImportJobSummary::AssetBundleImportJobSummary(JsonView jsonValue) : 
    m_jobStatus(AssetBundleImportJobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_assetBundleImportJobIdHasBeenSet(false),
    m_failureAction(AssetBundleImportFailureAction::NOT_SET),
    m_failureActionHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobSummary& AssetBundleImportJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = AssetBundleImportJobStatusMapper::GetAssetBundleImportJobStatusForName(jsonValue.GetString("JobStatus"));

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

  if(jsonValue.ValueExists("AssetBundleImportJobId"))
  {
    m_assetBundleImportJobId = jsonValue.GetString("AssetBundleImportJobId");

    m_assetBundleImportJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureAction"))
  {
    m_failureAction = AssetBundleImportFailureActionMapper::GetAssetBundleImportFailureActionForName(jsonValue.GetString("FailureAction"));

    m_failureActionHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("JobStatus", AssetBundleImportJobStatusMapper::GetNameForAssetBundleImportJobStatus(m_jobStatus));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_assetBundleImportJobIdHasBeenSet)
  {
   payload.WithString("AssetBundleImportJobId", m_assetBundleImportJobId);

  }

  if(m_failureActionHasBeenSet)
  {
   payload.WithString("FailureAction", AssetBundleImportFailureActionMapper::GetNameForAssetBundleImportFailureAction(m_failureAction));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
