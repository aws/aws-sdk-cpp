/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/EC2SecurityGroup.h>
#include <aws/rds/model/IPRange.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the details for an Amazon RDS DB security group.</p> <p>This data
   * type is used as a response element in the <code>DescribeDBSecurityGroups</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSecurityGroup">AWS
   * API Reference</a></p>
   */
  class DBSecurityGroup
  {
  public:
    AWS_RDS_API DBSecurityGroup() = default;
    AWS_RDS_API DBSecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBSecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Provides the Amazon Web Services ID of the owner of a specific DB security
     * group.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    DBSecurityGroup& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline const Aws::String& GetDBSecurityGroupName() const { return m_dBSecurityGroupName; }
    inline bool DBSecurityGroupNameHasBeenSet() const { return m_dBSecurityGroupNameHasBeenSet; }
    template<typename DBSecurityGroupNameT = Aws::String>
    void SetDBSecurityGroupName(DBSecurityGroupNameT&& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = std::forward<DBSecurityGroupNameT>(value); }
    template<typename DBSecurityGroupNameT = Aws::String>
    DBSecurityGroup& WithDBSecurityGroupName(DBSecurityGroupNameT&& value) { SetDBSecurityGroupName(std::forward<DBSecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline const Aws::String& GetDBSecurityGroupDescription() const { return m_dBSecurityGroupDescription; }
    inline bool DBSecurityGroupDescriptionHasBeenSet() const { return m_dBSecurityGroupDescriptionHasBeenSet; }
    template<typename DBSecurityGroupDescriptionT = Aws::String>
    void SetDBSecurityGroupDescription(DBSecurityGroupDescriptionT&& value) { m_dBSecurityGroupDescriptionHasBeenSet = true; m_dBSecurityGroupDescription = std::forward<DBSecurityGroupDescriptionT>(value); }
    template<typename DBSecurityGroupDescriptionT = Aws::String>
    DBSecurityGroup& WithDBSecurityGroupDescription(DBSecurityGroupDescriptionT&& value) { SetDBSecurityGroupDescription(std::forward<DBSecurityGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the VpcId of the DB security group.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    DBSecurityGroup& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of <code>EC2SecurityGroup</code> elements.</p>
     */
    inline const Aws::Vector<EC2SecurityGroup>& GetEC2SecurityGroups() const { return m_eC2SecurityGroups; }
    inline bool EC2SecurityGroupsHasBeenSet() const { return m_eC2SecurityGroupsHasBeenSet; }
    template<typename EC2SecurityGroupsT = Aws::Vector<EC2SecurityGroup>>
    void SetEC2SecurityGroups(EC2SecurityGroupsT&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups = std::forward<EC2SecurityGroupsT>(value); }
    template<typename EC2SecurityGroupsT = Aws::Vector<EC2SecurityGroup>>
    DBSecurityGroup& WithEC2SecurityGroups(EC2SecurityGroupsT&& value) { SetEC2SecurityGroups(std::forward<EC2SecurityGroupsT>(value)); return *this;}
    template<typename EC2SecurityGroupsT = EC2SecurityGroup>
    DBSecurityGroup& AddEC2SecurityGroups(EC2SecurityGroupsT&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups.emplace_back(std::forward<EC2SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains a list of <code>IPRange</code> elements.</p>
     */
    inline const Aws::Vector<IPRange>& GetIPRanges() const { return m_iPRanges; }
    inline bool IPRangesHasBeenSet() const { return m_iPRangesHasBeenSet; }
    template<typename IPRangesT = Aws::Vector<IPRange>>
    void SetIPRanges(IPRangesT&& value) { m_iPRangesHasBeenSet = true; m_iPRanges = std::forward<IPRangesT>(value); }
    template<typename IPRangesT = Aws::Vector<IPRange>>
    DBSecurityGroup& WithIPRanges(IPRangesT&& value) { SetIPRanges(std::forward<IPRangesT>(value)); return *this;}
    template<typename IPRangesT = IPRange>
    DBSecurityGroup& AddIPRanges(IPRangesT&& value) { m_iPRangesHasBeenSet = true; m_iPRanges.emplace_back(std::forward<IPRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB security group.</p>
     */
    inline const Aws::String& GetDBSecurityGroupArn() const { return m_dBSecurityGroupArn; }
    inline bool DBSecurityGroupArnHasBeenSet() const { return m_dBSecurityGroupArnHasBeenSet; }
    template<typename DBSecurityGroupArnT = Aws::String>
    void SetDBSecurityGroupArn(DBSecurityGroupArnT&& value) { m_dBSecurityGroupArnHasBeenSet = true; m_dBSecurityGroupArn = std::forward<DBSecurityGroupArnT>(value); }
    template<typename DBSecurityGroupArnT = Aws::String>
    DBSecurityGroup& WithDBSecurityGroupArn(DBSecurityGroupArnT&& value) { SetDBSecurityGroupArn(std::forward<DBSecurityGroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_dBSecurityGroupName;
    bool m_dBSecurityGroupNameHasBeenSet = false;

    Aws::String m_dBSecurityGroupDescription;
    bool m_dBSecurityGroupDescriptionHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<EC2SecurityGroup> m_eC2SecurityGroups;
    bool m_eC2SecurityGroupsHasBeenSet = false;

    Aws::Vector<IPRange> m_iPRanges;
    bool m_iPRangesHasBeenSet = false;

    Aws::String m_dBSecurityGroupArn;
    bool m_dBSecurityGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
