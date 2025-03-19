/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class UpdateDirectConnectGatewayAttachmentRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API UpdateDirectConnectGatewayAttachmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDirectConnectGatewayAttachment"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Direct Connect gateway attachment for the updated edge
     * locations. </p>
     */
    inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    template<typename AttachmentIdT = Aws::String>
    void SetAttachmentId(AttachmentIdT&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::forward<AttachmentIdT>(value); }
    template<typename AttachmentIdT = Aws::String>
    UpdateDirectConnectGatewayAttachmentRequest& WithAttachmentId(AttachmentIdT&& value) { SetAttachmentId(std::forward<AttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more edge locations to update for the Direct Connect gateway
     * attachment. The updated array of edge locations overwrites the previous array of
     * locations. <code>EdgeLocations</code> is only used for Direct Connect gateway
     * attachments.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeLocations() const { return m_edgeLocations; }
    inline bool EdgeLocationsHasBeenSet() const { return m_edgeLocationsHasBeenSet; }
    template<typename EdgeLocationsT = Aws::Vector<Aws::String>>
    void SetEdgeLocations(EdgeLocationsT&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = std::forward<EdgeLocationsT>(value); }
    template<typename EdgeLocationsT = Aws::Vector<Aws::String>>
    UpdateDirectConnectGatewayAttachmentRequest& WithEdgeLocations(EdgeLocationsT&& value) { SetEdgeLocations(std::forward<EdgeLocationsT>(value)); return *this;}
    template<typename EdgeLocationsT = Aws::String>
    UpdateDirectConnectGatewayAttachmentRequest& AddEdgeLocations(EdgeLocationsT&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.emplace_back(std::forward<EdgeLocationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeLocations;
    bool m_edgeLocationsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
