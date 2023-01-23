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
    AWS_SECURITYHUB_API AwsElbLbCookieStickinessPolicy();
    AWS_SECURITYHUB_API AwsElbLbCookieStickinessPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLbCookieStickinessPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of time, in seconds, after which the cookie is considered stale.
     * If an expiration period is not specified, the stickiness session lasts for the
     * duration of the browser session.</p>
     */
    inline long long GetCookieExpirationPeriod() const{ return m_cookieExpirationPeriod; }

    /**
     * <p>The amount of time, in seconds, after which the cookie is considered stale.
     * If an expiration period is not specified, the stickiness session lasts for the
     * duration of the browser session.</p>
     */
    inline bool CookieExpirationPeriodHasBeenSet() const { return m_cookieExpirationPeriodHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, after which the cookie is considered stale.
     * If an expiration period is not specified, the stickiness session lasts for the
     * duration of the browser session.</p>
     */
    inline void SetCookieExpirationPeriod(long long value) { m_cookieExpirationPeriodHasBeenSet = true; m_cookieExpirationPeriod = value; }

    /**
     * <p>The amount of time, in seconds, after which the cookie is considered stale.
     * If an expiration period is not specified, the stickiness session lasts for the
     * duration of the browser session.</p>
     */
    inline AwsElbLbCookieStickinessPolicy& WithCookieExpirationPeriod(long long value) { SetCookieExpirationPeriod(value); return *this;}


    /**
     * <p>The name of the policy. The name must be unique within the set of policies
     * for the load balancer.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy. The name must be unique within the set of policies
     * for the load balancer.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the policy. The name must be unique within the set of policies
     * for the load balancer.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy. The name must be unique within the set of policies
     * for the load balancer.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the policy. The name must be unique within the set of policies
     * for the load balancer.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy. The name must be unique within the set of policies
     * for the load balancer.</p>
     */
    inline AwsElbLbCookieStickinessPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy. The name must be unique within the set of policies
     * for the load balancer.</p>
     */
    inline AwsElbLbCookieStickinessPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy. The name must be unique within the set of policies
     * for the load balancer.</p>
     */
    inline AwsElbLbCookieStickinessPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

  private:

    long long m_cookieExpirationPeriod;
    bool m_cookieExpirationPeriodHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
