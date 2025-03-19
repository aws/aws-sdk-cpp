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
   * <p>An object that contains a list of permissions to be applied to a list of
   * dataset IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobDataSetOverridePermissions">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobDataSetOverridePermissions
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverridePermissions() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverridePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverridePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of dataset IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all datasets in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSetIds() const { return m_dataSetIds; }
    inline bool DataSetIdsHasBeenSet() const { return m_dataSetIdsHasBeenSet; }
    template<typename DataSetIdsT = Aws::Vector<Aws::String>>
    void SetDataSetIds(DataSetIdsT&& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds = std::forward<DataSetIdsT>(value); }
    template<typename DataSetIdsT = Aws::Vector<Aws::String>>
    AssetBundleImportJobDataSetOverridePermissions& WithDataSetIds(DataSetIdsT&& value) { SetDataSetIds(std::forward<DataSetIdsT>(value)); return *this;}
    template<typename DataSetIdsT = Aws::String>
    AssetBundleImportJobDataSetOverridePermissions& AddDataSetIds(DataSetIdsT&& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.emplace_back(std::forward<DataSetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of permissions for the datasets that you want to apply overrides
     * to.</p>
     */
    inline const AssetBundleResourcePermissions& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = AssetBundleResourcePermissions>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = AssetBundleResourcePermissions>
    AssetBundleImportJobDataSetOverridePermissions& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_dataSetIds;
    bool m_dataSetIdsHasBeenSet = false;

    AssetBundleResourcePermissions m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
