/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsElbLoadBalancerListener.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Lists the policies that are enabled for a load balancer
   * listener.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLoadBalancerListenerDescription">AWS
   * API Reference</a></p>
   */
  class AwsElbLoadBalancerListenerDescription
  {
  public:
    AWS_SECURITYHUB_API AwsElbLoadBalancerListenerDescription();
    AWS_SECURITYHUB_API AwsElbLoadBalancerListenerDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerListenerDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the listener.</p>
     */
    inline const AwsElbLoadBalancerListener& GetListener() const{ return m_listener; }

    /**
     * <p>Information about the listener.</p>
     */
    inline bool ListenerHasBeenSet() const { return m_listenerHasBeenSet; }

    /**
     * <p>Information about the listener.</p>
     */
    inline void SetListener(const AwsElbLoadBalancerListener& value) { m_listenerHasBeenSet = true; m_listener = value; }

    /**
     * <p>Information about the listener.</p>
     */
    inline void SetListener(AwsElbLoadBalancerListener&& value) { m_listenerHasBeenSet = true; m_listener = std::move(value); }

    /**
     * <p>Information about the listener.</p>
     */
    inline AwsElbLoadBalancerListenerDescription& WithListener(const AwsElbLoadBalancerListener& value) { SetListener(value); return *this;}

    /**
     * <p>Information about the listener.</p>
     */
    inline AwsElbLoadBalancerListenerDescription& WithListener(AwsElbLoadBalancerListener&& value) { SetListener(std::move(value)); return *this;}


    /**
     * <p>The policies enabled for the listener.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const{ return m_policyNames; }

    /**
     * <p>The policies enabled for the listener.</p>
     */
    inline bool PolicyNamesHasBeenSet() const { return m_policyNamesHasBeenSet; }

    /**
     * <p>The policies enabled for the listener.</p>
     */
    inline void SetPolicyNames(const Aws::Vector<Aws::String>& value) { m_policyNamesHasBeenSet = true; m_policyNames = value; }

    /**
     * <p>The policies enabled for the listener.</p>
     */
    inline void SetPolicyNames(Aws::Vector<Aws::String>&& value) { m_policyNamesHasBeenSet = true; m_policyNames = std::move(value); }

    /**
     * <p>The policies enabled for the listener.</p>
     */
    inline AwsElbLoadBalancerListenerDescription& WithPolicyNames(const Aws::Vector<Aws::String>& value) { SetPolicyNames(value); return *this;}

    /**
     * <p>The policies enabled for the listener.</p>
     */
    inline AwsElbLoadBalancerListenerDescription& WithPolicyNames(Aws::Vector<Aws::String>&& value) { SetPolicyNames(std::move(value)); return *this;}

    /**
     * <p>The policies enabled for the listener.</p>
     */
    inline AwsElbLoadBalancerListenerDescription& AddPolicyNames(const Aws::String& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

    /**
     * <p>The policies enabled for the listener.</p>
     */
    inline AwsElbLoadBalancerListenerDescription& AddPolicyNames(Aws::String&& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The policies enabled for the listener.</p>
     */
    inline AwsElbLoadBalancerListenerDescription& AddPolicyNames(const char* value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

  private:

    AwsElbLoadBalancerListener m_listener;
    bool m_listenerHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyNames;
    bool m_policyNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
