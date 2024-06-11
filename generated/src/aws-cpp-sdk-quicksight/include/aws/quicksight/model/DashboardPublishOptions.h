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
    AWS_QUICKSIGHT_API DashboardPublishOptions();
    AWS_QUICKSIGHT_API DashboardPublishOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardPublishOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Ad hoc (one-time) filtering option.</p>
     */
    inline const AdHocFilteringOption& GetAdHocFilteringOption() const{ return m_adHocFilteringOption; }
    inline bool AdHocFilteringOptionHasBeenSet() const { return m_adHocFilteringOptionHasBeenSet; }
    inline void SetAdHocFilteringOption(const AdHocFilteringOption& value) { m_adHocFilteringOptionHasBeenSet = true; m_adHocFilteringOption = value; }
    inline void SetAdHocFilteringOption(AdHocFilteringOption&& value) { m_adHocFilteringOptionHasBeenSet = true; m_adHocFilteringOption = std::move(value); }
    inline DashboardPublishOptions& WithAdHocFilteringOption(const AdHocFilteringOption& value) { SetAdHocFilteringOption(value); return *this;}
    inline DashboardPublishOptions& WithAdHocFilteringOption(AdHocFilteringOption&& value) { SetAdHocFilteringOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export to .csv option.</p>
     */
    inline const ExportToCSVOption& GetExportToCSVOption() const{ return m_exportToCSVOption; }
    inline bool ExportToCSVOptionHasBeenSet() const { return m_exportToCSVOptionHasBeenSet; }
    inline void SetExportToCSVOption(const ExportToCSVOption& value) { m_exportToCSVOptionHasBeenSet = true; m_exportToCSVOption = value; }
    inline void SetExportToCSVOption(ExportToCSVOption&& value) { m_exportToCSVOptionHasBeenSet = true; m_exportToCSVOption = std::move(value); }
    inline DashboardPublishOptions& WithExportToCSVOption(const ExportToCSVOption& value) { SetExportToCSVOption(value); return *this;}
    inline DashboardPublishOptions& WithExportToCSVOption(ExportToCSVOption&& value) { SetExportToCSVOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sheet controls option.</p>
     */
    inline const SheetControlsOption& GetSheetControlsOption() const{ return m_sheetControlsOption; }
    inline bool SheetControlsOptionHasBeenSet() const { return m_sheetControlsOptionHasBeenSet; }
    inline void SetSheetControlsOption(const SheetControlsOption& value) { m_sheetControlsOptionHasBeenSet = true; m_sheetControlsOption = value; }
    inline void SetSheetControlsOption(SheetControlsOption&& value) { m_sheetControlsOptionHasBeenSet = true; m_sheetControlsOption = std::move(value); }
    inline DashboardPublishOptions& WithSheetControlsOption(const SheetControlsOption& value) { SetSheetControlsOption(value); return *this;}
    inline DashboardPublishOptions& WithSheetControlsOption(SheetControlsOption&& value) { SetSheetControlsOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sheet layout maximization options of a dashbaord.</p>
     */
    inline const SheetLayoutElementMaximizationOption& GetSheetLayoutElementMaximizationOption() const{ return m_sheetLayoutElementMaximizationOption; }
    inline bool SheetLayoutElementMaximizationOptionHasBeenSet() const { return m_sheetLayoutElementMaximizationOptionHasBeenSet; }
    inline void SetSheetLayoutElementMaximizationOption(const SheetLayoutElementMaximizationOption& value) { m_sheetLayoutElementMaximizationOptionHasBeenSet = true; m_sheetLayoutElementMaximizationOption = value; }
    inline void SetSheetLayoutElementMaximizationOption(SheetLayoutElementMaximizationOption&& value) { m_sheetLayoutElementMaximizationOptionHasBeenSet = true; m_sheetLayoutElementMaximizationOption = std::move(value); }
    inline DashboardPublishOptions& WithSheetLayoutElementMaximizationOption(const SheetLayoutElementMaximizationOption& value) { SetSheetLayoutElementMaximizationOption(value); return *this;}
    inline DashboardPublishOptions& WithSheetLayoutElementMaximizationOption(SheetLayoutElementMaximizationOption&& value) { SetSheetLayoutElementMaximizationOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The menu options of a visual in a dashboard.</p>
     */
    inline const VisualMenuOption& GetVisualMenuOption() const{ return m_visualMenuOption; }
    inline bool VisualMenuOptionHasBeenSet() const { return m_visualMenuOptionHasBeenSet; }
    inline void SetVisualMenuOption(const VisualMenuOption& value) { m_visualMenuOptionHasBeenSet = true; m_visualMenuOption = value; }
    inline void SetVisualMenuOption(VisualMenuOption&& value) { m_visualMenuOptionHasBeenSet = true; m_visualMenuOption = std::move(value); }
    inline DashboardPublishOptions& WithVisualMenuOption(const VisualMenuOption& value) { SetVisualMenuOption(value); return *this;}
    inline DashboardPublishOptions& WithVisualMenuOption(VisualMenuOption&& value) { SetVisualMenuOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The axis sort options of a dashboard.</p>
     */
    inline const VisualAxisSortOption& GetVisualAxisSortOption() const{ return m_visualAxisSortOption; }
    inline bool VisualAxisSortOptionHasBeenSet() const { return m_visualAxisSortOptionHasBeenSet; }
    inline void SetVisualAxisSortOption(const VisualAxisSortOption& value) { m_visualAxisSortOptionHasBeenSet = true; m_visualAxisSortOption = value; }
    inline void SetVisualAxisSortOption(VisualAxisSortOption&& value) { m_visualAxisSortOptionHasBeenSet = true; m_visualAxisSortOption = std::move(value); }
    inline DashboardPublishOptions& WithVisualAxisSortOption(const VisualAxisSortOption& value) { SetVisualAxisSortOption(value); return *this;}
    inline DashboardPublishOptions& WithVisualAxisSortOption(VisualAxisSortOption&& value) { SetVisualAxisSortOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if hidden fields are exported with a dashboard.</p>
     */
    inline const ExportWithHiddenFieldsOption& GetExportWithHiddenFieldsOption() const{ return m_exportWithHiddenFieldsOption; }
    inline bool ExportWithHiddenFieldsOptionHasBeenSet() const { return m_exportWithHiddenFieldsOptionHasBeenSet; }
    inline void SetExportWithHiddenFieldsOption(const ExportWithHiddenFieldsOption& value) { m_exportWithHiddenFieldsOptionHasBeenSet = true; m_exportWithHiddenFieldsOption = value; }
    inline void SetExportWithHiddenFieldsOption(ExportWithHiddenFieldsOption&& value) { m_exportWithHiddenFieldsOptionHasBeenSet = true; m_exportWithHiddenFieldsOption = std::move(value); }
    inline DashboardPublishOptions& WithExportWithHiddenFieldsOption(const ExportWithHiddenFieldsOption& value) { SetExportWithHiddenFieldsOption(value); return *this;}
    inline DashboardPublishOptions& WithExportWithHiddenFieldsOption(ExportWithHiddenFieldsOption&& value) { SetExportWithHiddenFieldsOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The drill-down options of data points in a dashboard.</p>
     */
    inline const DataPointDrillUpDownOption& GetDataPointDrillUpDownOption() const{ return m_dataPointDrillUpDownOption; }
    inline bool DataPointDrillUpDownOptionHasBeenSet() const { return m_dataPointDrillUpDownOptionHasBeenSet; }
    inline void SetDataPointDrillUpDownOption(const DataPointDrillUpDownOption& value) { m_dataPointDrillUpDownOptionHasBeenSet = true; m_dataPointDrillUpDownOption = value; }
    inline void SetDataPointDrillUpDownOption(DataPointDrillUpDownOption&& value) { m_dataPointDrillUpDownOptionHasBeenSet = true; m_dataPointDrillUpDownOption = std::move(value); }
    inline DashboardPublishOptions& WithDataPointDrillUpDownOption(const DataPointDrillUpDownOption& value) { SetDataPointDrillUpDownOption(value); return *this;}
    inline DashboardPublishOptions& WithDataPointDrillUpDownOption(DataPointDrillUpDownOption&& value) { SetDataPointDrillUpDownOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data point menu label options of a dashboard.</p>
     */
    inline const DataPointMenuLabelOption& GetDataPointMenuLabelOption() const{ return m_dataPointMenuLabelOption; }
    inline bool DataPointMenuLabelOptionHasBeenSet() const { return m_dataPointMenuLabelOptionHasBeenSet; }
    inline void SetDataPointMenuLabelOption(const DataPointMenuLabelOption& value) { m_dataPointMenuLabelOptionHasBeenSet = true; m_dataPointMenuLabelOption = value; }
    inline void SetDataPointMenuLabelOption(DataPointMenuLabelOption&& value) { m_dataPointMenuLabelOptionHasBeenSet = true; m_dataPointMenuLabelOption = std::move(value); }
    inline DashboardPublishOptions& WithDataPointMenuLabelOption(const DataPointMenuLabelOption& value) { SetDataPointMenuLabelOption(value); return *this;}
    inline DashboardPublishOptions& WithDataPointMenuLabelOption(DataPointMenuLabelOption&& value) { SetDataPointMenuLabelOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data point tool tip options of a dashboard.</p>
     */
    inline const DataPointTooltipOption& GetDataPointTooltipOption() const{ return m_dataPointTooltipOption; }
    inline bool DataPointTooltipOptionHasBeenSet() const { return m_dataPointTooltipOptionHasBeenSet; }
    inline void SetDataPointTooltipOption(const DataPointTooltipOption& value) { m_dataPointTooltipOptionHasBeenSet = true; m_dataPointTooltipOption = value; }
    inline void SetDataPointTooltipOption(DataPointTooltipOption&& value) { m_dataPointTooltipOptionHasBeenSet = true; m_dataPointTooltipOption = std::move(value); }
    inline DashboardPublishOptions& WithDataPointTooltipOption(const DataPointTooltipOption& value) { SetDataPointTooltipOption(value); return *this;}
    inline DashboardPublishOptions& WithDataPointTooltipOption(DataPointTooltipOption&& value) { SetDataPointTooltipOption(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
