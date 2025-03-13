/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AssetBundleImportJobVPCConnectionOverrideTags.h>
#include <aws/quicksight/model/AssetBundleImportJobDataSourceOverrideTags.h>
#include <aws/quicksight/model/AssetBundleImportJobDataSetOverrideTags.h>
#include <aws/quicksight/model/AssetBundleImportJobThemeOverrideTags.h>
#include <aws/quicksight/model/AssetBundleImportJobAnalysisOverrideTags.h>
#include <aws/quicksight/model/AssetBundleImportJobDashboardOverrideTags.h>
#include <aws/quicksight/model/AssetBundleImportJobFolderOverrideTags.h>
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
   * <p>A structure that contains the override tag configuration that modify the tags
   * that are assigned to specified resources before the resource is
   * imported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobOverrideTags">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobOverrideTags
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideTags() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of tag overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobVPCConnectionOverrideTags>& GetVPCConnections() const { return m_vPCConnections; }
    inline bool VPCConnectionsHasBeenSet() const { return m_vPCConnectionsHasBeenSet; }
    template<typename VPCConnectionsT = Aws::Vector<AssetBundleImportJobVPCConnectionOverrideTags>>
    void SetVPCConnections(VPCConnectionsT&& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections = std::forward<VPCConnectionsT>(value); }
    template<typename VPCConnectionsT = Aws::Vector<AssetBundleImportJobVPCConnectionOverrideTags>>
    AssetBundleImportJobOverrideTags& WithVPCConnections(VPCConnectionsT&& value) { SetVPCConnections(std::forward<VPCConnectionsT>(value)); return *this;}
    template<typename VPCConnectionsT = AssetBundleImportJobVPCConnectionOverrideTags>
    AssetBundleImportJobOverrideTags& AddVPCConnections(VPCConnectionsT&& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections.emplace_back(std::forward<VPCConnectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tag overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDataSourceOverrideTags>& GetDataSources() const { return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    template<typename DataSourcesT = Aws::Vector<AssetBundleImportJobDataSourceOverrideTags>>
    void SetDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::forward<DataSourcesT>(value); }
    template<typename DataSourcesT = Aws::Vector<AssetBundleImportJobDataSourceOverrideTags>>
    AssetBundleImportJobOverrideTags& WithDataSources(DataSourcesT&& value) { SetDataSources(std::forward<DataSourcesT>(value)); return *this;}
    template<typename DataSourcesT = AssetBundleImportJobDataSourceOverrideTags>
    AssetBundleImportJobOverrideTags& AddDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.emplace_back(std::forward<DataSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tag overrides for any <code>DataSet</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDataSetOverrideTags>& GetDataSets() const { return m_dataSets; }
    inline bool DataSetsHasBeenSet() const { return m_dataSetsHasBeenSet; }
    template<typename DataSetsT = Aws::Vector<AssetBundleImportJobDataSetOverrideTags>>
    void SetDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::forward<DataSetsT>(value); }
    template<typename DataSetsT = Aws::Vector<AssetBundleImportJobDataSetOverrideTags>>
    AssetBundleImportJobOverrideTags& WithDataSets(DataSetsT&& value) { SetDataSets(std::forward<DataSetsT>(value)); return *this;}
    template<typename DataSetsT = AssetBundleImportJobDataSetOverrideTags>
    AssetBundleImportJobOverrideTags& AddDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets.emplace_back(std::forward<DataSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tag overrides for any <code>Theme</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobThemeOverrideTags>& GetThemes() const { return m_themes; }
    inline bool ThemesHasBeenSet() const { return m_themesHasBeenSet; }
    template<typename ThemesT = Aws::Vector<AssetBundleImportJobThemeOverrideTags>>
    void SetThemes(ThemesT&& value) { m_themesHasBeenSet = true; m_themes = std::forward<ThemesT>(value); }
    template<typename ThemesT = Aws::Vector<AssetBundleImportJobThemeOverrideTags>>
    AssetBundleImportJobOverrideTags& WithThemes(ThemesT&& value) { SetThemes(std::forward<ThemesT>(value)); return *this;}
    template<typename ThemesT = AssetBundleImportJobThemeOverrideTags>
    AssetBundleImportJobOverrideTags& AddThemes(ThemesT&& value) { m_themesHasBeenSet = true; m_themes.emplace_back(std::forward<ThemesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tag overrides for any <code>Analysis</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobAnalysisOverrideTags>& GetAnalyses() const { return m_analyses; }
    inline bool AnalysesHasBeenSet() const { return m_analysesHasBeenSet; }
    template<typename AnalysesT = Aws::Vector<AssetBundleImportJobAnalysisOverrideTags>>
    void SetAnalyses(AnalysesT&& value) { m_analysesHasBeenSet = true; m_analyses = std::forward<AnalysesT>(value); }
    template<typename AnalysesT = Aws::Vector<AssetBundleImportJobAnalysisOverrideTags>>
    AssetBundleImportJobOverrideTags& WithAnalyses(AnalysesT&& value) { SetAnalyses(std::forward<AnalysesT>(value)); return *this;}
    template<typename AnalysesT = AssetBundleImportJobAnalysisOverrideTags>
    AssetBundleImportJobOverrideTags& AddAnalyses(AnalysesT&& value) { m_analysesHasBeenSet = true; m_analyses.emplace_back(std::forward<AnalysesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tag overrides for any <code>Dashboard</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDashboardOverrideTags>& GetDashboards() const { return m_dashboards; }
    inline bool DashboardsHasBeenSet() const { return m_dashboardsHasBeenSet; }
    template<typename DashboardsT = Aws::Vector<AssetBundleImportJobDashboardOverrideTags>>
    void SetDashboards(DashboardsT&& value) { m_dashboardsHasBeenSet = true; m_dashboards = std::forward<DashboardsT>(value); }
    template<typename DashboardsT = Aws::Vector<AssetBundleImportJobDashboardOverrideTags>>
    AssetBundleImportJobOverrideTags& WithDashboards(DashboardsT&& value) { SetDashboards(std::forward<DashboardsT>(value)); return *this;}
    template<typename DashboardsT = AssetBundleImportJobDashboardOverrideTags>
    AssetBundleImportJobOverrideTags& AddDashboards(DashboardsT&& value) { m_dashboardsHasBeenSet = true; m_dashboards.emplace_back(std::forward<DashboardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tag overrides for any <code>Folder</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobFolderOverrideTags>& GetFolders() const { return m_folders; }
    inline bool FoldersHasBeenSet() const { return m_foldersHasBeenSet; }
    template<typename FoldersT = Aws::Vector<AssetBundleImportJobFolderOverrideTags>>
    void SetFolders(FoldersT&& value) { m_foldersHasBeenSet = true; m_folders = std::forward<FoldersT>(value); }
    template<typename FoldersT = Aws::Vector<AssetBundleImportJobFolderOverrideTags>>
    AssetBundleImportJobOverrideTags& WithFolders(FoldersT&& value) { SetFolders(std::forward<FoldersT>(value)); return *this;}
    template<typename FoldersT = AssetBundleImportJobFolderOverrideTags>
    AssetBundleImportJobOverrideTags& AddFolders(FoldersT&& value) { m_foldersHasBeenSet = true; m_folders.emplace_back(std::forward<FoldersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AssetBundleImportJobVPCConnectionOverrideTags> m_vPCConnections;
    bool m_vPCConnectionsHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobDataSourceOverrideTags> m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobDataSetOverrideTags> m_dataSets;
    bool m_dataSetsHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobThemeOverrideTags> m_themes;
    bool m_themesHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobAnalysisOverrideTags> m_analyses;
    bool m_analysesHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobDashboardOverrideTags> m_dashboards;
    bool m_dashboardsHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobFolderOverrideTags> m_folders;
    bool m_foldersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
