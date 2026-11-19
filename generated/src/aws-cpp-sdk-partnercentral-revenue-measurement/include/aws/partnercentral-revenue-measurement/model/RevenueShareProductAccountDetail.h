/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>A typed account list returned by GetMarketplaceRevenueShare, with its count
 * and full list of IDs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/RevenueShareProductAccountDetail">AWS
 * API Reference</a></p>
 */
class RevenueShareProductAccountDetail {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueShareProductAccountDetail() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueShareProductAccountDetail(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueShareProductAccountDetail& operator=(
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
  inline RevenueShareProductAccountDetail& WithAccountType(RevenueShareProductAccountType value) {
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
  inline RevenueShareProductAccountDetail& WithCount(int64_t value) {
    SetCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The full list of AWS account identifiers of this type.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
  inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  void SetAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds = std::forward<AccountIdsT>(value);
  }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  RevenueShareProductAccountDetail& WithAccountIds(AccountIdsT&& value) {
    SetAccountIds(std::forward<AccountIdsT>(value));
    return *this;
  }
  template <typename AccountIdsT = Aws::String>
  RevenueShareProductAccountDetail& AddAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds.emplace_back(std::forward<AccountIdsT>(value));
    return *this;
  }
  ///@}
 private:
  RevenueShareProductAccountType m_accountType{RevenueShareProductAccountType::NOT_SET};

  int64_t m_count{0};

  Aws::Vector<Aws::String> m_accountIds;
  bool m_accountTypeHasBeenSet = false;
  bool m_countHasBeenSet = false;
  bool m_accountIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
