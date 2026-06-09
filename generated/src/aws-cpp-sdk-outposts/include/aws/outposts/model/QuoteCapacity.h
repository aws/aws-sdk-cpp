/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/QuoteCapacityType.h>

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
 * <p>A capacity requirement for a quote. Specifies the type of capacity, the unit,
 * and the quantity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/QuoteCapacity">AWS
 * API Reference</a></p>
 */
class QuoteCapacity {
 public:
  AWS_OUTPOSTS_API QuoteCapacity() = default;
  AWS_OUTPOSTS_API QuoteCapacity(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API QuoteCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of capacity. Valid values are <code>EC2</code>, <code>EBS</code>,
   * and <code>S3</code>.</p>
   */
  inline QuoteCapacityType GetQuoteCapacityType() const { return m_quoteCapacityType; }
  inline bool QuoteCapacityTypeHasBeenSet() const { return m_quoteCapacityTypeHasBeenSet; }
  inline void SetQuoteCapacityType(QuoteCapacityType value) {
    m_quoteCapacityTypeHasBeenSet = true;
    m_quoteCapacityType = value;
  }
  inline QuoteCapacity& WithQuoteCapacityType(QuoteCapacityType value) {
    SetQuoteCapacityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unit of measurement for the capacity. For Amazon EC2, this is the
   * instance type (for example, <code>c5.24xlarge</code>). For Amazon EBS and Amazon
   * S3, this is the storage unit (for example, <code>TiB</code> for tebibytes).</p>
   */
  inline const Aws::String& GetUnit() const { return m_unit; }
  inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
  template <typename UnitT = Aws::String>
  void SetUnit(UnitT&& value) {
    m_unitHasBeenSet = true;
    m_unit = std::forward<UnitT>(value);
  }
  template <typename UnitT = Aws::String>
  QuoteCapacity& WithUnit(UnitT&& value) {
    SetUnit(std::forward<UnitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The quantity of the specified capacity unit. For Amazon EC2, this is the
   * number of additional instances to add to the Outpost. For Amazon EBS and Amazon
   * S3, this is the total desired end-state capacity of the Outpost.</p>
   */
  inline double GetQuantity() const { return m_quantity; }
  inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
  inline void SetQuantity(double value) {
    m_quantityHasBeenSet = true;
    m_quantity = value;
  }
  inline QuoteCapacity& WithQuantity(double value) {
    SetQuantity(value);
    return *this;
  }
  ///@}
 private:
  QuoteCapacityType m_quoteCapacityType{QuoteCapacityType::NOT_SET};

  Aws::String m_unit;

  double m_quantity{0.0};
  bool m_quoteCapacityTypeHasBeenSet = false;
  bool m_unitHasBeenSet = false;
  bool m_quantityHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
