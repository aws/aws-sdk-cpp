/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsElbAppCookieStickinessPolicy.h>
#include <aws/securityhub/model/AwsElbLbCookieStickinessPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about the policies for a load balancer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLoadBalancerPolicies">AWS
   * API Reference</a></p>
   */
  class AwsElbLoadBalancerPolicies
  {
  public:
    AWS_SECURITYHUB_API AwsElbLoadBalancerPolicies() = default;
    AWS_SECURITYHUB_API AwsElbLoadBalancerPolicies(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerPolicies& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stickiness policies that are created using
     * <code>CreateAppCookieStickinessPolicy</code>.</p>
     */
    inline const Aws::Vector<AwsElbAppCookieStickinessPolicy>& GetAppCookieStickinessPolicies() const { return m_appCookieStickinessPolicies; }
    inline bool AppCookieStickinessPoliciesHasBeenSet() const { return m_appCookieStickinessPoliciesHasBeenSet; }
    template<typename AppCookieStickinessPoliciesT = Aws::Vector<AwsElbAppCookieStickinessPolicy>>
    void SetAppCookieStickinessPolicies(AppCookieStickinessPoliciesT&& value) { m_appCookieStickinessPoliciesHasBeenSet = true; m_appCookieStickinessPolicies = std::forward<AppCookieStickinessPoliciesT>(value); }
    template<typename AppCookieStickinessPoliciesT = Aws::Vector<AwsElbAppCookieStickinessPolicy>>
    AwsElbLoadBalancerPolicies& WithAppCookieStickinessPolicies(AppCookieStickinessPoliciesT&& value) { SetAppCookieStickinessPolicies(std::forward<AppCookieStickinessPoliciesT>(value)); return *this;}
    template<typename AppCookieStickinessPoliciesT = AwsElbAppCookieStickinessPolicy>
    AwsElbLoadBalancerPolicies& AddAppCookieStickinessPolicies(AppCookieStickinessPoliciesT&& value) { m_appCookieStickinessPoliciesHasBeenSet = true; m_appCookieStickinessPolicies.emplace_back(std::forward<AppCookieStickinessPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stickiness policies that are created using
     * <code>CreateLBCookieStickinessPolicy</code>.</p>
     */
    inline const Aws::Vector<AwsElbLbCookieStickinessPolicy>& GetLbCookieStickinessPolicies() const { return m_lbCookieStickinessPolicies; }
    inline bool LbCookieStickinessPoliciesHasBeenSet() const { return m_lbCookieStickinessPoliciesHasBeenSet; }
    template<typename LbCookieStickinessPoliciesT = Aws::Vector<AwsElbLbCookieStickinessPolicy>>
    void SetLbCookieStickinessPolicies(LbCookieStickinessPoliciesT&& value) { m_lbCookieStickinessPoliciesHasBeenSet = true; m_lbCookieStickinessPolicies = std::forward<LbCookieStickinessPoliciesT>(value); }
    template<typename LbCookieStickinessPoliciesT = Aws::Vector<AwsElbLbCookieStickinessPolicy>>
    AwsElbLoadBalancerPolicies& WithLbCookieStickinessPolicies(LbCookieStickinessPoliciesT&& value) { SetLbCookieStickinessPolicies(std::forward<LbCookieStickinessPoliciesT>(value)); return *this;}
    template<typename LbCookieStickinessPoliciesT = AwsElbLbCookieStickinessPolicy>
    AwsElbLoadBalancerPolicies& AddLbCookieStickinessPolicies(LbCookieStickinessPoliciesT&& value) { m_lbCookieStickinessPoliciesHasBeenSet = true; m_lbCookieStickinessPolicies.emplace_back(std::forward<LbCookieStickinessPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOtherPolicies() const { return m_otherPolicies; }
    inline bool OtherPoliciesHasBeenSet() const { return m_otherPoliciesHasBeenSet; }
    template<typename OtherPoliciesT = Aws::Vector<Aws::String>>
    void SetOtherPolicies(OtherPoliciesT&& value) { m_otherPoliciesHasBeenSet = true; m_otherPolicies = std::forward<OtherPoliciesT>(value); }
    template<typename OtherPoliciesT = Aws::Vector<Aws::String>>
    AwsElbLoadBalancerPolicies& WithOtherPolicies(OtherPoliciesT&& value) { SetOtherPolicies(std::forward<OtherPoliciesT>(value)); return *this;}
    template<typename OtherPoliciesT = Aws::String>
    AwsElbLoadBalancerPolicies& AddOtherPolicies(OtherPoliciesT&& value) { m_otherPoliciesHasBeenSet = true; m_otherPolicies.emplace_back(std::forward<OtherPoliciesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AwsElbAppCookieStickinessPolicy> m_appCookieStickinessPolicies;
    bool m_appCookieStickinessPoliciesHasBeenSet = false;

    Aws::Vector<AwsElbLbCookieStickinessPolicy> m_lbCookieStickinessPolicies;
    bool m_lbCookieStickinessPoliciesHasBeenSet = false;

    Aws::Vector<Aws::String> m_otherPolicies;
    bool m_otherPoliciesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
