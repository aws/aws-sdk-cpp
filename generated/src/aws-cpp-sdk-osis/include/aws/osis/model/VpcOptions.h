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
    AWS_OSIS_API VpcOptions();
    AWS_OSIS_API VpcOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API VpcOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of subnet IDs associated with the VPC endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline VpcOptions& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline VpcOptions& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline VpcOptions& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline VpcOptions& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline VpcOptions& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of security groups associated with the VPC endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline VpcOptions& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline VpcOptions& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline VpcOptions& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline VpcOptions& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline VpcOptions& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Options for attaching a VPC to a pipeline.</p>
     */
    inline const VpcAttachmentOptions& GetVpcAttachmentOptions() const{ return m_vpcAttachmentOptions; }
    inline bool VpcAttachmentOptionsHasBeenSet() const { return m_vpcAttachmentOptionsHasBeenSet; }
    inline void SetVpcAttachmentOptions(const VpcAttachmentOptions& value) { m_vpcAttachmentOptionsHasBeenSet = true; m_vpcAttachmentOptions = value; }
    inline void SetVpcAttachmentOptions(VpcAttachmentOptions&& value) { m_vpcAttachmentOptionsHasBeenSet = true; m_vpcAttachmentOptions = std::move(value); }
    inline VpcOptions& WithVpcAttachmentOptions(const VpcAttachmentOptions& value) { SetVpcAttachmentOptions(value); return *this;}
    inline VpcOptions& WithVpcAttachmentOptions(VpcAttachmentOptions&& value) { SetVpcAttachmentOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines whether you or Amazon OpenSearch Ingestion service create and manage
     * the VPC endpoint configured for the pipeline.</p>
     */
    inline const VpcEndpointManagement& GetVpcEndpointManagement() const{ return m_vpcEndpointManagement; }
    inline bool VpcEndpointManagementHasBeenSet() const { return m_vpcEndpointManagementHasBeenSet; }
    inline void SetVpcEndpointManagement(const VpcEndpointManagement& value) { m_vpcEndpointManagementHasBeenSet = true; m_vpcEndpointManagement = value; }
    inline void SetVpcEndpointManagement(VpcEndpointManagement&& value) { m_vpcEndpointManagementHasBeenSet = true; m_vpcEndpointManagement = std::move(value); }
    inline VpcOptions& WithVpcEndpointManagement(const VpcEndpointManagement& value) { SetVpcEndpointManagement(value); return *this;}
    inline VpcOptions& WithVpcEndpointManagement(VpcEndpointManagement&& value) { SetVpcEndpointManagement(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    VpcAttachmentOptions m_vpcAttachmentOptions;
    bool m_vpcAttachmentOptionsHasBeenSet = false;

    VpcEndpointManagement m_vpcEndpointManagement;
    bool m_vpcEndpointManagementHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
