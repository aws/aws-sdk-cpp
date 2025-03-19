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
    AWS_QUICKSIGHT_API TotalAggregationOption() = default;
    AWS_QUICKSIGHT_API TotalAggregationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TotalAggregationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field id that's associated with the total aggregation option.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    TotalAggregationOption& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total aggregation function that you want to set for a specified field
     * id.</p>
     */
    inline const TotalAggregationFunction& GetTotalAggregationFunction() const { return m_totalAggregationFunction; }
    inline bool TotalAggregationFunctionHasBeenSet() const { return m_totalAggregationFunctionHasBeenSet; }
    template<typename TotalAggregationFunctionT = TotalAggregationFunction>
    void SetTotalAggregationFunction(TotalAggregationFunctionT&& value) { m_totalAggregationFunctionHasBeenSet = true; m_totalAggregationFunction = std::forward<TotalAggregationFunctionT>(value); }
    template<typename TotalAggregationFunctionT = TotalAggregationFunction>
    TotalAggregationOption& WithTotalAggregationFunction(TotalAggregationFunctionT&& value) { SetTotalAggregationFunction(std::forward<TotalAggregationFunctionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    TotalAggregationFunction m_totalAggregationFunction;
    bool m_totalAggregationFunctionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
