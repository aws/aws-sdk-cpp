/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class DescribeVpcEndpointAssociationRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API DescribeVpcEndpointAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcEndpointAssociation"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a VPC endpoint association.</p>
     */
    inline const Aws::String& GetVpcEndpointAssociationArn() const { return m_vpcEndpointAssociationArn; }
    inline bool VpcEndpointAssociationArnHasBeenSet() const { return m_vpcEndpointAssociationArnHasBeenSet; }
    template<typename VpcEndpointAssociationArnT = Aws::String>
    void SetVpcEndpointAssociationArn(VpcEndpointAssociationArnT&& value) { m_vpcEndpointAssociationArnHasBeenSet = true; m_vpcEndpointAssociationArn = std::forward<VpcEndpointAssociationArnT>(value); }
    template<typename VpcEndpointAssociationArnT = Aws::String>
    DescribeVpcEndpointAssociationRequest& WithVpcEndpointAssociationArn(VpcEndpointAssociationArnT&& value) { SetVpcEndpointAssociationArn(std::forward<VpcEndpointAssociationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcEndpointAssociationArn;
    bool m_vpcEndpointAssociationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
