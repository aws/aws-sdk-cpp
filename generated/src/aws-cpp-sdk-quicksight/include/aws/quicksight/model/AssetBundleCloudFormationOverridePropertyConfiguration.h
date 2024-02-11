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
    AWS_QUICKSIGHT_API AssetBundleCloudFormationOverridePropertyConfiguration();
    AWS_QUICKSIGHT_API AssetBundleCloudFormationOverridePropertyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleCloudFormationOverridePropertyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An optional list of structures that control how resource IDs are
     * parameterized in the returned CloudFormation template.</p>
     */
    inline const AssetBundleExportJobResourceIdOverrideConfiguration& GetResourceIdOverrideConfiguration() const{ return m_resourceIdOverrideConfiguration; }

    /**
     * <p>An optional list of structures that control how resource IDs are
     * parameterized in the returned CloudFormation template.</p>
     */
    inline bool ResourceIdOverrideConfigurationHasBeenSet() const { return m_resourceIdOverrideConfigurationHasBeenSet; }

    /**
     * <p>An optional list of structures that control how resource IDs are
     * parameterized in the returned CloudFormation template.</p>
     */
    inline void SetResourceIdOverrideConfiguration(const AssetBundleExportJobResourceIdOverrideConfiguration& value) { m_resourceIdOverrideConfigurationHasBeenSet = true; m_resourceIdOverrideConfiguration = value; }

    /**
     * <p>An optional list of structures that control how resource IDs are
     * parameterized in the returned CloudFormation template.</p>
     */
    inline void SetResourceIdOverrideConfiguration(AssetBundleExportJobResourceIdOverrideConfiguration&& value) { m_resourceIdOverrideConfigurationHasBeenSet = true; m_resourceIdOverrideConfiguration = std::move(value); }

    /**
     * <p>An optional list of structures that control how resource IDs are
     * parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithResourceIdOverrideConfiguration(const AssetBundleExportJobResourceIdOverrideConfiguration& value) { SetResourceIdOverrideConfiguration(value); return *this;}

    /**
     * <p>An optional list of structures that control how resource IDs are
     * parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithResourceIdOverrideConfiguration(AssetBundleExportJobResourceIdOverrideConfiguration&& value) { SetResourceIdOverrideConfiguration(std::move(value)); return *this;}


    /**
     * <p>An optional list of structures that control how <code>VPCConnection</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobVPCConnectionOverrideProperties>& GetVPCConnections() const{ return m_vPCConnections; }

    /**
     * <p>An optional list of structures that control how <code>VPCConnection</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline bool VPCConnectionsHasBeenSet() const { return m_vPCConnectionsHasBeenSet; }

    /**
     * <p>An optional list of structures that control how <code>VPCConnection</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline void SetVPCConnections(const Aws::Vector<AssetBundleExportJobVPCConnectionOverrideProperties>& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections = value; }

    /**
     * <p>An optional list of structures that control how <code>VPCConnection</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline void SetVPCConnections(Aws::Vector<AssetBundleExportJobVPCConnectionOverrideProperties>&& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections = std::move(value); }

    /**
     * <p>An optional list of structures that control how <code>VPCConnection</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithVPCConnections(const Aws::Vector<AssetBundleExportJobVPCConnectionOverrideProperties>& value) { SetVPCConnections(value); return *this;}

    /**
     * <p>An optional list of structures that control how <code>VPCConnection</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithVPCConnections(Aws::Vector<AssetBundleExportJobVPCConnectionOverrideProperties>&& value) { SetVPCConnections(std::move(value)); return *this;}

    /**
     * <p>An optional list of structures that control how <code>VPCConnection</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& AddVPCConnections(const AssetBundleExportJobVPCConnectionOverrideProperties& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections.push_back(value); return *this; }

    /**
     * <p>An optional list of structures that control how <code>VPCConnection</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& AddVPCConnections(AssetBundleExportJobVPCConnectionOverrideProperties&& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional list of structures that control how <code>RefreshSchedule</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobRefreshScheduleOverrideProperties>& GetRefreshSchedules() const{ return m_refreshSchedules; }

    /**
     * <p>An optional list of structures that control how <code>RefreshSchedule</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline bool RefreshSchedulesHasBeenSet() const { return m_refreshSchedulesHasBeenSet; }

    /**
     * <p>An optional list of structures that control how <code>RefreshSchedule</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline void SetRefreshSchedules(const Aws::Vector<AssetBundleExportJobRefreshScheduleOverrideProperties>& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules = value; }

    /**
     * <p>An optional list of structures that control how <code>RefreshSchedule</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline void SetRefreshSchedules(Aws::Vector<AssetBundleExportJobRefreshScheduleOverrideProperties>&& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules = std::move(value); }

    /**
     * <p>An optional list of structures that control how <code>RefreshSchedule</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithRefreshSchedules(const Aws::Vector<AssetBundleExportJobRefreshScheduleOverrideProperties>& value) { SetRefreshSchedules(value); return *this;}

    /**
     * <p>An optional list of structures that control how <code>RefreshSchedule</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithRefreshSchedules(Aws::Vector<AssetBundleExportJobRefreshScheduleOverrideProperties>&& value) { SetRefreshSchedules(std::move(value)); return *this;}

    /**
     * <p>An optional list of structures that control how <code>RefreshSchedule</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& AddRefreshSchedules(const AssetBundleExportJobRefreshScheduleOverrideProperties& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules.push_back(value); return *this; }

    /**
     * <p>An optional list of structures that control how <code>RefreshSchedule</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& AddRefreshSchedules(AssetBundleExportJobRefreshScheduleOverrideProperties&& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional list of structures that control how <code>DataSource</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobDataSourceOverrideProperties>& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>An optional list of structures that control how <code>DataSource</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }

    /**
     * <p>An optional list of structures that control how <code>DataSource</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline void SetDataSources(const Aws::Vector<AssetBundleExportJobDataSourceOverrideProperties>& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }

    /**
     * <p>An optional list of structures that control how <code>DataSource</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline void SetDataSources(Aws::Vector<AssetBundleExportJobDataSourceOverrideProperties>&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }

    /**
     * <p>An optional list of structures that control how <code>DataSource</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithDataSources(const Aws::Vector<AssetBundleExportJobDataSourceOverrideProperties>& value) { SetDataSources(value); return *this;}

    /**
     * <p>An optional list of structures that control how <code>DataSource</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithDataSources(Aws::Vector<AssetBundleExportJobDataSourceOverrideProperties>&& value) { SetDataSources(std::move(value)); return *this;}

    /**
     * <p>An optional list of structures that control how <code>DataSource</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& AddDataSources(const AssetBundleExportJobDataSourceOverrideProperties& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(value); return *this; }

    /**
     * <p>An optional list of structures that control how <code>DataSource</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& AddDataSources(AssetBundleExportJobDataSourceOverrideProperties&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional list of structures that control how <code>DataSet</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobDataSetOverrideProperties>& GetDataSets() const{ return m_dataSets; }

    /**
     * <p>An optional list of structures that control how <code>DataSet</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline bool DataSetsHasBeenSet() const { return m_dataSetsHasBeenSet; }

    /**
     * <p>An optional list of structures that control how <code>DataSet</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline void SetDataSets(const Aws::Vector<AssetBundleExportJobDataSetOverrideProperties>& value) { m_dataSetsHasBeenSet = true; m_dataSets = value; }

    /**
     * <p>An optional list of structures that control how <code>DataSet</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline void SetDataSets(Aws::Vector<AssetBundleExportJobDataSetOverrideProperties>&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::move(value); }

    /**
     * <p>An optional list of structures that control how <code>DataSet</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithDataSets(const Aws::Vector<AssetBundleExportJobDataSetOverrideProperties>& value) { SetDataSets(value); return *this;}

    /**
     * <p>An optional list of structures that control how <code>DataSet</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithDataSets(Aws::Vector<AssetBundleExportJobDataSetOverrideProperties>&& value) { SetDataSets(std::move(value)); return *this;}

    /**
     * <p>An optional list of structures that control how <code>DataSet</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& AddDataSets(const AssetBundleExportJobDataSetOverrideProperties& value) { m_dataSetsHasBeenSet = true; m_dataSets.push_back(value); return *this; }

    /**
     * <p>An optional list of structures that control how <code>DataSet</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& AddDataSets(AssetBundleExportJobDataSetOverrideProperties&& value) { m_dataSetsHasBeenSet = true; m_dataSets.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional list of structures that control how <code>Theme</code> resources
     * are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobThemeOverrideProperties>& GetThemes() const{ return m_themes; }

    /**
     * <p>An optional list of structures that control how <code>Theme</code> resources
     * are parameterized in the returned CloudFormation template.</p>
     */
    inline bool ThemesHasBeenSet() const { return m_themesHasBeenSet; }

    /**
     * <p>An optional list of structures that control how <code>Theme</code> resources
     * are parameterized in the returned CloudFormation template.</p>
     */
    inline void SetThemes(const Aws::Vector<AssetBundleExportJobThemeOverrideProperties>& value) { m_themesHasBeenSet = true; m_themes = value; }

    /**
     * <p>An optional list of structures that control how <code>Theme</code> resources
     * are parameterized in the returned CloudFormation template.</p>
     */
    inline void SetThemes(Aws::Vector<AssetBundleExportJobThemeOverrideProperties>&& value) { m_themesHasBeenSet = true; m_themes = std::move(value); }

    /**
     * <p>An optional list of structures that control how <code>Theme</code> resources
     * are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithThemes(const Aws::Vector<AssetBundleExportJobThemeOverrideProperties>& value) { SetThemes(value); return *this;}

    /**
     * <p>An optional list of structures that control how <code>Theme</code> resources
     * are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithThemes(Aws::Vector<AssetBundleExportJobThemeOverrideProperties>&& value) { SetThemes(std::move(value)); return *this;}

    /**
     * <p>An optional list of structures that control how <code>Theme</code> resources
     * are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& AddThemes(const AssetBundleExportJobThemeOverrideProperties& value) { m_themesHasBeenSet = true; m_themes.push_back(value); return *this; }

    /**
     * <p>An optional list of structures that control how <code>Theme</code> resources
     * are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& AddThemes(AssetBundleExportJobThemeOverrideProperties&& value) { m_themesHasBeenSet = true; m_themes.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional list of structures that control how <code>Analysis</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobAnalysisOverrideProperties>& GetAnalyses() const{ return m_analyses; }

    /**
     * <p>An optional list of structures that control how <code>Analysis</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline bool AnalysesHasBeenSet() const { return m_analysesHasBeenSet; }

    /**
     * <p>An optional list of structures that control how <code>Analysis</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline void SetAnalyses(const Aws::Vector<AssetBundleExportJobAnalysisOverrideProperties>& value) { m_analysesHasBeenSet = true; m_analyses = value; }

    /**
     * <p>An optional list of structures that control how <code>Analysis</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline void SetAnalyses(Aws::Vector<AssetBundleExportJobAnalysisOverrideProperties>&& value) { m_analysesHasBeenSet = true; m_analyses = std::move(value); }

    /**
     * <p>An optional list of structures that control how <code>Analysis</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithAnalyses(const Aws::Vector<AssetBundleExportJobAnalysisOverrideProperties>& value) { SetAnalyses(value); return *this;}

    /**
     * <p>An optional list of structures that control how <code>Analysis</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithAnalyses(Aws::Vector<AssetBundleExportJobAnalysisOverrideProperties>&& value) { SetAnalyses(std::move(value)); return *this;}

    /**
     * <p>An optional list of structures that control how <code>Analysis</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& AddAnalyses(const AssetBundleExportJobAnalysisOverrideProperties& value) { m_analysesHasBeenSet = true; m_analyses.push_back(value); return *this; }

    /**
     * <p>An optional list of structures that control how <code>Analysis</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& AddAnalyses(AssetBundleExportJobAnalysisOverrideProperties&& value) { m_analysesHasBeenSet = true; m_analyses.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional list of structures that control how <code>Dashboard</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobDashboardOverrideProperties>& GetDashboards() const{ return m_dashboards; }

    /**
     * <p>An optional list of structures that control how <code>Dashboard</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline bool DashboardsHasBeenSet() const { return m_dashboardsHasBeenSet; }

    /**
     * <p>An optional list of structures that control how <code>Dashboard</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline void SetDashboards(const Aws::Vector<AssetBundleExportJobDashboardOverrideProperties>& value) { m_dashboardsHasBeenSet = true; m_dashboards = value; }

    /**
     * <p>An optional list of structures that control how <code>Dashboard</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline void SetDashboards(Aws::Vector<AssetBundleExportJobDashboardOverrideProperties>&& value) { m_dashboardsHasBeenSet = true; m_dashboards = std::move(value); }

    /**
     * <p>An optional list of structures that control how <code>Dashboard</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithDashboards(const Aws::Vector<AssetBundleExportJobDashboardOverrideProperties>& value) { SetDashboards(value); return *this;}

    /**
     * <p>An optional list of structures that control how <code>Dashboard</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& WithDashboards(Aws::Vector<AssetBundleExportJobDashboardOverrideProperties>&& value) { SetDashboards(std::move(value)); return *this;}

    /**
     * <p>An optional list of structures that control how <code>Dashboard</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& AddDashboards(const AssetBundleExportJobDashboardOverrideProperties& value) { m_dashboardsHasBeenSet = true; m_dashboards.push_back(value); return *this; }

    /**
     * <p>An optional list of structures that control how <code>Dashboard</code>
     * resources are parameterized in the returned CloudFormation template.</p>
     */
    inline AssetBundleCloudFormationOverridePropertyConfiguration& AddDashboards(AssetBundleExportJobDashboardOverrideProperties&& value) { m_dashboardsHasBeenSet = true; m_dashboards.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
