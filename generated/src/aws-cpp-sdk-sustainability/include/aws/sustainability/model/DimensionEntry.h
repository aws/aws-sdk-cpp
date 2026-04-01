/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>
#include <aws/sustainability/model/Dimension.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Sustainability {
namespace Model {

/**
 * <p>Represents a dimension and its corresponding value.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sustainability-2018-05-10/DimensionEntry">AWS
 * API Reference</a></p>
 */
class DimensionEntry {
 public:
  AWS_SUSTAINABILITY_API DimensionEntry() = default;
  AWS_SUSTAINABILITY_API DimensionEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUSTAINABILITY_API DimensionEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUSTAINABILITY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The dimension type that categorizes this entry.</p>
   */
  inline Dimension GetDimension() const { return m_dimension; }
  inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
  inline void SetDimension(Dimension value) {
    m_dimensionHasBeenSet = true;
    m_dimension = value;
  }
  inline DimensionEntry& WithDimension(Dimension value) {
    SetDimension(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The value for the specified dimension. Valid values vary based on the
   * dimension type (e.g., <code>us-east-1</code> for the <code>REGION</code>
   * dimension, <code>AmazonEC2</code> for the <code>SERVICE</code> dimension). </p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  DimensionEntry& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Dimension m_dimension{Dimension::NOT_SET};

  Aws::String m_value;
  bool m_dimensionHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
