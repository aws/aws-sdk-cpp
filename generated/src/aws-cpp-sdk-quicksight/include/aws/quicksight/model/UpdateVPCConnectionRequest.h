/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateVPCConnectionRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateVPCConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVPCConnection"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the account that contains the VPC
     * connection that you want to update.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline UpdateVPCConnectionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateVPCConnectionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateVPCConnectionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC connection that you're updating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetVPCConnectionId() const{ return m_vPCConnectionId; }
    inline bool VPCConnectionIdHasBeenSet() const { return m_vPCConnectionIdHasBeenSet; }
    inline void SetVPCConnectionId(const Aws::String& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = value; }
    inline void SetVPCConnectionId(Aws::String&& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = std::move(value); }
    inline void SetVPCConnectionId(const char* value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId.assign(value); }
    inline UpdateVPCConnectionRequest& WithVPCConnectionId(const Aws::String& value) { SetVPCConnectionId(value); return *this;}
    inline UpdateVPCConnectionRequest& WithVPCConnectionId(Aws::String&& value) { SetVPCConnectionId(std::move(value)); return *this;}
    inline UpdateVPCConnectionRequest& WithVPCConnectionId(const char* value) { SetVPCConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the VPC connection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateVPCConnectionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateVPCConnectionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateVPCConnectionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of subnet IDs for the VPC connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline UpdateVPCConnectionRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline UpdateVPCConnectionRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline UpdateVPCConnectionRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline UpdateVPCConnectionRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline UpdateVPCConnectionRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of security group IDs for the VPC connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline UpdateVPCConnectionRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline UpdateVPCConnectionRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline UpdateVPCConnectionRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline UpdateVPCConnectionRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline UpdateVPCConnectionRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IP addresses of DNS resolver endpoints for the VPC connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsResolvers() const{ return m_dnsResolvers; }
    inline bool DnsResolversHasBeenSet() const { return m_dnsResolversHasBeenSet; }
    inline void SetDnsResolvers(const Aws::Vector<Aws::String>& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers = value; }
    inline void SetDnsResolvers(Aws::Vector<Aws::String>&& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers = std::move(value); }
    inline UpdateVPCConnectionRequest& WithDnsResolvers(const Aws::Vector<Aws::String>& value) { SetDnsResolvers(value); return *this;}
    inline UpdateVPCConnectionRequest& WithDnsResolvers(Aws::Vector<Aws::String>&& value) { SetDnsResolvers(std::move(value)); return *this;}
    inline UpdateVPCConnectionRequest& AddDnsResolvers(const Aws::String& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(value); return *this; }
    inline UpdateVPCConnectionRequest& AddDnsResolvers(Aws::String&& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(std::move(value)); return *this; }
    inline UpdateVPCConnectionRequest& AddDnsResolvers(const char* value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An IAM role associated with the VPC connection.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateVPCConnectionRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateVPCConnectionRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateVPCConnectionRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_vPCConnectionId;
    bool m_vPCConnectionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsResolvers;
    bool m_dnsResolversHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
