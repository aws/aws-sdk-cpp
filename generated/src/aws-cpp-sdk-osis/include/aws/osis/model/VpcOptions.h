/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/osis/model/VpcAttachmentOptions.h>
#include <aws/osis/model/VpcEndpointManagement.h>
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
namespace OSIS
{
namespace Model
{

  /**
   * <p>Options that specify the subnets and security groups for an OpenSearch
   * Ingestion VPC endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/VpcOptions">AWS API
   * Reference</a></p>
   */
  class VpcOptions
  {
  public:
    AWS_OSIS_API VpcOptions() = default;
    AWS_OSIS_API VpcOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API VpcOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of subnet IDs associated with the VPC endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    VpcOptions& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    VpcOptions& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of security groups associated with the VPC endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    VpcOptions& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    VpcOptions& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Options for attaching a VPC to a pipeline.</p>
     */
    inline const VpcAttachmentOptions& GetVpcAttachmentOptions() const { return m_vpcAttachmentOptions; }
    inline bool VpcAttachmentOptionsHasBeenSet() const { return m_vpcAttachmentOptionsHasBeenSet; }
    template<typename VpcAttachmentOptionsT = VpcAttachmentOptions>
    void SetVpcAttachmentOptions(VpcAttachmentOptionsT&& value) { m_vpcAttachmentOptionsHasBeenSet = true; m_vpcAttachmentOptions = std::forward<VpcAttachmentOptionsT>(value); }
    template<typename VpcAttachmentOptionsT = VpcAttachmentOptions>
    VpcOptions& WithVpcAttachmentOptions(VpcAttachmentOptionsT&& value) { SetVpcAttachmentOptions(std::forward<VpcAttachmentOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines whether you or Amazon OpenSearch Ingestion service create and manage
     * the VPC endpoint configured for the pipeline.</p>
     */
    inline VpcEndpointManagement GetVpcEndpointManagement() const { return m_vpcEndpointManagement; }
    inline bool VpcEndpointManagementHasBeenSet() const { return m_vpcEndpointManagementHasBeenSet; }
    inline void SetVpcEndpointManagement(VpcEndpointManagement value) { m_vpcEndpointManagementHasBeenSet = true; m_vpcEndpointManagement = value; }
    inline VpcOptions& WithVpcEndpointManagement(VpcEndpointManagement value) { SetVpcEndpointManagement(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    VpcAttachmentOptions m_vpcAttachmentOptions;
    bool m_vpcAttachmentOptionsHasBeenSet = false;

    VpcEndpointManagement m_vpcEndpointManagement{VpcEndpointManagement::NOT_SET};
    bool m_vpcEndpointManagementHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
