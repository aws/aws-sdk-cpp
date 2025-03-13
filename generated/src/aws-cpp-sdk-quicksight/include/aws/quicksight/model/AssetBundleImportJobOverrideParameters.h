/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AssetBundleImportJobResourceIdOverrideConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AssetBundleImportJobVPCConnectionOverrideParameters.h>
#include <aws/quicksight/model/AssetBundleImportJobRefreshScheduleOverrideParameters.h>
#include <aws/quicksight/model/AssetBundleImportJobDataSourceOverrideParameters.h>
#include <aws/quicksight/model/AssetBundleImportJobDataSetOverrideParameters.h>
#include <aws/quicksight/model/AssetBundleImportJobThemeOverrideParameters.h>
#include <aws/quicksight/model/AssetBundleImportJobAnalysisOverrideParameters.h>
#include <aws/quicksight/model/AssetBundleImportJobDashboardOverrideParameters.h>
#include <aws/quicksight/model/AssetBundleImportJobFolderOverrideParameters.h>
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
   * <p>A list of overrides that modify the asset bundle resource configuration
   * before the resource is imported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobOverrideParameters">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobOverrideParameters
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideParameters() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An optional structure that configures resource ID overrides to be applied
     * within the import job.</p>
     */
    inline const AssetBundleImportJobResourceIdOverrideConfiguration& GetResourceIdOverrideConfiguration() const { return m_resourceIdOverrideConfiguration; }
    inline bool ResourceIdOverrideConfigurationHasBeenSet() const { return m_resourceIdOverrideConfigurationHasBeenSet; }
    template<typename ResourceIdOverrideConfigurationT = AssetBundleImportJobResourceIdOverrideConfiguration>
    void SetResourceIdOverrideConfiguration(ResourceIdOverrideConfigurationT&& value) { m_resourceIdOverrideConfigurationHasBeenSet = true; m_resourceIdOverrideConfiguration = std::forward<ResourceIdOverrideConfigurationT>(value); }
    template<typename ResourceIdOverrideConfigurationT = AssetBundleImportJobResourceIdOverrideConfiguration>
    AssetBundleImportJobOverrideParameters& WithResourceIdOverrideConfiguration(ResourceIdOverrideConfigurationT&& value) { SetResourceIdOverrideConfiguration(std::forward<ResourceIdOverrideConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobVPCConnectionOverrideParameters>& GetVPCConnections() const { return m_vPCConnections; }
    inline bool VPCConnectionsHasBeenSet() const { return m_vPCConnectionsHasBeenSet; }
    template<typename VPCConnectionsT = Aws::Vector<AssetBundleImportJobVPCConnectionOverrideParameters>>
    void SetVPCConnections(VPCConnectionsT&& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections = std::forward<VPCConnectionsT>(value); }
    template<typename VPCConnectionsT = Aws::Vector<AssetBundleImportJobVPCConnectionOverrideParameters>>
    AssetBundleImportJobOverrideParameters& WithVPCConnections(VPCConnectionsT&& value) { SetVPCConnections(std::forward<VPCConnectionsT>(value)); return *this;}
    template<typename VPCConnectionsT = AssetBundleImportJobVPCConnectionOverrideParameters>
    AssetBundleImportJobOverrideParameters& AddVPCConnections(VPCConnectionsT&& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections.emplace_back(std::forward<VPCConnectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of overrides for any <code>RefreshSchedule</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobRefreshScheduleOverrideParameters>& GetRefreshSchedules() const { return m_refreshSchedules; }
    inline bool RefreshSchedulesHasBeenSet() const { return m_refreshSchedulesHasBeenSet; }
    template<typename RefreshSchedulesT = Aws::Vector<AssetBundleImportJobRefreshScheduleOverrideParameters>>
    void SetRefreshSchedules(RefreshSchedulesT&& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules = std::forward<RefreshSchedulesT>(value); }
    template<typename RefreshSchedulesT = Aws::Vector<AssetBundleImportJobRefreshScheduleOverrideParameters>>
    AssetBundleImportJobOverrideParameters& WithRefreshSchedules(RefreshSchedulesT&& value) { SetRefreshSchedules(std::forward<RefreshSchedulesT>(value)); return *this;}
    template<typename RefreshSchedulesT = AssetBundleImportJobRefreshScheduleOverrideParameters>
    AssetBundleImportJobOverrideParameters& AddRefreshSchedules(RefreshSchedulesT&& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules.emplace_back(std::forward<RefreshSchedulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDataSourceOverrideParameters>& GetDataSources() const { return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    template<typename DataSourcesT = Aws::Vector<AssetBundleImportJobDataSourceOverrideParameters>>
    void SetDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::forward<DataSourcesT>(value); }
    template<typename DataSourcesT = Aws::Vector<AssetBundleImportJobDataSourceOverrideParameters>>
    AssetBundleImportJobOverrideParameters& WithDataSources(DataSourcesT&& value) { SetDataSources(std::forward<DataSourcesT>(value)); return *this;}
    template<typename DataSourcesT = AssetBundleImportJobDataSourceOverrideParameters>
    AssetBundleImportJobOverrideParameters& AddDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.emplace_back(std::forward<DataSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of overrides for any <code>DataSet</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDataSetOverrideParameters>& GetDataSets() const { return m_dataSets; }
    inline bool DataSetsHasBeenSet() const { return m_dataSetsHasBeenSet; }
    template<typename DataSetsT = Aws::Vector<AssetBundleImportJobDataSetOverrideParameters>>
    void SetDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::forward<DataSetsT>(value); }
    template<typename DataSetsT = Aws::Vector<AssetBundleImportJobDataSetOverrideParameters>>
    AssetBundleImportJobOverrideParameters& WithDataSets(DataSetsT&& value) { SetDataSets(std::forward<DataSetsT>(value)); return *this;}
    template<typename DataSetsT = AssetBundleImportJobDataSetOverrideParameters>
    AssetBundleImportJobOverrideParameters& AddDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets.emplace_back(std::forward<DataSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of overrides for any <code>Theme</code> resources that are present in
     * the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobThemeOverrideParameters>& GetThemes() const { return m_themes; }
    inline bool ThemesHasBeenSet() const { return m_themesHasBeenSet; }
    template<typename ThemesT = Aws::Vector<AssetBundleImportJobThemeOverrideParameters>>
    void SetThemes(ThemesT&& value) { m_themesHasBeenSet = true; m_themes = std::forward<ThemesT>(value); }
    template<typename ThemesT = Aws::Vector<AssetBundleImportJobThemeOverrideParameters>>
    AssetBundleImportJobOverrideParameters& WithThemes(ThemesT&& value) { SetThemes(std::forward<ThemesT>(value)); return *this;}
    template<typename ThemesT = AssetBundleImportJobThemeOverrideParameters>
    AssetBundleImportJobOverrideParameters& AddThemes(ThemesT&& value) { m_themesHasBeenSet = true; m_themes.emplace_back(std::forward<ThemesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of overrides for any <code>Analysis</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobAnalysisOverrideParameters>& GetAnalyses() const { return m_analyses; }
    inline bool AnalysesHasBeenSet() const { return m_analysesHasBeenSet; }
    template<typename AnalysesT = Aws::Vector<AssetBundleImportJobAnalysisOverrideParameters>>
    void SetAnalyses(AnalysesT&& value) { m_analysesHasBeenSet = true; m_analyses = std::forward<AnalysesT>(value); }
    template<typename AnalysesT = Aws::Vector<AssetBundleImportJobAnalysisOverrideParameters>>
    AssetBundleImportJobOverrideParameters& WithAnalyses(AnalysesT&& value) { SetAnalyses(std::forward<AnalysesT>(value)); return *this;}
    template<typename AnalysesT = AssetBundleImportJobAnalysisOverrideParameters>
    AssetBundleImportJobOverrideParameters& AddAnalyses(AnalysesT&& value) { m_analysesHasBeenSet = true; m_analyses.emplace_back(std::forward<AnalysesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of overrides for any <code>Dashboard</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDashboardOverrideParameters>& GetDashboards() const { return m_dashboards; }
    inline bool DashboardsHasBeenSet() const { return m_dashboardsHasBeenSet; }
    template<typename DashboardsT = Aws::Vector<AssetBundleImportJobDashboardOverrideParameters>>
    void SetDashboards(DashboardsT&& value) { m_dashboardsHasBeenSet = true; m_dashboards = std::forward<DashboardsT>(value); }
    template<typename DashboardsT = Aws::Vector<AssetBundleImportJobDashboardOverrideParameters>>
    AssetBundleImportJobOverrideParameters& WithDashboards(DashboardsT&& value) { SetDashboards(std::forward<DashboardsT>(value)); return *this;}
    template<typename DashboardsT = AssetBundleImportJobDashboardOverrideParameters>
    AssetBundleImportJobOverrideParameters& AddDashboards(DashboardsT&& value) { m_dashboardsHasBeenSet = true; m_dashboards.emplace_back(std::forward<DashboardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of overrides for any <code>Folder</code> resources that are present in
     * the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobFolderOverrideParameters>& GetFolders() const { return m_folders; }
    inline bool FoldersHasBeenSet() const { return m_foldersHasBeenSet; }
    template<typename FoldersT = Aws::Vector<AssetBundleImportJobFolderOverrideParameters>>
    void SetFolders(FoldersT&& value) { m_foldersHasBeenSet = true; m_folders = std::forward<FoldersT>(value); }
    template<typename FoldersT = Aws::Vector<AssetBundleImportJobFolderOverrideParameters>>
    AssetBundleImportJobOverrideParameters& WithFolders(FoldersT&& value) { SetFolders(std::forward<FoldersT>(value)); return *this;}
    template<typename FoldersT = AssetBundleImportJobFolderOverrideParameters>
    AssetBundleImportJobOverrideParameters& AddFolders(FoldersT&& value) { m_foldersHasBeenSet = true; m_folders.emplace_back(std::forward<FoldersT>(value)); return *this; }
    ///@}
  private:

    AssetBundleImportJobResourceIdOverrideConfiguration m_resourceIdOverrideConfiguration;
    bool m_resourceIdOverrideConfigurationHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobVPCConnectionOverrideParameters> m_vPCConnections;
    bool m_vPCConnectionsHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobRefreshScheduleOverrideParameters> m_refreshSchedules;
    bool m_refreshSchedulesHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobDataSourceOverrideParameters> m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobDataSetOverrideParameters> m_dataSets;
    bool m_dataSetsHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobThemeOverrideParameters> m_themes;
    bool m_themesHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobAnalysisOverrideParameters> m_analyses;
    bool m_analysesHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobDashboardOverrideParameters> m_dashboards;
    bool m_dashboardsHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobFolderOverrideParameters> m_folders;
    bool m_foldersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
