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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Contains information about the synchronization state of a transit gateway
   * attachment, including its current status and any error messages. Network
   * Firewall uses this to track the state of your transit gateway configuration
   * changes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/TransitGatewayAttachmentSyncState">AWS
   * API Reference</a></p>
   */
  class TransitGatewayAttachmentSyncState
  {
  public:
    AWS_NETWORKFIREWALL_API TransitGatewayAttachmentSyncState() = default;
    AWS_NETWORKFIREWALL_API TransitGatewayAttachmentSyncState(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API TransitGatewayAttachmentSyncState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    template<typename AttachmentIdT = Aws::String>
    void SetAttachmentId(AttachmentIdT&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::forward<AttachmentIdT>(value); }
    template<typename AttachmentIdT = Aws::String>
    TransitGatewayAttachmentSyncState& WithAttachmentId(AttachmentIdT&& value) { SetAttachmentId(std::forward<AttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the transit gateway attachment.</p> <p>Valid values
     * are:</p> <ul> <li> <p> <code>CREATING</code> - The attachment is being
     * created</p> </li> <li> <p> <code>DELETING</code> - The attachment is being
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
    inline bool TransitGatewayAttachmentStatusHasBeenSet() const { return m_transitGatewayAttachmentStatusHasBeenSet; }
    inline void SetTransitGatewayAttachmentStatus(TransitGatewayAttachmentStatus value) { m_transitGatewayAttachmentStatusHasBeenSet = true; m_transitGatewayAttachmentStatus = value; }
    inline TransitGatewayAttachmentSyncState& WithTransitGatewayAttachmentStatus(TransitGatewayAttachmentStatus value) { SetTransitGatewayAttachmentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message providing additional information about the current status,
     * particularly useful when the transit gateway attachment is in a
     * non-<code>READY</code> state.</p> <p>Valid values are:</p> <ul> <li> <p>
     * <code>CREATING</code> - The attachment is being created</p> </li> <li> <p>
     * <code>DELETING</code> - The attachment is being deleted</p> </li> <li> <p>
     * <code>DELETED</code> - The attachment has been deleted</p> </li> <li> <p>
     * <code>FAILED</code> - The attachment creation has failed and cannot be
     * recovered</p> </li> <li> <p> <code>ERROR</code> - The attachment is in an error
     * state that might be recoverable</p> </li> <li> <p> <code>READY</code> - The
     * attachment is active and processing traffic</p> </li> <li> <p>
     * <code>PENDING_ACCEPTANCE</code> - The attachment is waiting to be accepted</p>
     * </li> <li> <p> <code>REJECTING</code> - The attachment is in the process of
     * being rejected</p> </li> <li> <p> <code>REJECTED</code> - The attachment has
     * been rejected</p> </li> </ul> <p>For information about troubleshooting endpoint
     * failures, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/firewall-troubleshooting-endpoint-failures.html">Troubleshooting
     * firewall endpoint failures</a> in the <i>Network Firewall Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    TransitGatewayAttachmentSyncState& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    TransitGatewayAttachmentStatus m_transitGatewayAttachmentStatus{TransitGatewayAttachmentStatus::NOT_SET};
    bool m_transitGatewayAttachmentStatusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
