/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SimpleAttributeAggregationFunction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Aggregation for attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AttributeAggregationFunction">AWS
   * API Reference</a></p>
   */
  class AttributeAggregationFunction
  {
  public:
    AWS_QUICKSIGHT_API AttributeAggregationFunction();
    AWS_QUICKSIGHT_API AttributeAggregationFunction(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AttributeAggregationFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The built-in aggregation functions for attributes.</p> <ul> <li> <p>
     * <code>UNIQUE_VALUE</code>: Returns the unique value for a field, aggregated by
     * the dimension fields.</p> </li> </ul>
     */
    inline const SimpleAttributeAggregationFunction& GetSimpleAttributeAggregation() const{ return m_simpleAttributeAggregation; }

    /**
     * <p>The built-in aggregation functions for attributes.</p> <ul> <li> <p>
     * <code>UNIQUE_VALUE</code>: Returns the unique value for a field, aggregated by
     * the dimension fields.</p> </li> </ul>
     */
    inline bool SimpleAttributeAggregationHasBeenSet() const { return m_simpleAttributeAggregationHasBeenSet; }

    /**
     * <p>The built-in aggregation functions for attributes.</p> <ul> <li> <p>
     * <code>UNIQUE_VALUE</code>: Returns the unique value for a field, aggregated by
     * the dimension fields.</p> </li> </ul>
     */
    inline void SetSimpleAttributeAggregation(const SimpleAttributeAggregationFunction& value) { m_simpleAttributeAggregationHasBeenSet = true; m_simpleAttributeAggregation = value; }

    /**
     * <p>The built-in aggregation functions for attributes.</p> <ul> <li> <p>
     * <code>UNIQUE_VALUE</code>: Returns the unique value for a field, aggregated by
     * the dimension fields.</p> </li> </ul>
     */
    inline void SetSimpleAttributeAggregation(SimpleAttributeAggregationFunction&& value) { m_simpleAttributeAggregationHasBeenSet = true; m_simpleAttributeAggregation = std::move(value); }

    /**
     * <p>The built-in aggregation functions for attributes.</p> <ul> <li> <p>
     * <code>UNIQUE_VALUE</code>: Returns the unique value for a field, aggregated by
     * the dimension fields.</p> </li> </ul>
     */
    inline AttributeAggregationFunction& WithSimpleAttributeAggregation(const SimpleAttributeAggregationFunction& value) { SetSimpleAttributeAggregation(value); return *this;}

    /**
     * <p>The built-in aggregation functions for attributes.</p> <ul> <li> <p>
     * <code>UNIQUE_VALUE</code>: Returns the unique value for a field, aggregated by
     * the dimension fields.</p> </li> </ul>
     */
    inline AttributeAggregationFunction& WithSimpleAttributeAggregation(SimpleAttributeAggregationFunction&& value) { SetSimpleAttributeAggregation(std::move(value)); return *this;}


    /**
     * <p>Used by the <code>UNIQUE_VALUE</code> aggregation function. If there are
     * multiple values for the field used by the aggregation, the value for this
     * property will be returned instead. Defaults to '*'.</p>
     */
    inline const Aws::String& GetValueForMultipleValues() const{ return m_valueForMultipleValues; }

    /**
     * <p>Used by the <code>UNIQUE_VALUE</code> aggregation function. If there are
     * multiple values for the field used by the aggregation, the value for this
     * property will be returned instead. Defaults to '*'.</p>
     */
    inline bool ValueForMultipleValuesHasBeenSet() const { return m_valueForMultipleValuesHasBeenSet; }

    /**
     * <p>Used by the <code>UNIQUE_VALUE</code> aggregation function. If there are
     * multiple values for the field used by the aggregation, the value for this
     * property will be returned instead. Defaults to '*'.</p>
     */
    inline void SetValueForMultipleValues(const Aws::String& value) { m_valueForMultipleValuesHasBeenSet = true; m_valueForMultipleValues = value; }

    /**
     * <p>Used by the <code>UNIQUE_VALUE</code> aggregation function. If there are
     * multiple values for the field used by the aggregation, the value for this
     * property will be returned instead. Defaults to '*'.</p>
     */
    inline void SetValueForMultipleValues(Aws::String&& value) { m_valueForMultipleValuesHasBeenSet = true; m_valueForMultipleValues = std::move(value); }

    /**
     * <p>Used by the <code>UNIQUE_VALUE</code> aggregation function. If there are
     * multiple values for the field used by the aggregation, the value for this
     * property will be returned instead. Defaults to '*'.</p>
     */
    inline void SetValueForMultipleValues(const char* value) { m_valueForMultipleValuesHasBeenSet = true; m_valueForMultipleValues.assign(value); }

    /**
     * <p>Used by the <code>UNIQUE_VALUE</code> aggregation function. If there are
     * multiple values for the field used by the aggregation, the value for this
     * property will be returned instead. Defaults to '*'.</p>
     */
    inline AttributeAggregationFunction& WithValueForMultipleValues(const Aws::String& value) { SetValueForMultipleValues(value); return *this;}

    /**
     * <p>Used by the <code>UNIQUE_VALUE</code> aggregation function. If there are
     * multiple values for the field used by the aggregation, the value for this
     * property will be returned instead. Defaults to '*'.</p>
     */
    inline AttributeAggregationFunction& WithValueForMultipleValues(Aws::String&& value) { SetValueForMultipleValues(std::move(value)); return *this;}

    /**
     * <p>Used by the <code>UNIQUE_VALUE</code> aggregation function. If there are
     * multiple values for the field used by the aggregation, the value for this
     * property will be returned instead. Defaults to '*'.</p>
     */
    inline AttributeAggregationFunction& WithValueForMultipleValues(const char* value) { SetValueForMultipleValues(value); return *this;}

  private:

    SimpleAttributeAggregationFunction m_simpleAttributeAggregation;
    bool m_simpleAttributeAggregationHasBeenSet = false;

    Aws::String m_valueForMultipleValues;
    bool m_valueForMultipleValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
