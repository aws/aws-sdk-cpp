/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/Route53_EXPORTS.h>

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
 private:
  Aws::String m_hostedZoneId;
  bool m_hostedZoneIdHasBeenSet = false;

  bool m_enableAcceleratedRecovery{false};
  bool m_enableAcceleratedRecoveryHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
