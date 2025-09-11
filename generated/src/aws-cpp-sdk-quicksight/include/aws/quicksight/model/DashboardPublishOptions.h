/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AdHocFilteringOption.h>
#include <aws/quicksight/model/ExportToCSVOption.h>
#include <aws/quicksight/model/SheetControlsOption.h>
#include <aws/quicksight/model/SheetLayoutElementMaximizationOption.h>
#include <aws/quicksight/model/VisualMenuOption.h>
#include <aws/quicksight/model/VisualAxisSortOption.h>
#include <aws/quicksight/model/ExportWithHiddenFieldsOption.h>
#include <aws/quicksight/model/DataPointDrillUpDownOption.h>
#include <aws/quicksight/model/DataPointMenuLabelOption.h>
#include <aws/quicksight/model/DataPointTooltipOption.h>
#include <aws/quicksight/model/DataQAEnabledOption.h>
#include <aws/quicksight/model/ExecutiveSummaryOption.h>
#include <aws/quicksight/model/DataStoriesSharingOption.h>
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
   * <p>Dashboard publish options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardPublishOptions">AWS
   * API Reference</a></p>
   */
  class DashboardPublishOptions
  {
  public:
    AWS_QUICKSIGHT_API DashboardPublishOptions() = default;
    AWS_QUICKSIGHT_API DashboardPublishOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardPublishOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Ad hoc (one-time) filtering option.</p>
     */
    inline const AdHocFilteringOption& GetAdHocFilteringOption() const { return m_adHocFilteringOption; }
    inline bool AdHocFilteringOptionHasBeenSet() const { return m_adHocFilteringOptionHasBeenSet; }
    template<typename AdHocFilteringOptionT = AdHocFilteringOption>
    void SetAdHocFilteringOption(AdHocFilteringOptionT&& value) { m_adHocFilteringOptionHasBeenSet = true; m_adHocFilteringOption = std::forward<AdHocFilteringOptionT>(value); }
    template<typename AdHocFilteringOptionT = AdHocFilteringOption>
    DashboardPublishOptions& WithAdHocFilteringOption(AdHocFilteringOptionT&& value) { SetAdHocFilteringOption(std::forward<AdHocFilteringOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export to .csv option.</p>
     */
    inline const ExportToCSVOption& GetExportToCSVOption() const { return m_exportToCSVOption; }
    inline bool ExportToCSVOptionHasBeenSet() const { return m_exportToCSVOptionHasBeenSet; }
    template<typename ExportToCSVOptionT = ExportToCSVOption>
    void SetExportToCSVOption(ExportToCSVOptionT&& value) { m_exportToCSVOptionHasBeenSet = true; m_exportToCSVOption = std::forward<ExportToCSVOptionT>(value); }
    template<typename ExportToCSVOptionT = ExportToCSVOption>
    DashboardPublishOptions& WithExportToCSVOption(ExportToCSVOptionT&& value) { SetExportToCSVOption(std::forward<ExportToCSVOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sheet controls option.</p>
     */
    inline const SheetControlsOption& GetSheetControlsOption() const { return m_sheetControlsOption; }
    inline bool SheetControlsOptionHasBeenSet() const { return m_sheetControlsOptionHasBeenSet; }
    template<typename SheetControlsOptionT = SheetControlsOption>
    void SetSheetControlsOption(SheetControlsOptionT&& value) { m_sheetControlsOptionHasBeenSet = true; m_sheetControlsOption = std::forward<SheetControlsOptionT>(value); }
    template<typename SheetControlsOptionT = SheetControlsOption>
    DashboardPublishOptions& WithSheetControlsOption(SheetControlsOptionT&& value) { SetSheetControlsOption(std::forward<SheetControlsOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sheet layout maximization options of a dashbaord.</p>
     */
    inline const SheetLayoutElementMaximizationOption& GetSheetLayoutElementMaximizationOption() const { return m_sheetLayoutElementMaximizationOption; }
    inline bool SheetLayoutElementMaximizationOptionHasBeenSet() const { return m_sheetLayoutElementMaximizationOptionHasBeenSet; }
    template<typename SheetLayoutElementMaximizationOptionT = SheetLayoutElementMaximizationOption>
    void SetSheetLayoutElementMaximizationOption(SheetLayoutElementMaximizationOptionT&& value) { m_sheetLayoutElementMaximizationOptionHasBeenSet = true; m_sheetLayoutElementMaximizationOption = std::forward<SheetLayoutElementMaximizationOptionT>(value); }
    template<typename SheetLayoutElementMaximizationOptionT = SheetLayoutElementMaximizationOption>
    DashboardPublishOptions& WithSheetLayoutElementMaximizationOption(SheetLayoutElementMaximizationOptionT&& value) { SetSheetLayoutElementMaximizationOption(std::forward<SheetLayoutElementMaximizationOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The menu options of a visual in a dashboard.</p>
     */
    inline const VisualMenuOption& GetVisualMenuOption() const { return m_visualMenuOption; }
    inline bool VisualMenuOptionHasBeenSet() const { return m_visualMenuOptionHasBeenSet; }
    template<typename VisualMenuOptionT = VisualMenuOption>
    void SetVisualMenuOption(VisualMenuOptionT&& value) { m_visualMenuOptionHasBeenSet = true; m_visualMenuOption = std::forward<VisualMenuOptionT>(value); }
    template<typename VisualMenuOptionT = VisualMenuOption>
    DashboardPublishOptions& WithVisualMenuOption(VisualMenuOptionT&& value) { SetVisualMenuOption(std::forward<VisualMenuOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The axis sort options of a dashboard.</p>
     */
    inline const VisualAxisSortOption& GetVisualAxisSortOption() const { return m_visualAxisSortOption; }
    inline bool VisualAxisSortOptionHasBeenSet() const { return m_visualAxisSortOptionHasBeenSet; }
    template<typename VisualAxisSortOptionT = VisualAxisSortOption>
    void SetVisualAxisSortOption(VisualAxisSortOptionT&& value) { m_visualAxisSortOptionHasBeenSet = true; m_visualAxisSortOption = std::forward<VisualAxisSortOptionT>(value); }
    template<typename VisualAxisSortOptionT = VisualAxisSortOption>
    DashboardPublishOptions& WithVisualAxisSortOption(VisualAxisSortOptionT&& value) { SetVisualAxisSortOption(std::forward<VisualAxisSortOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if hidden fields are exported with a dashboard.</p>
     */
    inline const ExportWithHiddenFieldsOption& GetExportWithHiddenFieldsOption() const { return m_exportWithHiddenFieldsOption; }
    inline bool ExportWithHiddenFieldsOptionHasBeenSet() const { return m_exportWithHiddenFieldsOptionHasBeenSet; }
    template<typename ExportWithHiddenFieldsOptionT = ExportWithHiddenFieldsOption>
    void SetExportWithHiddenFieldsOption(ExportWithHiddenFieldsOptionT&& value) { m_exportWithHiddenFieldsOptionHasBeenSet = true; m_exportWithHiddenFieldsOption = std::forward<ExportWithHiddenFieldsOptionT>(value); }
    template<typename ExportWithHiddenFieldsOptionT = ExportWithHiddenFieldsOption>
    DashboardPublishOptions& WithExportWithHiddenFieldsOption(ExportWithHiddenFieldsOptionT&& value) { SetExportWithHiddenFieldsOption(std::forward<ExportWithHiddenFieldsOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The drill-down options of data points in a dashboard.</p>
     */
    inline const DataPointDrillUpDownOption& GetDataPointDrillUpDownOption() const { return m_dataPointDrillUpDownOption; }
    inline bool DataPointDrillUpDownOptionHasBeenSet() const { return m_dataPointDrillUpDownOptionHasBeenSet; }
    template<typename DataPointDrillUpDownOptionT = DataPointDrillUpDownOption>
    void SetDataPointDrillUpDownOption(DataPointDrillUpDownOptionT&& value) { m_dataPointDrillUpDownOptionHasBeenSet = true; m_dataPointDrillUpDownOption = std::forward<DataPointDrillUpDownOptionT>(value); }
    template<typename DataPointDrillUpDownOptionT = DataPointDrillUpDownOption>
    DashboardPublishOptions& WithDataPointDrillUpDownOption(DataPointDrillUpDownOptionT&& value) { SetDataPointDrillUpDownOption(std::forward<DataPointDrillUpDownOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data point menu label options of a dashboard.</p>
     */
    inline const DataPointMenuLabelOption& GetDataPointMenuLabelOption() const { return m_dataPointMenuLabelOption; }
    inline bool DataPointMenuLabelOptionHasBeenSet() const { return m_dataPointMenuLabelOptionHasBeenSet; }
    template<typename DataPointMenuLabelOptionT = DataPointMenuLabelOption>
    void SetDataPointMenuLabelOption(DataPointMenuLabelOptionT&& value) { m_dataPointMenuLabelOptionHasBeenSet = true; m_dataPointMenuLabelOption = std::forward<DataPointMenuLabelOptionT>(value); }
    template<typename DataPointMenuLabelOptionT = DataPointMenuLabelOption>
    DashboardPublishOptions& WithDataPointMenuLabelOption(DataPointMenuLabelOptionT&& value) { SetDataPointMenuLabelOption(std::forward<DataPointMenuLabelOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data point tool tip options of a dashboard.</p>
     */
    inline const DataPointTooltipOption& GetDataPointTooltipOption() const { return m_dataPointTooltipOption; }
    inline bool DataPointTooltipOptionHasBeenSet() const { return m_dataPointTooltipOptionHasBeenSet; }
    template<typename DataPointTooltipOptionT = DataPointTooltipOption>
    void SetDataPointTooltipOption(DataPointTooltipOptionT&& value) { m_dataPointTooltipOptionHasBeenSet = true; m_dataPointTooltipOption = std::forward<DataPointTooltipOptionT>(value); }
    template<typename DataPointTooltipOptionT = DataPointTooltipOption>
    DashboardPublishOptions& WithDataPointTooltipOption(DataPointTooltipOptionT&& value) { SetDataPointTooltipOption(std::forward<DataPointTooltipOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds Q&amp;A capabilities to an QuickSight dashboard. If no topic is linked,
     * Dashboard Q&amp;A uses the data values that are rendered on the dashboard. End
     * users can use Dashboard Q&amp;A to ask for different slices of the data that
     * they see on the dashboard. If a topic is linked, Topic Q&amp;A is used.</p>
     */
    inline const DataQAEnabledOption& GetDataQAEnabledOption() const { return m_dataQAEnabledOption; }
    inline bool DataQAEnabledOptionHasBeenSet() const { return m_dataQAEnabledOptionHasBeenSet; }
    template<typename DataQAEnabledOptionT = DataQAEnabledOption>
    void SetDataQAEnabledOption(DataQAEnabledOptionT&& value) { m_dataQAEnabledOptionHasBeenSet = true; m_dataQAEnabledOption = std::forward<DataQAEnabledOptionT>(value); }
    template<typename DataQAEnabledOptionT = DataQAEnabledOption>
    DashboardPublishOptions& WithDataQAEnabledOption(DataQAEnabledOptionT&& value) { SetDataQAEnabledOption(std::forward<DataQAEnabledOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Executive summary option.</p>
     */
    inline const ExecutiveSummaryOption& GetExecutiveSummaryOption() const { return m_executiveSummaryOption; }
    inline bool ExecutiveSummaryOptionHasBeenSet() const { return m_executiveSummaryOptionHasBeenSet; }
    template<typename ExecutiveSummaryOptionT = ExecutiveSummaryOption>
    void SetExecutiveSummaryOption(ExecutiveSummaryOptionT&& value) { m_executiveSummaryOptionHasBeenSet = true; m_executiveSummaryOption = std::forward<ExecutiveSummaryOptionT>(value); }
    template<typename ExecutiveSummaryOptionT = ExecutiveSummaryOption>
    DashboardPublishOptions& WithExecutiveSummaryOption(ExecutiveSummaryOptionT&& value) { SetExecutiveSummaryOption(std::forward<ExecutiveSummaryOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data stories sharing option.</p>
     */
    inline const DataStoriesSharingOption& GetDataStoriesSharingOption() const { return m_dataStoriesSharingOption; }
    inline bool DataStoriesSharingOptionHasBeenSet() const { return m_dataStoriesSharingOptionHasBeenSet; }
    template<typename DataStoriesSharingOptionT = DataStoriesSharingOption>
    void SetDataStoriesSharingOption(DataStoriesSharingOptionT&& value) { m_dataStoriesSharingOptionHasBeenSet = true; m_dataStoriesSharingOption = std::forward<DataStoriesSharingOptionT>(value); }
    template<typename DataStoriesSharingOptionT = DataStoriesSharingOption>
    DashboardPublishOptions& WithDataStoriesSharingOption(DataStoriesSharingOptionT&& value) { SetDataStoriesSharingOption(std::forward<DataStoriesSharingOptionT>(value)); return *this;}
    ///@}
  private:

    AdHocFilteringOption m_adHocFilteringOption;
    bool m_adHocFilteringOptionHasBeenSet = false;

    ExportToCSVOption m_exportToCSVOption;
    bool m_exportToCSVOptionHasBeenSet = false;

    SheetControlsOption m_sheetControlsOption;
    bool m_sheetControlsOptionHasBeenSet = false;

    SheetLayoutElementMaximizationOption m_sheetLayoutElementMaximizationOption;
    bool m_sheetLayoutElementMaximizationOptionHasBeenSet = false;

    VisualMenuOption m_visualMenuOption;
    bool m_visualMenuOptionHasBeenSet = false;

    VisualAxisSortOption m_visualAxisSortOption;
    bool m_visualAxisSortOptionHasBeenSet = false;

    ExportWithHiddenFieldsOption m_exportWithHiddenFieldsOption;
    bool m_exportWithHiddenFieldsOptionHasBeenSet = false;

    DataPointDrillUpDownOption m_dataPointDrillUpDownOption;
    bool m_dataPointDrillUpDownOptionHasBeenSet = false;

    DataPointMenuLabelOption m_dataPointMenuLabelOption;
    bool m_dataPointMenuLabelOptionHasBeenSet = false;

    DataPointTooltipOption m_dataPointTooltipOption;
    bool m_dataPointTooltipOptionHasBeenSet = false;

    DataQAEnabledOption m_dataQAEnabledOption;
    bool m_dataQAEnabledOptionHasBeenSet = false;

    ExecutiveSummaryOption m_executiveSummaryOption;
    bool m_executiveSummaryOptionHasBeenSet = false;

    DataStoriesSharingOption m_dataStoriesSharingOption;
    bool m_dataStoriesSharingOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
