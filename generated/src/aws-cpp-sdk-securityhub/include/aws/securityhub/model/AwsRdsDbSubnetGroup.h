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
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroup() = default;
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the subnet group.</p>
     */
    inline const Aws::String& GetDbSubnetGroupName() const { return m_dbSubnetGroupName; }
    inline bool DbSubnetGroupNameHasBeenSet() const { return m_dbSubnetGroupNameHasBeenSet; }
    template<typename DbSubnetGroupNameT = Aws::String>
    void SetDbSubnetGroupName(DbSubnetGroupNameT&& value) { m_dbSubnetGroupNameHasBeenSet = true; m_dbSubnetGroupName = std::forward<DbSubnetGroupNameT>(value); }
    template<typename DbSubnetGroupNameT = Aws::String>
    AwsRdsDbSubnetGroup& WithDbSubnetGroupName(DbSubnetGroupNameT&& value) { SetDbSubnetGroupName(std::forward<DbSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the subnet group.</p>
     */
    inline const Aws::String& GetDbSubnetGroupDescription() const { return m_dbSubnetGroupDescription; }
    inline bool DbSubnetGroupDescriptionHasBeenSet() const { return m_dbSubnetGroupDescriptionHasBeenSet; }
    template<typename DbSubnetGroupDescriptionT = Aws::String>
    void SetDbSubnetGroupDescription(DbSubnetGroupDescriptionT&& value) { m_dbSubnetGroupDescriptionHasBeenSet = true; m_dbSubnetGroupDescription = std::forward<DbSubnetGroupDescriptionT>(value); }
    template<typename DbSubnetGroupDescriptionT = Aws::String>
    AwsRdsDbSubnetGroup& WithDbSubnetGroupDescription(DbSubnetGroupDescriptionT&& value) { SetDbSubnetGroupDescription(std::forward<DbSubnetGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID of the subnet group.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsRdsDbSubnetGroup& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the subnet group.</p>
     */
    inline const Aws::String& GetSubnetGroupStatus() const { return m_subnetGroupStatus; }
    inline bool SubnetGroupStatusHasBeenSet() const { return m_subnetGroupStatusHasBeenSet; }
    template<typename SubnetGroupStatusT = Aws::String>
    void SetSubnetGroupStatus(SubnetGroupStatusT&& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = std::forward<SubnetGroupStatusT>(value); }
    template<typename SubnetGroupStatusT = Aws::String>
    AwsRdsDbSubnetGroup& WithSubnetGroupStatus(SubnetGroupStatusT&& value) { SetSubnetGroupStatus(std::forward<SubnetGroupStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of subnets in the subnet group.</p>
     */
    inline const Aws::Vector<AwsRdsDbSubnetGroupSubnet>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<AwsRdsDbSubnetGroupSubnet>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<AwsRdsDbSubnetGroupSubnet>>
    AwsRdsDbSubnetGroup& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = AwsRdsDbSubnetGroupSubnet>
    AwsRdsDbSubnetGroup& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the subnet group.</p>
     */
    inline const Aws::String& GetDbSubnetGroupArn() const { return m_dbSubnetGroupArn; }
    inline bool DbSubnetGroupArnHasBeenSet() const { return m_dbSubnetGroupArnHasBeenSet; }
    template<typename DbSubnetGroupArnT = Aws::String>
    void SetDbSubnetGroupArn(DbSubnetGroupArnT&& value) { m_dbSubnetGroupArnHasBeenSet = true; m_dbSubnetGroupArn = std::forward<DbSubnetGroupArnT>(value); }
    template<typename DbSubnetGroupArnT = Aws::String>
    AwsRdsDbSubnetGroup& WithDbSubnetGroupArn(DbSubnetGroupArnT&& value) { SetDbSubnetGroupArn(std::forward<DbSubnetGroupArnT>(value)); return *this;}
    ///@}
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
