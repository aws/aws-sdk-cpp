/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>The override parameters for a single dashboard that is being
   * imported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobDashboardOverrideParameters">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobDashboardOverrideParameters
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobDashboardOverrideParameters();
    AWS_QUICKSIGHT_API AssetBundleImportJobDashboardOverrideParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDashboardOverrideParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the dashboard that you want to apply overrides to.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }
    inline AssetBundleImportJobDashboardOverrideParameters& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}
    inline AssetBundleImportJobDashboardOverrideParameters& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}
    inline AssetBundleImportJobDashboardOverrideParameters& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the dashboard.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssetBundleImportJobDashboardOverrideParameters& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssetBundleImportJobDashboardOverrideParameters& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssetBundleImportJobDashboardOverrideParameters& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
