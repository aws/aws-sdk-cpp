/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeGuardrail.h>

#include <utility>

namespace Aws {
namespace Route53 {
namespace Model {

/**
 */
class UpdateHostedZoneFeaturesRequest : public Route53Request {
 public:
  AWS_ROUTE53_API UpdateHostedZoneFeaturesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateHostedZoneFeatures"; }

  AWS_ROUTE53_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the hosted zone for which you want to update features. This is the
   * unique identifier for your hosted zone.</p>
   */
  inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
  inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
  template <typename HostedZoneIdT = Aws::String>
  void SetHostedZoneId(HostedZoneIdT&& value) {
    m_hostedZoneIdHasBeenSet = true;
    m_hostedZoneId = std::forward<HostedZoneIdT>(value);
  }
  template <typename HostedZoneIdT = Aws::String>
  UpdateHostedZoneFeaturesRequest& WithHostedZoneId(HostedZoneIdT&& value) {
    SetHostedZoneId(std::forward<HostedZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to enable accelerated recovery for the hosted zone. Set to
   * <code>true</code> to enable accelerated recovery, or <code>false</code> to
   * disable it.</p>
   */
  inline bool GetEnableAcceleratedRecovery() const { return m_enableAcceleratedRecovery; }
  inline bool EnableAcceleratedRecoveryHasBeenSet() const { return m_enableAcceleratedRecoveryHasBeenSet; }
  inline void SetEnableAcceleratedRecovery(bool value) {
    m_enableAcceleratedRecoveryHasBeenSet = true;
    m_enableAcceleratedRecovery = value;
  }
  inline UpdateHostedZoneFeaturesRequest& WithEnableAcceleratedRecovery(bool value) {
    SetEnableAcceleratedRecovery(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to enable public DNS fallback for the hosted zone. Set to
   * <code>true</code> to enable public DNS fallback, or <code>false</code> to
   * disable it.</p> <p>Public DNS fallback applies to the entire hosted zone and to
   * all VPCs that are associated with it. To check whether a change has propagated,
   * call <code>GetHostedZone</code> and review <code>PublicDNSFallbackStatus</code>
   * in the response.</p> <p>Public DNS fallback is supported only for private hosted
   * zones.</p>
   */
  inline bool GetEnablePublicDNSFallback() const { return m_enablePublicDNSFallback; }
  inline bool EnablePublicDNSFallbackHasBeenSet() const { return m_enablePublicDNSFallbackHasBeenSet; }
  inline void SetEnablePublicDNSFallback(bool value) {
    m_enablePublicDNSFallbackHasBeenSet = true;
    m_enablePublicDNSFallback = value;
  }
  inline UpdateHostedZoneFeaturesRequest& WithEnablePublicDNSFallback(bool value) {
    SetEnablePublicDNSFallback(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specify the Change Guardrails to turn on or off for the hosted zone. Each
   * entry specifies the name of a guardrail and one of the following statuses:</p>
   * <ul> <li> <p> <code>ENABLED</code>: Turns on the guardrail.</p> </li> <li> <p>
   * <code>DISABLED</code>: Turns off the guardrail.</p> </li> </ul> <p>Guardrails
   * that aren't in the request keep their current status.</p> <p>You can turn on an
   * optional guardrail only if the tier of the hosted zone offers it. You can't turn
   * off a guardrail that the tier includes, such as <code>NS_FORMAT_CHECK</code>. In
   * either case, Route 53 returns an <code>InvalidInput</code> error.</p>
   */
  inline const Aws::Vector<ChangeGuardrail>& GetChangeGuardrails() const { return m_changeGuardrails; }
  inline bool ChangeGuardrailsHasBeenSet() const { return m_changeGuardrailsHasBeenSet; }
  template <typename ChangeGuardrailsT = Aws::Vector<ChangeGuardrail>>
  void SetChangeGuardrails(ChangeGuardrailsT&& value) {
    m_changeGuardrailsHasBeenSet = true;
    m_changeGuardrails = std::forward<ChangeGuardrailsT>(value);
  }
  template <typename ChangeGuardrailsT = Aws::Vector<ChangeGuardrail>>
  UpdateHostedZoneFeaturesRequest& WithChangeGuardrails(ChangeGuardrailsT&& value) {
    SetChangeGuardrails(std::forward<ChangeGuardrailsT>(value));
    return *this;
  }
  template <typename ChangeGuardrailsT = ChangeGuardrail>
  UpdateHostedZoneFeaturesRequest& AddChangeGuardrails(ChangeGuardrailsT&& value) {
    m_changeGuardrailsHasBeenSet = true;
    m_changeGuardrails.emplace_back(std::forward<ChangeGuardrailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to validate the request without changing any features.
   * Route 53 returns the same errors as for a real request, but doesn't change the
   * hosted zone. The default is <code>false</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline UpdateHostedZoneFeaturesRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_hostedZoneId;

  bool m_enableAcceleratedRecovery{false};

  bool m_enablePublicDNSFallback{false};

  Aws::Vector<ChangeGuardrail> m_changeGuardrails;

  bool m_dryRun{false};
  bool m_hostedZoneIdHasBeenSet = false;
  bool m_enableAcceleratedRecoveryHasBeenSet = false;
  bool m_enablePublicDNSFallbackHasBeenSet = false;
  bool m_changeGuardrailsHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
