/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/AvailabilityZone.h>
#include <aws/rds/model/Outpost.h>
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
   * <p>This data type is used as a response element for the
   * <code>DescribeDBSubnetGroups</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/Subnet">AWS API
   * Reference</a></p>
   */
  class Subnet
  {
  public:
    AWS_RDS_API Subnet() = default;
    AWS_RDS_API Subnet(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API Subnet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of the subnet.</p>
     */
    inline const Aws::String& GetSubnetIdentifier() const { return m_subnetIdentifier; }
    inline bool SubnetIdentifierHasBeenSet() const { return m_subnetIdentifierHasBeenSet; }
    template<typename SubnetIdentifierT = Aws::String>
    void SetSubnetIdentifier(SubnetIdentifierT&& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = std::forward<SubnetIdentifierT>(value); }
    template<typename SubnetIdentifierT = Aws::String>
    Subnet& WithSubnetIdentifier(SubnetIdentifierT&& value) { SetSubnetIdentifier(std::forward<SubnetIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AvailabilityZone& GetSubnetAvailabilityZone() const { return m_subnetAvailabilityZone; }
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }
    template<typename SubnetAvailabilityZoneT = AvailabilityZone>
    void SetSubnetAvailabilityZone(SubnetAvailabilityZoneT&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::forward<SubnetAvailabilityZoneT>(value); }
    template<typename SubnetAvailabilityZoneT = AvailabilityZone>
    Subnet& WithSubnetAvailabilityZone(SubnetAvailabilityZoneT&& value) { SetSubnetAvailabilityZone(std::forward<SubnetAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the subnet is associated with an Outpost, this value specifies the
     * Outpost.</p> <p>For more information about RDS on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Amazon
     * RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline const Outpost& GetSubnetOutpost() const { return m_subnetOutpost; }
    inline bool SubnetOutpostHasBeenSet() const { return m_subnetOutpostHasBeenSet; }
    template<typename SubnetOutpostT = Outpost>
    void SetSubnetOutpost(SubnetOutpostT&& value) { m_subnetOutpostHasBeenSet = true; m_subnetOutpost = std::forward<SubnetOutpostT>(value); }
    template<typename SubnetOutpostT = Outpost>
    Subnet& WithSubnetOutpost(SubnetOutpostT&& value) { SetSubnetOutpost(std::forward<SubnetOutpostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the subnet.</p>
     */
    inline const Aws::String& GetSubnetStatus() const { return m_subnetStatus; }
    inline bool SubnetStatusHasBeenSet() const { return m_subnetStatusHasBeenSet; }
    template<typename SubnetStatusT = Aws::String>
    void SetSubnetStatus(SubnetStatusT&& value) { m_subnetStatusHasBeenSet = true; m_subnetStatus = std::forward<SubnetStatusT>(value); }
    template<typename SubnetStatusT = Aws::String>
    Subnet& WithSubnetStatus(SubnetStatusT&& value) { SetSubnetStatus(std::forward<SubnetStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subnetIdentifier;
    bool m_subnetIdentifierHasBeenSet = false;

    AvailabilityZone m_subnetAvailabilityZone;
    bool m_subnetAvailabilityZoneHasBeenSet = false;

    Outpost m_subnetOutpost;
    bool m_subnetOutpostHasBeenSet = false;

    Aws::String m_subnetStatus;
    bool m_subnetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
