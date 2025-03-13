/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the members of a VPC security group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/VpcSecurityGroupMembership">AWS
   * API Reference</a></p>
   */
  class VpcSecurityGroupMembership
  {
  public:
    AWS_REDSHIFT_API VpcSecurityGroupMembership() = default;
    AWS_REDSHIFT_API VpcSecurityGroupMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API VpcSecurityGroupMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of the VPC security group.</p>
     */
    inline const Aws::String& GetVpcSecurityGroupId() const { return m_vpcSecurityGroupId; }
    inline bool VpcSecurityGroupIdHasBeenSet() const { return m_vpcSecurityGroupIdHasBeenSet; }
    template<typename VpcSecurityGroupIdT = Aws::String>
    void SetVpcSecurityGroupId(VpcSecurityGroupIdT&& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = std::forward<VpcSecurityGroupIdT>(value); }
    template<typename VpcSecurityGroupIdT = Aws::String>
    VpcSecurityGroupMembership& WithVpcSecurityGroupId(VpcSecurityGroupIdT&& value) { SetVpcSecurityGroupId(std::forward<VpcSecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the VPC security group.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    VpcSecurityGroupMembership& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcSecurityGroupId;
    bool m_vpcSecurityGroupIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
