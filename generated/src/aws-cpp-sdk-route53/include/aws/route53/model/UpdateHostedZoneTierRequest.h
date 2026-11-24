/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HostedZoneTier.h>

#include <utility>

namespace Aws {
namespace Route53 {
namespace Model {

/**
 */
class UpdateHostedZoneTierRequest : public Route53Request {
 public:
  AWS_ROUTE53_API UpdateHostedZoneTierRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateHostedZoneTier"; }

  AWS_ROUTE53_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Specify the ID of the hosted zone whose tier you want to change.</p>
   */
  inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
  inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
  template <typename HostedZoneIdT = Aws::String>
  void SetHostedZoneId(HostedZoneIdT&& value) {
    m_hostedZoneIdHasBeenSet = true;
    m_hostedZoneId = std::forward<HostedZoneIdT>(value);
  }
  template <typename HostedZoneIdT = Aws::String>
  UpdateHostedZoneTierRequest& WithHostedZoneId(HostedZoneIdT&& value) {
    SetHostedZoneId(std::forward<HostedZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specify the tier to move the hosted zone to. Valid values are the
   * following:</p> <ul> <li> <p> <code>STANDARD</code>: The default tier for new
   * hosted zones.</p> </li> <li> <p> <code>ADVANCED</code>: A tier that includes
   * Change History and offers more optional features.</p> </li> </ul>
   */
  inline HostedZoneTier GetHostedZoneTier() const { return m_hostedZoneTier; }
  inline bool HostedZoneTierHasBeenSet() const { return m_hostedZoneTierHasBeenSet; }
  inline void SetHostedZoneTier(HostedZoneTier value) {
    m_hostedZoneTierHasBeenSet = true;
    m_hostedZoneTier = value;
  }
  inline UpdateHostedZoneTierRequest& WithHostedZoneTier(HostedZoneTier value) {
    SetHostedZoneTier(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to validate the request without changing the tier. Route 53
   * returns the same errors as for a real request, but doesn't change the hosted
   * zone. The default is <code>false</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline UpdateHostedZoneTierRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_hostedZoneId;

  HostedZoneTier m_hostedZoneTier{HostedZoneTier::NOT_SET};

  bool m_dryRun{false};
  bool m_hostedZoneIdHasBeenSet = false;
  bool m_hostedZoneTierHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
