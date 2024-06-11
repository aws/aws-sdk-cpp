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
    AWS_REDSHIFT_API ClusterSecurityGroup();
    AWS_REDSHIFT_API ClusterSecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterSecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the cluster security group to which the operation was
     * applied.</p>
     */
    inline const Aws::String& GetClusterSecurityGroupName() const{ return m_clusterSecurityGroupName; }
    inline bool ClusterSecurityGroupNameHasBeenSet() const { return m_clusterSecurityGroupNameHasBeenSet; }
    inline void SetClusterSecurityGroupName(const Aws::String& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = value; }
    inline void SetClusterSecurityGroupName(Aws::String&& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = std::move(value); }
    inline void SetClusterSecurityGroupName(const char* value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName.assign(value); }
    inline ClusterSecurityGroup& WithClusterSecurityGroupName(const Aws::String& value) { SetClusterSecurityGroupName(value); return *this;}
    inline ClusterSecurityGroup& WithClusterSecurityGroupName(Aws::String&& value) { SetClusterSecurityGroupName(std::move(value)); return *this;}
    inline ClusterSecurityGroup& WithClusterSecurityGroupName(const char* value) { SetClusterSecurityGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the security group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ClusterSecurityGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ClusterSecurityGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ClusterSecurityGroup& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of EC2 security groups that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline const Aws::Vector<EC2SecurityGroup>& GetEC2SecurityGroups() const{ return m_eC2SecurityGroups; }
    inline bool EC2SecurityGroupsHasBeenSet() const { return m_eC2SecurityGroupsHasBeenSet; }
    inline void SetEC2SecurityGroups(const Aws::Vector<EC2SecurityGroup>& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups = value; }
    inline void SetEC2SecurityGroups(Aws::Vector<EC2SecurityGroup>&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups = std::move(value); }
    inline ClusterSecurityGroup& WithEC2SecurityGroups(const Aws::Vector<EC2SecurityGroup>& value) { SetEC2SecurityGroups(value); return *this;}
    inline ClusterSecurityGroup& WithEC2SecurityGroups(Aws::Vector<EC2SecurityGroup>&& value) { SetEC2SecurityGroups(std::move(value)); return *this;}
    inline ClusterSecurityGroup& AddEC2SecurityGroups(const EC2SecurityGroup& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups.push_back(value); return *this; }
    inline ClusterSecurityGroup& AddEC2SecurityGroups(EC2SecurityGroup&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IP ranges (CIDR blocks) that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline const Aws::Vector<IPRange>& GetIPRanges() const{ return m_iPRanges; }
    inline bool IPRangesHasBeenSet() const { return m_iPRangesHasBeenSet; }
    inline void SetIPRanges(const Aws::Vector<IPRange>& value) { m_iPRangesHasBeenSet = true; m_iPRanges = value; }
    inline void SetIPRanges(Aws::Vector<IPRange>&& value) { m_iPRangesHasBeenSet = true; m_iPRanges = std::move(value); }
    inline ClusterSecurityGroup& WithIPRanges(const Aws::Vector<IPRange>& value) { SetIPRanges(value); return *this;}
    inline ClusterSecurityGroup& WithIPRanges(Aws::Vector<IPRange>&& value) { SetIPRanges(std::move(value)); return *this;}
    inline ClusterSecurityGroup& AddIPRanges(const IPRange& value) { m_iPRangesHasBeenSet = true; m_iPRanges.push_back(value); return *this; }
    inline ClusterSecurityGroup& AddIPRanges(IPRange&& value) { m_iPRangesHasBeenSet = true; m_iPRanges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of tags for the cluster security group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ClusterSecurityGroup& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ClusterSecurityGroup& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ClusterSecurityGroup& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ClusterSecurityGroup& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
