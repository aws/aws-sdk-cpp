/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueShareProductAccountType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralRevenueMeasurement {
namespace Model {

/**
 * <p>A per-type count of accounts associated with a product.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/RevenueShareProductAccountSummary">AWS
 * API Reference</a></p>
 */
class RevenueShareProductAccountSummary {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueShareProductAccountSummary() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueShareProductAccountSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueShareProductAccountSummary& operator=(
      const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The type of account list.</p>
   */
  inline RevenueShareProductAccountType GetAccountType() const { return m_accountType; }
  inline bool AccountTypeHasBeenSet() const { return m_accountTypeHasBeenSet; }
  inline void SetAccountType(RevenueShareProductAccountType value) {
    m_accountTypeHasBeenSet = true;
    m_accountType = value;
  }
  inline RevenueShareProductAccountSummary& WithAccountType(RevenueShareProductAccountType value) {
    SetAccountType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of accounts of this type.</p>
   */
  inline int64_t GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(int64_t value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline RevenueShareProductAccountSummary& WithCount(int64_t value) {
    SetCount(value);
    return *this;
  }
  ///@}
 private:
  RevenueShareProductAccountType m_accountType{RevenueShareProductAccountType::NOT_SET};

  int64_t m_count{0};
  bool m_accountTypeHasBeenSet = false;
  bool m_countHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
