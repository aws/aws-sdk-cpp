/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/MonetaryValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralBenefits {
namespace Model {

/**
 * <p>Represents detailed information about a specific issuance of benefit
 * value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/IssuanceDetail">AWS
 * API Reference</a></p>
 */
class IssuanceDetail {
 public:
  AWS_PARTNERCENTRALBENEFITS_API IssuanceDetail() = default;
  AWS_PARTNERCENTRALBENEFITS_API IssuanceDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API IssuanceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for this specific issuance.</p>
   */
  inline const Aws::String& GetIssuanceId() const { return m_issuanceId; }
  inline bool IssuanceIdHasBeenSet() const { return m_issuanceIdHasBeenSet; }
  template <typename IssuanceIdT = Aws::String>
  void SetIssuanceId(IssuanceIdT&& value) {
    m_issuanceIdHasBeenSet = true;
    m_issuanceId = std::forward<IssuanceIdT>(value);
  }
  template <typename IssuanceIdT = Aws::String>
  IssuanceDetail& WithIssuanceId(IssuanceIdT&& value) {
    SetIssuanceId(std::forward<IssuanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The monetary amount or value that was issued in this specific issuance.</p>
   */
  inline const MonetaryValue& GetIssuanceAmount() const { return m_issuanceAmount; }
  inline bool IssuanceAmountHasBeenSet() const { return m_issuanceAmountHasBeenSet; }
  template <typename IssuanceAmountT = MonetaryValue>
  void SetIssuanceAmount(IssuanceAmountT&& value) {
    m_issuanceAmountHasBeenSet = true;
    m_issuanceAmount = std::forward<IssuanceAmountT>(value);
  }
  template <typename IssuanceAmountT = MonetaryValue>
  IssuanceDetail& WithIssuanceAmount(IssuanceAmountT&& value) {
    SetIssuanceAmount(std::forward<IssuanceAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this specific issuance was processed.</p>
   */
  inline const Aws::Utils::DateTime& GetIssuedAt() const { return m_issuedAt; }
  inline bool IssuedAtHasBeenSet() const { return m_issuedAtHasBeenSet; }
  template <typename IssuedAtT = Aws::Utils::DateTime>
  void SetIssuedAt(IssuedAtT&& value) {
    m_issuedAtHasBeenSet = true;
    m_issuedAt = std::forward<IssuedAtT>(value);
  }
  template <typename IssuedAtT = Aws::Utils::DateTime>
  IssuanceDetail& WithIssuedAt(IssuedAtT&& value) {
    SetIssuedAt(std::forward<IssuedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_issuanceId;
  bool m_issuanceIdHasBeenSet = false;

  MonetaryValue m_issuanceAmount;
  bool m_issuanceAmountHasBeenSet = false;

  Aws::Utils::DateTime m_issuedAt{};
  bool m_issuedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
