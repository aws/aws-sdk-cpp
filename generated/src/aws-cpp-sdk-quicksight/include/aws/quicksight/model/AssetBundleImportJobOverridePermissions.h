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
    AWS_QUICKSIGHT_API AssetBundleImportJobOverridePermissions();
    AWS_QUICKSIGHT_API AssetBundleImportJobOverridePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobOverridePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of permissions overrides for any <code>DataSource</code> resources
     * that are present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDataSourceOverridePermissions>& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>A list of permissions overrides for any <code>DataSource</code> resources
     * that are present in the asset bundle that is imported.</p>
     */
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }

    /**
     * <p>A list of permissions overrides for any <code>DataSource</code> resources
     * that are present in the asset bundle that is imported.</p>
     */
    inline void SetDataSources(const Aws::Vector<AssetBundleImportJobDataSourceOverridePermissions>& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }

    /**
     * <p>A list of permissions overrides for any <code>DataSource</code> resources
     * that are present in the asset bundle that is imported.</p>
     */
    inline void SetDataSources(Aws::Vector<AssetBundleImportJobDataSourceOverridePermissions>&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }

    /**
     * <p>A list of permissions overrides for any <code>DataSource</code> resources
     * that are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& WithDataSources(const Aws::Vector<AssetBundleImportJobDataSourceOverridePermissions>& value) { SetDataSources(value); return *this;}

    /**
     * <p>A list of permissions overrides for any <code>DataSource</code> resources
     * that are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& WithDataSources(Aws::Vector<AssetBundleImportJobDataSourceOverridePermissions>&& value) { SetDataSources(std::move(value)); return *this;}

    /**
     * <p>A list of permissions overrides for any <code>DataSource</code> resources
     * that are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& AddDataSources(const AssetBundleImportJobDataSourceOverridePermissions& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(value); return *this; }

    /**
     * <p>A list of permissions overrides for any <code>DataSource</code> resources
     * that are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& AddDataSources(AssetBundleImportJobDataSourceOverridePermissions&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of permissions overrides for any <code>DataSet</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDataSetOverridePermissions>& GetDataSets() const{ return m_dataSets; }

    /**
     * <p>A list of permissions overrides for any <code>DataSet</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline bool DataSetsHasBeenSet() const { return m_dataSetsHasBeenSet; }

    /**
     * <p>A list of permissions overrides for any <code>DataSet</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline void SetDataSets(const Aws::Vector<AssetBundleImportJobDataSetOverridePermissions>& value) { m_dataSetsHasBeenSet = true; m_dataSets = value; }

    /**
     * <p>A list of permissions overrides for any <code>DataSet</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline void SetDataSets(Aws::Vector<AssetBundleImportJobDataSetOverridePermissions>&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::move(value); }

    /**
     * <p>A list of permissions overrides for any <code>DataSet</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& WithDataSets(const Aws::Vector<AssetBundleImportJobDataSetOverridePermissions>& value) { SetDataSets(value); return *this;}

    /**
     * <p>A list of permissions overrides for any <code>DataSet</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& WithDataSets(Aws::Vector<AssetBundleImportJobDataSetOverridePermissions>&& value) { SetDataSets(std::move(value)); return *this;}

    /**
     * <p>A list of permissions overrides for any <code>DataSet</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& AddDataSets(const AssetBundleImportJobDataSetOverridePermissions& value) { m_dataSetsHasBeenSet = true; m_dataSets.push_back(value); return *this; }

    /**
     * <p>A list of permissions overrides for any <code>DataSet</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& AddDataSets(AssetBundleImportJobDataSetOverridePermissions&& value) { m_dataSetsHasBeenSet = true; m_dataSets.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of permissions overrides for any <code>Theme</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobThemeOverridePermissions>& GetThemes() const{ return m_themes; }

    /**
     * <p>A list of permissions overrides for any <code>Theme</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline bool ThemesHasBeenSet() const { return m_themesHasBeenSet; }

    /**
     * <p>A list of permissions overrides for any <code>Theme</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetThemes(const Aws::Vector<AssetBundleImportJobThemeOverridePermissions>& value) { m_themesHasBeenSet = true; m_themes = value; }

    /**
     * <p>A list of permissions overrides for any <code>Theme</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline void SetThemes(Aws::Vector<AssetBundleImportJobThemeOverridePermissions>&& value) { m_themesHasBeenSet = true; m_themes = std::move(value); }

    /**
     * <p>A list of permissions overrides for any <code>Theme</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& WithThemes(const Aws::Vector<AssetBundleImportJobThemeOverridePermissions>& value) { SetThemes(value); return *this;}

    /**
     * <p>A list of permissions overrides for any <code>Theme</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& WithThemes(Aws::Vector<AssetBundleImportJobThemeOverridePermissions>&& value) { SetThemes(std::move(value)); return *this;}

    /**
     * <p>A list of permissions overrides for any <code>Theme</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& AddThemes(const AssetBundleImportJobThemeOverridePermissions& value) { m_themesHasBeenSet = true; m_themes.push_back(value); return *this; }

    /**
     * <p>A list of permissions overrides for any <code>Theme</code> resources that are
     * present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& AddThemes(AssetBundleImportJobThemeOverridePermissions&& value) { m_themesHasBeenSet = true; m_themes.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of permissions overrides for any <code>Analysis</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobAnalysisOverridePermissions>& GetAnalyses() const{ return m_analyses; }

    /**
     * <p>A list of permissions overrides for any <code>Analysis</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline bool AnalysesHasBeenSet() const { return m_analysesHasBeenSet; }

    /**
     * <p>A list of permissions overrides for any <code>Analysis</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline void SetAnalyses(const Aws::Vector<AssetBundleImportJobAnalysisOverridePermissions>& value) { m_analysesHasBeenSet = true; m_analyses = value; }

    /**
     * <p>A list of permissions overrides for any <code>Analysis</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline void SetAnalyses(Aws::Vector<AssetBundleImportJobAnalysisOverridePermissions>&& value) { m_analysesHasBeenSet = true; m_analyses = std::move(value); }

    /**
     * <p>A list of permissions overrides for any <code>Analysis</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& WithAnalyses(const Aws::Vector<AssetBundleImportJobAnalysisOverridePermissions>& value) { SetAnalyses(value); return *this;}

    /**
     * <p>A list of permissions overrides for any <code>Analysis</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& WithAnalyses(Aws::Vector<AssetBundleImportJobAnalysisOverridePermissions>&& value) { SetAnalyses(std::move(value)); return *this;}

    /**
     * <p>A list of permissions overrides for any <code>Analysis</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& AddAnalyses(const AssetBundleImportJobAnalysisOverridePermissions& value) { m_analysesHasBeenSet = true; m_analyses.push_back(value); return *this; }

    /**
     * <p>A list of permissions overrides for any <code>Analysis</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& AddAnalyses(AssetBundleImportJobAnalysisOverridePermissions&& value) { m_analysesHasBeenSet = true; m_analyses.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of permissions overrides for any <code>Dashboard</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobDashboardOverridePermissions>& GetDashboards() const{ return m_dashboards; }

    /**
     * <p>A list of permissions overrides for any <code>Dashboard</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline bool DashboardsHasBeenSet() const { return m_dashboardsHasBeenSet; }

    /**
     * <p>A list of permissions overrides for any <code>Dashboard</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline void SetDashboards(const Aws::Vector<AssetBundleImportJobDashboardOverridePermissions>& value) { m_dashboardsHasBeenSet = true; m_dashboards = value; }

    /**
     * <p>A list of permissions overrides for any <code>Dashboard</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline void SetDashboards(Aws::Vector<AssetBundleImportJobDashboardOverridePermissions>&& value) { m_dashboardsHasBeenSet = true; m_dashboards = std::move(value); }

    /**
     * <p>A list of permissions overrides for any <code>Dashboard</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& WithDashboards(const Aws::Vector<AssetBundleImportJobDashboardOverridePermissions>& value) { SetDashboards(value); return *this;}

    /**
     * <p>A list of permissions overrides for any <code>Dashboard</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& WithDashboards(Aws::Vector<AssetBundleImportJobDashboardOverridePermissions>&& value) { SetDashboards(std::move(value)); return *this;}

    /**
     * <p>A list of permissions overrides for any <code>Dashboard</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& AddDashboards(const AssetBundleImportJobDashboardOverridePermissions& value) { m_dashboardsHasBeenSet = true; m_dashboards.push_back(value); return *this; }

    /**
     * <p>A list of permissions overrides for any <code>Dashboard</code> resources that
     * are present in the asset bundle that is imported.</p>
     */
    inline AssetBundleImportJobOverridePermissions& AddDashboards(AssetBundleImportJobDashboardOverridePermissions&& value) { m_dashboardsHasBeenSet = true; m_dashboards.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
