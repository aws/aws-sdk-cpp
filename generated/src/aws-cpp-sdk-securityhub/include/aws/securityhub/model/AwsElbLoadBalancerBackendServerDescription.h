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
    AWS_SECURITYHUB_API AwsElbLoadBalancerBackendServerDescription();
    AWS_SECURITYHUB_API AwsElbLoadBalancerBackendServerDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerBackendServerDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The port on which the EC2 instance is listening.</p>
     */
    inline int GetInstancePort() const{ return m_instancePort; }

    /**
     * <p>The port on which the EC2 instance is listening.</p>
     */
    inline bool InstancePortHasBeenSet() const { return m_instancePortHasBeenSet; }

    /**
     * <p>The port on which the EC2 instance is listening.</p>
     */
    inline void SetInstancePort(int value) { m_instancePortHasBeenSet = true; m_instancePort = value; }

    /**
     * <p>The port on which the EC2 instance is listening.</p>
     */
    inline AwsElbLoadBalancerBackendServerDescription& WithInstancePort(int value) { SetInstancePort(value); return *this;}


    /**
     * <p>The names of the policies that are enabled for the EC2 instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const{ return m_policyNames; }

    /**
     * <p>The names of the policies that are enabled for the EC2 instance.</p>
     */
    inline bool PolicyNamesHasBeenSet() const { return m_policyNamesHasBeenSet; }

    /**
     * <p>The names of the policies that are enabled for the EC2 instance.</p>
     */
    inline void SetPolicyNames(const Aws::Vector<Aws::String>& value) { m_policyNamesHasBeenSet = true; m_policyNames = value; }

    /**
     * <p>The names of the policies that are enabled for the EC2 instance.</p>
     */
    inline void SetPolicyNames(Aws::Vector<Aws::String>&& value) { m_policyNamesHasBeenSet = true; m_policyNames = std::move(value); }

    /**
     * <p>The names of the policies that are enabled for the EC2 instance.</p>
     */
    inline AwsElbLoadBalancerBackendServerDescription& WithPolicyNames(const Aws::Vector<Aws::String>& value) { SetPolicyNames(value); return *this;}

    /**
     * <p>The names of the policies that are enabled for the EC2 instance.</p>
     */
    inline AwsElbLoadBalancerBackendServerDescription& WithPolicyNames(Aws::Vector<Aws::String>&& value) { SetPolicyNames(std::move(value)); return *this;}

    /**
     * <p>The names of the policies that are enabled for the EC2 instance.</p>
     */
    inline AwsElbLoadBalancerBackendServerDescription& AddPolicyNames(const Aws::String& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

    /**
     * <p>The names of the policies that are enabled for the EC2 instance.</p>
     */
    inline AwsElbLoadBalancerBackendServerDescription& AddPolicyNames(Aws::String&& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the policies that are enabled for the EC2 instance.</p>
     */
    inline AwsElbLoadBalancerBackendServerDescription& AddPolicyNames(const char* value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

  private:

    int m_instancePort;
    bool m_instancePortHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyNames;
    bool m_policyNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
