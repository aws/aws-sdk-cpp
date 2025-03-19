/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
   * <p>Provides information about the configuration of an EC2 instance for the load
   * balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLoadBalancerBackendServerDescription">AWS
   * API Reference</a></p>
   */
  class AwsElbLoadBalancerBackendServerDescription
  {
  public:
    AWS_SECURITYHUB_API AwsElbLoadBalancerBackendServerDescription() = default;
    AWS_SECURITYHUB_API AwsElbLoadBalancerBackendServerDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerBackendServerDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The port on which the EC2 instance is listening.</p>
     */
    inline int GetInstancePort() const { return m_instancePort; }
    inline bool InstancePortHasBeenSet() const { return m_instancePortHasBeenSet; }
    inline void SetInstancePort(int value) { m_instancePortHasBeenSet = true; m_instancePort = value; }
    inline AwsElbLoadBalancerBackendServerDescription& WithInstancePort(int value) { SetInstancePort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the policies that are enabled for the EC2 instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const { return m_policyNames; }
    inline bool PolicyNamesHasBeenSet() const { return m_policyNamesHasBeenSet; }
    template<typename PolicyNamesT = Aws::Vector<Aws::String>>
    void SetPolicyNames(PolicyNamesT&& value) { m_policyNamesHasBeenSet = true; m_policyNames = std::forward<PolicyNamesT>(value); }
    template<typename PolicyNamesT = Aws::Vector<Aws::String>>
    AwsElbLoadBalancerBackendServerDescription& WithPolicyNames(PolicyNamesT&& value) { SetPolicyNames(std::forward<PolicyNamesT>(value)); return *this;}
    template<typename PolicyNamesT = Aws::String>
    AwsElbLoadBalancerBackendServerDescription& AddPolicyNames(PolicyNamesT&& value) { m_policyNamesHasBeenSet = true; m_policyNames.emplace_back(std::forward<PolicyNamesT>(value)); return *this; }
    ///@}
  private:

    int m_instancePort{0};
    bool m_instancePortHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyNames;
    bool m_policyNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
