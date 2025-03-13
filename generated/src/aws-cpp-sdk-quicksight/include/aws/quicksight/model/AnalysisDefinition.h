/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AnalysisDefaults.h>
#include <aws/quicksight/model/AssetOptions.h>
#include <aws/quicksight/model/QueryExecutionOptions.h>
#include <aws/quicksight/model/DataSetIdentifierDeclaration.h>
#include <aws/quicksight/model/SheetDefinition.h>
#include <aws/quicksight/model/CalculatedField.h>
#include <aws/quicksight/model/ParameterDeclaration.h>
#include <aws/quicksight/model/FilterGroup.h>
#include <aws/quicksight/model/ColumnConfiguration.h>
#include <aws/quicksight/model/StaticFile.h>
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
   * <p>The definition of an analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnalysisDefinition">AWS
   * API Reference</a></p>
   */
  class AnalysisDefinition
  {
  public:
    AWS_QUICKSIGHT_API AnalysisDefinition() = default;
    AWS_QUICKSIGHT_API AnalysisDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AnalysisDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of dataset identifier declarations. This mapping allows the usage of
     * dataset identifiers instead of dataset ARNs throughout analysis
     * sub-structures.</p>
     */
    inline const Aws::Vector<DataSetIdentifierDeclaration>& GetDataSetIdentifierDeclarations() const { return m_dataSetIdentifierDeclarations; }
    inline bool DataSetIdentifierDeclarationsHasBeenSet() const { return m_dataSetIdentifierDeclarationsHasBeenSet; }
    template<typename DataSetIdentifierDeclarationsT = Aws::Vector<DataSetIdentifierDeclaration>>
    void SetDataSetIdentifierDeclarations(DataSetIdentifierDeclarationsT&& value) { m_dataSetIdentifierDeclarationsHasBeenSet = true; m_dataSetIdentifierDeclarations = std::forward<DataSetIdentifierDeclarationsT>(value); }
    template<typename DataSetIdentifierDeclarationsT = Aws::Vector<DataSetIdentifierDeclaration>>
    AnalysisDefinition& WithDataSetIdentifierDeclarations(DataSetIdentifierDeclarationsT&& value) { SetDataSetIdentifierDeclarations(std::forward<DataSetIdentifierDeclarationsT>(value)); return *this;}
    template<typename DataSetIdentifierDeclarationsT = DataSetIdentifierDeclaration>
    AnalysisDefinition& AddDataSetIdentifierDeclarations(DataSetIdentifierDeclarationsT&& value) { m_dataSetIdentifierDeclarationsHasBeenSet = true; m_dataSetIdentifierDeclarations.emplace_back(std::forward<DataSetIdentifierDeclarationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of sheet definitions for an analysis. Each
     * <code>SheetDefinition</code> provides detailed information about a sheet within
     * this analysis.</p>
     */
    inline const Aws::Vector<SheetDefinition>& GetSheets() const { return m_sheets; }
    inline bool SheetsHasBeenSet() const { return m_sheetsHasBeenSet; }
    template<typename SheetsT = Aws::Vector<SheetDefinition>>
    void SetSheets(SheetsT&& value) { m_sheetsHasBeenSet = true; m_sheets = std::forward<SheetsT>(value); }
    template<typename SheetsT = Aws::Vector<SheetDefinition>>
    AnalysisDefinition& WithSheets(SheetsT&& value) { SetSheets(std::forward<SheetsT>(value)); return *this;}
    template<typename SheetsT = SheetDefinition>
    AnalysisDefinition& AddSheets(SheetsT&& value) { m_sheetsHasBeenSet = true; m_sheets.emplace_back(std::forward<SheetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of calculated field definitions for the analysis.</p>
     */
    inline const Aws::Vector<CalculatedField>& GetCalculatedFields() const { return m_calculatedFields; }
    inline bool CalculatedFieldsHasBeenSet() const { return m_calculatedFieldsHasBeenSet; }
    template<typename CalculatedFieldsT = Aws::Vector<CalculatedField>>
    void SetCalculatedFields(CalculatedFieldsT&& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields = std::forward<CalculatedFieldsT>(value); }
    template<typename CalculatedFieldsT = Aws::Vector<CalculatedField>>
    AnalysisDefinition& WithCalculatedFields(CalculatedFieldsT&& value) { SetCalculatedFields(std::forward<CalculatedFieldsT>(value)); return *this;}
    template<typename CalculatedFieldsT = CalculatedField>
    AnalysisDefinition& AddCalculatedFields(CalculatedFieldsT&& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields.emplace_back(std::forward<CalculatedFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of parameter declarations for an analysis.</p> <p>Parameters are
     * named variables that can transfer a value for use by an action or an object.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const Aws::Vector<ParameterDeclaration>& GetParameterDeclarations() const { return m_parameterDeclarations; }
    inline bool ParameterDeclarationsHasBeenSet() const { return m_parameterDeclarationsHasBeenSet; }
    template<typename ParameterDeclarationsT = Aws::Vector<ParameterDeclaration>>
    void SetParameterDeclarations(ParameterDeclarationsT&& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations = std::forward<ParameterDeclarationsT>(value); }
    template<typename ParameterDeclarationsT = Aws::Vector<ParameterDeclaration>>
    AnalysisDefinition& WithParameterDeclarations(ParameterDeclarationsT&& value) { SetParameterDeclarations(std::forward<ParameterDeclarationsT>(value)); return *this;}
    template<typename ParameterDeclarationsT = ParameterDeclaration>
    AnalysisDefinition& AddParameterDeclarations(ParameterDeclarationsT&& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations.emplace_back(std::forward<ParameterDeclarationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter definitions for an analysis.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const Aws::Vector<FilterGroup>& GetFilterGroups() const { return m_filterGroups; }
    inline bool FilterGroupsHasBeenSet() const { return m_filterGroupsHasBeenSet; }
    template<typename FilterGroupsT = Aws::Vector<FilterGroup>>
    void SetFilterGroups(FilterGroupsT&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = std::forward<FilterGroupsT>(value); }
    template<typename FilterGroupsT = Aws::Vector<FilterGroup>>
    AnalysisDefinition& WithFilterGroups(FilterGroupsT&& value) { SetFilterGroups(std::forward<FilterGroupsT>(value)); return *this;}
    template<typename FilterGroupsT = FilterGroup>
    AnalysisDefinition& AddFilterGroups(FilterGroupsT&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.emplace_back(std::forward<FilterGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of analysis-level column configurations. Column configurations can
     * be used to set default formatting for a column to be used throughout an
     * analysis. </p>
     */
    inline const Aws::Vector<ColumnConfiguration>& GetColumnConfigurations() const { return m_columnConfigurations; }
    inline bool ColumnConfigurationsHasBeenSet() const { return m_columnConfigurationsHasBeenSet; }
    template<typename ColumnConfigurationsT = Aws::Vector<ColumnConfiguration>>
    void SetColumnConfigurations(ColumnConfigurationsT&& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations = std::forward<ColumnConfigurationsT>(value); }
    template<typename ColumnConfigurationsT = Aws::Vector<ColumnConfiguration>>
    AnalysisDefinition& WithColumnConfigurations(ColumnConfigurationsT&& value) { SetColumnConfigurations(std::forward<ColumnConfigurationsT>(value)); return *this;}
    template<typename ColumnConfigurationsT = ColumnConfiguration>
    AnalysisDefinition& AddColumnConfigurations(ColumnConfigurationsT&& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations.emplace_back(std::forward<ColumnConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const AnalysisDefaults& GetAnalysisDefaults() const { return m_analysisDefaults; }
    inline bool AnalysisDefaultsHasBeenSet() const { return m_analysisDefaultsHasBeenSet; }
    template<typename AnalysisDefaultsT = AnalysisDefaults>
    void SetAnalysisDefaults(AnalysisDefaultsT&& value) { m_analysisDefaultsHasBeenSet = true; m_analysisDefaults = std::forward<AnalysisDefaultsT>(value); }
    template<typename AnalysisDefaultsT = AnalysisDefaults>
    AnalysisDefinition& WithAnalysisDefaults(AnalysisDefaultsT&& value) { SetAnalysisDefaults(std::forward<AnalysisDefaultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of option definitions for an analysis.</p>
     */
    inline const AssetOptions& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = AssetOptions>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = AssetOptions>
    AnalysisDefinition& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const QueryExecutionOptions& GetQueryExecutionOptions() const { return m_queryExecutionOptions; }
    inline bool QueryExecutionOptionsHasBeenSet() const { return m_queryExecutionOptionsHasBeenSet; }
    template<typename QueryExecutionOptionsT = QueryExecutionOptions>
    void SetQueryExecutionOptions(QueryExecutionOptionsT&& value) { m_queryExecutionOptionsHasBeenSet = true; m_queryExecutionOptions = std::forward<QueryExecutionOptionsT>(value); }
    template<typename QueryExecutionOptionsT = QueryExecutionOptions>
    AnalysisDefinition& WithQueryExecutionOptions(QueryExecutionOptionsT&& value) { SetQueryExecutionOptions(std::forward<QueryExecutionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The static files for the definition.</p>
     */
    inline const Aws::Vector<StaticFile>& GetStaticFiles() const { return m_staticFiles; }
    inline bool StaticFilesHasBeenSet() const { return m_staticFilesHasBeenSet; }
    template<typename StaticFilesT = Aws::Vector<StaticFile>>
    void SetStaticFiles(StaticFilesT&& value) { m_staticFilesHasBeenSet = true; m_staticFiles = std::forward<StaticFilesT>(value); }
    template<typename StaticFilesT = Aws::Vector<StaticFile>>
    AnalysisDefinition& WithStaticFiles(StaticFilesT&& value) { SetStaticFiles(std::forward<StaticFilesT>(value)); return *this;}
    template<typename StaticFilesT = StaticFile>
    AnalysisDefinition& AddStaticFiles(StaticFilesT&& value) { m_staticFilesHasBeenSet = true; m_staticFiles.emplace_back(std::forward<StaticFilesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DataSetIdentifierDeclaration> m_dataSetIdentifierDeclarations;
    bool m_dataSetIdentifierDeclarationsHasBeenSet = false;

    Aws::Vector<SheetDefinition> m_sheets;
    bool m_sheetsHasBeenSet = false;

    Aws::Vector<CalculatedField> m_calculatedFields;
    bool m_calculatedFieldsHasBeenSet = false;

    Aws::Vector<ParameterDeclaration> m_parameterDeclarations;
    bool m_parameterDeclarationsHasBeenSet = false;

    Aws::Vector<FilterGroup> m_filterGroups;
    bool m_filterGroupsHasBeenSet = false;

    Aws::Vector<ColumnConfiguration> m_columnConfigurations;
    bool m_columnConfigurationsHasBeenSet = false;

    AnalysisDefaults m_analysisDefaults;
    bool m_analysisDefaultsHasBeenSet = false;

    AssetOptions m_options;
    bool m_optionsHasBeenSet = false;

    QueryExecutionOptions m_queryExecutionOptions;
    bool m_queryExecutionOptionsHasBeenSet = false;

    Aws::Vector<StaticFile> m_staticFiles;
    bool m_staticFilesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
