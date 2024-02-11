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
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideTags();
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of tag overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobVPCConnectionOverrideTags>& GetVPCConnections() const{ return m_vPCConnections; }

    /**
     * <p>A list of tag overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline bool VPCConnectionsHasBeenSet() const { return m_vPCConnectionsHasBeenSet; }

    /**
     * <p>A list of tag overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetVPCConnections(const Aws::Vector<AssetBundleImportJobVPCConnectionOverrideTags>& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections = value; }

    /**
     * <p>A list of tag overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetVPCConnections(Aws::Vector<AssetBundleImportJobVPCConnectionOverrideTags>&& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections = std::move(value); }

    /**
     * <p>A list of tag overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& WithVPCConnections(const Aws::Vector<AssetBundleImportJobVPCConnectionOverrideTags>& value) { SetVPCConnections(value); return *this;}

    /**
     * <p>A list of tag overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& WithVPCConnections(Aws::Vector<AssetBundleImportJobVPCConnectionOverrideTags>&& value) { SetVPCConnections(std::move(value)); return *this;}

    /**
     * <p>A list of tag overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& AddVPCConnections(const AssetBundleImportJobVPCConnectionOverrideTags& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections.push_back(value); return *this; }

    /**
     * <p>A list of tag overrides for any <code>VPCConnection</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& AddVPCConnections(AssetBundleImportJobVPCConnectionOverrideTags&& value) { m_vPCConnectionsHasBeenSet = true; m_vPCConnections.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of tag overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDataSourceOverrideTags>& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>A list of tag overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }

    /**
     * <p>A list of tag overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetDataSources(const Aws::Vector<AssetBundleImportJobDataSourceOverrideTags>& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }

    /**
     * <p>A list of tag overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetDataSources(Aws::Vector<AssetBundleImportJobDataSourceOverrideTags>&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }

    /**
     * <p>A list of tag overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& WithDataSources(const Aws::Vector<AssetBundleImportJobDataSourceOverrideTags>& value) { SetDataSources(value); return *this;}

    /**
     * <p>A list of tag overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& WithDataSources(Aws::Vector<AssetBundleImportJobDataSourceOverrideTags>&& value) { SetDataSources(std::move(value)); return *this;}

    /**
     * <p>A list of tag overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& AddDataSources(const AssetBundleImportJobDataSourceOverrideTags& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(value); return *this; }

    /**
     * <p>A list of tag overrides for any <code>DataSource</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& AddDataSources(AssetBundleImportJobDataSourceOverrideTags&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of tag overrides for any <code>DataSet</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDataSetOverrideTags>& GetDataSets() const{ return m_dataSets; }

    /**
     * <p>A list of tag overrides for any <code>DataSet</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline bool DataSetsHasBeenSet() const { return m_dataSetsHasBeenSet; }

    /**
     * <p>A list of tag overrides for any <code>DataSet</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetDataSets(const Aws::Vector<AssetBundleImportJobDataSetOverrideTags>& value) { m_dataSetsHasBeenSet = true; m_dataSets = value; }

    /**
     * <p>A list of tag overrides for any <code>DataSet</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetDataSets(Aws::Vector<AssetBundleImportJobDataSetOverrideTags>&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::move(value); }

    /**
     * <p>A list of tag overrides for any <code>DataSet</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& WithDataSets(const Aws::Vector<AssetBundleImportJobDataSetOverrideTags>& value) { SetDataSets(value); return *this;}

    /**
     * <p>A list of tag overrides for any <code>DataSet</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& WithDataSets(Aws::Vector<AssetBundleImportJobDataSetOverrideTags>&& value) { SetDataSets(std::move(value)); return *this;}

    /**
     * <p>A list of tag overrides for any <code>DataSet</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& AddDataSets(const AssetBundleImportJobDataSetOverrideTags& value) { m_dataSetsHasBeenSet = true; m_dataSets.push_back(value); return *this; }

    /**
     * <p>A list of tag overrides for any <code>DataSet</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& AddDataSets(AssetBundleImportJobDataSetOverrideTags&& value) { m_dataSetsHasBeenSet = true; m_dataSets.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of tag overrides for any <code>Theme</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobThemeOverrideTags>& GetThemes() const{ return m_themes; }

    /**
     * <p>A list of tag overrides for any <code>Theme</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline bool ThemesHasBeenSet() const { return m_themesHasBeenSet; }

    /**
     * <p>A list of tag overrides for any <code>Theme</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline void SetThemes(const Aws::Vector<AssetBundleImportJobThemeOverrideTags>& value) { m_themesHasBeenSet = true; m_themes = value; }

    /**
     * <p>A list of tag overrides for any <code>Theme</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline void SetThemes(Aws::Vector<AssetBundleImportJobThemeOverrideTags>&& value) { m_themesHasBeenSet = true; m_themes = std::move(value); }

    /**
     * <p>A list of tag overrides for any <code>Theme</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& WithThemes(const Aws::Vector<AssetBundleImportJobThemeOverrideTags>& value) { SetThemes(value); return *this;}

    /**
     * <p>A list of tag overrides for any <code>Theme</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& WithThemes(Aws::Vector<AssetBundleImportJobThemeOverrideTags>&& value) { SetThemes(std::move(value)); return *this;}

    /**
     * <p>A list of tag overrides for any <code>Theme</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& AddThemes(const AssetBundleImportJobThemeOverrideTags& value) { m_themesHasBeenSet = true; m_themes.push_back(value); return *this; }

    /**
     * <p>A list of tag overrides for any <code>Theme</code> resources that are present
     * in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& AddThemes(AssetBundleImportJobThemeOverrideTags&& value) { m_themesHasBeenSet = true; m_themes.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of tag overrides for any <code>Analysis</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobAnalysisOverrideTags>& GetAnalyses() const{ return m_analyses; }

    /**
     * <p>A list of tag overrides for any <code>Analysis</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline bool AnalysesHasBeenSet() const { return m_analysesHasBeenSet; }

    /**
     * <p>A list of tag overrides for any <code>Analysis</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetAnalyses(const Aws::Vector<AssetBundleImportJobAnalysisOverrideTags>& value) { m_analysesHasBeenSet = true; m_analyses = value; }

    /**
     * <p>A list of tag overrides for any <code>Analysis</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetAnalyses(Aws::Vector<AssetBundleImportJobAnalysisOverrideTags>&& value) { m_analysesHasBeenSet = true; m_analyses = std::move(value); }

    /**
     * <p>A list of tag overrides for any <code>Analysis</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& WithAnalyses(const Aws::Vector<AssetBundleImportJobAnalysisOverrideTags>& value) { SetAnalyses(value); return *this;}

    /**
     * <p>A list of tag overrides for any <code>Analysis</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& WithAnalyses(Aws::Vector<AssetBundleImportJobAnalysisOverrideTags>&& value) { SetAnalyses(std::move(value)); return *this;}

    /**
     * <p>A list of tag overrides for any <code>Analysis</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& AddAnalyses(const AssetBundleImportJobAnalysisOverrideTags& value) { m_analysesHasBeenSet = true; m_analyses.push_back(value); return *this; }

    /**
     * <p>A list of tag overrides for any <code>Analysis</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& AddAnalyses(AssetBundleImportJobAnalysisOverrideTags&& value) { m_analysesHasBeenSet = true; m_analyses.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of tag overrides for any <code>Dashboard</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDashboardOverrideTags>& GetDashboards() const{ return m_dashboards; }

    /**
     * <p>A list of tag overrides for any <code>Dashboard</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline bool DashboardsHasBeenSet() const { return m_dashboardsHasBeenSet; }

    /**
     * <p>A list of tag overrides for any <code>Dashboard</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetDashboards(const Aws::Vector<AssetBundleImportJobDashboardOverrideTags>& value) { m_dashboardsHasBeenSet = true; m_dashboards = value; }

    /**
     * <p>A list of tag overrides for any <code>Dashboard</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetDashboards(Aws::Vector<AssetBundleImportJobDashboardOverrideTags>&& value) { m_dashboardsHasBeenSet = true; m_dashboards = std::move(value); }

    /**
     * <p>A list of tag overrides for any <code>Dashboard</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& WithDashboards(const Aws::Vector<AssetBundleImportJobDashboardOverrideTags>& value) { SetDashboards(value); return *this;}

    /**
     * <p>A list of tag overrides for any <code>Dashboard</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& WithDashboards(Aws::Vector<AssetBundleImportJobDashboardOverrideTags>&& value) { SetDashboards(std::move(value)); return *this;}

    /**
     * <p>A list of tag overrides for any <code>Dashboard</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& AddDashboards(const AssetBundleImportJobDashboardOverrideTags& value) { m_dashboardsHasBeenSet = true; m_dashboards.push_back(value); return *this; }

    /**
     * <p>A list of tag overrides for any <code>Dashboard</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverrideTags& AddDashboards(AssetBundleImportJobDashboardOverrideTags&& value) { m_dashboardsHasBeenSet = true; m_dashboards.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
