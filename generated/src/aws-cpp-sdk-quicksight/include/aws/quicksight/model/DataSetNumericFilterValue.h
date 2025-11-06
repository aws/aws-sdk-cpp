/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>Represents a numeric value used in filter conditions.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetNumericFilterValue">AWS
 * API Reference</a></p>
 */
class DataSetNumericFilterValue {
 public:
  AWS_QUICKSIGHT_API DataSetNumericFilterValue() = default;
  AWS_QUICKSIGHT_API DataSetNumericFilterValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataSetNumericFilterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A static numeric value used for filtering.</p>
   */
  inline double GetStaticValue() const { return m_staticValue; }
  inline bool StaticValueHasBeenSet() const { return m_staticValueHasBeenSet; }
  inline void SetStaticValue(double value) {
    m_staticValueHasBeenSet = true;
    m_staticValue = value;
  }
  inline DataSetNumericFilterValue& WithStaticValue(double value) {
    SetStaticValue(value);
    return *this;
  }
  ///@}
 private:
  double m_staticValue{0.0};
  bool m_staticValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
