/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p>Provides information about the VPC peering connection options for the
   * accepter or requester VPC. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/VpcInfoPeeringOptionsDetails">AWS
   * API Reference</a></p>
   */
  class VpcInfoPeeringOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API VpcInfoPeeringOptionsDetails() = default;
    AWS_SECURITYHUB_API VpcInfoPeeringOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API VpcInfoPeeringOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether a local VPC can resolve public DNS hostnames to private IP
     * addresses when queried from instances in a peer VPC. </p>
     */
    inline bool GetAllowDnsResolutionFromRemoteVpc() const { return m_allowDnsResolutionFromRemoteVpc; }
    inline bool AllowDnsResolutionFromRemoteVpcHasBeenSet() const { return m_allowDnsResolutionFromRemoteVpcHasBeenSet; }
    inline void SetAllowDnsResolutionFromRemoteVpc(bool value) { m_allowDnsResolutionFromRemoteVpcHasBeenSet = true; m_allowDnsResolutionFromRemoteVpc = value; }
    inline VpcInfoPeeringOptionsDetails& WithAllowDnsResolutionFromRemoteVpc(bool value) { SetAllowDnsResolutionFromRemoteVpc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a local ClassicLink connection can communicate with the
     * peer VPC over the VPC peering connection. </p>
     */
    inline bool GetAllowEgressFromLocalClassicLinkToRemoteVpc() const { return m_allowEgressFromLocalClassicLinkToRemoteVpc; }
    inline bool AllowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet() const { return m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet; }
    inline void SetAllowEgressFromLocalClassicLinkToRemoteVpc(bool value) { m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet = true; m_allowEgressFromLocalClassicLinkToRemoteVpc = value; }
    inline VpcInfoPeeringOptionsDetails& WithAllowEgressFromLocalClassicLinkToRemoteVpc(bool value) { SetAllowEgressFromLocalClassicLinkToRemoteVpc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a local VPC can communicate with a ClassicLink connection
     * in the peer VPC over the VPC peering connection. </p>
     */
    inline bool GetAllowEgressFromLocalVpcToRemoteClassicLink() const { return m_allowEgressFromLocalVpcToRemoteClassicLink; }
    inline bool AllowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet() const { return m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet; }
    inline void SetAllowEgressFromLocalVpcToRemoteClassicLink(bool value) { m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet = true; m_allowEgressFromLocalVpcToRemoteClassicLink = value; }
    inline VpcInfoPeeringOptionsDetails& WithAllowEgressFromLocalVpcToRemoteClassicLink(bool value) { SetAllowEgressFromLocalVpcToRemoteClassicLink(value); return *this;}
    ///@}
  private:

    bool m_allowDnsResolutionFromRemoteVpc{false};
    bool m_allowDnsResolutionFromRemoteVpcHasBeenSet = false;

    bool m_allowEgressFromLocalClassicLinkToRemoteVpc{false};
    bool m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet = false;

    bool m_allowEgressFromLocalVpcToRemoteClassicLink{false};
    bool m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
