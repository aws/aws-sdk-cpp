/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>This structure specifies the VPC subnets and security groups for the stream,
   * and whether a public IP address is to be used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/SelfManagedKafkaAccessConfigurationVpc">AWS
   * API Reference</a></p>
   */
  class SelfManagedKafkaAccessConfigurationVpc
  {
  public:
    AWS_PIPES_API SelfManagedKafkaAccessConfigurationVpc() = default;
    AWS_PIPES_API SelfManagedKafkaAccessConfigurationVpc(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API SelfManagedKafkaAccessConfigurationVpc& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the subnets associated with the stream. These subnets must all be
     * in the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    SelfManagedKafkaAccessConfigurationVpc& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    SelfManagedKafkaAccessConfigurationVpc& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the security groups associated with the stream. These security
     * groups must all be in the same VPC. You can specify as many as five security
     * groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroup() const { return m_securityGroup; }
    inline bool SecurityGroupHasBeenSet() const { return m_securityGroupHasBeenSet; }
    template<typename SecurityGroupT = Aws::Vector<Aws::String>>
    void SetSecurityGroup(SecurityGroupT&& value) { m_securityGroupHasBeenSet = true; m_securityGroup = std::forward<SecurityGroupT>(value); }
    template<typename SecurityGroupT = Aws::Vector<Aws::String>>
    SelfManagedKafkaAccessConfigurationVpc& WithSecurityGroup(SecurityGroupT&& value) { SetSecurityGroup(std::forward<SecurityGroupT>(value)); return *this;}
    template<typename SecurityGroupT = Aws::String>
    SelfManagedKafkaAccessConfigurationVpc& AddSecurityGroup(SecurityGroupT&& value) { m_securityGroupHasBeenSet = true; m_securityGroup.emplace_back(std::forward<SecurityGroupT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroup;
    bool m_securityGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
