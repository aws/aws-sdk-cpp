/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/PartnerLedSupport.h>
#include <aws/partnercentral-channel/model/ResoldBusiness.h>
#include <aws/partnercentral-channel/model/ResoldEnterprise.h>

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
 * <p>Configuration for different types of support plans.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/SupportPlan">AWS
 * API Reference</a></p>
 */
class SupportPlan {
 public:
  AWS_PARTNERCENTRALCHANNEL_API SupportPlan() = default;
  AWS_PARTNERCENTRALCHANNEL_API SupportPlan(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API SupportPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for resold business support plans.</p>
   */
  inline const ResoldBusiness& GetResoldBusiness() const { return m_resoldBusiness; }
  inline bool ResoldBusinessHasBeenSet() const { return m_resoldBusinessHasBeenSet; }
  template <typename ResoldBusinessT = ResoldBusiness>
  void SetResoldBusiness(ResoldBusinessT&& value) {
    m_resoldBusinessHasBeenSet = true;
    m_resoldBusiness = std::forward<ResoldBusinessT>(value);
  }
  template <typename ResoldBusinessT = ResoldBusiness>
  SupportPlan& WithResoldBusiness(ResoldBusinessT&& value) {
    SetResoldBusiness(std::forward<ResoldBusinessT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for resold enterprise support plans.</p>
   */
  inline const ResoldEnterprise& GetResoldEnterprise() const { return m_resoldEnterprise; }
  inline bool ResoldEnterpriseHasBeenSet() const { return m_resoldEnterpriseHasBeenSet; }
  template <typename ResoldEnterpriseT = ResoldEnterprise>
  void SetResoldEnterprise(ResoldEnterpriseT&& value) {
    m_resoldEnterpriseHasBeenSet = true;
    m_resoldEnterprise = std::forward<ResoldEnterpriseT>(value);
  }
  template <typename ResoldEnterpriseT = ResoldEnterprise>
  SupportPlan& WithResoldEnterprise(ResoldEnterpriseT&& value) {
    SetResoldEnterprise(std::forward<ResoldEnterpriseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for partner-led support plans.</p>
   */
  inline const PartnerLedSupport& GetPartnerLedSupport() const { return m_partnerLedSupport; }
  inline bool PartnerLedSupportHasBeenSet() const { return m_partnerLedSupportHasBeenSet; }
  template <typename PartnerLedSupportT = PartnerLedSupport>
  void SetPartnerLedSupport(PartnerLedSupportT&& value) {
    m_partnerLedSupportHasBeenSet = true;
    m_partnerLedSupport = std::forward<PartnerLedSupportT>(value);
  }
  template <typename PartnerLedSupportT = PartnerLedSupport>
  SupportPlan& WithPartnerLedSupport(PartnerLedSupportT&& value) {
    SetPartnerLedSupport(std::forward<PartnerLedSupportT>(value));
    return *this;
  }
  ///@}
 private:
  ResoldBusiness m_resoldBusiness;

  ResoldEnterprise m_resoldEnterprise;

  PartnerLedSupport m_partnerLedSupport;
  bool m_resoldBusinessHasBeenSet = false;
  bool m_resoldEnterpriseHasBeenSet = false;
  bool m_partnerLedSupportHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
