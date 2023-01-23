/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AnalysisDefaults.h>
#include <aws/quicksight/model/DataSetConfiguration.h>
#include <aws/quicksight/model/SheetDefinition.h>
#include <aws/quicksight/model/CalculatedField.h>
#include <aws/quicksight/model/ParameterDeclaration.h>
#include <aws/quicksight/model/FilterGroup.h>
#include <aws/quicksight/model/ColumnConfiguration.h>
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


    /**
     * <p>An array of dataset configurations. These configurations define the required
     * columns for each dataset used within a template.</p>
     */
    inline const Aws::Vector<DataSetConfiguration>& GetDataSetConfigurations() const{ return m_dataSetConfigurations; }

    /**
     * <p>An array of dataset configurations. These configurations define the required
     * columns for each dataset used within a template.</p>
     */
    inline bool DataSetConfigurationsHasBeenSet() const { return m_dataSetConfigurationsHasBeenSet; }

    /**
     * <p>An array of dataset configurations. These configurations define the required
     * columns for each dataset used within a template.</p>
     */
    inline void SetDataSetConfigurations(const Aws::Vector<DataSetConfiguration>& value) { m_dataSetConfigurationsHasBeenSet = true; m_dataSetConfigurations = value; }

    /**
     * <p>An array of dataset configurations. These configurations define the required
     * columns for each dataset used within a template.</p>
     */
    inline void SetDataSetConfigurations(Aws::Vector<DataSetConfiguration>&& value) { m_dataSetConfigurationsHasBeenSet = true; m_dataSetConfigurations = std::move(value); }

    /**
     * <p>An array of dataset configurations. These configurations define the required
     * columns for each dataset used within a template.</p>
     */
    inline TemplateVersionDefinition& WithDataSetConfigurations(const Aws::Vector<DataSetConfiguration>& value) { SetDataSetConfigurations(value); return *this;}

    /**
     * <p>An array of dataset configurations. These configurations define the required
     * columns for each dataset used within a template.</p>
     */
    inline TemplateVersionDefinition& WithDataSetConfigurations(Aws::Vector<DataSetConfiguration>&& value) { SetDataSetConfigurations(std::move(value)); return *this;}

    /**
     * <p>An array of dataset configurations. These configurations define the required
     * columns for each dataset used within a template.</p>
     */
    inline TemplateVersionDefinition& AddDataSetConfigurations(const DataSetConfiguration& value) { m_dataSetConfigurationsHasBeenSet = true; m_dataSetConfigurations.push_back(value); return *this; }

    /**
     * <p>An array of dataset configurations. These configurations define the required
     * columns for each dataset used within a template.</p>
     */
    inline TemplateVersionDefinition& AddDataSetConfigurations(DataSetConfiguration&& value) { m_dataSetConfigurationsHasBeenSet = true; m_dataSetConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of sheet definitions for a template.</p>
     */
    inline const Aws::Vector<SheetDefinition>& GetSheets() const{ return m_sheets; }

    /**
     * <p>An array of sheet definitions for a template.</p>
     */
    inline bool SheetsHasBeenSet() const { return m_sheetsHasBeenSet; }

    /**
     * <p>An array of sheet definitions for a template.</p>
     */
    inline void SetSheets(const Aws::Vector<SheetDefinition>& value) { m_sheetsHasBeenSet = true; m_sheets = value; }

    /**
     * <p>An array of sheet definitions for a template.</p>
     */
    inline void SetSheets(Aws::Vector<SheetDefinition>&& value) { m_sheetsHasBeenSet = true; m_sheets = std::move(value); }

    /**
     * <p>An array of sheet definitions for a template.</p>
     */
    inline TemplateVersionDefinition& WithSheets(const Aws::Vector<SheetDefinition>& value) { SetSheets(value); return *this;}

    /**
     * <p>An array of sheet definitions for a template.</p>
     */
    inline TemplateVersionDefinition& WithSheets(Aws::Vector<SheetDefinition>&& value) { SetSheets(std::move(value)); return *this;}

    /**
     * <p>An array of sheet definitions for a template.</p>
     */
    inline TemplateVersionDefinition& AddSheets(const SheetDefinition& value) { m_sheetsHasBeenSet = true; m_sheets.push_back(value); return *this; }

    /**
     * <p>An array of sheet definitions for a template.</p>
     */
    inline TemplateVersionDefinition& AddSheets(SheetDefinition&& value) { m_sheetsHasBeenSet = true; m_sheets.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of calculated field definitions for the template.</p>
     */
    inline const Aws::Vector<CalculatedField>& GetCalculatedFields() const{ return m_calculatedFields; }

    /**
     * <p>An array of calculated field definitions for the template.</p>
     */
    inline bool CalculatedFieldsHasBeenSet() const { return m_calculatedFieldsHasBeenSet; }

    /**
     * <p>An array of calculated field definitions for the template.</p>
     */
    inline void SetCalculatedFields(const Aws::Vector<CalculatedField>& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields = value; }

    /**
     * <p>An array of calculated field definitions for the template.</p>
     */
    inline void SetCalculatedFields(Aws::Vector<CalculatedField>&& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields = std::move(value); }

    /**
     * <p>An array of calculated field definitions for the template.</p>
     */
    inline TemplateVersionDefinition& WithCalculatedFields(const Aws::Vector<CalculatedField>& value) { SetCalculatedFields(value); return *this;}

    /**
     * <p>An array of calculated field definitions for the template.</p>
     */
    inline TemplateVersionDefinition& WithCalculatedFields(Aws::Vector<CalculatedField>&& value) { SetCalculatedFields(std::move(value)); return *this;}

    /**
     * <p>An array of calculated field definitions for the template.</p>
     */
    inline TemplateVersionDefinition& AddCalculatedFields(const CalculatedField& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields.push_back(value); return *this; }

    /**
     * <p>An array of calculated field definitions for the template.</p>
     */
    inline TemplateVersionDefinition& AddCalculatedFields(CalculatedField&& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of parameter declarations for a template.</p> <p> <i>Parameters</i>
     * are named variables that can transfer a value for use by an action or an
     * object.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline const Aws::Vector<ParameterDeclaration>& GetParameterDeclarations() const{ return m_parameterDeclarations; }

    /**
     * <p>An array of parameter declarations for a template.</p> <p> <i>Parameters</i>
     * are named variables that can transfer a value for use by an action or an
     * object.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline bool ParameterDeclarationsHasBeenSet() const { return m_parameterDeclarationsHasBeenSet; }

    /**
     * <p>An array of parameter declarations for a template.</p> <p> <i>Parameters</i>
     * are named variables that can transfer a value for use by an action or an
     * object.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline void SetParameterDeclarations(const Aws::Vector<ParameterDeclaration>& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations = value; }

    /**
     * <p>An array of parameter declarations for a template.</p> <p> <i>Parameters</i>
     * are named variables that can transfer a value for use by an action or an
     * object.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline void SetParameterDeclarations(Aws::Vector<ParameterDeclaration>&& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations = std::move(value); }

    /**
     * <p>An array of parameter declarations for a template.</p> <p> <i>Parameters</i>
     * are named variables that can transfer a value for use by an action or an
     * object.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline TemplateVersionDefinition& WithParameterDeclarations(const Aws::Vector<ParameterDeclaration>& value) { SetParameterDeclarations(value); return *this;}

    /**
     * <p>An array of parameter declarations for a template.</p> <p> <i>Parameters</i>
     * are named variables that can transfer a value for use by an action or an
     * object.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline TemplateVersionDefinition& WithParameterDeclarations(Aws::Vector<ParameterDeclaration>&& value) { SetParameterDeclarations(std::move(value)); return *this;}

    /**
     * <p>An array of parameter declarations for a template.</p> <p> <i>Parameters</i>
     * are named variables that can transfer a value for use by an action or an
     * object.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline TemplateVersionDefinition& AddParameterDeclarations(const ParameterDeclaration& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations.push_back(value); return *this; }

    /**
     * <p>An array of parameter declarations for a template.</p> <p> <i>Parameters</i>
     * are named variables that can transfer a value for use by an action or an
     * object.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline TemplateVersionDefinition& AddParameterDeclarations(ParameterDeclaration&& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations.push_back(std::move(value)); return *this; }


    /**
     * <p>Filter definitions for a template.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filtering-visual-data.html">Filtering
     * Data</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline const Aws::Vector<FilterGroup>& GetFilterGroups() const{ return m_filterGroups; }

    /**
     * <p>Filter definitions for a template.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filtering-visual-data.html">Filtering
     * Data</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline bool FilterGroupsHasBeenSet() const { return m_filterGroupsHasBeenSet; }

    /**
     * <p>Filter definitions for a template.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filtering-visual-data.html">Filtering
     * Data</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline void SetFilterGroups(const Aws::Vector<FilterGroup>& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = value; }

    /**
     * <p>Filter definitions for a template.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filtering-visual-data.html">Filtering
     * Data</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline void SetFilterGroups(Aws::Vector<FilterGroup>&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = std::move(value); }

    /**
     * <p>Filter definitions for a template.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filtering-visual-data.html">Filtering
     * Data</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline TemplateVersionDefinition& WithFilterGroups(const Aws::Vector<FilterGroup>& value) { SetFilterGroups(value); return *this;}

    /**
     * <p>Filter definitions for a template.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filtering-visual-data.html">Filtering
     * Data</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline TemplateVersionDefinition& WithFilterGroups(Aws::Vector<FilterGroup>&& value) { SetFilterGroups(std::move(value)); return *this;}

    /**
     * <p>Filter definitions for a template.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filtering-visual-data.html">Filtering
     * Data</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline TemplateVersionDefinition& AddFilterGroups(const FilterGroup& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(value); return *this; }

    /**
     * <p>Filter definitions for a template.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filtering-visual-data.html">Filtering
     * Data</a> in the <i>Amazon QuickSight User Guide</i>. </p>
     */
    inline TemplateVersionDefinition& AddFilterGroups(FilterGroup&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(std::move(value)); return *this; }


    /**
     * <p> An array of template-level column configurations. Column configurations are
     * used to set default formatting for a column that's used throughout a template.
     * </p>
     */
    inline const Aws::Vector<ColumnConfiguration>& GetColumnConfigurations() const{ return m_columnConfigurations; }

    /**
     * <p> An array of template-level column configurations. Column configurations are
     * used to set default formatting for a column that's used throughout a template.
     * </p>
     */
    inline bool ColumnConfigurationsHasBeenSet() const { return m_columnConfigurationsHasBeenSet; }

    /**
     * <p> An array of template-level column configurations. Column configurations are
     * used to set default formatting for a column that's used throughout a template.
     * </p>
     */
    inline void SetColumnConfigurations(const Aws::Vector<ColumnConfiguration>& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations = value; }

    /**
     * <p> An array of template-level column configurations. Column configurations are
     * used to set default formatting for a column that's used throughout a template.
     * </p>
     */
    inline void SetColumnConfigurations(Aws::Vector<ColumnConfiguration>&& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations = std::move(value); }

    /**
     * <p> An array of template-level column configurations. Column configurations are
     * used to set default formatting for a column that's used throughout a template.
     * </p>
     */
    inline TemplateVersionDefinition& WithColumnConfigurations(const Aws::Vector<ColumnConfiguration>& value) { SetColumnConfigurations(value); return *this;}

    /**
     * <p> An array of template-level column configurations. Column configurations are
     * used to set default formatting for a column that's used throughout a template.
     * </p>
     */
    inline TemplateVersionDefinition& WithColumnConfigurations(Aws::Vector<ColumnConfiguration>&& value) { SetColumnConfigurations(std::move(value)); return *this;}

    /**
     * <p> An array of template-level column configurations. Column configurations are
     * used to set default formatting for a column that's used throughout a template.
     * </p>
     */
    inline TemplateVersionDefinition& AddColumnConfigurations(const ColumnConfiguration& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations.push_back(value); return *this; }

    /**
     * <p> An array of template-level column configurations. Column configurations are
     * used to set default formatting for a column that's used throughout a template.
     * </p>
     */
    inline TemplateVersionDefinition& AddColumnConfigurations(ColumnConfiguration&& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations.push_back(std::move(value)); return *this; }


    
    inline const AnalysisDefaults& GetAnalysisDefaults() const{ return m_analysisDefaults; }

    
    inline bool AnalysisDefaultsHasBeenSet() const { return m_analysisDefaultsHasBeenSet; }

    
    inline void SetAnalysisDefaults(const AnalysisDefaults& value) { m_analysisDefaultsHasBeenSet = true; m_analysisDefaults = value; }

    
    inline void SetAnalysisDefaults(AnalysisDefaults&& value) { m_analysisDefaultsHasBeenSet = true; m_analysisDefaults = std::move(value); }

    
    inline TemplateVersionDefinition& WithAnalysisDefaults(const AnalysisDefaults& value) { SetAnalysisDefaults(value); return *this;}

    
    inline TemplateVersionDefinition& WithAnalysisDefaults(AnalysisDefaults&& value) { SetAnalysisDefaults(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
