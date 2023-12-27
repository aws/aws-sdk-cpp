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
   * analysis IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobAnalysisOverridePermissions">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobAnalysisOverridePermissions
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobAnalysisOverridePermissions();
    AWS_QUICKSIGHT_API AssetBundleImportJobAnalysisOverridePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobAnalysisOverridePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnalysisIds() const{ return m_analysisIds; }

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline bool AnalysisIdsHasBeenSet() const { return m_analysisIdsHasBeenSet; }

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline void SetAnalysisIds(const Aws::Vector<Aws::String>& value) { m_analysisIdsHasBeenSet = true; m_analysisIds = value; }

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline void SetAnalysisIds(Aws::Vector<Aws::String>&& value) { m_analysisIdsHasBeenSet = true; m_analysisIds = std::move(value); }

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline AssetBundleImportJobAnalysisOverridePermissions& WithAnalysisIds(const Aws::Vector<Aws::String>& value) { SetAnalysisIds(value); return *this;}

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline AssetBundleImportJobAnalysisOverridePermissions& WithAnalysisIds(Aws::Vector<Aws::String>&& value) { SetAnalysisIds(std::move(value)); return *this;}

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline AssetBundleImportJobAnalysisOverridePermissions& AddAnalysisIds(const Aws::String& value) { m_analysisIdsHasBeenSet = true; m_analysisIds.push_back(value); return *this; }

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline AssetBundleImportJobAnalysisOverridePermissions& AddAnalysisIds(Aws::String&& value) { m_analysisIdsHasBeenSet = true; m_analysisIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline AssetBundleImportJobAnalysisOverridePermissions& AddAnalysisIds(const char* value) { m_analysisIdsHasBeenSet = true; m_analysisIds.push_back(value); return *this; }


    /**
     * <p>A list of permissions for the analyses that you want to apply overrides
     * to.</p>
     */
    inline const AssetBundleResourcePermissions& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A list of permissions for the analyses that you want to apply overrides
     * to.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>A list of permissions for the analyses that you want to apply overrides
     * to.</p>
     */
    inline void SetPermissions(const AssetBundleResourcePermissions& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>A list of permissions for the analyses that you want to apply overrides
     * to.</p>
     */
    inline void SetPermissions(AssetBundleResourcePermissions&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>A list of permissions for the analyses that you want to apply overrides
     * to.</p>
     */
    inline AssetBundleImportJobAnalysisOverridePermissions& WithPermissions(const AssetBundleResourcePermissions& value) { SetPermissions(value); return *this;}

    /**
     * <p>A list of permissions for the analyses that you want to apply overrides
     * to.</p>
     */
    inline AssetBundleImportJobAnalysisOverridePermissions& WithPermissions(AssetBundleResourcePermissions&& value) { SetPermissions(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_analysisIds;
    bool m_analysisIdsHasBeenSet = false;

    AssetBundleResourcePermissions m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
