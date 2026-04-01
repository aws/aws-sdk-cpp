/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Filters emission values by specific dimension values.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sustainability-2018-05-10/FilterExpression">AWS
 * API Reference</a></p>
 */
class FilterExpression {
 public:
  AWS_SUSTAINABILITY_API FilterExpression() = default;
  AWS_SUSTAINABILITY_API FilterExpression(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUSTAINABILITY_API FilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUSTAINABILITY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filters emission values by specific dimension values.</p>
   */
  inline const Aws::Map<Dimension, Aws::Vector<Aws::String>>& GetDimensions() const { return m_dimensions; }
  inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
  template <typename DimensionsT = Aws::Map<Dimension, Aws::Vector<Aws::String>>>
  void SetDimensions(DimensionsT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions = std::forward<DimensionsT>(value);
  }
  template <typename DimensionsT = Aws::Map<Dimension, Aws::Vector<Aws::String>>>
  FilterExpression& WithDimensions(DimensionsT&& value) {
    SetDimensions(std::forward<DimensionsT>(value));
    return *this;
  }
  inline FilterExpression& AddDimensions(Dimension key, Aws::Vector<Aws::String> value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::Map<Dimension, Aws::Vector<Aws::String>> m_dimensions;
  bool m_dimensionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
