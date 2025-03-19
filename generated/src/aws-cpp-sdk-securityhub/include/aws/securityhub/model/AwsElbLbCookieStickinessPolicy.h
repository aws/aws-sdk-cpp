/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
   * <p>Contains information about a stickiness policy that was created using
   * <code>CreateLBCookieStickinessPolicy</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLbCookieStickinessPolicy">AWS
   * API Reference</a></p>
   */
  class AwsElbLbCookieStickinessPolicy
  {
  public:
    AWS_SECURITYHUB_API AwsElbLbCookieStickinessPolicy() = default;
    AWS_SECURITYHUB_API AwsElbLbCookieStickinessPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLbCookieStickinessPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of time, in seconds, after which the cookie is considered stale.
     * If an expiration period is not specified, the stickiness session lasts for the
     * duration of the browser session.</p>
     */
    inline long long GetCookieExpirationPeriod() const { return m_cookieExpirationPeriod; }
    inline bool CookieExpirationPeriodHasBeenSet() const { return m_cookieExpirationPeriodHasBeenSet; }
    inline void SetCookieExpirationPeriod(long long value) { m_cookieExpirationPeriodHasBeenSet = true; m_cookieExpirationPeriod = value; }
    inline AwsElbLbCookieStickinessPolicy& WithCookieExpirationPeriod(long long value) { SetCookieExpirationPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the policy. The name must be unique within the set of policies
     * for the load balancer.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    AwsElbLbCookieStickinessPolicy& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}
  private:

    long long m_cookieExpirationPeriod{0};
    bool m_cookieExpirationPeriodHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
