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
    AWS_SECURITYHUB_API AwsElbLoadBalancerPolicies();
    AWS_SECURITYHUB_API AwsElbLoadBalancerPolicies(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerPolicies& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The stickiness policies that are created using
     * <code>CreateAppCookieStickinessPolicy</code>.</p>
     */
    inline const Aws::Vector<AwsElbAppCookieStickinessPolicy>& GetAppCookieStickinessPolicies() const{ return m_appCookieStickinessPolicies; }

    /**
     * <p>The stickiness policies that are created using
     * <code>CreateAppCookieStickinessPolicy</code>.</p>
     */
    inline bool AppCookieStickinessPoliciesHasBeenSet() const { return m_appCookieStickinessPoliciesHasBeenSet; }

    /**
     * <p>The stickiness policies that are created using
     * <code>CreateAppCookieStickinessPolicy</code>.</p>
     */
    inline void SetAppCookieStickinessPolicies(const Aws::Vector<AwsElbAppCookieStickinessPolicy>& value) { m_appCookieStickinessPoliciesHasBeenSet = true; m_appCookieStickinessPolicies = value; }

    /**
     * <p>The stickiness policies that are created using
     * <code>CreateAppCookieStickinessPolicy</code>.</p>
     */
    inline void SetAppCookieStickinessPolicies(Aws::Vector<AwsElbAppCookieStickinessPolicy>&& value) { m_appCookieStickinessPoliciesHasBeenSet = true; m_appCookieStickinessPolicies = std::move(value); }

    /**
     * <p>The stickiness policies that are created using
     * <code>CreateAppCookieStickinessPolicy</code>.</p>
     */
    inline AwsElbLoadBalancerPolicies& WithAppCookieStickinessPolicies(const Aws::Vector<AwsElbAppCookieStickinessPolicy>& value) { SetAppCookieStickinessPolicies(value); return *this;}

    /**
     * <p>The stickiness policies that are created using
     * <code>CreateAppCookieStickinessPolicy</code>.</p>
     */
    inline AwsElbLoadBalancerPolicies& WithAppCookieStickinessPolicies(Aws::Vector<AwsElbAppCookieStickinessPolicy>&& value) { SetAppCookieStickinessPolicies(std::move(value)); return *this;}

    /**
     * <p>The stickiness policies that are created using
     * <code>CreateAppCookieStickinessPolicy</code>.</p>
     */
    inline AwsElbLoadBalancerPolicies& AddAppCookieStickinessPolicies(const AwsElbAppCookieStickinessPolicy& value) { m_appCookieStickinessPoliciesHasBeenSet = true; m_appCookieStickinessPolicies.push_back(value); return *this; }

    /**
     * <p>The stickiness policies that are created using
     * <code>CreateAppCookieStickinessPolicy</code>.</p>
     */
    inline AwsElbLoadBalancerPolicies& AddAppCookieStickinessPolicies(AwsElbAppCookieStickinessPolicy&& value) { m_appCookieStickinessPoliciesHasBeenSet = true; m_appCookieStickinessPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>The stickiness policies that are created using
     * <code>CreateLBCookieStickinessPolicy</code>.</p>
     */
    inline const Aws::Vector<AwsElbLbCookieStickinessPolicy>& GetLbCookieStickinessPolicies() const{ return m_lbCookieStickinessPolicies; }

    /**
     * <p>The stickiness policies that are created using
     * <code>CreateLBCookieStickinessPolicy</code>.</p>
     */
    inline bool LbCookieStickinessPoliciesHasBeenSet() const { return m_lbCookieStickinessPoliciesHasBeenSet; }

    /**
     * <p>The stickiness policies that are created using
     * <code>CreateLBCookieStickinessPolicy</code>.</p>
     */
    inline void SetLbCookieStickinessPolicies(const Aws::Vector<AwsElbLbCookieStickinessPolicy>& value) { m_lbCookieStickinessPoliciesHasBeenSet = true; m_lbCookieStickinessPolicies = value; }

    /**
     * <p>The stickiness policies that are created using
     * <code>CreateLBCookieStickinessPolicy</code>.</p>
     */
    inline void SetLbCookieStickinessPolicies(Aws::Vector<AwsElbLbCookieStickinessPolicy>&& value) { m_lbCookieStickinessPoliciesHasBeenSet = true; m_lbCookieStickinessPolicies = std::move(value); }

    /**
     * <p>The stickiness policies that are created using
     * <code>CreateLBCookieStickinessPolicy</code>.</p>
     */
    inline AwsElbLoadBalancerPolicies& WithLbCookieStickinessPolicies(const Aws::Vector<AwsElbLbCookieStickinessPolicy>& value) { SetLbCookieStickinessPolicies(value); return *this;}

    /**
     * <p>The stickiness policies that are created using
     * <code>CreateLBCookieStickinessPolicy</code>.</p>
     */
    inline AwsElbLoadBalancerPolicies& WithLbCookieStickinessPolicies(Aws::Vector<AwsElbLbCookieStickinessPolicy>&& value) { SetLbCookieStickinessPolicies(std::move(value)); return *this;}

    /**
     * <p>The stickiness policies that are created using
     * <code>CreateLBCookieStickinessPolicy</code>.</p>
     */
    inline AwsElbLoadBalancerPolicies& AddLbCookieStickinessPolicies(const AwsElbLbCookieStickinessPolicy& value) { m_lbCookieStickinessPoliciesHasBeenSet = true; m_lbCookieStickinessPolicies.push_back(value); return *this; }

    /**
     * <p>The stickiness policies that are created using
     * <code>CreateLBCookieStickinessPolicy</code>.</p>
     */
    inline AwsElbLoadBalancerPolicies& AddLbCookieStickinessPolicies(AwsElbLbCookieStickinessPolicy&& value) { m_lbCookieStickinessPoliciesHasBeenSet = true; m_lbCookieStickinessPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOtherPolicies() const{ return m_otherPolicies; }

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline bool OtherPoliciesHasBeenSet() const { return m_otherPoliciesHasBeenSet; }

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline void SetOtherPolicies(const Aws::Vector<Aws::String>& value) { m_otherPoliciesHasBeenSet = true; m_otherPolicies = value; }

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline void SetOtherPolicies(Aws::Vector<Aws::String>&& value) { m_otherPoliciesHasBeenSet = true; m_otherPolicies = std::move(value); }

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline AwsElbLoadBalancerPolicies& WithOtherPolicies(const Aws::Vector<Aws::String>& value) { SetOtherPolicies(value); return *this;}

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline AwsElbLoadBalancerPolicies& WithOtherPolicies(Aws::Vector<Aws::String>&& value) { SetOtherPolicies(std::move(value)); return *this;}

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline AwsElbLoadBalancerPolicies& AddOtherPolicies(const Aws::String& value) { m_otherPoliciesHasBeenSet = true; m_otherPolicies.push_back(value); return *this; }

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline AwsElbLoadBalancerPolicies& AddOtherPolicies(Aws::String&& value) { m_otherPoliciesHasBeenSet = true; m_otherPolicies.push_back(std::move(value)); return *this; }

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline AwsElbLoadBalancerPolicies& AddOtherPolicies(const char* value) { m_otherPoliciesHasBeenSet = true; m_otherPolicies.push_back(value); return *this; }

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
