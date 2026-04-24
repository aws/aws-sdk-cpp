/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sustainability/Sustainability_EXPORTS.h>
#include <aws/sustainability/model/EmissionsUnit.h>

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
 * <p>Represents a carbon emissions quantity with its value and unit of
 * measurement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sustainability-2018-05-10/Emissions">AWS
 * API Reference</a></p>
 */
class Emissions {
 public:
  AWS_SUSTAINABILITY_API Emissions() = default;
  AWS_SUSTAINABILITY_API Emissions(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUSTAINABILITY_API Emissions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUSTAINABILITY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The numeric value of the emissions quantity.</p>
   */
  inline double GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(double value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline Emissions& WithValue(double value) {
    SetValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unit of measurement for the emissions value.</p>
   */
  inline EmissionsUnit GetUnit() const { return m_unit; }
  inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
  inline void SetUnit(EmissionsUnit value) {
    m_unitHasBeenSet = true;
    m_unit = value;
  }
  inline Emissions& WithUnit(EmissionsUnit value) {
    SetUnit(value);
    return *this;
  }
  ///@}
 private:
  double m_value{0.0};

  EmissionsUnit m_unit{EmissionsUnit::NOT_SET};
  bool m_valueHasBeenSet = false;
  bool m_unitHasBeenSet = false;
};

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
