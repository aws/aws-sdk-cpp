/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/Coverage.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {

/**
 * <p>Configuration for resold enterprise support plans.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ResoldEnterprise">AWS
 * API Reference</a></p>
 */
class ResoldEnterprise {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ResoldEnterprise() = default;
  AWS_PARTNERCENTRALCHANNEL_API ResoldEnterprise(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ResoldEnterprise& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The coverage level for resold enterprise support.</p>
   */
  inline Coverage GetCoverage() const { return m_coverage; }
  inline bool CoverageHasBeenSet() const { return m_coverageHasBeenSet; }
  inline void SetCoverage(Coverage value) {
    m_coverageHasBeenSet = true;
    m_coverage = value;
  }
  inline ResoldEnterprise& WithCoverage(Coverage value) {
    SetCoverage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of the Technical Account Manager (TAM).</p>
   */
  inline const Aws::String& GetTamLocation() const { return m_tamLocation; }
  inline bool TamLocationHasBeenSet() const { return m_tamLocationHasBeenSet; }
  template <typename TamLocationT = Aws::String>
  void SetTamLocation(TamLocationT&& value) {
    m_tamLocationHasBeenSet = true;
    m_tamLocation = std::forward<TamLocationT>(value);
  }
  template <typename TamLocationT = Aws::String>
  ResoldEnterprise& WithTamLocation(TamLocationT&& value) {
    SetTamLocation(std::forward<TamLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID to charge for the support plan.</p>
   */
  inline const Aws::String& GetChargeAccountId() const { return m_chargeAccountId; }
  inline bool ChargeAccountIdHasBeenSet() const { return m_chargeAccountIdHasBeenSet; }
  template <typename ChargeAccountIdT = Aws::String>
  void SetChargeAccountId(ChargeAccountIdT&& value) {
    m_chargeAccountIdHasBeenSet = true;
    m_chargeAccountId = std::forward<ChargeAccountIdT>(value);
  }
  template <typename ChargeAccountIdT = Aws::String>
  ResoldEnterprise& WithChargeAccountId(ChargeAccountIdT&& value) {
    SetChargeAccountId(std::forward<ChargeAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Coverage m_coverage{Coverage::NOT_SET};

  Aws::String m_tamLocation;

  Aws::String m_chargeAccountId;
  bool m_coverageHasBeenSet = false;
  bool m_tamLocationHasBeenSet = false;
  bool m_chargeAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
