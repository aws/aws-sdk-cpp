/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/NumericalAggregationFunction.h>
#include <aws/quicksight/model/NumberFormatConfiguration.h>
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
   * <p>The measure type field with numerical type columns.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NumericalMeasureField">AWS
   * API Reference</a></p>
   */
  class NumericalMeasureField
  {
  public:
    AWS_QUICKSIGHT_API NumericalMeasureField();
    AWS_QUICKSIGHT_API NumericalMeasureField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumericalMeasureField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The custom field ID.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>The custom field ID.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>The custom field ID.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>The custom field ID.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>The custom field ID.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>The custom field ID.</p>
     */
    inline NumericalMeasureField& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>The custom field ID.</p>
     */
    inline NumericalMeasureField& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>The custom field ID.</p>
     */
    inline NumericalMeasureField& WithFieldId(const char* value) { SetFieldId(value); return *this;}


    /**
     * <p>The column that is used in the <code>NumericalMeasureField</code>.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }

    /**
     * <p>The column that is used in the <code>NumericalMeasureField</code>.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column that is used in the <code>NumericalMeasureField</code>.</p>
     */
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column that is used in the <code>NumericalMeasureField</code>.</p>
     */
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>The column that is used in the <code>NumericalMeasureField</code>.</p>
     */
    inline NumericalMeasureField& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}

    /**
     * <p>The column that is used in the <code>NumericalMeasureField</code>.</p>
     */
    inline NumericalMeasureField& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}


    /**
     * <p>The aggregation function of the measure field.</p>
     */
    inline const NumericalAggregationFunction& GetAggregationFunction() const{ return m_aggregationFunction; }

    /**
     * <p>The aggregation function of the measure field.</p>
     */
    inline bool AggregationFunctionHasBeenSet() const { return m_aggregationFunctionHasBeenSet; }

    /**
     * <p>The aggregation function of the measure field.</p>
     */
    inline void SetAggregationFunction(const NumericalAggregationFunction& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = value; }

    /**
     * <p>The aggregation function of the measure field.</p>
     */
    inline void SetAggregationFunction(NumericalAggregationFunction&& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = std::move(value); }

    /**
     * <p>The aggregation function of the measure field.</p>
     */
    inline NumericalMeasureField& WithAggregationFunction(const NumericalAggregationFunction& value) { SetAggregationFunction(value); return *this;}

    /**
     * <p>The aggregation function of the measure field.</p>
     */
    inline NumericalMeasureField& WithAggregationFunction(NumericalAggregationFunction&& value) { SetAggregationFunction(std::move(value)); return *this;}


    /**
     * <p>The format configuration of the field.</p>
     */
    inline const NumberFormatConfiguration& GetFormatConfiguration() const{ return m_formatConfiguration; }

    /**
     * <p>The format configuration of the field.</p>
     */
    inline bool FormatConfigurationHasBeenSet() const { return m_formatConfigurationHasBeenSet; }

    /**
     * <p>The format configuration of the field.</p>
     */
    inline void SetFormatConfiguration(const NumberFormatConfiguration& value) { m_formatConfigurationHasBeenSet = true; m_formatConfiguration = value; }

    /**
     * <p>The format configuration of the field.</p>
     */
    inline void SetFormatConfiguration(NumberFormatConfiguration&& value) { m_formatConfigurationHasBeenSet = true; m_formatConfiguration = std::move(value); }

    /**
     * <p>The format configuration of the field.</p>
     */
    inline NumericalMeasureField& WithFormatConfiguration(const NumberFormatConfiguration& value) { SetFormatConfiguration(value); return *this;}

    /**
     * <p>The format configuration of the field.</p>
     */
    inline NumericalMeasureField& WithFormatConfiguration(NumberFormatConfiguration&& value) { SetFormatConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    NumericalAggregationFunction m_aggregationFunction;
    bool m_aggregationFunctionHasBeenSet = false;

    NumberFormatConfiguration m_formatConfiguration;
    bool m_formatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
