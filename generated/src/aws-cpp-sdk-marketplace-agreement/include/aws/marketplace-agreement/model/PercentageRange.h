/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>A range of price increase percentages that the proposer can choose from
 * before the adjustment deadline of the agreement.</p> <p> <code>MinValue</code>
 * will be less than <code>MaxValue</code>, and <code>DefaultValue</code> will fall
 * within the range. When the proposer authorizes a single percentage instead of a
 * range, <code>PriceIncrease</code> is a <code>FixedPercentage</code> rather than
 * a <code>PercentageRange</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/PercentageRange">AWS
 * API Reference</a></p>
 */
class PercentageRange {
 public:
  AWS_AGREEMENTSERVICE_API PercentageRange() = default;
  AWS_AGREEMENTSERVICE_API PercentageRange(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API PercentageRange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The lowest percentage that the proposer can choose, from <code>0.00</code> to
   * <code>100.00</code> with up to two decimal places.</p>
   */
  inline const Aws::String& GetMinValue() const { return m_minValue; }
  inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
  template <typename MinValueT = Aws::String>
  void SetMinValue(MinValueT&& value) {
    m_minValueHasBeenSet = true;
    m_minValue = std::forward<MinValueT>(value);
  }
  template <typename MinValueT = Aws::String>
  PercentageRange& WithMinValue(MinValueT&& value) {
    SetMinValue(std::forward<MinValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The highest percentage that the proposer can choose, from <code>0.00</code>
   * to <code>100.00</code> with up to two decimal places.</p>
   */
  inline const Aws::String& GetMaxValue() const { return m_maxValue; }
  inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
  template <typename MaxValueT = Aws::String>
  void SetMaxValue(MaxValueT&& value) {
    m_maxValueHasBeenSet = true;
    m_maxValue = std::forward<MaxValueT>(value);
  }
  template <typename MaxValueT = Aws::String>
  PercentageRange& WithMaxValue(MaxValueT&& value) {
    SetMaxValue(std::forward<MaxValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage that is applied if the proposer doesn't choose a value before
   * the adjustment deadline. Valid values range from <code>0.00</code> to
   * <code>100.00</code>, with up to two decimal places.</p>
   */
  inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  template <typename DefaultValueT = Aws::String>
  void SetDefaultValue(DefaultValueT&& value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = std::forward<DefaultValueT>(value);
  }
  template <typename DefaultValueT = Aws::String>
  PercentageRange& WithDefaultValue(DefaultValueT&& value) {
    SetDefaultValue(std::forward<DefaultValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_minValue;

  Aws::String m_maxValue;

  Aws::String m_defaultValue;
  bool m_minValueHasBeenSet = false;
  bool m_maxValueHasBeenSet = false;
  bool m_defaultValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
