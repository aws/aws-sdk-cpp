/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AssetBundleResourcePermissions.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>An object that contains a list of permissions to be applied to a list of data
   * source IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobDataSourceOverridePermissions">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobDataSourceOverridePermissions
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverridePermissions();
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverridePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverridePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSourceIds() const{ return m_dataSourceIds; }

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline bool DataSourceIdsHasBeenSet() const { return m_dataSourceIdsHasBeenSet; }

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline void SetDataSourceIds(const Aws::Vector<Aws::String>& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds = value; }

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline void SetDataSourceIds(Aws::Vector<Aws::String>&& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds = std::move(value); }

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSourceOverridePermissions& WithDataSourceIds(const Aws::Vector<Aws::String>& value) { SetDataSourceIds(value); return *this;}

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSourceOverridePermissions& WithDataSourceIds(Aws::Vector<Aws::String>&& value) { SetDataSourceIds(std::move(value)); return *this;}

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSourceOverridePermissions& AddDataSourceIds(const Aws::String& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.push_back(value); return *this; }

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSourceOverridePermissions& AddDataSourceIds(Aws::String&& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSourceOverridePermissions& AddDataSourceIds(const char* value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.push_back(value); return *this; }


    /**
     * <p>A list of permissions for the data source that you want to apply overrides
     * to.</p>
     */
    inline const AssetBundleResourcePermissions& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A list of permissions for the data source that you want to apply overrides
     * to.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>A list of permissions for the data source that you want to apply overrides
     * to.</p>
     */
    inline void SetPermissions(const AssetBundleResourcePermissions& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>A list of permissions for the data source that you want to apply overrides
     * to.</p>
     */
    inline void SetPermissions(AssetBundleResourcePermissions&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>A list of permissions for the data source that you want to apply overrides
     * to.</p>
     */
    inline AssetBundleImportJobDataSourceOverridePermissions& WithPermissions(const AssetBundleResourcePermissions& value) { SetPermissions(value); return *this;}

    /**
     * <p>A list of permissions for the data source that you want to apply overrides
     * to.</p>
     */
    inline AssetBundleImportJobDataSourceOverridePermissions& WithPermissions(AssetBundleResourcePermissions&& value) { SetPermissions(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_dataSourceIds;
    bool m_dataSourceIdsHasBeenSet = false;

    AssetBundleResourcePermissions m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
