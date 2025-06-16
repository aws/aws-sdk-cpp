/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/TransitGatewayAttachmentStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{
  class DeleteNetworkFirewallTransitGatewayAttachmentResult
  {
  public:
    AWS_NETWORKFIREWALL_API DeleteNetworkFirewallTransitGatewayAttachmentResult() = default;
    AWS_NETWORKFIREWALL_API DeleteNetworkFirewallTransitGatewayAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DeleteNetworkFirewallTransitGatewayAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the transit gateway attachment that was deleted.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value); }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    DeleteNetworkFirewallTransitGatewayAttachmentResult& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the transit gateway attachment deletion process.</p>
     * <p>Valid values are:</p> <ul> <li> <p> <code>CREATING</code> - The attachment is
     * being created</p> </li> <li> <p> <code>DELETING</code> - The attachment is being
     * deleted</p> </li> <li> <p> <code>DELETED</code> - The attachment has been
     * deleted</p> </li> <li> <p> <code>FAILED</code> - The attachment creation has
     * failed and cannot be recovered</p> </li> <li> <p> <code>ERROR</code> - The
     * attachment is in an error state that might be recoverable</p> </li> <li> <p>
     * <code>READY</code> - The attachment is active and processing traffic</p> </li>
     * <li> <p> <code>PENDING_ACCEPTANCE</code> - The attachment is waiting to be
     * accepted</p> </li> <li> <p> <code>REJECTING</code> - The attachment is in the
     * process of being rejected</p> </li> <li> <p> <code>REJECTED</code> - The
     * attachment has been rejected</p> </li> </ul>
     */
    inline TransitGatewayAttachmentStatus GetTransitGatewayAttachmentStatus() const { return m_transitGatewayAttachmentStatus; }
    inline void SetTransitGatewayAttachmentStatus(TransitGatewayAttachmentStatus value) { m_transitGatewayAttachmentStatusHasBeenSet = true; m_transitGatewayAttachmentStatus = value; }
    inline DeleteNetworkFirewallTransitGatewayAttachmentResult& WithTransitGatewayAttachmentStatus(TransitGatewayAttachmentStatus value) { SetTransitGatewayAttachmentStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteNetworkFirewallTransitGatewayAttachmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    TransitGatewayAttachmentStatus m_transitGatewayAttachmentStatus{TransitGatewayAttachmentStatus::NOT_SET};
    bool m_transitGatewayAttachmentStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
