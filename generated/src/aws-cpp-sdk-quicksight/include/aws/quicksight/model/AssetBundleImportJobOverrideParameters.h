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
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideParameters();
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An optional structure that configures resource ID overrides to be applied
     * within the import job.</p>
     */
    inline const AssetBundleImportJobResourceIdOverrideConfiguration& GetResourceIdOverrideConfiguration() const{ return m_resourceIdOverrideConfiguration; }

    /**
     * <p>An optional structure that configures resource ID overrides to be applied
     * within the import job.</p>
     */
    inline bool ResourceIdOverrideConfigurationHasBeenSet() const { return m_resourceIdOverrideConfigurationHasBeenSet; }

    /**
     * <p>An optional structure that configures resource ID overrides to be applied
     * within the import job.</p>
     */
    inline void SetResourceIdOverrideConfiguration(const AssetBundleImportJobResourceIdOverrideConfiguration& value) { m_resourceIdOverrideConfigurationHasBeenSet = true; m_resourceIdOverrideConfiguration = value; }

    /**
     * <p>An optional structure that configures resource ID overrides to be applied
     * within the import job.</p>
     */
    inline void SetResourceIdOverrideConfiguration(AssetBundleImportJobResourceIdOverrideConfiguration&& value) { m_resourceIdOverrideConfigurationHasBeenSet = true; m_resourceIdOverrideConfiguration = std::move(value); }

    /**
     * <p>An optional structure that configures resource ID overrides to be applied
     * within the import job.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithResourceIdOverrideConfiguration(const AssetBundleImportJobResourceIdOverrideConfiguration& value) { SetResourceIdOverrideConfiguration(value); return *this;}

    /**
     * <p>An optional structure that configures resource ID overrides to be applied
     * within the import job.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithResourceIdOverrideConfiguration(AssetBundleImportJobResourceIdOverrideConfiguration&& value) { SetResourceIdOverrideConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobVPCConnectionOverrideParameters>& GetVPCConnections() const{ return m_vPCConnections; }

    /**
     * <p>A list of overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline bool VPCConnectionsHasBeenSet() const { return m_vPCConnectionsHasBeenSet; }

    /**
     * <p>A list of overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetVPCConnections(const Aws::Vector<AssetBundleImportJobVPCConnectionOverrideParameters>& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections = value; }

    /**
     * <p>A list of overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetVPCConnections(Aws::Vector<AssetBundleImportJobVPCConnectionOverrideParameters>&& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections = std::move(value); }

    /**
     * <p>A list of overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithVPCConnections(const Aws::Vector<AssetBundleImportJobVPCConnectionOverrideParameters>& value) { SetVPCConnections(value); return *this;}

    /**
     * <p>A list of overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithVPCConnections(Aws::Vector<AssetBundleImportJobVPCConnectionOverrideParameters>&& value) { SetVPCConnections(std::move(value)); return *this;}

    /**
     * <p>A list of overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& AddVPCConnections(const AssetBundleImportJobVPCConnectionOverrideParameters& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections.push_back(value); return *this; }

    /**
     * <p>A list of overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& AddVPCConnections(AssetBundleImportJobVPCConnectionOverrideParameters&& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of overrides for any <code>RefreshSchedule</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobRefreshScheduleOverrideParameters>& GetRefreshSchedules() const{ return m_refreshSchedules; }

    /**
     * <p>A list of overrides for any <code>RefreshSchedule</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline bool RefreshSchedulesHasBeenSet() const { return m_refreshSchedulesHasBeenSet; }

    /**
     * <p>A list of overrides for any <code>RefreshSchedule</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetRefreshSchedules(const Aws::Vector<AssetBundleImportJobRefreshScheduleOverrideParameters>& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules = value; }

    /**
     * <p>A list of overrides for any <code>RefreshSchedule</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetRefreshSchedules(Aws::Vector<AssetBundleImportJobRefreshScheduleOverrideParameters>&& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules = std::move(value); }

    /**
     * <p>A list of overrides for any <code>RefreshSchedule</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithRefreshSchedules(const Aws::Vector<AssetBundleImportJobRefreshScheduleOverrideParameters>& value) { SetRefreshSchedules(value); return *this;}

    /**
     * <p>A list of overrides for any <code>RefreshSchedule</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithRefreshSchedules(Aws::Vector<AssetBundleImportJobRefreshScheduleOverrideParameters>&& value) { SetRefreshSchedules(std::move(value)); return *this;}

    /**
     * <p>A list of overrides for any <code>RefreshSchedule</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& AddRefreshSchedules(const AssetBundleImportJobRefreshScheduleOverrideParameters& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules.push_back(value); return *this; }

    /**
     * <p>A list of overrides for any <code>RefreshSchedule</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& AddRefreshSchedules(AssetBundleImportJobRefreshScheduleOverrideParameters&& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDataSourceOverrideParameters>& GetDataSources() const{ return m_dataSources; }

    /**
     * <p> A list of overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }

    /**
     * <p> A list of overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetDataSources(const Aws::Vector<AssetBundleImportJobDataSourceOverrideParameters>& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }

    /**
     * <p> A list of overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetDataSources(Aws::Vector<AssetBundleImportJobDataSourceOverrideParameters>&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }

    /**
     * <p> A list of overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithDataSources(const Aws::Vector<AssetBundleImportJobDataSourceOverrideParameters>& value) { SetDataSources(value); return *this;}

    /**
     * <p> A list of overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithDataSources(Aws::Vector<AssetBundleImportJobDataSourceOverrideParameters>&& value) { SetDataSources(std::move(value)); return *this;}

    /**
     * <p> A list of overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& AddDataSources(const AssetBundleImportJobDataSourceOverrideParameters& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(value); return *this; }

    /**
     * <p> A list of overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& AddDataSources(AssetBundleImportJobDataSourceOverrideParameters&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of overrides for any <code>DataSet</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDataSetOverrideParameters>& GetDataSets() const{ return m_dataSets; }

    /**
     * <p>A list of overrides for any <code>DataSet</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline bool DataSetsHasBeenSet() const { return m_dataSetsHasBeenSet; }

    /**
     * <p>A list of overrides for any <code>DataSet</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline void SetDataSets(const Aws::Vector<AssetBundleImportJobDataSetOverrideParameters>& value) { m_dataSetsHasBeenSet = true; m_dataSets = value; }

    /**
     * <p>A list of overrides for any <code>DataSet</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline void SetDataSets(Aws::Vector<AssetBundleImportJobDataSetOverrideParameters>&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::move(value); }

    /**
     * <p>A list of overrides for any <code>DataSet</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithDataSets(const Aws::Vector<AssetBundleImportJobDataSetOverrideParameters>& value) { SetDataSets(value); return *this;}

    /**
     * <p>A list of overrides for any <code>DataSet</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithDataSets(Aws::Vector<AssetBundleImportJobDataSetOverrideParameters>&& value) { SetDataSets(std::move(value)); return *this;}

    /**
     * <p>A list of overrides for any <code>DataSet</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& AddDataSets(const AssetBundleImportJobDataSetOverrideParameters& value) { m_dataSetsHasBeenSet = true; m_dataSets.push_back(value); return *this; }

    /**
     * <p>A list of overrides for any <code>DataSet</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& AddDataSets(AssetBundleImportJobDataSetOverrideParameters&& value) { m_dataSetsHasBeenSet = true; m_dataSets.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of overrides for any <code>Theme</code> resources that are present in
     * the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobThemeOverrideParameters>& GetThemes() const{ return m_themes; }

    /**
     * <p>A list of overrides for any <code>Theme</code> resources that are present in
     * the asset bundle that is imported.</p>
     */
    inline bool ThemesHasBeenSet() const { return m_themesHasBeenSet; }

    /**
     * <p>A list of overrides for any <code>Theme</code> resources that are present in
     * the asset bundle that is imported.</p>
     */
    inline void SetThemes(const Aws::Vector<AssetBundleImportJobThemeOverrideParameters>& value) { m_themesHasBeenSet = true; m_themes = value; }

    /**
     * <p>A list of overrides for any <code>Theme</code> resources that are present in
     * the asset bundle that is imported.</p>
     */
    inline void SetThemes(Aws::Vector<AssetBundleImportJobThemeOverrideParameters>&& value) { m_themesHasBeenSet = true; m_themes = std::move(value); }

    /**
     * <p>A list of overrides for any <code>Theme</code> resources that are present in
     * the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithThemes(const Aws::Vector<AssetBundleImportJobThemeOverrideParameters>& value) { SetThemes(value); return *this;}

    /**
     * <p>A list of overrides for any <code>Theme</code> resources that are present in
     * the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithThemes(Aws::Vector<AssetBundleImportJobThemeOverrideParameters>&& value) { SetThemes(std::move(value)); return *this;}

    /**
     * <p>A list of overrides for any <code>Theme</code> resources that are present in
     * the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& AddThemes(const AssetBundleImportJobThemeOverrideParameters& value) { m_themesHasBeenSet = true; m_themes.push_back(value); return *this; }

    /**
     * <p>A list of overrides for any <code>Theme</code> resources that are present in
     * the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& AddThemes(AssetBundleImportJobThemeOverrideParameters&& value) { m_themesHasBeenSet = true; m_themes.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of overrides for any <code>Analysis</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobAnalysisOverrideParameters>& GetAnalyses() const{ return m_analyses; }

    /**
     * <p>A list of overrides for any <code>Analysis</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline bool AnalysesHasBeenSet() const { return m_analysesHasBeenSet; }

    /**
     * <p>A list of overrides for any <code>Analysis</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline void SetAnalyses(const Aws::Vector<AssetBundleImportJobAnalysisOverrideParameters>& value) { m_analysesHasBeenSet = true; m_analyses = value; }

    /**
     * <p>A list of overrides for any <code>Analysis</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline void SetAnalyses(Aws::Vector<AssetBundleImportJobAnalysisOverrideParameters>&& value) { m_analysesHasBeenSet = true; m_analyses = std::move(value); }

    /**
     * <p>A list of overrides for any <code>Analysis</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithAnalyses(const Aws::Vector<AssetBundleImportJobAnalysisOverrideParameters>& value) { SetAnalyses(value); return *this;}

    /**
     * <p>A list of overrides for any <code>Analysis</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithAnalyses(Aws::Vector<AssetBundleImportJobAnalysisOverrideParameters>&& value) { SetAnalyses(std::move(value)); return *this;}

    /**
     * <p>A list of overrides for any <code>Analysis</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& AddAnalyses(const AssetBundleImportJobAnalysisOverrideParameters& value) { m_analysesHasBeenSet = true; m_analyses.push_back(value); return *this; }

    /**
     * <p>A list of overrides for any <code>Analysis</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& AddAnalyses(AssetBundleImportJobAnalysisOverrideParameters&& value) { m_analysesHasBeenSet = true; m_analyses.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of overrides for any <code>Dashboard</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDashboardOverrideParameters>& GetDashboards() const{ return m_dashboards; }

    /**
     * <p>A list of overrides for any <code>Dashboard</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline bool DashboardsHasBeenSet() const { return m_dashboardsHasBeenSet; }

    /**
     * <p>A list of overrides for any <code>Dashboard</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline void SetDashboards(const Aws::Vector<AssetBundleImportJobDashboardOverrideParameters>& value) { m_dashboardsHasBeenSet = true; m_dashboards = value; }

    /**
     * <p>A list of overrides for any <code>Dashboard</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline void SetDashboards(Aws::Vector<AssetBundleImportJobDashboardOverrideParameters>&& value) { m_dashboardsHasBeenSet = true; m_dashboards = std::move(value); }

    /**
     * <p>A list of overrides for any <code>Dashboard</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithDashboards(const Aws::Vector<AssetBundleImportJobDashboardOverrideParameters>& value) { SetDashboards(value); return *this;}

    /**
     * <p>A list of overrides for any <code>Dashboard</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& WithDashboards(Aws::Vector<AssetBundleImportJobDashboardOverrideParameters>&& value) { SetDashboards(std::move(value)); return *this;}

    /**
     * <p>A list of overrides for any <code>Dashboard</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& AddDashboards(const AssetBundleImportJobDashboardOverrideParameters& value) { m_dashboardsHasBeenSet = true; m_dashboards.push_back(value); return *this; }

    /**
     * <p>A list of overrides for any <code>Dashboard</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideParameters& AddDashboards(AssetBundleImportJobDashboardOverrideParameters&& value) { m_dashboardsHasBeenSet = true; m_dashboards.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
