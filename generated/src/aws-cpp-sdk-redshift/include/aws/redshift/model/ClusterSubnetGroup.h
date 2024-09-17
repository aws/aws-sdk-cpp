/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Subnet.h>
#include <aws/redshift/model/Tag.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a subnet group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterSubnetGroup">AWS
   * API Reference</a></p>
   */
  class ClusterSubnetGroup
  {
  public:
    AWS_REDSHIFT_API ClusterSubnetGroup();
    AWS_REDSHIFT_API ClusterSubnetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterSubnetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the cluster subnet group.</p>
     */
    inline const Aws::String& GetClusterSubnetGroupName() const{ return m_clusterSubnetGroupName; }
    inline bool ClusterSubnetGroupNameHasBeenSet() const { return m_clusterSubnetGroupNameHasBeenSet; }
    inline void SetClusterSubnetGroupName(const Aws::String& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = value; }
    inline void SetClusterSubnetGroupName(Aws::String&& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = std::move(value); }
    inline void SetClusterSubnetGroupName(const char* value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName.assign(value); }
    inline ClusterSubnetGroup& WithClusterSubnetGroupName(const Aws::String& value) { SetClusterSubnetGroupName(value); return *this;}
    inline ClusterSubnetGroup& WithClusterSubnetGroupName(Aws::String&& value) { SetClusterSubnetGroupName(std::move(value)); return *this;}
    inline ClusterSubnetGroup& WithClusterSubnetGroupName(const char* value) { SetClusterSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the cluster subnet group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ClusterSubnetGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ClusterSubnetGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ClusterSubnetGroup& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID of the cluster subnet group.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline ClusterSubnetGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline ClusterSubnetGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline ClusterSubnetGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cluster subnet group. Possible values are
     * <code>Complete</code>, <code>Incomplete</code> and <code>Invalid</code>. </p>
     */
    inline const Aws::String& GetSubnetGroupStatus() const{ return m_subnetGroupStatus; }
    inline bool SubnetGroupStatusHasBeenSet() const { return m_subnetGroupStatusHasBeenSet; }
    inline void SetSubnetGroupStatus(const Aws::String& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = value; }
    inline void SetSubnetGroupStatus(Aws::String&& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = std::move(value); }
    inline void SetSubnetGroupStatus(const char* value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus.assign(value); }
    inline ClusterSubnetGroup& WithSubnetGroupStatus(const Aws::String& value) { SetSubnetGroupStatus(value); return *this;}
    inline ClusterSubnetGroup& WithSubnetGroupStatus(Aws::String&& value) { SetSubnetGroupStatus(std::move(value)); return *this;}
    inline ClusterSubnetGroup& WithSubnetGroupStatus(const char* value) { SetSubnetGroupStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the VPC <a>Subnet</a> elements. </p>
     */
    inline const Aws::Vector<Subnet>& GetSubnets() const{ return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    inline void SetSubnets(const Aws::Vector<Subnet>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }
    inline void SetSubnets(Aws::Vector<Subnet>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }
    inline ClusterSubnetGroup& WithSubnets(const Aws::Vector<Subnet>& value) { SetSubnets(value); return *this;}
    inline ClusterSubnetGroup& WithSubnets(Aws::Vector<Subnet>&& value) { SetSubnets(std::move(value)); return *this;}
    inline ClusterSubnetGroup& AddSubnets(const Subnet& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    inline ClusterSubnetGroup& AddSubnets(Subnet&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of tags for the cluster subnet group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ClusterSubnetGroup& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ClusterSubnetGroup& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ClusterSubnetGroup& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ClusterSubnetGroup& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address types supported by this cluster subnet group. Possible values
     * are <code>ipv4</code> and <code>dualstack</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedClusterIpAddressTypes() const{ return m_supportedClusterIpAddressTypes; }
    inline bool SupportedClusterIpAddressTypesHasBeenSet() const { return m_supportedClusterIpAddressTypesHasBeenSet; }
    inline void SetSupportedClusterIpAddressTypes(const Aws::Vector<Aws::String>& value) { m_supportedClusterIpAddressTypesHasBeenSet = true; m_supportedClusterIpAddressTypes = value; }
    inline void SetSupportedClusterIpAddressTypes(Aws::Vector<Aws::String>&& value) { m_supportedClusterIpAddressTypesHasBeenSet = true; m_supportedClusterIpAddressTypes = std::move(value); }
    inline ClusterSubnetGroup& WithSupportedClusterIpAddressTypes(const Aws::Vector<Aws::String>& value) { SetSupportedClusterIpAddressTypes(value); return *this;}
    inline ClusterSubnetGroup& WithSupportedClusterIpAddressTypes(Aws::Vector<Aws::String>&& value) { SetSupportedClusterIpAddressTypes(std::move(value)); return *this;}
    inline ClusterSubnetGroup& AddSupportedClusterIpAddressTypes(const Aws::String& value) { m_supportedClusterIpAddressTypesHasBeenSet = true; m_supportedClusterIpAddressTypes.push_back(value); return *this; }
    inline ClusterSubnetGroup& AddSupportedClusterIpAddressTypes(Aws::String&& value) { m_supportedClusterIpAddressTypesHasBeenSet = true; m_supportedClusterIpAddressTypes.push_back(std::move(value)); return *this; }
    inline ClusterSubnetGroup& AddSupportedClusterIpAddressTypes(const char* value) { m_supportedClusterIpAddressTypesHasBeenSet = true; m_supportedClusterIpAddressTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_clusterSubnetGroupName;
    bool m_clusterSubnetGroupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetGroupStatus;
    bool m_subnetGroupStatusHasBeenSet = false;

    Aws::Vector<Subnet> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedClusterIpAddressTypes;
    bool m_supportedClusterIpAddressTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
