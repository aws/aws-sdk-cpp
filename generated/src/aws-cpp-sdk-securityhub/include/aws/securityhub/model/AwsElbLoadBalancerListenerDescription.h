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
    AWS_SECURITYHUB_API AwsElbLoadBalancerListenerDescription() = default;
    AWS_SECURITYHUB_API AwsElbLoadBalancerListenerDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerListenerDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the listener.</p>
     */
    inline const AwsElbLoadBalancerListener& GetListener() const { return m_listener; }
    inline bool ListenerHasBeenSet() const { return m_listenerHasBeenSet; }
    template<typename ListenerT = AwsElbLoadBalancerListener>
    void SetListener(ListenerT&& value) { m_listenerHasBeenSet = true; m_listener = std::forward<ListenerT>(value); }
    template<typename ListenerT = AwsElbLoadBalancerListener>
    AwsElbLoadBalancerListenerDescription& WithListener(ListenerT&& value) { SetListener(std::forward<ListenerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policies enabled for the listener.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const { return m_policyNames; }
    inline bool PolicyNamesHasBeenSet() const { return m_policyNamesHasBeenSet; }
    template<typename PolicyNamesT = Aws::Vector<Aws::String>>
    void SetPolicyNames(PolicyNamesT&& value) { m_policyNamesHasBeenSet = true; m_policyNames = std::forward<PolicyNamesT>(value); }
    template<typename PolicyNamesT = Aws::Vector<Aws::String>>
    AwsElbLoadBalancerListenerDescription& WithPolicyNames(PolicyNamesT&& value) { SetPolicyNames(std::forward<PolicyNamesT>(value)); return *this;}
    template<typename PolicyNamesT = Aws::String>
    AwsElbLoadBalancerListenerDescription& AddPolicyNames(PolicyNamesT&& value) { m_policyNamesHasBeenSet = true; m_policyNames.emplace_back(std::forward<PolicyNamesT>(value)); return *this; }
    ///@}
  private:

    AwsElbLoadBalancerListener m_listener;
    bool m_listenerHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyNames;
    bool m_policyNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
