/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
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
namespace MWAA
{
namespace Model
{

  /**
   * <p>Defines the VPC networking components used to secure and enable network
   * traffic between the Amazon Web Services resources for your environment. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/mwaa/latest/userguide/networking-about.html">About
   * networking on Amazon MWAA</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/UpdateNetworkConfigurationInput">AWS
   * API Reference</a></p>
   */
  class UpdateNetworkConfigurationInput
  {
  public:
    AWS_MWAA_API UpdateNetworkConfigurationInput() = default;
    AWS_MWAA_API UpdateNetworkConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API UpdateNetworkConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of security group IDs. A security group must be attached to the same
     * VPC as the subnets. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-security.html">Security
     * in your VPC on Amazon MWAA</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    UpdateNetworkConfigurationInput& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    UpdateNetworkConfigurationInput& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
