/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/FixedPercentage.h>
#include <aws/marketplace-agreement/model/PercentageRange.h>

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
 * <p>The price increase that is applied each time the agreement renews. Exactly
 * one of the following fields is set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/PriceIncrease">AWS
 * API Reference</a></p>
 */
class PriceIncrease {
 public:
  AWS_AGREEMENTSERVICE_API PriceIncrease() = default;
  AWS_AGREEMENTSERVICE_API PriceIncrease(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API PriceIncrease& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A fixed price increase percentage that is applied at each renewal.</p>
   */
  inline const FixedPercentage& GetFixedPercentage() const { return m_fixedPercentage; }
  inline bool FixedPercentageHasBeenSet() const { return m_fixedPercentageHasBeenSet; }
  template <typename FixedPercentageT = FixedPercentage>
  void SetFixedPercentage(FixedPercentageT&& value) {
    m_fixedPercentageHasBeenSet = true;
    m_fixedPercentage = std::forward<FixedPercentageT>(value);
  }
  template <typename FixedPercentageT = FixedPercentage>
  PriceIncrease& WithFixedPercentage(FixedPercentageT&& value) {
    SetFixedPercentage(std::forward<FixedPercentageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A range of price increase percentages that the proposer can choose from
   * before the adjustment deadline of the agreement.</p>
   */
  inline const PercentageRange& GetPercentageRange() const { return m_percentageRange; }
  inline bool PercentageRangeHasBeenSet() const { return m_percentageRangeHasBeenSet; }
  template <typename PercentageRangeT = PercentageRange>
  void SetPercentageRange(PercentageRangeT&& value) {
    m_percentageRangeHasBeenSet = true;
    m_percentageRange = std::forward<PercentageRangeT>(value);
  }
  template <typename PercentageRangeT = PercentageRange>
  PriceIncrease& WithPercentageRange(PercentageRangeT&& value) {
    SetPercentageRange(std::forward<PercentageRangeT>(value));
    return *this;
  }
  ///@}
 private:
  FixedPercentage m_fixedPercentage;

  PercentageRange m_percentageRange;
  bool m_fixedPercentageHasBeenSet = false;
  bool m_percentageRangeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
