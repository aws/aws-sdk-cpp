/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEc2VpcPeeringConnectionVpcInfoDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEc2VpcPeeringConnectionStatusDetails.h>
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
   * <p>Provides information about a VPC peering connection between two VPCs: a
   * requester VPC that you own and an accepter VPC with which to create the
   * connection. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpcPeeringConnectionDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpcPeeringConnectionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionDetails() = default;
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the accepter VPC. </p>
     */
    inline const AwsEc2VpcPeeringConnectionVpcInfoDetails& GetAccepterVpcInfo() const { return m_accepterVpcInfo; }
    inline bool AccepterVpcInfoHasBeenSet() const { return m_accepterVpcInfoHasBeenSet; }
    template<typename AccepterVpcInfoT = AwsEc2VpcPeeringConnectionVpcInfoDetails>
    void SetAccepterVpcInfo(AccepterVpcInfoT&& value) { m_accepterVpcInfoHasBeenSet = true; m_accepterVpcInfo = std::forward<AccepterVpcInfoT>(value); }
    template<typename AccepterVpcInfoT = AwsEc2VpcPeeringConnectionVpcInfoDetails>
    AwsEc2VpcPeeringConnectionDetails& WithAccepterVpcInfo(AccepterVpcInfoT&& value) { SetAccepterVpcInfo(std::forward<AccepterVpcInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which an unaccepted VPC peering connection will expire. </p>
     */
    inline const Aws::String& GetExpirationTime() const { return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    template<typename ExpirationTimeT = Aws::String>
    void SetExpirationTime(ExpirationTimeT&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::forward<ExpirationTimeT>(value); }
    template<typename ExpirationTimeT = Aws::String>
    AwsEc2VpcPeeringConnectionDetails& WithExpirationTime(ExpirationTimeT&& value) { SetExpirationTime(std::forward<ExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the requester VPC. </p>
     */
    inline const AwsEc2VpcPeeringConnectionVpcInfoDetails& GetRequesterVpcInfo() const { return m_requesterVpcInfo; }
    inline bool RequesterVpcInfoHasBeenSet() const { return m_requesterVpcInfoHasBeenSet; }
    template<typename RequesterVpcInfoT = AwsEc2VpcPeeringConnectionVpcInfoDetails>
    void SetRequesterVpcInfo(RequesterVpcInfoT&& value) { m_requesterVpcInfoHasBeenSet = true; m_requesterVpcInfo = std::forward<RequesterVpcInfoT>(value); }
    template<typename RequesterVpcInfoT = AwsEc2VpcPeeringConnectionVpcInfoDetails>
    AwsEc2VpcPeeringConnectionDetails& WithRequesterVpcInfo(RequesterVpcInfoT&& value) { SetRequesterVpcInfo(std::forward<RequesterVpcInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline const AwsEc2VpcPeeringConnectionStatusDetails& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = AwsEc2VpcPeeringConnectionStatusDetails>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = AwsEc2VpcPeeringConnectionStatusDetails>
    AwsEc2VpcPeeringConnectionDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC peering connection. </p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const { return m_vpcPeeringConnectionId; }
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    void SetVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::forward<VpcPeeringConnectionIdT>(value); }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    AwsEc2VpcPeeringConnectionDetails& WithVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { SetVpcPeeringConnectionId(std::forward<VpcPeeringConnectionIdT>(value)); return *this;}
    ///@}
  private:

    AwsEc2VpcPeeringConnectionVpcInfoDetails m_accepterVpcInfo;
    bool m_accepterVpcInfoHasBeenSet = false;

    Aws::String m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;

    AwsEc2VpcPeeringConnectionVpcInfoDetails m_requesterVpcInfo;
    bool m_requesterVpcInfoHasBeenSet = false;

    AwsEc2VpcPeeringConnectionStatusDetails m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
