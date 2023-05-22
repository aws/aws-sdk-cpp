/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class AssetBundleExportJobDataSourcePropertyToOverride
  {
    NOT_SET,
    Name,
    DisableSsl,
    SecretArn,
    Username,
    Password,
    Domain,
    WorkGroup,
    Host,
    Port,
    Database,
    DataSetName,
    Catalog,
    InstanceId,
    ClusterId,
    ManifestFileLocation,
    Warehouse,
    RoleArn
  };

namespace AssetBundleExportJobDataSourcePropertyToOverrideMapper
{
AWS_QUICKSIGHT_API AssetBundleExportJobDataSourcePropertyToOverride GetAssetBundleExportJobDataSourcePropertyToOverrideForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAssetBundleExportJobDataSourcePropertyToOverride(AssetBundleExportJobDataSourcePropertyToOverride value);
} // namespace AssetBundleExportJobDataSourcePropertyToOverrideMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
