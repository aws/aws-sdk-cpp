/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TotalAggregationFunction.h>
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
   * <p>The total aggregation settings map of a field id.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TotalAggregationOption">AWS
   * API Reference</a></p>
   */
  class TotalAggregationOption
  {
  public:
    AWS_QUICKSIGHT_API TotalAggregationOption();
    AWS_QUICKSIGHT_API TotalAggregationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TotalAggregationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field id that's associated with the total aggregation option.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>The field id that's associated with the total aggregation option.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>The field id that's associated with the total aggregation option.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>The field id that's associated with the total aggregation option.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>The field id that's associated with the total aggregation option.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>The field id that's associated with the total aggregation option.</p>
     */
    inline TotalAggregationOption& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>The field id that's associated with the total aggregation option.</p>
     */
    inline TotalAggregationOption& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>The field id that's associated with the total aggregation option.</p>
     */
    inline TotalAggregationOption& WithFieldId(const char* value) { SetFieldId(value); return *this;}


    /**
     * <p>The total aggregation function that you want to set for a specified field
     * id.</p>
     */
    inline const TotalAggregationFunction& GetTotalAggregationFunction() const{ return m_totalAggregationFunction; }

    /**
     * <p>The total aggregation function that you want to set for a specified field
     * id.</p>
     */
    inline bool TotalAggregationFunctionHasBeenSet() const { return m_totalAggregationFunctionHasBeenSet; }

    /**
     * <p>The total aggregation function that you want to set for a specified field
     * id.</p>
     */
    inline void SetTotalAggregationFunction(const TotalAggregationFunction& value) { m_totalAggregationFunctionHasBeenSet = true; m_totalAggregationFunction = value; }

    /**
     * <p>The total aggregation function that you want to set for a specified field
     * id.</p>
     */
    inline void SetTotalAggregationFunction(TotalAggregationFunction&& value) { m_totalAggregationFunctionHasBeenSet = true; m_totalAggregationFunction = std::move(value); }

    /**
     * <p>The total aggregation function that you want to set for a specified field
     * id.</p>
     */
    inline TotalAggregationOption& WithTotalAggregationFunction(const TotalAggregationFunction& value) { SetTotalAggregationFunction(value); return *this;}

    /**
     * <p>The total aggregation function that you want to set for a specified field
     * id.</p>
     */
    inline TotalAggregationOption& WithTotalAggregationFunction(TotalAggregationFunction&& value) { SetTotalAggregationFunction(std::move(value)); return *this;}

  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    TotalAggregationFunction m_totalAggregationFunction;
    bool m_totalAggregationFunctionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
