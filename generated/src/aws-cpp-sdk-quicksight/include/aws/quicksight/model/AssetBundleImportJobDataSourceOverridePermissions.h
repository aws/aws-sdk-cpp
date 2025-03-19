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
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverridePermissions() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverridePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverridePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSourceIds() const { return m_dataSourceIds; }
    inline bool DataSourceIdsHasBeenSet() const { return m_dataSourceIdsHasBeenSet; }
    template<typename DataSourceIdsT = Aws::Vector<Aws::String>>
    void SetDataSourceIds(DataSourceIdsT&& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds = std::forward<DataSourceIdsT>(value); }
    template<typename DataSourceIdsT = Aws::Vector<Aws::String>>
    AssetBundleImportJobDataSourceOverridePermissions& WithDataSourceIds(DataSourceIdsT&& value) { SetDataSourceIds(std::forward<DataSourceIdsT>(value)); return *this;}
    template<typename DataSourceIdsT = Aws::String>
    AssetBundleImportJobDataSourceOverridePermissions& AddDataSourceIds(DataSourceIdsT&& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.emplace_back(std::forward<DataSourceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of permissions for the data source that you want to apply overrides
     * to.</p>
     */
    inline const AssetBundleResourcePermissions& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = AssetBundleResourcePermissions>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = AssetBundleResourcePermissions>
    AssetBundleImportJobDataSourceOverridePermissions& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_dataSourceIds;
    bool m_dataSourceIdsHasBeenSet = false;

    AssetBundleResourcePermissions m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
