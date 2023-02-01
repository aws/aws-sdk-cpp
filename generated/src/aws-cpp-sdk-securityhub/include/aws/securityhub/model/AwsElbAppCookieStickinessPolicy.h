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
   * <code>CreateAppCookieStickinessPolicy</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbAppCookieStickinessPolicy">AWS
   * API Reference</a></p>
   */
  class AwsElbAppCookieStickinessPolicy
  {
  public:
    AWS_SECURITYHUB_API AwsElbAppCookieStickinessPolicy();
    AWS_SECURITYHUB_API AwsElbAppCookieStickinessPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbAppCookieStickinessPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline const Aws::String& GetCookieName() const{ return m_cookieName; }

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline bool CookieNameHasBeenSet() const { return m_cookieNameHasBeenSet; }

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline void SetCookieName(const Aws::String& value) { m_cookieNameHasBeenSet = true; m_cookieName = value; }

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline void SetCookieName(Aws::String&& value) { m_cookieNameHasBeenSet = true; m_cookieName = std::move(value); }

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline void SetCookieName(const char* value) { m_cookieNameHasBeenSet = true; m_cookieName.assign(value); }

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline AwsElbAppCookieStickinessPolicy& WithCookieName(const Aws::String& value) { SetCookieName(value); return *this;}

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline AwsElbAppCookieStickinessPolicy& WithCookieName(Aws::String&& value) { SetCookieName(std::move(value)); return *this;}

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline AwsElbAppCookieStickinessPolicy& WithCookieName(const char* value) { SetCookieName(value); return *this;}


    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within the set of policies for the load balancer.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within the set of policies for the load balancer.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within the set of policies for the load balancer.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within the set of policies for the load balancer.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within the set of policies for the load balancer.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within the set of policies for the load balancer.</p>
     */
    inline AwsElbAppCookieStickinessPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within the set of policies for the load balancer.</p>
     */
    inline AwsElbAppCookieStickinessPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within the set of policies for the load balancer.</p>
     */
    inline AwsElbAppCookieStickinessPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

  private:

    Aws::String m_cookieName;
    bool m_cookieNameHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
