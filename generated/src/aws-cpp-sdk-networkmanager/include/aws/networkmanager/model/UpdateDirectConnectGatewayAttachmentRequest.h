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
    AWS_NETWORKMANAGER_API UpdateDirectConnectGatewayAttachmentRequest();

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
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }
    inline UpdateDirectConnectGatewayAttachmentRequest& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline UpdateDirectConnectGatewayAttachmentRequest& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline UpdateDirectConnectGatewayAttachmentRequest& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more edge locations to update for the Direct Connect gateway
     * attachment. The updated array of edge locations overwrites the previous array of
     * locations. <code>EdgeLocations</code> is only used for Direct Connect gateway
     * attachments.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeLocations() const{ return m_edgeLocations; }
    inline bool EdgeLocationsHasBeenSet() const { return m_edgeLocationsHasBeenSet; }
    inline void SetEdgeLocations(const Aws::Vector<Aws::String>& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = value; }
    inline void SetEdgeLocations(Aws::Vector<Aws::String>&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = std::move(value); }
    inline UpdateDirectConnectGatewayAttachmentRequest& WithEdgeLocations(const Aws::Vector<Aws::String>& value) { SetEdgeLocations(value); return *this;}
    inline UpdateDirectConnectGatewayAttachmentRequest& WithEdgeLocations(Aws::Vector<Aws::String>&& value) { SetEdgeLocations(std::move(value)); return *this;}
    inline UpdateDirectConnectGatewayAttachmentRequest& AddEdgeLocations(const Aws::String& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(value); return *this; }
    inline UpdateDirectConnectGatewayAttachmentRequest& AddEdgeLocations(Aws::String&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(std::move(value)); return *this; }
    inline UpdateDirectConnectGatewayAttachmentRequest& AddEdgeLocations(const char* value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(value); return *this; }
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
