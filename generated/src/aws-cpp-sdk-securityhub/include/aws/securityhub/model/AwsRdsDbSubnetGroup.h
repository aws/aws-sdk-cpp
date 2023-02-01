/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsRdsDbSubnetGroupSubnet.h>
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
   * <p>Information about the subnet group for the database instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbSubnetGroup">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbSubnetGroup
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroup();
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the subnet group.</p>
     */
    inline const Aws::String& GetDbSubnetGroupName() const{ return m_dbSubnetGroupName; }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline bool DbSubnetGroupNameHasBeenSet() const { return m_dbSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline void SetDbSubnetGroupName(const Aws::String& value) { m_dbSubnetGroupNameHasBeenSet = true; m_dbSubnetGroupName = value; }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline void SetDbSubnetGroupName(Aws::String&& value) { m_dbSubnetGroupNameHasBeenSet = true; m_dbSubnetGroupName = std::move(value); }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline void SetDbSubnetGroupName(const char* value) { m_dbSubnetGroupNameHasBeenSet = true; m_dbSubnetGroupName.assign(value); }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithDbSubnetGroupName(const Aws::String& value) { SetDbSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithDbSubnetGroupName(Aws::String&& value) { SetDbSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithDbSubnetGroupName(const char* value) { SetDbSubnetGroupName(value); return *this;}


    /**
     * <p>The description of the subnet group.</p>
     */
    inline const Aws::String& GetDbSubnetGroupDescription() const{ return m_dbSubnetGroupDescription; }

    /**
     * <p>The description of the subnet group.</p>
     */
    inline bool DbSubnetGroupDescriptionHasBeenSet() const { return m_dbSubnetGroupDescriptionHasBeenSet; }

    /**
     * <p>The description of the subnet group.</p>
     */
    inline void SetDbSubnetGroupDescription(const Aws::String& value) { m_dbSubnetGroupDescriptionHasBeenSet = true; m_dbSubnetGroupDescription = value; }

    /**
     * <p>The description of the subnet group.</p>
     */
    inline void SetDbSubnetGroupDescription(Aws::String&& value) { m_dbSubnetGroupDescriptionHasBeenSet = true; m_dbSubnetGroupDescription = std::move(value); }

    /**
     * <p>The description of the subnet group.</p>
     */
    inline void SetDbSubnetGroupDescription(const char* value) { m_dbSubnetGroupDescriptionHasBeenSet = true; m_dbSubnetGroupDescription.assign(value); }

    /**
     * <p>The description of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithDbSubnetGroupDescription(const Aws::String& value) { SetDbSubnetGroupDescription(value); return *this;}

    /**
     * <p>The description of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithDbSubnetGroupDescription(Aws::String&& value) { SetDbSubnetGroupDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithDbSubnetGroupDescription(const char* value) { SetDbSubnetGroupDescription(value); return *this;}


    /**
     * <p>The VPC ID of the subnet group.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC ID of the subnet group.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC ID of the subnet group.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC ID of the subnet group.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC ID of the subnet group.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC ID of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC ID of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC ID of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The status of the subnet group.</p>
     */
    inline const Aws::String& GetSubnetGroupStatus() const{ return m_subnetGroupStatus; }

    /**
     * <p>The status of the subnet group.</p>
     */
    inline bool SubnetGroupStatusHasBeenSet() const { return m_subnetGroupStatusHasBeenSet; }

    /**
     * <p>The status of the subnet group.</p>
     */
    inline void SetSubnetGroupStatus(const Aws::String& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = value; }

    /**
     * <p>The status of the subnet group.</p>
     */
    inline void SetSubnetGroupStatus(Aws::String&& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = std::move(value); }

    /**
     * <p>The status of the subnet group.</p>
     */
    inline void SetSubnetGroupStatus(const char* value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus.assign(value); }

    /**
     * <p>The status of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithSubnetGroupStatus(const Aws::String& value) { SetSubnetGroupStatus(value); return *this;}

    /**
     * <p>The status of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithSubnetGroupStatus(Aws::String&& value) { SetSubnetGroupStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithSubnetGroupStatus(const char* value) { SetSubnetGroupStatus(value); return *this;}


    /**
     * <p>A list of subnets in the subnet group.</p>
     */
    inline const Aws::Vector<AwsRdsDbSubnetGroupSubnet>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>A list of subnets in the subnet group.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>A list of subnets in the subnet group.</p>
     */
    inline void SetSubnets(const Aws::Vector<AwsRdsDbSubnetGroupSubnet>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>A list of subnets in the subnet group.</p>
     */
    inline void SetSubnets(Aws::Vector<AwsRdsDbSubnetGroupSubnet>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>A list of subnets in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithSubnets(const Aws::Vector<AwsRdsDbSubnetGroupSubnet>& value) { SetSubnets(value); return *this;}

    /**
     * <p>A list of subnets in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithSubnets(Aws::Vector<AwsRdsDbSubnetGroupSubnet>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>A list of subnets in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& AddSubnets(const AwsRdsDbSubnetGroupSubnet& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>A list of subnets in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& AddSubnets(AwsRdsDbSubnetGroupSubnet&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the subnet group.</p>
     */
    inline const Aws::String& GetDbSubnetGroupArn() const{ return m_dbSubnetGroupArn; }

    /**
     * <p>The ARN of the subnet group.</p>
     */
    inline bool DbSubnetGroupArnHasBeenSet() const { return m_dbSubnetGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the subnet group.</p>
     */
    inline void SetDbSubnetGroupArn(const Aws::String& value) { m_dbSubnetGroupArnHasBeenSet = true; m_dbSubnetGroupArn = value; }

    /**
     * <p>The ARN of the subnet group.</p>
     */
    inline void SetDbSubnetGroupArn(Aws::String&& value) { m_dbSubnetGroupArnHasBeenSet = true; m_dbSubnetGroupArn = std::move(value); }

    /**
     * <p>The ARN of the subnet group.</p>
     */
    inline void SetDbSubnetGroupArn(const char* value) { m_dbSubnetGroupArnHasBeenSet = true; m_dbSubnetGroupArn.assign(value); }

    /**
     * <p>The ARN of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithDbSubnetGroupArn(const Aws::String& value) { SetDbSubnetGroupArn(value); return *this;}

    /**
     * <p>The ARN of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithDbSubnetGroupArn(Aws::String&& value) { SetDbSubnetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroup& WithDbSubnetGroupArn(const char* value) { SetDbSubnetGroupArn(value); return *this;}

  private:

    Aws::String m_dbSubnetGroupName;
    bool m_dbSubnetGroupNameHasBeenSet = false;

    Aws::String m_dbSubnetGroupDescription;
    bool m_dbSubnetGroupDescriptionHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetGroupStatus;
    bool m_subnetGroupStatusHasBeenSet = false;

    Aws::Vector<AwsRdsDbSubnetGroupSubnet> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::String m_dbSubnetGroupArn;
    bool m_dbSubnetGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
