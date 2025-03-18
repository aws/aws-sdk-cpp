/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/EC2SecurityGroup.h>
#include <aws/redshift/model/IPRange.h>
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
   * <p>Describes a security group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterSecurityGroup">AWS
   * API Reference</a></p>
   */
  class ClusterSecurityGroup
  {
  public:
    AWS_REDSHIFT_API ClusterSecurityGroup() = default;
    AWS_REDSHIFT_API ClusterSecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterSecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the cluster security group to which the operation was
     * applied.</p>
     */
    inline const Aws::String& GetClusterSecurityGroupName() const { return m_clusterSecurityGroupName; }
    inline bool ClusterSecurityGroupNameHasBeenSet() const { return m_clusterSecurityGroupNameHasBeenSet; }
    template<typename ClusterSecurityGroupNameT = Aws::String>
    void SetClusterSecurityGroupName(ClusterSecurityGroupNameT&& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = std::forward<ClusterSecurityGroupNameT>(value); }
    template<typename ClusterSecurityGroupNameT = Aws::String>
    ClusterSecurityGroup& WithClusterSecurityGroupName(ClusterSecurityGroupNameT&& value) { SetClusterSecurityGroupName(std::forward<ClusterSecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the security group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ClusterSecurityGroup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of EC2 security groups that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline const Aws::Vector<EC2SecurityGroup>& GetEC2SecurityGroups() const { return m_eC2SecurityGroups; }
    inline bool EC2SecurityGroupsHasBeenSet() const { return m_eC2SecurityGroupsHasBeenSet; }
    template<typename EC2SecurityGroupsT = Aws::Vector<EC2SecurityGroup>>
    void SetEC2SecurityGroups(EC2SecurityGroupsT&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups = std::forward<EC2SecurityGroupsT>(value); }
    template<typename EC2SecurityGroupsT = Aws::Vector<EC2SecurityGroup>>
    ClusterSecurityGroup& WithEC2SecurityGroups(EC2SecurityGroupsT&& value) { SetEC2SecurityGroups(std::forward<EC2SecurityGroupsT>(value)); return *this;}
    template<typename EC2SecurityGroupsT = EC2SecurityGroup>
    ClusterSecurityGroup& AddEC2SecurityGroups(EC2SecurityGroupsT&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups.emplace_back(std::forward<EC2SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IP ranges (CIDR blocks) that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline const Aws::Vector<IPRange>& GetIPRanges() const { return m_iPRanges; }
    inline bool IPRangesHasBeenSet() const { return m_iPRangesHasBeenSet; }
    template<typename IPRangesT = Aws::Vector<IPRange>>
    void SetIPRanges(IPRangesT&& value) { m_iPRangesHasBeenSet = true; m_iPRanges = std::forward<IPRangesT>(value); }
    template<typename IPRangesT = Aws::Vector<IPRange>>
    ClusterSecurityGroup& WithIPRanges(IPRangesT&& value) { SetIPRanges(std::forward<IPRangesT>(value)); return *this;}
    template<typename IPRangesT = IPRange>
    ClusterSecurityGroup& AddIPRanges(IPRangesT&& value) { m_iPRangesHasBeenSet = true; m_iPRanges.emplace_back(std::forward<IPRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of tags for the cluster security group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ClusterSecurityGroup& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ClusterSecurityGroup& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterSecurityGroupName;
    bool m_clusterSecurityGroupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<EC2SecurityGroup> m_eC2SecurityGroups;
    bool m_eC2SecurityGroupsHasBeenSet = false;

    Aws::Vector<IPRange> m_iPRanges;
    bool m_iPRangesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
