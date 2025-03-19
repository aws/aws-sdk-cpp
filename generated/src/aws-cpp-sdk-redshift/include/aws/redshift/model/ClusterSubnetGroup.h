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
    AWS_REDSHIFT_API ClusterSubnetGroup() = default;
    AWS_REDSHIFT_API ClusterSubnetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterSubnetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the cluster subnet group.</p>
     */
    inline const Aws::String& GetClusterSubnetGroupName() const { return m_clusterSubnetGroupName; }
    inline bool ClusterSubnetGroupNameHasBeenSet() const { return m_clusterSubnetGroupNameHasBeenSet; }
    template<typename ClusterSubnetGroupNameT = Aws::String>
    void SetClusterSubnetGroupName(ClusterSubnetGroupNameT&& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = std::forward<ClusterSubnetGroupNameT>(value); }
    template<typename ClusterSubnetGroupNameT = Aws::String>
    ClusterSubnetGroup& WithClusterSubnetGroupName(ClusterSubnetGroupNameT&& value) { SetClusterSubnetGroupName(std::forward<ClusterSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the cluster subnet group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ClusterSubnetGroup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID of the cluster subnet group.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    ClusterSubnetGroup& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cluster subnet group. Possible values are
     * <code>Complete</code>, <code>Incomplete</code> and <code>Invalid</code>. </p>
     */
    inline const Aws::String& GetSubnetGroupStatus() const { return m_subnetGroupStatus; }
    inline bool SubnetGroupStatusHasBeenSet() const { return m_subnetGroupStatusHasBeenSet; }
    template<typename SubnetGroupStatusT = Aws::String>
    void SetSubnetGroupStatus(SubnetGroupStatusT&& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = std::forward<SubnetGroupStatusT>(value); }
    template<typename SubnetGroupStatusT = Aws::String>
    ClusterSubnetGroup& WithSubnetGroupStatus(SubnetGroupStatusT&& value) { SetSubnetGroupStatus(std::forward<SubnetGroupStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the VPC <a>Subnet</a> elements. </p>
     */
    inline const Aws::Vector<Subnet>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Subnet>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Subnet>>
    ClusterSubnetGroup& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Subnet>
    ClusterSubnetGroup& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of tags for the cluster subnet group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ClusterSubnetGroup& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ClusterSubnetGroup& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address types supported by this cluster subnet group. Possible values
     * are <code>ipv4</code> and <code>dualstack</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedClusterIpAddressTypes() const { return m_supportedClusterIpAddressTypes; }
    inline bool SupportedClusterIpAddressTypesHasBeenSet() const { return m_supportedClusterIpAddressTypesHasBeenSet; }
    template<typename SupportedClusterIpAddressTypesT = Aws::Vector<Aws::String>>
    void SetSupportedClusterIpAddressTypes(SupportedClusterIpAddressTypesT&& value) { m_supportedClusterIpAddressTypesHasBeenSet = true; m_supportedClusterIpAddressTypes = std::forward<SupportedClusterIpAddressTypesT>(value); }
    template<typename SupportedClusterIpAddressTypesT = Aws::Vector<Aws::String>>
    ClusterSubnetGroup& WithSupportedClusterIpAddressTypes(SupportedClusterIpAddressTypesT&& value) { SetSupportedClusterIpAddressTypes(std::forward<SupportedClusterIpAddressTypesT>(value)); return *this;}
    template<typename SupportedClusterIpAddressTypesT = Aws::String>
    ClusterSubnetGroup& AddSupportedClusterIpAddressTypes(SupportedClusterIpAddressTypesT&& value) { m_supportedClusterIpAddressTypesHasBeenSet = true; m_supportedClusterIpAddressTypes.emplace_back(std::forward<SupportedClusterIpAddressTypesT>(value)); return *this; }
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
