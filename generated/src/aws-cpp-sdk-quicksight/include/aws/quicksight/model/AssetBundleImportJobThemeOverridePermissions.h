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
   * theme IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobThemeOverridePermissions">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobThemeOverridePermissions
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobThemeOverridePermissions();
    AWS_QUICKSIGHT_API AssetBundleImportJobThemeOverridePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobThemeOverridePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThemeIds() const{ return m_themeIds; }

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline bool ThemeIdsHasBeenSet() const { return m_themeIdsHasBeenSet; }

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline void SetThemeIds(const Aws::Vector<Aws::String>& value) { m_themeIdsHasBeenSet = true; m_themeIds = value; }

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline void SetThemeIds(Aws::Vector<Aws::String>&& value) { m_themeIdsHasBeenSet = true; m_themeIds = std::move(value); }

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline AssetBundleImportJobThemeOverridePermissions& WithThemeIds(const Aws::Vector<Aws::String>& value) { SetThemeIds(value); return *this;}

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline AssetBundleImportJobThemeOverridePermissions& WithThemeIds(Aws::Vector<Aws::String>&& value) { SetThemeIds(std::move(value)); return *this;}

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline AssetBundleImportJobThemeOverridePermissions& AddThemeIds(const Aws::String& value) { m_themeIdsHasBeenSet = true; m_themeIds.push_back(value); return *this; }

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline AssetBundleImportJobThemeOverridePermissions& AddThemeIds(Aws::String&& value) { m_themeIdsHasBeenSet = true; m_themeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline AssetBundleImportJobThemeOverridePermissions& AddThemeIds(const char* value) { m_themeIdsHasBeenSet = true; m_themeIds.push_back(value); return *this; }


    /**
     * <p>A list of permissions for the themes that you want to apply overrides to.</p>
     */
    inline const AssetBundleResourcePermissions& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A list of permissions for the themes that you want to apply overrides to.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>A list of permissions for the themes that you want to apply overrides to.</p>
     */
    inline void SetPermissions(const AssetBundleResourcePermissions& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>A list of permissions for the themes that you want to apply overrides to.</p>
     */
    inline void SetPermissions(AssetBundleResourcePermissions&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>A list of permissions for the themes that you want to apply overrides to.</p>
     */
    inline AssetBundleImportJobThemeOverridePermissions& WithPermissions(const AssetBundleResourcePermissions& value) { SetPermissions(value); return *this;}

    /**
     * <p>A list of permissions for the themes that you want to apply overrides to.</p>
     */
    inline AssetBundleImportJobThemeOverridePermissions& WithPermissions(AssetBundleResourcePermissions&& value) { SetPermissions(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_themeIds;
    bool m_themeIdsHasBeenSet = false;

    AssetBundleResourcePermissions m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
