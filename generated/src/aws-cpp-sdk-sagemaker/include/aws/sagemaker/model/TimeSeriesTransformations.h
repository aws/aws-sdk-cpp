/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AggregationTransformationValue.h>
#include <aws/sagemaker/model/FillingType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Transformations allowed on the dataset. Supported transformations are
   * <code>Filling</code> and <code>Aggregation</code>. <code>Filling</code>
   * specifies how to add values to missing values in the dataset.
   * <code>Aggregation</code> defines how to aggregate data that does not align with
   * forecast frequency.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TimeSeriesTransformations">AWS
   * API Reference</a></p>
   */
  class TimeSeriesTransformations
  {
  public:
    AWS_SAGEMAKER_API TimeSeriesTransformations();
    AWS_SAGEMAKER_API TimeSeriesTransformations(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TimeSeriesTransformations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A key value pair defining the filling method for a column, where the key is
     * the column name and the value is an object which defines the filling logic. You
     * can specify multiple filling methods for a single column.</p> <p>The supported
     * filling methods and their corresponding options are:</p> <ul> <li> <p>
     * <code>frontfill</code>: <code>none</code> (Supported only for target column)</p>
     * </li> <li> <p> <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to the chosen filling method value (for example <code>"backfill" :
     * "value"</code>), and define the filling value in an additional parameter
     * prefixed with "_value". For example, to set <code>backfill</code> to a value of
     * <code>2</code>, you must include two parameters: <code>"backfill":
     * "value"</code> and <code>"backfill_value":"2"</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<FillingType, Aws::String>>& GetFilling() const{ return m_filling; }

    /**
     * <p>A key value pair defining the filling method for a column, where the key is
     * the column name and the value is an object which defines the filling logic. You
     * can specify multiple filling methods for a single column.</p> <p>The supported
     * filling methods and their corresponding options are:</p> <ul> <li> <p>
     * <code>frontfill</code>: <code>none</code> (Supported only for target column)</p>
     * </li> <li> <p> <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to the chosen filling method value (for example <code>"backfill" :
     * "value"</code>), and define the filling value in an additional parameter
     * prefixed with "_value". For example, to set <code>backfill</code> to a value of
     * <code>2</code>, you must include two parameters: <code>"backfill":
     * "value"</code> and <code>"backfill_value":"2"</code>.</p>
     */
    inline bool FillingHasBeenSet() const { return m_fillingHasBeenSet; }

    /**
     * <p>A key value pair defining the filling method for a column, where the key is
     * the column name and the value is an object which defines the filling logic. You
     * can specify multiple filling methods for a single column.</p> <p>The supported
     * filling methods and their corresponding options are:</p> <ul> <li> <p>
     * <code>frontfill</code>: <code>none</code> (Supported only for target column)</p>
     * </li> <li> <p> <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to the chosen filling method value (for example <code>"backfill" :
     * "value"</code>), and define the filling value in an additional parameter
     * prefixed with "_value". For example, to set <code>backfill</code> to a value of
     * <code>2</code>, you must include two parameters: <code>"backfill":
     * "value"</code> and <code>"backfill_value":"2"</code>.</p>
     */
    inline void SetFilling(const Aws::Map<Aws::String, Aws::Map<FillingType, Aws::String>>& value) { m_fillingHasBeenSet = true; m_filling = value; }

    /**
     * <p>A key value pair defining the filling method for a column, where the key is
     * the column name and the value is an object which defines the filling logic. You
     * can specify multiple filling methods for a single column.</p> <p>The supported
     * filling methods and their corresponding options are:</p> <ul> <li> <p>
     * <code>frontfill</code>: <code>none</code> (Supported only for target column)</p>
     * </li> <li> <p> <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to the chosen filling method value (for example <code>"backfill" :
     * "value"</code>), and define the filling value in an additional parameter
     * prefixed with "_value". For example, to set <code>backfill</code> to a value of
     * <code>2</code>, you must include two parameters: <code>"backfill":
     * "value"</code> and <code>"backfill_value":"2"</code>.</p>
     */
    inline void SetFilling(Aws::Map<Aws::String, Aws::Map<FillingType, Aws::String>>&& value) { m_fillingHasBeenSet = true; m_filling = std::move(value); }

    /**
     * <p>A key value pair defining the filling method for a column, where the key is
     * the column name and the value is an object which defines the filling logic. You
     * can specify multiple filling methods for a single column.</p> <p>The supported
     * filling methods and their corresponding options are:</p> <ul> <li> <p>
     * <code>frontfill</code>: <code>none</code> (Supported only for target column)</p>
     * </li> <li> <p> <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to the chosen filling method value (for example <code>"backfill" :
     * "value"</code>), and define the filling value in an additional parameter
     * prefixed with "_value". For example, to set <code>backfill</code> to a value of
     * <code>2</code>, you must include two parameters: <code>"backfill":
     * "value"</code> and <code>"backfill_value":"2"</code>.</p>
     */
    inline TimeSeriesTransformations& WithFilling(const Aws::Map<Aws::String, Aws::Map<FillingType, Aws::String>>& value) { SetFilling(value); return *this;}

    /**
     * <p>A key value pair defining the filling method for a column, where the key is
     * the column name and the value is an object which defines the filling logic. You
     * can specify multiple filling methods for a single column.</p> <p>The supported
     * filling methods and their corresponding options are:</p> <ul> <li> <p>
     * <code>frontfill</code>: <code>none</code> (Supported only for target column)</p>
     * </li> <li> <p> <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to the chosen filling method value (for example <code>"backfill" :
     * "value"</code>), and define the filling value in an additional parameter
     * prefixed with "_value". For example, to set <code>backfill</code> to a value of
     * <code>2</code>, you must include two parameters: <code>"backfill":
     * "value"</code> and <code>"backfill_value":"2"</code>.</p>
     */
    inline TimeSeriesTransformations& WithFilling(Aws::Map<Aws::String, Aws::Map<FillingType, Aws::String>>&& value) { SetFilling(std::move(value)); return *this;}

    /**
     * <p>A key value pair defining the filling method for a column, where the key is
     * the column name and the value is an object which defines the filling logic. You
     * can specify multiple filling methods for a single column.</p> <p>The supported
     * filling methods and their corresponding options are:</p> <ul> <li> <p>
     * <code>frontfill</code>: <code>none</code> (Supported only for target column)</p>
     * </li> <li> <p> <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to the chosen filling method value (for example <code>"backfill" :
     * "value"</code>), and define the filling value in an additional parameter
     * prefixed with "_value". For example, to set <code>backfill</code> to a value of
     * <code>2</code>, you must include two parameters: <code>"backfill":
     * "value"</code> and <code>"backfill_value":"2"</code>.</p>
     */
    inline TimeSeriesTransformations& AddFilling(const Aws::String& key, const Aws::Map<FillingType, Aws::String>& value) { m_fillingHasBeenSet = true; m_filling.emplace(key, value); return *this; }

    /**
     * <p>A key value pair defining the filling method for a column, where the key is
     * the column name and the value is an object which defines the filling logic. You
     * can specify multiple filling methods for a single column.</p> <p>The supported
     * filling methods and their corresponding options are:</p> <ul> <li> <p>
     * <code>frontfill</code>: <code>none</code> (Supported only for target column)</p>
     * </li> <li> <p> <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to the chosen filling method value (for example <code>"backfill" :
     * "value"</code>), and define the filling value in an additional parameter
     * prefixed with "_value". For example, to set <code>backfill</code> to a value of
     * <code>2</code>, you must include two parameters: <code>"backfill":
     * "value"</code> and <code>"backfill_value":"2"</code>.</p>
     */
    inline TimeSeriesTransformations& AddFilling(Aws::String&& key, const Aws::Map<FillingType, Aws::String>& value) { m_fillingHasBeenSet = true; m_filling.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key value pair defining the filling method for a column, where the key is
     * the column name and the value is an object which defines the filling logic. You
     * can specify multiple filling methods for a single column.</p> <p>The supported
     * filling methods and their corresponding options are:</p> <ul> <li> <p>
     * <code>frontfill</code>: <code>none</code> (Supported only for target column)</p>
     * </li> <li> <p> <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to the chosen filling method value (for example <code>"backfill" :
     * "value"</code>), and define the filling value in an additional parameter
     * prefixed with "_value". For example, to set <code>backfill</code> to a value of
     * <code>2</code>, you must include two parameters: <code>"backfill":
     * "value"</code> and <code>"backfill_value":"2"</code>.</p>
     */
    inline TimeSeriesTransformations& AddFilling(const Aws::String& key, Aws::Map<FillingType, Aws::String>&& value) { m_fillingHasBeenSet = true; m_filling.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key value pair defining the filling method for a column, where the key is
     * the column name and the value is an object which defines the filling logic. You
     * can specify multiple filling methods for a single column.</p> <p>The supported
     * filling methods and their corresponding options are:</p> <ul> <li> <p>
     * <code>frontfill</code>: <code>none</code> (Supported only for target column)</p>
     * </li> <li> <p> <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to the chosen filling method value (for example <code>"backfill" :
     * "value"</code>), and define the filling value in an additional parameter
     * prefixed with "_value". For example, to set <code>backfill</code> to a value of
     * <code>2</code>, you must include two parameters: <code>"backfill":
     * "value"</code> and <code>"backfill_value":"2"</code>.</p>
     */
    inline TimeSeriesTransformations& AddFilling(Aws::String&& key, Aws::Map<FillingType, Aws::String>&& value) { m_fillingHasBeenSet = true; m_filling.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key value pair defining the filling method for a column, where the key is
     * the column name and the value is an object which defines the filling logic. You
     * can specify multiple filling methods for a single column.</p> <p>The supported
     * filling methods and their corresponding options are:</p> <ul> <li> <p>
     * <code>frontfill</code>: <code>none</code> (Supported only for target column)</p>
     * </li> <li> <p> <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to the chosen filling method value (for example <code>"backfill" :
     * "value"</code>), and define the filling value in an additional parameter
     * prefixed with "_value". For example, to set <code>backfill</code> to a value of
     * <code>2</code>, you must include two parameters: <code>"backfill":
     * "value"</code> and <code>"backfill_value":"2"</code>.</p>
     */
    inline TimeSeriesTransformations& AddFilling(const char* key, Aws::Map<FillingType, Aws::String>&& value) { m_fillingHasBeenSet = true; m_filling.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key value pair defining the filling method for a column, where the key is
     * the column name and the value is an object which defines the filling logic. You
     * can specify multiple filling methods for a single column.</p> <p>The supported
     * filling methods and their corresponding options are:</p> <ul> <li> <p>
     * <code>frontfill</code>: <code>none</code> (Supported only for target column)</p>
     * </li> <li> <p> <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to the chosen filling method value (for example <code>"backfill" :
     * "value"</code>), and define the filling value in an additional parameter
     * prefixed with "_value". For example, to set <code>backfill</code> to a value of
     * <code>2</code>, you must include two parameters: <code>"backfill":
     * "value"</code> and <code>"backfill_value":"2"</code>.</p>
     */
    inline TimeSeriesTransformations& AddFilling(const char* key, const Aws::Map<FillingType, Aws::String>& value) { m_fillingHasBeenSet = true; m_filling.emplace(key, value); return *this; }


    /**
     * <p>A key value pair defining the aggregation method for a column, where the key
     * is the column name and the value is the aggregation method.</p> <p>The supported
     * aggregation methods are <code>sum</code> (default), <code>avg</code>,
     * <code>first</code>, <code>min</code>, <code>max</code>.</p> 
     * <p>Aggregation is only supported for the target column.</p> 
     */
    inline const Aws::Map<Aws::String, AggregationTransformationValue>& GetAggregation() const{ return m_aggregation; }

    /**
     * <p>A key value pair defining the aggregation method for a column, where the key
     * is the column name and the value is the aggregation method.</p> <p>The supported
     * aggregation methods are <code>sum</code> (default), <code>avg</code>,
     * <code>first</code>, <code>min</code>, <code>max</code>.</p> 
     * <p>Aggregation is only supported for the target column.</p> 
     */
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }

    /**
     * <p>A key value pair defining the aggregation method for a column, where the key
     * is the column name and the value is the aggregation method.</p> <p>The supported
     * aggregation methods are <code>sum</code> (default), <code>avg</code>,
     * <code>first</code>, <code>min</code>, <code>max</code>.</p> 
     * <p>Aggregation is only supported for the target column.</p> 
     */
    inline void SetAggregation(const Aws::Map<Aws::String, AggregationTransformationValue>& value) { m_aggregationHasBeenSet = true; m_aggregation = value; }

    /**
     * <p>A key value pair defining the aggregation method for a column, where the key
     * is the column name and the value is the aggregation method.</p> <p>The supported
     * aggregation methods are <code>sum</code> (default), <code>avg</code>,
     * <code>first</code>, <code>min</code>, <code>max</code>.</p> 
     * <p>Aggregation is only supported for the target column.</p> 
     */
    inline void SetAggregation(Aws::Map<Aws::String, AggregationTransformationValue>&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::move(value); }

    /**
     * <p>A key value pair defining the aggregation method for a column, where the key
     * is the column name and the value is the aggregation method.</p> <p>The supported
     * aggregation methods are <code>sum</code> (default), <code>avg</code>,
     * <code>first</code>, <code>min</code>, <code>max</code>.</p> 
     * <p>Aggregation is only supported for the target column.</p> 
     */
    inline TimeSeriesTransformations& WithAggregation(const Aws::Map<Aws::String, AggregationTransformationValue>& value) { SetAggregation(value); return *this;}

    /**
     * <p>A key value pair defining the aggregation method for a column, where the key
     * is the column name and the value is the aggregation method.</p> <p>The supported
     * aggregation methods are <code>sum</code> (default), <code>avg</code>,
     * <code>first</code>, <code>min</code>, <code>max</code>.</p> 
     * <p>Aggregation is only supported for the target column.</p> 
     */
    inline TimeSeriesTransformations& WithAggregation(Aws::Map<Aws::String, AggregationTransformationValue>&& value) { SetAggregation(std::move(value)); return *this;}

    /**
     * <p>A key value pair defining the aggregation method for a column, where the key
     * is the column name and the value is the aggregation method.</p> <p>The supported
     * aggregation methods are <code>sum</code> (default), <code>avg</code>,
     * <code>first</code>, <code>min</code>, <code>max</code>.</p> 
     * <p>Aggregation is only supported for the target column.</p> 
     */
    inline TimeSeriesTransformations& AddAggregation(const Aws::String& key, const AggregationTransformationValue& value) { m_aggregationHasBeenSet = true; m_aggregation.emplace(key, value); return *this; }

    /**
     * <p>A key value pair defining the aggregation method for a column, where the key
     * is the column name and the value is the aggregation method.</p> <p>The supported
     * aggregation methods are <code>sum</code> (default), <code>avg</code>,
     * <code>first</code>, <code>min</code>, <code>max</code>.</p> 
     * <p>Aggregation is only supported for the target column.</p> 
     */
    inline TimeSeriesTransformations& AddAggregation(Aws::String&& key, const AggregationTransformationValue& value) { m_aggregationHasBeenSet = true; m_aggregation.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key value pair defining the aggregation method for a column, where the key
     * is the column name and the value is the aggregation method.</p> <p>The supported
     * aggregation methods are <code>sum</code> (default), <code>avg</code>,
     * <code>first</code>, <code>min</code>, <code>max</code>.</p> 
     * <p>Aggregation is only supported for the target column.</p> 
     */
    inline TimeSeriesTransformations& AddAggregation(const Aws::String& key, AggregationTransformationValue&& value) { m_aggregationHasBeenSet = true; m_aggregation.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key value pair defining the aggregation method for a column, where the key
     * is the column name and the value is the aggregation method.</p> <p>The supported
     * aggregation methods are <code>sum</code> (default), <code>avg</code>,
     * <code>first</code>, <code>min</code>, <code>max</code>.</p> 
     * <p>Aggregation is only supported for the target column.</p> 
     */
    inline TimeSeriesTransformations& AddAggregation(Aws::String&& key, AggregationTransformationValue&& value) { m_aggregationHasBeenSet = true; m_aggregation.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key value pair defining the aggregation method for a column, where the key
     * is the column name and the value is the aggregation method.</p> <p>The supported
     * aggregation methods are <code>sum</code> (default), <code>avg</code>,
     * <code>first</code>, <code>min</code>, <code>max</code>.</p> 
     * <p>Aggregation is only supported for the target column.</p> 
     */
    inline TimeSeriesTransformations& AddAggregation(const char* key, AggregationTransformationValue&& value) { m_aggregationHasBeenSet = true; m_aggregation.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key value pair defining the aggregation method for a column, where the key
     * is the column name and the value is the aggregation method.</p> <p>The supported
     * aggregation methods are <code>sum</code> (default), <code>avg</code>,
     * <code>first</code>, <code>min</code>, <code>max</code>.</p> 
     * <p>Aggregation is only supported for the target column.</p> 
     */
    inline TimeSeriesTransformations& AddAggregation(const char* key, const AggregationTransformationValue& value) { m_aggregationHasBeenSet = true; m_aggregation.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::Map<FillingType, Aws::String>> m_filling;
    bool m_fillingHasBeenSet = false;

    Aws::Map<Aws::String, AggregationTransformationValue> m_aggregation;
    bool m_aggregationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
