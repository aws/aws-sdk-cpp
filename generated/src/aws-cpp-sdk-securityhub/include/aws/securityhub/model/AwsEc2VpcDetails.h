/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/CidrBlockAssociation.h>
#include <aws/securityhub/model/Ipv6CidrBlockAssociation.h>
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
   * <p>Details about an EC2 VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpcDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpcDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpcDetails();
    AWS_SECURITYHUB_API AwsEc2VpcDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpcDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the IPv4 CIDR blocks associated with the VPC.</p>
     */
    inline const Aws::Vector<CidrBlockAssociation>& GetCidrBlockAssociationSet() const{ return m_cidrBlockAssociationSet; }
    inline bool CidrBlockAssociationSetHasBeenSet() const { return m_cidrBlockAssociationSetHasBeenSet; }
    inline void SetCidrBlockAssociationSet(const Aws::Vector<CidrBlockAssociation>& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet = value; }
    inline void SetCidrBlockAssociationSet(Aws::Vector<CidrBlockAssociation>&& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet = std::move(value); }
    inline AwsEc2VpcDetails& WithCidrBlockAssociationSet(const Aws::Vector<CidrBlockAssociation>& value) { SetCidrBlockAssociationSet(value); return *this;}
    inline AwsEc2VpcDetails& WithCidrBlockAssociationSet(Aws::Vector<CidrBlockAssociation>&& value) { SetCidrBlockAssociationSet(std::move(value)); return *this;}
    inline AwsEc2VpcDetails& AddCidrBlockAssociationSet(const CidrBlockAssociation& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet.push_back(value); return *this; }
    inline AwsEc2VpcDetails& AddCidrBlockAssociationSet(CidrBlockAssociation&& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the IPv6 CIDR blocks associated with the VPC.</p>
     */
    inline const Aws::Vector<Ipv6CidrBlockAssociation>& GetIpv6CidrBlockAssociationSet() const{ return m_ipv6CidrBlockAssociationSet; }
    inline bool Ipv6CidrBlockAssociationSetHasBeenSet() const { return m_ipv6CidrBlockAssociationSetHasBeenSet; }
    inline void SetIpv6CidrBlockAssociationSet(const Aws::Vector<Ipv6CidrBlockAssociation>& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet = value; }
    inline void SetIpv6CidrBlockAssociationSet(Aws::Vector<Ipv6CidrBlockAssociation>&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet = std::move(value); }
    inline AwsEc2VpcDetails& WithIpv6CidrBlockAssociationSet(const Aws::Vector<Ipv6CidrBlockAssociation>& value) { SetIpv6CidrBlockAssociationSet(value); return *this;}
    inline AwsEc2VpcDetails& WithIpv6CidrBlockAssociationSet(Aws::Vector<Ipv6CidrBlockAssociation>&& value) { SetIpv6CidrBlockAssociationSet(std::move(value)); return *this;}
    inline AwsEc2VpcDetails& AddIpv6CidrBlockAssociationSet(const Ipv6CidrBlockAssociation& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet.push_back(value); return *this; }
    inline AwsEc2VpcDetails& AddIpv6CidrBlockAssociationSet(Ipv6CidrBlockAssociation&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the set of Dynamic Host Configuration Protocol (DHCP)
     * options that are associated with the VPC. If the default options are associated
     * with the VPC, then this is default.</p>
     */
    inline const Aws::String& GetDhcpOptionsId() const{ return m_dhcpOptionsId; }
    inline bool DhcpOptionsIdHasBeenSet() const { return m_dhcpOptionsIdHasBeenSet; }
    inline void SetDhcpOptionsId(const Aws::String& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = value; }
    inline void SetDhcpOptionsId(Aws::String&& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = std::move(value); }
    inline void SetDhcpOptionsId(const char* value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId.assign(value); }
    inline AwsEc2VpcDetails& WithDhcpOptionsId(const Aws::String& value) { SetDhcpOptionsId(value); return *this;}
    inline AwsEc2VpcDetails& WithDhcpOptionsId(Aws::String&& value) { SetDhcpOptionsId(std::move(value)); return *this;}
    inline AwsEc2VpcDetails& WithDhcpOptionsId(const char* value) { SetDhcpOptionsId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the VPC. Valid values are <code>available</code> or
     * <code>pending</code>.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline AwsEc2VpcDetails& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline AwsEc2VpcDetails& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline AwsEc2VpcDetails& WithState(const char* value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::Vector<CidrBlockAssociation> m_cidrBlockAssociationSet;
    bool m_cidrBlockAssociationSetHasBeenSet = false;

    Aws::Vector<Ipv6CidrBlockAssociation> m_ipv6CidrBlockAssociationSet;
    bool m_ipv6CidrBlockAssociationSetHasBeenSet = false;

    Aws::String m_dhcpOptionsId;
    bool m_dhcpOptionsIdHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
