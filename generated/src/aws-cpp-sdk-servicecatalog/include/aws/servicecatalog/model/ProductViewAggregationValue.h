/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ServiceCatalog {
namespace Model {

/**
 * <p>A single product view aggregation value/count pair, containing metadata about
 * each product to which the calling user has access.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProductViewAggregationValue">AWS
 * API Reference</a></p>
 */
class ProductViewAggregationValue {
 public:
  AWS_SERVICECATALOG_API ProductViewAggregationValue() = default;
  AWS_SERVICECATALOG_API ProductViewAggregationValue(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICECATALOG_API ProductViewAggregationValue& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICECATALOG_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The value of the product view aggregation.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  ProductViewAggregationValue& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An approximate count of the products that match the value.</p>
   */
  inline int64_t GetApproximateCount() const { return m_approximateCount; }
  inline bool ApproximateCountHasBeenSet() const { return m_approximateCountHasBeenSet; }
  inline void SetApproximateCount(int64_t value) {
    m_approximateCountHasBeenSet = true;
    m_approximateCount = value;
  }
  inline ProductViewAggregationValue& WithApproximateCount(int64_t value) {
    SetApproximateCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;

  int64_t m_approximateCount{0};
  bool m_valueHasBeenSet = false;
  bool m_approximateCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace ServiceCatalog
}  // namespace Aws
