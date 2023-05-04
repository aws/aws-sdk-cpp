/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/Tag.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class CreateVPCConnectionRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateVPCConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVPCConnection"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Web Services account ID of the account where you want to create a
     * new VPC connection.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the account where you want to create a
     * new VPC connection.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the account where you want to create a
     * new VPC connection.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the account where you want to create a
     * new VPC connection.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the account where you want to create a
     * new VPC connection.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the account where you want to create a
     * new VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account where you want to create a
     * new VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account where you want to create a
     * new VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetVPCConnectionId() const{ return m_vPCConnectionId; }

    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline bool VPCConnectionIdHasBeenSet() const { return m_vPCConnectionIdHasBeenSet; }

    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline void SetVPCConnectionId(const Aws::String& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = value; }

    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline void SetVPCConnectionId(Aws::String&& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = std::move(value); }

    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline void SetVPCConnectionId(const char* value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId.assign(value); }

    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline CreateVPCConnectionRequest& WithVPCConnectionId(const Aws::String& value) { SetVPCConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline CreateVPCConnectionRequest& WithVPCConnectionId(Aws::String&& value) { SetVPCConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline CreateVPCConnectionRequest& WithVPCConnectionId(const char* value) { SetVPCConnectionId(value); return *this;}


    /**
     * <p>The display name for the VPC connection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The display name for the VPC connection.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The display name for the VPC connection.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The display name for the VPC connection.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The display name for the VPC connection.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The display name for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The display name for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The display name for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of subnet IDs for the VPC connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of subnet IDs for the VPC connection.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of subnet IDs for the VPC connection.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of subnet IDs for the VPC connection.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of subnet IDs for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of subnet IDs for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of subnet IDs for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of subnet IDs for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnet IDs for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A list of security group IDs for the VPC connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of security group IDs for the VPC connection.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A list of security group IDs for the VPC connection.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A list of security group IDs for the VPC connection.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of security group IDs for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of security group IDs for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of security group IDs for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of security group IDs for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of security group IDs for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>A list of IP addresses of DNS resolver endpoints for the VPC connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsResolvers() const{ return m_dnsResolvers; }

    /**
     * <p>A list of IP addresses of DNS resolver endpoints for the VPC connection.</p>
     */
    inline bool DnsResolversHasBeenSet() const { return m_dnsResolversHasBeenSet; }

    /**
     * <p>A list of IP addresses of DNS resolver endpoints for the VPC connection.</p>
     */
    inline void SetDnsResolvers(const Aws::Vector<Aws::String>& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers = value; }

    /**
     * <p>A list of IP addresses of DNS resolver endpoints for the VPC connection.</p>
     */
    inline void SetDnsResolvers(Aws::Vector<Aws::String>&& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers = std::move(value); }

    /**
     * <p>A list of IP addresses of DNS resolver endpoints for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithDnsResolvers(const Aws::Vector<Aws::String>& value) { SetDnsResolvers(value); return *this;}

    /**
     * <p>A list of IP addresses of DNS resolver endpoints for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithDnsResolvers(Aws::Vector<Aws::String>&& value) { SetDnsResolvers(std::move(value)); return *this;}

    /**
     * <p>A list of IP addresses of DNS resolver endpoints for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& AddDnsResolvers(const Aws::String& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(value); return *this; }

    /**
     * <p>A list of IP addresses of DNS resolver endpoints for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& AddDnsResolvers(Aws::String&& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IP addresses of DNS resolver endpoints for the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& AddDnsResolvers(const char* value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(value); return *this; }


    /**
     * <p>The IAM role to associate with the VPC connection.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role to associate with the VPC connection.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role to associate with the VPC connection.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role to associate with the VPC connection.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role to associate with the VPC connection.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role to associate with the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role to associate with the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role to associate with the VPC connection.</p>
     */
    inline CreateVPCConnectionRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A map of the key-value pairs for the resource tag or tags assigned to the VPC
     * connection.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of the key-value pairs for the resource tag or tags assigned to the VPC
     * connection.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map of the key-value pairs for the resource tag or tags assigned to the VPC
     * connection.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of the key-value pairs for the resource tag or tags assigned to the VPC
     * connection.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map of the key-value pairs for the resource tag or tags assigned to the VPC
     * connection.</p>
     */
    inline CreateVPCConnectionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of the key-value pairs for the resource tag or tags assigned to the VPC
     * connection.</p>
     */
    inline CreateVPCConnectionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of the key-value pairs for the resource tag or tags assigned to the VPC
     * connection.</p>
     */
    inline CreateVPCConnectionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A map of the key-value pairs for the resource tag or tags assigned to the VPC
     * connection.</p>
     */
    inline CreateVPCConnectionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
