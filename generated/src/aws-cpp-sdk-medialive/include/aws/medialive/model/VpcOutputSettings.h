/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * The properties for a private VPC Output
When this property is specified, the
   * output egress addresses will be created in a user specified VPC<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VpcOutputSettings">AWS
   * API Reference</a></p>
   */
  class VpcOutputSettings
  {
  public:
    AWS_MEDIALIVE_API VpcOutputSettings() = default;
    AWS_MEDIALIVE_API VpcOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API VpcOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * List of public address allocation ids to associate with ENIs that will be
     * created in Output VPC.
Must specify one for SINGLE_PIPELINE, two for STANDARD
     * channels
     */
    inline const Aws::Vector<Aws::String>& GetPublicAddressAllocationIds() const { return m_publicAddressAllocationIds; }
    inline bool PublicAddressAllocationIdsHasBeenSet() const { return m_publicAddressAllocationIdsHasBeenSet; }
    template<typename PublicAddressAllocationIdsT = Aws::Vector<Aws::String>>
    void SetPublicAddressAllocationIds(PublicAddressAllocationIdsT&& value) { m_publicAddressAllocationIdsHasBeenSet = true; m_publicAddressAllocationIds = std::forward<PublicAddressAllocationIdsT>(value); }
    template<typename PublicAddressAllocationIdsT = Aws::Vector<Aws::String>>
    VpcOutputSettings& WithPublicAddressAllocationIds(PublicAddressAllocationIdsT&& value) { SetPublicAddressAllocationIds(std::forward<PublicAddressAllocationIdsT>(value)); return *this;}
    template<typename PublicAddressAllocationIdsT = Aws::String>
    VpcOutputSettings& AddPublicAddressAllocationIds(PublicAddressAllocationIdsT&& value) { m_publicAddressAllocationIdsHasBeenSet = true; m_publicAddressAllocationIds.emplace_back(std::forward<PublicAddressAllocationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Output VPC network
     * interfaces.
If none are specified then the VPC default security group will be
     * used
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    VpcOutputSettings& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    VpcOutputSettings& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A list of VPC subnet IDs from the same VPC.
If STANDARD channel, subnet IDs must
     * be mapped to two unique availability zones (AZ).
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    VpcOutputSettings& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    VpcOutputSettings& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_publicAddressAllocationIds;
    bool m_publicAddressAllocationIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
