/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AssetBundleExportJobResourceIdOverrideConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AssetBundleExportJobVPCConnectionOverrideProperties.h>
#include <aws/quicksight/model/AssetBundleExportJobRefreshScheduleOverrideProperties.h>
#include <aws/quicksight/model/AssetBundleExportJobDataSourceOverrideProperties.h>
#include <aws/quicksight/model/AssetBundleExportJobDataSetOverrideProperties.h>
#include <aws/quicksight/model/AssetBundleExportJobThemeOverrideProperties.h>
#include <aws/quicksight/model/AssetBundleExportJobAnalysisOverrideProperties.h>
#include <aws/quicksight/model/AssetBundleExportJobDashboardOverrideProperties.h>
#include <aws/quicksight/model/AssetBundleExportJobFolderOverrideProperties.h>
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
   * <p>An optional collection of CloudFormation property configurations that control
   * how the export job is generated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleCloudFormationOverridePropertyConfiguration">AWS
   * API Reference</a></p>
   */
  class AssetBundleCloudFormationOverridePropertyConfiguration
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleCloudFormationOverridePropertyConfiguration() = default;
    AWS_QUICKSIGHT_API AssetBundleCloudFormationOverridePropertyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleCloudFormationOverridePropertyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An optional list of structures that control how resource IDs are
     * parameterized in the returned CloudFormation template.</p>
     */
    inline const AssetBundleExportJobResourceIdOverrideConfiguration& GetResourceIdOverrideConfiguration() const { return m_resourceIdOverrideConfiguration; }
    inline bool ResourceIdOverrideConfigurationHasBeenSet() const { return m_resourceIdOverrideConfigurationHasBeenSet; }
    template<typename ResourceIdOverrideConfigurationT = AssetBundleExportJobResourceIdOverrideConfiguration>
    void SetResourceIdOverrideConfiguration(ResourceIdOverrideConfigurationT&& value) { m_resourceIdOverrideConfigurationHasBeenSet = true; m_resourceIdOverrideConfiguration = std::forward<ResourceIdOverrideConfigurationT>(value); }
    template<typename ResourceIdOverrideConfigurationT = AssetBundleExportJobResourceIdOverrideConfiguration>
    AssetBundleCloudFormationOverridePropertyConfiguration& WithResourceIdOverrideConfiguration(ResourceIdOverrideConfigurationT&& value) { SetResourceIdOverrideConfiguration(std::forward<ResourceIdOverrideConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of structures that control how <code>VPCConnection</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobVPCConnectionOverrideProperties>& GetVPCConnections() const { return m_vPCConnections; }
    inline bool VPCConnectionsHasBeenSet() const { return m_vPCConnectionsHasBeenSet; }
    template<typename VPCConnectionsT = Aws::Vector<AssetBundleExportJobVPCConnectionOverrideProperties>>
    void SetVPCConnections(VPCConnectionsT&& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections = std::forward<VPCConnectionsT>(value); }
    template<typename VPCConnectionsT = Aws::Vector<AssetBundleExportJobVPCConnectionOverrideProperties>>
    AssetBundleCloudFormationOverridePropertyConfiguration& WithVPCConnections(VPCConnectionsT&& value) { SetVPCConnections(std::forward<VPCConnectionsT>(value)); return *this;}
    template<typename VPCConnectionsT = AssetBundleExportJobVPCConnectionOverrideProperties>
    AssetBundleCloudFormationOverridePropertyConfiguration& AddVPCConnections(VPCConnectionsT&& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections.emplace_back(std::forward<VPCConnectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional list of structures that control how <code>RefreshSchedule</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobRefreshScheduleOverrideProperties>& GetRefreshSchedules() const { return m_refreshSchedules; }
    inline bool RefreshSchedulesHasBeenSet() const { return m_refreshSchedulesHasBeenSet; }
    template<typename RefreshSchedulesT = Aws::Vector<AssetBundleExportJobRefreshScheduleOverrideProperties>>
    void SetRefreshSchedules(RefreshSchedulesT&& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules = std::forward<RefreshSchedulesT>(value); }
    template<typename RefreshSchedulesT = Aws::Vector<AssetBundleExportJobRefreshScheduleOverrideProperties>>
    AssetBundleCloudFormationOverridePropertyConfiguration& WithRefreshSchedules(RefreshSchedulesT&& value) { SetRefreshSchedules(std::forward<RefreshSchedulesT>(value)); return *this;}
    template<typename RefreshSchedulesT = AssetBundleExportJobRefreshScheduleOverrideProperties>
    AssetBundleCloudFormationOverridePropertyConfiguration& AddRefreshSchedules(RefreshSchedulesT&& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules.emplace_back(std::forward<RefreshSchedulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional list of structures that control how <code>DataSource</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobDataSourceOverrideProperties>& GetDataSources() const { return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    template<typename DataSourcesT = Aws::Vector<AssetBundleExportJobDataSourceOverrideProperties>>
    void SetDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::forward<DataSourcesT>(value); }
    template<typename DataSourcesT = Aws::Vector<AssetBundleExportJobDataSourceOverrideProperties>>
    AssetBundleCloudFormationOverridePropertyConfiguration& WithDataSources(DataSourcesT&& value) { SetDataSources(std::forward<DataSourcesT>(value)); return *this;}
    template<typename DataSourcesT = AssetBundleExportJobDataSourceOverrideProperties>
    AssetBundleCloudFormationOverridePropertyConfiguration& AddDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.emplace_back(std::forward<DataSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional list of structures that control how <code>DataSet</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobDataSetOverrideProperties>& GetDataSets() const { return m_dataSets; }
    inline bool DataSetsHasBeenSet() const { return m_dataSetsHasBeenSet; }
    template<typename DataSetsT = Aws::Vector<AssetBundleExportJobDataSetOverrideProperties>>
    void SetDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::forward<DataSetsT>(value); }
    template<typename DataSetsT = Aws::Vector<AssetBundleExportJobDataSetOverrideProperties>>
    AssetBundleCloudFormationOverridePropertyConfiguration& WithDataSets(DataSetsT&& value) { SetDataSets(std::forward<DataSetsT>(value)); return *this;}
    template<typename DataSetsT = AssetBundleExportJobDataSetOverrideProperties>
    AssetBundleCloudFormationOverridePropertyConfiguration& AddDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets.emplace_back(std::forward<DataSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional list of structures that control how <code>Theme</code> resources
     * are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobThemeOverrideProperties>& GetThemes() const { return m_themes; }
    inline bool ThemesHasBeenSet() const { return m_themesHasBeenSet; }
    template<typename ThemesT = Aws::Vector<AssetBundleExportJobThemeOverrideProperties>>
    void SetThemes(ThemesT&& value) { m_themesHasBeenSet = true; m_themes = std::forward<ThemesT>(value); }
    template<typename ThemesT = Aws::Vector<AssetBundleExportJobThemeOverrideProperties>>
    AssetBundleCloudFormationOverridePropertyConfiguration& WithThemes(ThemesT&& value) { SetThemes(std::forward<ThemesT>(value)); return *this;}
    template<typename ThemesT = AssetBundleExportJobThemeOverrideProperties>
    AssetBundleCloudFormationOverridePropertyConfiguration& AddThemes(ThemesT&& value) { m_themesHasBeenSet = true; m_themes.emplace_back(std::forward<ThemesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional list of structures that control how <code>Analysis</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobAnalysisOverrideProperties>& GetAnalyses() const { return m_analyses; }
    inline bool AnalysesHasBeenSet() const { return m_analysesHasBeenSet; }
    template<typename AnalysesT = Aws::Vector<AssetBundleExportJobAnalysisOverrideProperties>>
    void SetAnalyses(AnalysesT&& value) { m_analysesHasBeenSet = true; m_analyses = std::forward<AnalysesT>(value); }
    template<typename AnalysesT = Aws::Vector<AssetBundleExportJobAnalysisOverrideProperties>>
    AssetBundleCloudFormationOverridePropertyConfiguration& WithAnalyses(AnalysesT&& value) { SetAnalyses(std::forward<AnalysesT>(value)); return *this;}
    template<typename AnalysesT = AssetBundleExportJobAnalysisOverrideProperties>
    AssetBundleCloudFormationOverridePropertyConfiguration& AddAnalyses(AnalysesT&& value) { m_analysesHasBeenSet = true; m_analyses.emplace_back(std::forward<AnalysesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional list of structures that control how <code>Dashboard</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobDashboardOverrideProperties>& GetDashboards() const { return m_dashboards; }
    inline bool DashboardsHasBeenSet() const { return m_dashboardsHasBeenSet; }
    template<typename DashboardsT = Aws::Vector<AssetBundleExportJobDashboardOverrideProperties>>
    void SetDashboards(DashboardsT&& value) { m_dashboardsHasBeenSet = true; m_dashboards = std::forward<DashboardsT>(value); }
    template<typename DashboardsT = Aws::Vector<AssetBundleExportJobDashboardOverrideProperties>>
    AssetBundleCloudFormationOverridePropertyConfiguration& WithDashboards(DashboardsT&& value) { SetDashboards(std::forward<DashboardsT>(value)); return *this;}
    template<typename DashboardsT = AssetBundleExportJobDashboardOverrideProperties>
    AssetBundleCloudFormationOverridePropertyConfiguration& AddDashboards(DashboardsT&& value) { m_dashboardsHasBeenSet = true; m_dashboards.emplace_back(std::forward<DashboardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional list of structures that controls how <code>Folder</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobFolderOverrideProperties>& GetFolders() const { return m_folders; }
    inline bool FoldersHasBeenSet() const { return m_foldersHasBeenSet; }
    template<typename FoldersT = Aws::Vector<AssetBundleExportJobFolderOverrideProperties>>
    void SetFolders(FoldersT&& value) { m_foldersHasBeenSet = true; m_folders = std::forward<FoldersT>(value); }
    template<typename FoldersT = Aws::Vector<AssetBundleExportJobFolderOverrideProperties>>
    AssetBundleCloudFormationOverridePropertyConfiguration& WithFolders(FoldersT&& value) { SetFolders(std::forward<FoldersT>(value)); return *this;}
    template<typename FoldersT = AssetBundleExportJobFolderOverrideProperties>
    AssetBundleCloudFormationOverridePropertyConfiguration& AddFolders(FoldersT&& value) { m_foldersHasBeenSet = true; m_folders.emplace_back(std::forward<FoldersT>(value)); return *this; }
    ///@}
  private:

    AssetBundleExportJobResourceIdOverrideConfiguration m_resourceIdOverrideConfiguration;
    bool m_resourceIdOverrideConfigurationHasBeenSet = false;

    Aws::Vector<AssetBundleExportJobVPCConnectionOverrideProperties> m_vPCConnections;
    bool m_vPCConnectionsHasBeenSet = false;

    Aws::Vector<AssetBundleExportJobRefreshScheduleOverrideProperties> m_refreshSchedules;
    bool m_refreshSchedulesHasBeenSet = false;

    Aws::Vector<AssetBundleExportJobDataSourceOverrideProperties> m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    Aws::Vector<AssetBundleExportJobDataSetOverrideProperties> m_dataSets;
    bool m_dataSetsHasBeenSet = false;

    Aws::Vector<AssetBundleExportJobThemeOverrideProperties> m_themes;
    bool m_themesHasBeenSet = false;

    Aws::Vector<AssetBundleExportJobAnalysisOverrideProperties> m_analyses;
    bool m_analysesHasBeenSet = false;

    Aws::Vector<AssetBundleExportJobDashboardOverrideProperties> m_dashboards;
    bool m_dashboardsHasBeenSet = false;

    Aws::Vector<AssetBundleExportJobFolderOverrideProperties> m_folders;
    bool m_foldersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
