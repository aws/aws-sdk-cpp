﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AnalysisDefaults.h>
#include <aws/quicksight/model/AssetOptions.h>
#include <aws/quicksight/model/DataSetIdentifierDeclaration.h>
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
   * <p>The definition of an analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnalysisDefinition">AWS
   * API Reference</a></p>
   */
  class AnalysisDefinition
  {
  public:
    AWS_QUICKSIGHT_API AnalysisDefinition();
    AWS_QUICKSIGHT_API AnalysisDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AnalysisDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of dataset identifier declarations. This mapping allows the usage of
     * dataset identifiers instead of dataset ARNs throughout analysis
     * sub-structures.</p>
     */
    inline const Aws::Vector<DataSetIdentifierDeclaration>& GetDataSetIdentifierDeclarations() const{ return m_dataSetIdentifierDeclarations; }

    /**
     * <p>An array of dataset identifier declarations. This mapping allows the usage of
     * dataset identifiers instead of dataset ARNs throughout analysis
     * sub-structures.</p>
     */
    inline bool DataSetIdentifierDeclarationsHasBeenSet() const { return m_dataSetIdentifierDeclarationsHasBeenSet; }

    /**
     * <p>An array of dataset identifier declarations. This mapping allows the usage of
     * dataset identifiers instead of dataset ARNs throughout analysis
     * sub-structures.</p>
     */
    inline void SetDataSetIdentifierDeclarations(const Aws::Vector<DataSetIdentifierDeclaration>& value) { m_dataSetIdentifierDeclarationsHasBeenSet = true; m_dataSetIdentifierDeclarations = value; }

    /**
     * <p>An array of dataset identifier declarations. This mapping allows the usage of
     * dataset identifiers instead of dataset ARNs throughout analysis
     * sub-structures.</p>
     */
    inline void SetDataSetIdentifierDeclarations(Aws::Vector<DataSetIdentifierDeclaration>&& value) { m_dataSetIdentifierDeclarationsHasBeenSet = true; m_dataSetIdentifierDeclarations = std::move(value); }

    /**
     * <p>An array of dataset identifier declarations. This mapping allows the usage of
     * dataset identifiers instead of dataset ARNs throughout analysis
     * sub-structures.</p>
     */
    inline AnalysisDefinition& WithDataSetIdentifierDeclarations(const Aws::Vector<DataSetIdentifierDeclaration>& value) { SetDataSetIdentifierDeclarations(value); return *this;}

    /**
     * <p>An array of dataset identifier declarations. This mapping allows the usage of
     * dataset identifiers instead of dataset ARNs throughout analysis
     * sub-structures.</p>
     */
    inline AnalysisDefinition& WithDataSetIdentifierDeclarations(Aws::Vector<DataSetIdentifierDeclaration>&& value) { SetDataSetIdentifierDeclarations(std::move(value)); return *this;}

    /**
     * <p>An array of dataset identifier declarations. This mapping allows the usage of
     * dataset identifiers instead of dataset ARNs throughout analysis
     * sub-structures.</p>
     */
    inline AnalysisDefinition& AddDataSetIdentifierDeclarations(const DataSetIdentifierDeclaration& value) { m_dataSetIdentifierDeclarationsHasBeenSet = true; m_dataSetIdentifierDeclarations.push_back(value); return *this; }

    /**
     * <p>An array of dataset identifier declarations. This mapping allows the usage of
     * dataset identifiers instead of dataset ARNs throughout analysis
     * sub-structures.</p>
     */
    inline AnalysisDefinition& AddDataSetIdentifierDeclarations(DataSetIdentifierDeclaration&& value) { m_dataSetIdentifierDeclarationsHasBeenSet = true; m_dataSetIdentifierDeclarations.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of sheet definitions for an analysis. Each
     * <code>SheetDefinition</code> provides detailed information about a sheet within
     * this analysis.</p>
     */
    inline const Aws::Vector<SheetDefinition>& GetSheets() const{ return m_sheets; }

    /**
     * <p>An array of sheet definitions for an analysis. Each
     * <code>SheetDefinition</code> provides detailed information about a sheet within
     * this analysis.</p>
     */
    inline bool SheetsHasBeenSet() const { return m_sheetsHasBeenSet; }

    /**
     * <p>An array of sheet definitions for an analysis. Each
     * <code>SheetDefinition</code> provides detailed information about a sheet within
     * this analysis.</p>
     */
    inline void SetSheets(const Aws::Vector<SheetDefinition>& value) { m_sheetsHasBeenSet = true; m_sheets = value; }

    /**
     * <p>An array of sheet definitions for an analysis. Each
     * <code>SheetDefinition</code> provides detailed information about a sheet within
     * this analysis.</p>
     */
    inline void SetSheets(Aws::Vector<SheetDefinition>&& value) { m_sheetsHasBeenSet = true; m_sheets = std::move(value); }

    /**
     * <p>An array of sheet definitions for an analysis. Each
     * <code>SheetDefinition</code> provides detailed information about a sheet within
     * this analysis.</p>
     */
    inline AnalysisDefinition& WithSheets(const Aws::Vector<SheetDefinition>& value) { SetSheets(value); return *this;}

    /**
     * <p>An array of sheet definitions for an analysis. Each
     * <code>SheetDefinition</code> provides detailed information about a sheet within
     * this analysis.</p>
     */
    inline AnalysisDefinition& WithSheets(Aws::Vector<SheetDefinition>&& value) { SetSheets(std::move(value)); return *this;}

    /**
     * <p>An array of sheet definitions for an analysis. Each
     * <code>SheetDefinition</code> provides detailed information about a sheet within
     * this analysis.</p>
     */
    inline AnalysisDefinition& AddSheets(const SheetDefinition& value) { m_sheetsHasBeenSet = true; m_sheets.push_back(value); return *this; }

    /**
     * <p>An array of sheet definitions for an analysis. Each
     * <code>SheetDefinition</code> provides detailed information about a sheet within
     * this analysis.</p>
     */
    inline AnalysisDefinition& AddSheets(SheetDefinition&& value) { m_sheetsHasBeenSet = true; m_sheets.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of calculated field definitions for the analysis.</p>
     */
    inline const Aws::Vector<CalculatedField>& GetCalculatedFields() const{ return m_calculatedFields; }

    /**
     * <p>An array of calculated field definitions for the analysis.</p>
     */
    inline bool CalculatedFieldsHasBeenSet() const { return m_calculatedFieldsHasBeenSet; }

    /**
     * <p>An array of calculated field definitions for the analysis.</p>
     */
    inline void SetCalculatedFields(const Aws::Vector<CalculatedField>& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields = value; }

    /**
     * <p>An array of calculated field definitions for the analysis.</p>
     */
    inline void SetCalculatedFields(Aws::Vector<CalculatedField>&& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields = std::move(value); }

    /**
     * <p>An array of calculated field definitions for the analysis.</p>
     */
    inline AnalysisDefinition& WithCalculatedFields(const Aws::Vector<CalculatedField>& value) { SetCalculatedFields(value); return *this;}

    /**
     * <p>An array of calculated field definitions for the analysis.</p>
     */
    inline AnalysisDefinition& WithCalculatedFields(Aws::Vector<CalculatedField>&& value) { SetCalculatedFields(std::move(value)); return *this;}

    /**
     * <p>An array of calculated field definitions for the analysis.</p>
     */
    inline AnalysisDefinition& AddCalculatedFields(const CalculatedField& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields.push_back(value); return *this; }

    /**
     * <p>An array of calculated field definitions for the analysis.</p>
     */
    inline AnalysisDefinition& AddCalculatedFields(CalculatedField&& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of parameter declarations for an analysis.</p> <p>Parameters are
     * named variables that can transfer a value for use by an action or an object.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const Aws::Vector<ParameterDeclaration>& GetParameterDeclarations() const{ return m_parameterDeclarations; }

    /**
     * <p>An array of parameter declarations for an analysis.</p> <p>Parameters are
     * named variables that can transfer a value for use by an action or an object.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool ParameterDeclarationsHasBeenSet() const { return m_parameterDeclarationsHasBeenSet; }

    /**
     * <p>An array of parameter declarations for an analysis.</p> <p>Parameters are
     * named variables that can transfer a value for use by an action or an object.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetParameterDeclarations(const Aws::Vector<ParameterDeclaration>& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations = value; }

    /**
     * <p>An array of parameter declarations for an analysis.</p> <p>Parameters are
     * named variables that can transfer a value for use by an action or an object.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetParameterDeclarations(Aws::Vector<ParameterDeclaration>&& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations = std::move(value); }

    /**
     * <p>An array of parameter declarations for an analysis.</p> <p>Parameters are
     * named variables that can transfer a value for use by an action or an object.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline AnalysisDefinition& WithParameterDeclarations(const Aws::Vector<ParameterDeclaration>& value) { SetParameterDeclarations(value); return *this;}

    /**
     * <p>An array of parameter declarations for an analysis.</p> <p>Parameters are
     * named variables that can transfer a value for use by an action or an object.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline AnalysisDefinition& WithParameterDeclarations(Aws::Vector<ParameterDeclaration>&& value) { SetParameterDeclarations(std::move(value)); return *this;}

    /**
     * <p>An array of parameter declarations for an analysis.</p> <p>Parameters are
     * named variables that can transfer a value for use by an action or an object.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline AnalysisDefinition& AddParameterDeclarations(const ParameterDeclaration& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations.push_back(value); return *this; }

    /**
     * <p>An array of parameter declarations for an analysis.</p> <p>Parameters are
     * named variables that can transfer a value for use by an action or an object.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline AnalysisDefinition& AddParameterDeclarations(ParameterDeclaration&& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations.push_back(std::move(value)); return *this; }


    /**
     * <p>Filter definitions for an analysis.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const Aws::Vector<FilterGroup>& GetFilterGroups() const{ return m_filterGroups; }

    /**
     * <p>Filter definitions for an analysis.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool FilterGroupsHasBeenSet() const { return m_filterGroupsHasBeenSet; }

    /**
     * <p>Filter definitions for an analysis.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetFilterGroups(const Aws::Vector<FilterGroup>& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = value; }

    /**
     * <p>Filter definitions for an analysis.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetFilterGroups(Aws::Vector<FilterGroup>&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = std::move(value); }

    /**
     * <p>Filter definitions for an analysis.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline AnalysisDefinition& WithFilterGroups(const Aws::Vector<FilterGroup>& value) { SetFilterGroups(value); return *this;}

    /**
     * <p>Filter definitions for an analysis.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline AnalysisDefinition& WithFilterGroups(Aws::Vector<FilterGroup>&& value) { SetFilterGroups(std::move(value)); return *this;}

    /**
     * <p>Filter definitions for an analysis.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline AnalysisDefinition& AddFilterGroups(const FilterGroup& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(value); return *this; }

    /**
     * <p>Filter definitions for an analysis.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline AnalysisDefinition& AddFilterGroups(FilterGroup&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(std::move(value)); return *this; }


    /**
     * <p> An array of analysis-level column configurations. Column configurations can
     * be used to set default formatting for a column to be used throughout an
     * analysis. </p>
     */
    inline const Aws::Vector<ColumnConfiguration>& GetColumnConfigurations() const{ return m_columnConfigurations; }

    /**
     * <p> An array of analysis-level column configurations. Column configurations can
     * be used to set default formatting for a column to be used throughout an
     * analysis. </p>
     */
    inline bool ColumnConfigurationsHasBeenSet() const { return m_columnConfigurationsHasBeenSet; }

    /**
     * <p> An array of analysis-level column configurations. Column configurations can
     * be used to set default formatting for a column to be used throughout an
     * analysis. </p>
     */
    inline void SetColumnConfigurations(const Aws::Vector<ColumnConfiguration>& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations = value; }

    /**
     * <p> An array of analysis-level column configurations. Column configurations can
     * be used to set default formatting for a column to be used throughout an
     * analysis. </p>
     */
    inline void SetColumnConfigurations(Aws::Vector<ColumnConfiguration>&& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations = std::move(value); }

    /**
     * <p> An array of analysis-level column configurations. Column configurations can
     * be used to set default formatting for a column to be used throughout an
     * analysis. </p>
     */
    inline AnalysisDefinition& WithColumnConfigurations(const Aws::Vector<ColumnConfiguration>& value) { SetColumnConfigurations(value); return *this;}

    /**
     * <p> An array of analysis-level column configurations. Column configurations can
     * be used to set default formatting for a column to be used throughout an
     * analysis. </p>
     */
    inline AnalysisDefinition& WithColumnConfigurations(Aws::Vector<ColumnConfiguration>&& value) { SetColumnConfigurations(std::move(value)); return *this;}

    /**
     * <p> An array of analysis-level column configurations. Column configurations can
     * be used to set default formatting for a column to be used throughout an
     * analysis. </p>
     */
    inline AnalysisDefinition& AddColumnConfigurations(const ColumnConfiguration& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations.push_back(value); return *this; }

    /**
     * <p> An array of analysis-level column configurations. Column configurations can
     * be used to set default formatting for a column to be used throughout an
     * analysis. </p>
     */
    inline AnalysisDefinition& AddColumnConfigurations(ColumnConfiguration&& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations.push_back(std::move(value)); return *this; }


    
    inline const AnalysisDefaults& GetAnalysisDefaults() const{ return m_analysisDefaults; }

    
    inline bool AnalysisDefaultsHasBeenSet() const { return m_analysisDefaultsHasBeenSet; }

    
    inline void SetAnalysisDefaults(const AnalysisDefaults& value) { m_analysisDefaultsHasBeenSet = true; m_analysisDefaults = value; }

    
    inline void SetAnalysisDefaults(AnalysisDefaults&& value) { m_analysisDefaultsHasBeenSet = true; m_analysisDefaults = std::move(value); }

    
    inline AnalysisDefinition& WithAnalysisDefaults(const AnalysisDefaults& value) { SetAnalysisDefaults(value); return *this;}

    
    inline AnalysisDefinition& WithAnalysisDefaults(AnalysisDefaults&& value) { SetAnalysisDefaults(std::move(value)); return *this;}


    /**
     * <p>An array of option definitions for an analysis.</p>
     */
    inline const AssetOptions& GetOptions() const{ return m_options; }

    /**
     * <p>An array of option definitions for an analysis.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>An array of option definitions for an analysis.</p>
     */
    inline void SetOptions(const AssetOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>An array of option definitions for an analysis.</p>
     */
    inline void SetOptions(AssetOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>An array of option definitions for an analysis.</p>
     */
    inline AnalysisDefinition& WithOptions(const AssetOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>An array of option definitions for an analysis.</p>
     */
    inline AnalysisDefinition& WithOptions(AssetOptions&& value) { SetOptions(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
