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
    AWS_QUICKSIGHT_API AssetBundleImportJobThemeOverridePermissions() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobThemeOverridePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobThemeOverridePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThemeIds() const { return m_themeIds; }
    inline bool ThemeIdsHasBeenSet() const { return m_themeIdsHasBeenSet; }
    template<typename ThemeIdsT = Aws::Vector<Aws::String>>
    void SetThemeIds(ThemeIdsT&& value) { m_themeIdsHasBeenSet = true; m_themeIds = std::forward<ThemeIdsT>(value); }
    template<typename ThemeIdsT = Aws::Vector<Aws::String>>
    AssetBundleImportJobThemeOverridePermissions& WithThemeIds(ThemeIdsT&& value) { SetThemeIds(std::forward<ThemeIdsT>(value)); return *this;}
    template<typename ThemeIdsT = Aws::String>
    AssetBundleImportJobThemeOverridePermissions& AddThemeIds(ThemeIdsT&& value) { m_themeIdsHasBeenSet = true; m_themeIds.emplace_back(std::forward<ThemeIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of permissions for the themes that you want to apply overrides to.</p>
     */
    inline const AssetBundleResourcePermissions& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = AssetBundleResourcePermissions>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = AssetBundleResourcePermissions>
    AssetBundleImportJobThemeOverridePermissions& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_themeIds;
    bool m_themeIdsHasBeenSet = false;

    AssetBundleResourcePermissions m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
