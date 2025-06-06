/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Subnet.h>
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
   * <p>Contains the details of an Amazon RDS DB subnet group.</p> <p>This data type
   * is used as a response element in the <code>DescribeDBSubnetGroups</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSubnetGroup">AWS
   * API Reference</a></p>
   */
  class DBSubnetGroup
  {
  public:
    AWS_RDS_API DBSubnetGroup() = default;
    AWS_RDS_API DBSubnetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBSubnetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the DB subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const { return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    template<typename DBSubnetGroupNameT = Aws::String>
    void SetDBSubnetGroupName(DBSubnetGroupNameT&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::forward<DBSubnetGroupNameT>(value); }
    template<typename DBSubnetGroupNameT = Aws::String>
    DBSubnetGroup& WithDBSubnetGroupName(DBSubnetGroupNameT&& value) { SetDBSubnetGroupName(std::forward<DBSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the description of the DB subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupDescription() const { return m_dBSubnetGroupDescription; }
    inline bool DBSubnetGroupDescriptionHasBeenSet() const { return m_dBSubnetGroupDescriptionHasBeenSet; }
    template<typename DBSubnetGroupDescriptionT = Aws::String>
    void SetDBSubnetGroupDescription(DBSubnetGroupDescriptionT&& value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription = std::forward<DBSubnetGroupDescriptionT>(value); }
    template<typename DBSubnetGroupDescriptionT = Aws::String>
    DBSubnetGroup& WithDBSubnetGroupDescription(DBSubnetGroupDescriptionT&& value) { SetDBSubnetGroupDescription(std::forward<DBSubnetGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the VpcId of the DB subnet group.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    DBSubnetGroup& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the DB subnet group.</p>
     */
    inline const Aws::String& GetSubnetGroupStatus() const { return m_subnetGroupStatus; }
    inline bool SubnetGroupStatusHasBeenSet() const { return m_subnetGroupStatusHasBeenSet; }
    template<typename SubnetGroupStatusT = Aws::String>
    void SetSubnetGroupStatus(SubnetGroupStatusT&& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = std::forward<SubnetGroupStatusT>(value); }
    template<typename SubnetGroupStatusT = Aws::String>
    DBSubnetGroup& WithSubnetGroupStatus(SubnetGroupStatusT&& value) { SetSubnetGroupStatus(std::forward<SubnetGroupStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of <code>Subnet</code> elements. The list of subnets shown
     * here might not reflect the current state of your VPC. For the most up-to-date
     * information, we recommend checking your VPC configuration directly.</p>
     */
    inline const Aws::Vector<Subnet>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Subnet>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Subnet>>
    DBSubnetGroup& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Subnet>
    DBSubnetGroup& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupArn() const { return m_dBSubnetGroupArn; }
    inline bool DBSubnetGroupArnHasBeenSet() const { return m_dBSubnetGroupArnHasBeenSet; }
    template<typename DBSubnetGroupArnT = Aws::String>
    void SetDBSubnetGroupArn(DBSubnetGroupArnT&& value) { m_dBSubnetGroupArnHasBeenSet = true; m_dBSubnetGroupArn = std::forward<DBSubnetGroupArnT>(value); }
    template<typename DBSubnetGroupArnT = Aws::String>
    DBSubnetGroup& WithDBSubnetGroupArn(DBSubnetGroupArnT&& value) { SetDBSubnetGroupArn(std::forward<DBSubnetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type of the DB subnet group.</p> <p>Valid values:</p> <ul> <li>
     * <p> <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul>
     * <p>A <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4
     * and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedNetworkTypes() const { return m_supportedNetworkTypes; }
    inline bool SupportedNetworkTypesHasBeenSet() const { return m_supportedNetworkTypesHasBeenSet; }
    template<typename SupportedNetworkTypesT = Aws::Vector<Aws::String>>
    void SetSupportedNetworkTypes(SupportedNetworkTypesT&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes = std::forward<SupportedNetworkTypesT>(value); }
    template<typename SupportedNetworkTypesT = Aws::Vector<Aws::String>>
    DBSubnetGroup& WithSupportedNetworkTypes(SupportedNetworkTypesT&& value) { SetSupportedNetworkTypes(std::forward<SupportedNetworkTypesT>(value)); return *this;}
    template<typename SupportedNetworkTypesT = Aws::String>
    DBSubnetGroup& AddSupportedNetworkTypes(SupportedNetworkTypesT&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.emplace_back(std::forward<SupportedNetworkTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::String m_dBSubnetGroupDescription;
    bool m_dBSubnetGroupDescriptionHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetGroupStatus;
    bool m_subnetGroupStatusHasBeenSet = false;

    Aws::Vector<Subnet> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::String m_dBSubnetGroupArn;
    bool m_dBSubnetGroupArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedNetworkTypes;
    bool m_supportedNetworkTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
