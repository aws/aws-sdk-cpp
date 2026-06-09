/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/QuoteConstraintType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {

/**
 * <p>A physical constraint for a quote.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/QuoteConstraint">AWS
 * API Reference</a></p>
 */
class QuoteConstraint {
 public:
  AWS_OUTPOSTS_API QuoteConstraint() = default;
  AWS_OUTPOSTS_API QuoteConstraint(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API QuoteConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of constraint. Valid values are <code>RACK_MAXIMUM</code>,
   * <code>RACK_MAX_POWER_KVA</code>, and <code>RACK_MAX_WEIGHT_LBS</code>.</p>
   */
  inline QuoteConstraintType GetQuoteConstraintType() const { return m_quoteConstraintType; }
  inline bool QuoteConstraintTypeHasBeenSet() const { return m_quoteConstraintTypeHasBeenSet; }
  inline void SetQuoteConstraintType(QuoteConstraintType value) {
    m_quoteConstraintTypeHasBeenSet = true;
    m_quoteConstraintType = value;
  }
  inline QuoteConstraint& WithQuoteConstraintType(QuoteConstraintType value) {
    SetQuoteConstraintType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the constraint.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  QuoteConstraint& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  QuoteConstraintType m_quoteConstraintType{QuoteConstraintType::NOT_SET};

  Aws::String m_value;
  bool m_quoteConstraintTypeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
