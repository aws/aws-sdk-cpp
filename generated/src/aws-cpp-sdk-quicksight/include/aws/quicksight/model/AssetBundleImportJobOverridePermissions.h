/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AssetBundleImportJobDataSourceOverridePermissions.h>
#include <aws/quicksight/model/AssetBundleImportJobDataSetOverridePermissions.h>
#include <aws/quicksight/model/AssetBundleImportJobThemeOverridePermissions.h>
#include <aws/quicksight/model/AssetBundleImportJobAnalysisOverridePermissions.h>
#include <aws/quicksight/model/AssetBundleImportJobDashboardOverridePermissions.h>
#include <aws/quicksight/model/AssetBundleImportJobFolderOverridePermissions.h>
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
   * <p>A structure that contains the override permission configurations that modify
   * the permissions for specified resources before the resource is
   * imported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobOverridePermissions">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobOverridePermissions
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobOverridePermissions() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobOverridePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobOverridePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of permissions overrides for any <code>DataSource</code> resources
     * that are present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDataSourceOverridePermissions>& GetDataSources() const { return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    template<typename DataSourcesT = Aws::Vector<AssetBundleImportJobDataSourceOverridePermissions>>
    void SetDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::forward<DataSourcesT>(value); }
    template<typename DataSourcesT = Aws::Vector<AssetBundleImportJobDataSourceOverridePermissions>>
    AssetBundleImportJobOverridePermissions& WithDataSources(DataSourcesT&& value) { SetDataSources(std::forward<DataSourcesT>(value)); return *this;}
    template<typename DataSourcesT = AssetBundleImportJobDataSourceOverridePermissions>
    AssetBundleImportJobOverridePermissions& AddDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.emplace_back(std::forward<DataSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of permissions overrides for any <code>DataSet</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDataSetOverridePermissions>& GetDataSets() const { return m_dataSets; }
    inline bool DataSetsHasBeenSet() const { return m_dataSetsHasBeenSet; }
    template<typename DataSetsT = Aws::Vector<AssetBundleImportJobDataSetOverridePermissions>>
    void SetDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::forward<DataSetsT>(value); }
    template<typename DataSetsT = Aws::Vector<AssetBundleImportJobDataSetOverridePermissions>>
    AssetBundleImportJobOverridePermissions& WithDataSets(DataSetsT&& value) { SetDataSets(std::forward<DataSetsT>(value)); return *this;}
    template<typename DataSetsT = AssetBundleImportJobDataSetOverridePermissions>
    AssetBundleImportJobOverridePermissions& AddDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets.emplace_back(std::forward<DataSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of permissions overrides for any <code>Theme</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobThemeOverridePermissions>& GetThemes() const { return m_themes; }
    inline bool ThemesHasBeenSet() const { return m_themesHasBeenSet; }
    template<typename ThemesT = Aws::Vector<AssetBundleImportJobThemeOverridePermissions>>
    void SetThemes(ThemesT&& value) { m_themesHasBeenSet = true; m_themes = std::forward<ThemesT>(value); }
    template<typename ThemesT = Aws::Vector<AssetBundleImportJobThemeOverridePermissions>>
    AssetBundleImportJobOverridePermissions& WithThemes(ThemesT&& value) { SetThemes(std::forward<ThemesT>(value)); return *this;}
    template<typename ThemesT = AssetBundleImportJobThemeOverridePermissions>
    AssetBundleImportJobOverridePermissions& AddThemes(ThemesT&& value) { m_themesHasBeenSet = true; m_themes.emplace_back(std::forward<ThemesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of permissions overrides for any <code>Analysis</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobAnalysisOverridePermissions>& GetAnalyses() const { return m_analyses; }
    inline bool AnalysesHasBeenSet() const { return m_analysesHasBeenSet; }
    template<typename AnalysesT = Aws::Vector<AssetBundleImportJobAnalysisOverridePermissions>>
    void SetAnalyses(AnalysesT&& value) { m_analysesHasBeenSet = true; m_analyses = std::forward<AnalysesT>(value); }
    template<typename AnalysesT = Aws::Vector<AssetBundleImportJobAnalysisOverridePermissions>>
    AssetBundleImportJobOverridePermissions& WithAnalyses(AnalysesT&& value) { SetAnalyses(std::forward<AnalysesT>(value)); return *this;}
    template<typename AnalysesT = AssetBundleImportJobAnalysisOverridePermissions>
    AssetBundleImportJobOverridePermissions& AddAnalyses(AnalysesT&& value) { m_analysesHasBeenSet = true; m_analyses.emplace_back(std::forward<AnalysesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of permissions overrides for any <code>Dashboard</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDashboardOverridePermissions>& GetDashboards() const { return m_dashboards; }
    inline bool DashboardsHasBeenSet() const { return m_dashboardsHasBeenSet; }
    template<typename DashboardsT = Aws::Vector<AssetBundleImportJobDashboardOverridePermissions>>
    void SetDashboards(DashboardsT&& value) { m_dashboardsHasBeenSet = true; m_dashboards = std::forward<DashboardsT>(value); }
    template<typename DashboardsT = Aws::Vector<AssetBundleImportJobDashboardOverridePermissions>>
    AssetBundleImportJobOverridePermissions& WithDashboards(DashboardsT&& value) { SetDashboards(std::forward<DashboardsT>(value)); return *this;}
    template<typename DashboardsT = AssetBundleImportJobDashboardOverridePermissions>
    AssetBundleImportJobOverridePermissions& AddDashboards(DashboardsT&& value) { m_dashboardsHasBeenSet = true; m_dashboards.emplace_back(std::forward<DashboardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of permissions for the folders that you want to apply overrides
     * to.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobFolderOverridePermissions>& GetFolders() const { return m_folders; }
    inline bool FoldersHasBeenSet() const { return m_foldersHasBeenSet; }
    template<typename FoldersT = Aws::Vector<AssetBundleImportJobFolderOverridePermissions>>
    void SetFolders(FoldersT&& value) { m_foldersHasBeenSet = true; m_folders = std::forward<FoldersT>(value); }
    template<typename FoldersT = Aws::Vector<AssetBundleImportJobFolderOverridePermissions>>
    AssetBundleImportJobOverridePermissions& WithFolders(FoldersT&& value) { SetFolders(std::forward<FoldersT>(value)); return *this;}
    template<typename FoldersT = AssetBundleImportJobFolderOverridePermissions>
    AssetBundleImportJobOverridePermissions& AddFolders(FoldersT&& value) { m_foldersHasBeenSet = true; m_folders.emplace_back(std::forward<FoldersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AssetBundleImportJobDataSourceOverridePermissions> m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobDataSetOverridePermissions> m_dataSets;
    bool m_dataSetsHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobThemeOverridePermissions> m_themes;
    bool m_themesHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobAnalysisOverridePermissions> m_analyses;
    bool m_analysesHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobDashboardOverridePermissions> m_dashboards;
    bool m_dashboardsHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobFolderOverridePermissions> m_folders;
    bool m_foldersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
