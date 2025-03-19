/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes an Amazon EC2 security group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EC2SecurityGroup">AWS
   * API Reference</a></p>
   */
  class EC2SecurityGroup
  {
  public:
    AWS_REDSHIFT_API EC2SecurityGroup() = default;
    AWS_REDSHIFT_API EC2SecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API EC2SecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The status of the EC2 security group.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    EC2SecurityGroup& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the EC2 Security Group.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupName() const { return m_eC2SecurityGroupName; }
    inline bool EC2SecurityGroupNameHasBeenSet() const { return m_eC2SecurityGroupNameHasBeenSet; }
    template<typename EC2SecurityGroupNameT = Aws::String>
    void SetEC2SecurityGroupName(EC2SecurityGroupNameT&& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = std::forward<EC2SecurityGroupNameT>(value); }
    template<typename EC2SecurityGroupNameT = Aws::String>
    EC2SecurityGroup& WithEC2SecurityGroupName(EC2SecurityGroupNameT&& value) { SetEC2SecurityGroupName(std::forward<EC2SecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the EC2 security group
     * specified in the <code>EC2SecurityGroupName</code> field. </p>
     */
    inline const Aws::String& GetEC2SecurityGroupOwnerId() const { return m_eC2SecurityGroupOwnerId; }
    inline bool EC2SecurityGroupOwnerIdHasBeenSet() const { return m_eC2SecurityGroupOwnerIdHasBeenSet; }
    template<typename EC2SecurityGroupOwnerIdT = Aws::String>
    void SetEC2SecurityGroupOwnerId(EC2SecurityGroupOwnerIdT&& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = std::forward<EC2SecurityGroupOwnerIdT>(value); }
    template<typename EC2SecurityGroupOwnerIdT = Aws::String>
    EC2SecurityGroup& WithEC2SecurityGroupOwnerId(EC2SecurityGroupOwnerIdT&& value) { SetEC2SecurityGroupOwnerId(std::forward<EC2SecurityGroupOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags for the EC2 security group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    EC2SecurityGroup& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    EC2SecurityGroup& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_eC2SecurityGroupName;
    bool m_eC2SecurityGroupNameHasBeenSet = false;

    Aws::String m_eC2SecurityGroupOwnerId;
    bool m_eC2SecurityGroupOwnerIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
