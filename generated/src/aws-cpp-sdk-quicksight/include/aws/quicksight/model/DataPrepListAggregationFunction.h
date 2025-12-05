/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>An aggregation function that concatenates values from multiple rows into a
 * single string with a specified separator.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataPrepListAggregationFunction">AWS
 * API Reference</a></p>
 */
class DataPrepListAggregationFunction {
 public:
  AWS_QUICKSIGHT_API DataPrepListAggregationFunction() = default;
  AWS_QUICKSIGHT_API DataPrepListAggregationFunction(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataPrepListAggregationFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the column containing values to be concatenated.</p>
   */
  inline const Aws::String& GetInputColumnName() const { return m_inputColumnName; }
  inline bool InputColumnNameHasBeenSet() const { return m_inputColumnNameHasBeenSet; }
  template <typename InputColumnNameT = Aws::String>
  void SetInputColumnName(InputColumnNameT&& value) {
    m_inputColumnNameHasBeenSet = true;
    m_inputColumnName = std::forward<InputColumnNameT>(value);
  }
  template <typename InputColumnNameT = Aws::String>
  DataPrepListAggregationFunction& WithInputColumnName(InputColumnNameT&& value) {
    SetInputColumnName(std::forward<InputColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The string used to separate values in the concatenated result.</p>
   */
  inline const Aws::String& GetSeparator() const { return m_separator; }
  inline bool SeparatorHasBeenSet() const { return m_separatorHasBeenSet; }
  template <typename SeparatorT = Aws::String>
  void SetSeparator(SeparatorT&& value) {
    m_separatorHasBeenSet = true;
    m_separator = std::forward<SeparatorT>(value);
  }
  template <typename SeparatorT = Aws::String>
  DataPrepListAggregationFunction& WithSeparator(SeparatorT&& value) {
    SetSeparator(std::forward<SeparatorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to include only distinct values in the concatenated result, removing
   * duplicates.</p>
   */
  inline bool GetDistinct() const { return m_distinct; }
  inline bool DistinctHasBeenSet() const { return m_distinctHasBeenSet; }
  inline void SetDistinct(bool value) {
    m_distinctHasBeenSet = true;
    m_distinct = value;
  }
  inline DataPrepListAggregationFunction& WithDistinct(bool value) {
    SetDistinct(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_inputColumnName;

  Aws::String m_separator;

  bool m_distinct{false};
  bool m_inputColumnNameHasBeenSet = false;
  bool m_separatorHasBeenSet = false;
  bool m_distinctHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
