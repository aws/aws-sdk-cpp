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
#include <aws/quicksight/model/DataSetConfiguration.h>
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
   * <p>The detailed definition of a template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TemplateVersionDefinition">AWS
   * API Reference</a></p>
   */
  class TemplateVersionDefinition
  {
  public:
    AWS_QUICKSIGHT_API TemplateVersionDefinition();
    AWS_QUICKSIGHT_API TemplateVersionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TemplateVersionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of dataset configurations. These configurations define the required
     * columns for each dataset used within a template.</p>
     */
    inline const Aws::Vector<DataSetConfiguration>& GetDataSetConfigurations() const{ return m_dataSetConfigurations; }
    inline bool DataSetConfigurationsHasBeenSet() const { return m_dataSetConfigurationsHasBeenSet; }
    inline void SetDataSetConfigurations(const Aws::Vector<DataSetConfiguration>& value) { m_dataSetConfigurationsHasBeenSet = true; m_dataSetConfigurations = value; }
    inline void SetDataSetConfigurations(Aws::Vector<DataSetConfiguration>&& value) { m_dataSetConfigurationsHasBeenSet = true; m_dataSetConfigurations = std::move(value); }
    inline TemplateVersionDefinition& WithDataSetConfigurations(const Aws::Vector<DataSetConfiguration>& value) { SetDataSetConfigurations(value); return *this;}
    inline TemplateVersionDefinition& WithDataSetConfigurations(Aws::Vector<DataSetConfiguration>&& value) { SetDataSetConfigurations(std::move(value)); return *this;}
    inline TemplateVersionDefinition& AddDataSetConfigurations(const DataSetConfiguration& value) { m_dataSetConfigurationsHasBeenSet = true; m_dataSetConfigurations.push_back(value); return *this; }
    inline TemplateVersionDefinition& AddDataSetConfigurations(DataSetConfiguration&& value) { m_dataSetConfigurationsHasBeenSet = true; m_dataSetConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of sheet definitions for a template.</p>
     */
    inline const Aws::Vector<SheetDefinition>& GetSheets() const{ return m_sheets; }
    inline bool SheetsHasBeenSet() const { return m_sheetsHasBeenSet; }
    inline void SetSheets(const Aws::Vector<SheetDefinition>& value) { m_sheetsHasBeenSet = true; m_sheets = value; }
    inline void SetSheets(Aws::Vector<SheetDefinition>&& value) { m_sheetsHasBeenSet = true; m_sheets = std::move(value); }
    inline TemplateVersionDefinition& WithSheets(const Aws::Vector<SheetDefinition>& value) { SetSheets(value); return *this;}
    inline TemplateVersionDefinition& WithSheets(Aws::Vector<SheetDefinition>&& value) { SetSheets(std::move(value)); return *this;}
    inline TemplateVersionDefinition& AddSheets(const SheetDefinition& value) { m_sheetsHasBeenSet = true; m_sheets.push_back(value); return *this; }
    inline TemplateVersionDefinition& AddSheets(SheetDefinition&& value) { m_sheetsHasBeenSet = true; m_sheets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of calculated field definitions for the template.</p>
     */
    inline const Aws::Vector<CalculatedField>& GetCalculatedFields() const{ return m_calculatedFields; }
    inline bool CalculatedFieldsHasBeenSet() const { return m_calculatedFieldsHasBeenSet; }
    inline void SetCalculatedFields(const Aws::Vector<CalculatedField>& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields = value; }
    inline void SetCalculatedFields(Aws::Vector<CalculatedField>&& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields = std::move(value); }
    inline TemplateVersionDefinition& WithCalculatedFields(const Aws::Vector<CalculatedField>& value) { SetCalculatedFields(value); return *this;}
    inline TemplateVersionDefinition& WithCalculatedFields(Aws::Vector<CalculatedField>&& value) { SetCalculatedFields(std::move(value)); return *this;}
    inline TemplateVersionDefinition& AddCalculatedFields(const CalculatedField& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields.push_back(value); return *this; }
    inline TemplateVersionDefinition& AddCalculatedFields(CalculatedField&& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of parameter declarations for a template.</p> <p> <i>Parameters</i>
     * are named variables that can transfer a value for use by an action or an
     * object.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline const Aws::Vector<ParameterDeclaration>& GetParameterDeclarations() const{ return m_parameterDeclarations; }
    inline bool ParameterDeclarationsHasBeenSet() const { return m_parameterDeclarationsHasBeenSet; }
    inline void SetParameterDeclarations(const Aws::Vector<ParameterDeclaration>& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations = value; }
    inline void SetParameterDeclarations(Aws::Vector<ParameterDeclaration>&& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations = std::move(value); }
    inline TemplateVersionDefinition& WithParameterDeclarations(const Aws::Vector<ParameterDeclaration>& value) { SetParameterDeclarations(value); return *this;}
    inline TemplateVersionDefinition& WithParameterDeclarations(Aws::Vector<ParameterDeclaration>&& value) { SetParameterDeclarations(std::move(value)); return *this;}
    inline TemplateVersionDefinition& AddParameterDeclarations(const ParameterDeclaration& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations.push_back(value); return *this; }
    inline TemplateVersionDefinition& AddParameterDeclarations(ParameterDeclaration&& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter definitions for a template.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filtering-visual-data.html">Filtering
     * Data</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline const Aws::Vector<FilterGroup>& GetFilterGroups() const{ return m_filterGroups; }
    inline bool FilterGroupsHasBeenSet() const { return m_filterGroupsHasBeenSet; }
    inline void SetFilterGroups(const Aws::Vector<FilterGroup>& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = value; }
    inline void SetFilterGroups(Aws::Vector<FilterGroup>&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = std::move(value); }
    inline TemplateVersionDefinition& WithFilterGroups(const Aws::Vector<FilterGroup>& value) { SetFilterGroups(value); return *this;}
    inline TemplateVersionDefinition& WithFilterGroups(Aws::Vector<FilterGroup>&& value) { SetFilterGroups(std::move(value)); return *this;}
    inline TemplateVersionDefinition& AddFilterGroups(const FilterGroup& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(value); return *this; }
    inline TemplateVersionDefinition& AddFilterGroups(FilterGroup&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of template-level column configurations. Column configurations are
     * used to set default formatting for a column that's used throughout a template.
     * </p>
     */
    inline const Aws::Vector<ColumnConfiguration>& GetColumnConfigurations() const{ return m_columnConfigurations; }
    inline bool ColumnConfigurationsHasBeenSet() const { return m_columnConfigurationsHasBeenSet; }
    inline void SetColumnConfigurations(const Aws::Vector<ColumnConfiguration>& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations = value; }
    inline void SetColumnConfigurations(Aws::Vector<ColumnConfiguration>&& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations = std::move(value); }
    inline TemplateVersionDefinition& WithColumnConfigurations(const Aws::Vector<ColumnConfiguration>& value) { SetColumnConfigurations(value); return *this;}
    inline TemplateVersionDefinition& WithColumnConfigurations(Aws::Vector<ColumnConfiguration>&& value) { SetColumnConfigurations(std::move(value)); return *this;}
    inline TemplateVersionDefinition& AddColumnConfigurations(const ColumnConfiguration& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations.push_back(value); return *this; }
    inline TemplateVersionDefinition& AddColumnConfigurations(ColumnConfiguration&& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const AnalysisDefaults& GetAnalysisDefaults() const{ return m_analysisDefaults; }
    inline bool AnalysisDefaultsHasBeenSet() const { return m_analysisDefaultsHasBeenSet; }
    inline void SetAnalysisDefaults(const AnalysisDefaults& value) { m_analysisDefaultsHasBeenSet = true; m_analysisDefaults = value; }
    inline void SetAnalysisDefaults(AnalysisDefaults&& value) { m_analysisDefaultsHasBeenSet = true; m_analysisDefaults = std::move(value); }
    inline TemplateVersionDefinition& WithAnalysisDefaults(const AnalysisDefaults& value) { SetAnalysisDefaults(value); return *this;}
    inline TemplateVersionDefinition& WithAnalysisDefaults(AnalysisDefaults&& value) { SetAnalysisDefaults(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of option definitions for a template.</p>
     */
    inline const AssetOptions& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const AssetOptions& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(AssetOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline TemplateVersionDefinition& WithOptions(const AssetOptions& value) { SetOptions(value); return *this;}
    inline TemplateVersionDefinition& WithOptions(AssetOptions&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const QueryExecutionOptions& GetQueryExecutionOptions() const{ return m_queryExecutionOptions; }
    inline bool QueryExecutionOptionsHasBeenSet() const { return m_queryExecutionOptionsHasBeenSet; }
    inline void SetQueryExecutionOptions(const QueryExecutionOptions& value) { m_queryExecutionOptionsHasBeenSet = true; m_queryExecutionOptions = value; }
    inline void SetQueryExecutionOptions(QueryExecutionOptions&& value) { m_queryExecutionOptionsHasBeenSet = true; m_queryExecutionOptions = std::move(value); }
    inline TemplateVersionDefinition& WithQueryExecutionOptions(const QueryExecutionOptions& value) { SetQueryExecutionOptions(value); return *this;}
    inline TemplateVersionDefinition& WithQueryExecutionOptions(QueryExecutionOptions&& value) { SetQueryExecutionOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The static files for the definition.</p>
     */
    inline const Aws::Vector<StaticFile>& GetStaticFiles() const{ return m_staticFiles; }
    inline bool StaticFilesHasBeenSet() const { return m_staticFilesHasBeenSet; }
    inline void SetStaticFiles(const Aws::Vector<StaticFile>& value) { m_staticFilesHasBeenSet = true; m_staticFiles = value; }
    inline void SetStaticFiles(Aws::Vector<StaticFile>&& value) { m_staticFilesHasBeenSet = true; m_staticFiles = std::move(value); }
    inline TemplateVersionDefinition& WithStaticFiles(const Aws::Vector<StaticFile>& value) { SetStaticFiles(value); return *this;}
    inline TemplateVersionDefinition& WithStaticFiles(Aws::Vector<StaticFile>&& value) { SetStaticFiles(std::move(value)); return *this;}
    inline TemplateVersionDefinition& AddStaticFiles(const StaticFile& value) { m_staticFilesHasBeenSet = true; m_staticFiles.push_back(value); return *this; }
    inline TemplateVersionDefinition& AddStaticFiles(StaticFile&& value) { m_staticFilesHasBeenSet = true; m_staticFiles.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DataSetConfiguration> m_dataSetConfigurations;
    bool m_dataSetConfigurationsHasBeenSet = false;

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
