/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3outposts/model/EndpointStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3outposts/model/EndpointAccessType.h>
#include <aws/s3outposts/model/FailedReason.h>
#include <aws/s3outposts/model/NetworkInterface.h>
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
namespace S3Outposts
{
namespace Model
{

  /**
   * <p>Amazon S3 on Outposts Access Points simplify managing data access at scale
   * for shared datasets in S3 on Outposts. S3 on Outposts uses endpoints to connect
   * to Outposts buckets so that you can perform actions within your virtual private
   * cloud (VPC). For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/WorkingWithS3Outposts.html">
   * Accessing S3 on Outposts using VPC-only access points</a> in the <i>Amazon
   * Simple Storage Service User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3outposts-2017-07-25/Endpoint">AWS
   * API Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_S3OUTPOSTS_API Endpoint() = default;
    AWS_S3OUTPOSTS_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3OUTPOSTS_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    Endpoint& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Outposts.</p>
     */
    inline const Aws::String& GetOutpostsId() const { return m_outpostsId; }
    inline bool OutpostsIdHasBeenSet() const { return m_outpostsIdHasBeenSet; }
    template<typename OutpostsIdT = Aws::String>
    void SetOutpostsId(OutpostsIdT&& value) { m_outpostsIdHasBeenSet = true; m_outpostsId = std::forward<OutpostsIdT>(value); }
    template<typename OutpostsIdT = Aws::String>
    Endpoint& WithOutpostsId(OutpostsIdT&& value) { SetOutpostsId(std::forward<OutpostsIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC CIDR committed by this endpoint.</p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    Endpoint& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the endpoint.</p>
     */
    inline EndpointStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EndpointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Endpoint& WithStatus(EndpointStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Endpoint& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface of the endpoint.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const { return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    void SetNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::forward<NetworkInterfacesT>(value); }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    Endpoint& WithNetworkInterfaces(NetworkInterfacesT&& value) { SetNetworkInterfaces(std::forward<NetworkInterfacesT>(value)); return *this;}
    template<typename NetworkInterfacesT = NetworkInterface>
    Endpoint& AddNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.emplace_back(std::forward<NetworkInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC used for the endpoint.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    Endpoint& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet used for the endpoint.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    Endpoint& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the security group used for the endpoint.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const { return m_securityGroupId; }
    inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }
    template<typename SecurityGroupIdT = Aws::String>
    void SetSecurityGroupId(SecurityGroupIdT&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = std::forward<SecurityGroupIdT>(value); }
    template<typename SecurityGroupIdT = Aws::String>
    Endpoint& WithSecurityGroupId(SecurityGroupIdT&& value) { SetSecurityGroupId(std::forward<SecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of connectivity used to access the Amazon S3 on Outposts
     * endpoint.</p>
     */
    inline EndpointAccessType GetAccessType() const { return m_accessType; }
    inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }
    inline void SetAccessType(EndpointAccessType value) { m_accessTypeHasBeenSet = true; m_accessType = value; }
    inline Endpoint& WithAccessType(EndpointAccessType value) { SetAccessType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the customer-owned IPv4 address pool used for the endpoint.</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const { return m_customerOwnedIpv4Pool; }
    inline bool CustomerOwnedIpv4PoolHasBeenSet() const { return m_customerOwnedIpv4PoolHasBeenSet; }
    template<typename CustomerOwnedIpv4PoolT = Aws::String>
    void SetCustomerOwnedIpv4Pool(CustomerOwnedIpv4PoolT&& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = std::forward<CustomerOwnedIpv4PoolT>(value); }
    template<typename CustomerOwnedIpv4PoolT = Aws::String>
    Endpoint& WithCustomerOwnedIpv4Pool(CustomerOwnedIpv4PoolT&& value) { SetCustomerOwnedIpv4Pool(std::forward<CustomerOwnedIpv4PoolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason, if any, for a create or delete endpoint operation.</p>
     */
    inline const FailedReason& GetFailedReason() const { return m_failedReason; }
    inline bool FailedReasonHasBeenSet() const { return m_failedReasonHasBeenSet; }
    template<typename FailedReasonT = FailedReason>
    void SetFailedReason(FailedReasonT&& value) { m_failedReasonHasBeenSet = true; m_failedReason = std::forward<FailedReasonT>(value); }
    template<typename FailedReasonT = FailedReason>
    Endpoint& WithFailedReason(FailedReasonT&& value) { SetFailedReason(std::forward<FailedReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_outpostsId;
    bool m_outpostsIdHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    EndpointStatus m_status{EndpointStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_securityGroupId;
    bool m_securityGroupIdHasBeenSet = false;

    EndpointAccessType m_accessType{EndpointAccessType::NOT_SET};
    bool m_accessTypeHasBeenSet = false;

    Aws::String m_customerOwnedIpv4Pool;
    bool m_customerOwnedIpv4PoolHasBeenSet = false;

    FailedReason m_failedReason;
    bool m_failedReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Outposts
} // namespace Aws
