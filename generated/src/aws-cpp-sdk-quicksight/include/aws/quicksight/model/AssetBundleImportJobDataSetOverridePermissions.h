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
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverridePermissions();
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverridePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverridePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of dataset IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all datasets in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSetIds() const{ return m_dataSetIds; }

    /**
     * <p>A list of dataset IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all datasets in this asset bundle.</p>
     */
    inline bool DataSetIdsHasBeenSet() const { return m_dataSetIdsHasBeenSet; }

    /**
     * <p>A list of dataset IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all datasets in this asset bundle.</p>
     */
    inline void SetDataSetIds(const Aws::Vector<Aws::String>& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds = value; }

    /**
     * <p>A list of dataset IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all datasets in this asset bundle.</p>
     */
    inline void SetDataSetIds(Aws::Vector<Aws::String>&& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds = std::move(value); }

    /**
     * <p>A list of dataset IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all datasets in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSetOverridePermissions& WithDataSetIds(const Aws::Vector<Aws::String>& value) { SetDataSetIds(value); return *this;}

    /**
     * <p>A list of dataset IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all datasets in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSetOverridePermissions& WithDataSetIds(Aws::Vector<Aws::String>&& value) { SetDataSetIds(std::move(value)); return *this;}

    /**
     * <p>A list of dataset IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all datasets in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSetOverridePermissions& AddDataSetIds(const Aws::String& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.push_back(value); return *this; }

    /**
     * <p>A list of dataset IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all datasets in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSetOverridePermissions& AddDataSetIds(Aws::String&& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of dataset IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all datasets in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSetOverridePermissions& AddDataSetIds(const char* value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.push_back(value); return *this; }


    /**
     * <p>A list of permissions for the datasets that you want to apply overrides
     * to.</p>
     */
    inline const AssetBundleResourcePermissions& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A list of permissions for the datasets that you want to apply overrides
     * to.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>A list of permissions for the datasets that you want to apply overrides
     * to.</p>
     */
    inline void SetPermissions(const AssetBundleResourcePermissions& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>A list of permissions for the datasets that you want to apply overrides
     * to.</p>
     */
    inline void SetPermissions(AssetBundleResourcePermissions&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>A list of permissions for the datasets that you want to apply overrides
     * to.</p>
     */
    inline AssetBundleImportJobDataSetOverridePermissions& WithPermissions(const AssetBundleResourcePermissions& value) { SetPermissions(value); return *this;}

    /**
     * <p>A list of permissions for the datasets that you want to apply overrides
     * to.</p>
     */
    inline AssetBundleImportJobDataSetOverridePermissions& WithPermissions(AssetBundleResourcePermissions&& value) { SetPermissions(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_dataSetIds;
    bool m_dataSetIdsHasBeenSet = false;

    AssetBundleResourcePermissions m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
