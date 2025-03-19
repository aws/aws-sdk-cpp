/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/AttachmentType.h>
#include <aws/networkmanager/model/AttachmentState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class ListAttachmentsRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API ListAttachmentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAttachments"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

    AWS_NETWORKMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
    template<typename CoreNetworkIdT = Aws::String>
    void SetCoreNetworkId(CoreNetworkIdT&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::forward<CoreNetworkIdT>(value); }
    template<typename CoreNetworkIdT = Aws::String>
    ListAttachmentsRequest& WithCoreNetworkId(CoreNetworkIdT&& value) { SetCoreNetworkId(std::forward<CoreNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of attachment.</p>
     */
    inline AttachmentType GetAttachmentType() const { return m_attachmentType; }
    inline bool AttachmentTypeHasBeenSet() const { return m_attachmentTypeHasBeenSet; }
    inline void SetAttachmentType(AttachmentType value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = value; }
    inline ListAttachmentsRequest& WithAttachmentType(AttachmentType value) { SetAttachmentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region where the edge is located.</p>
     */
    inline const Aws::String& GetEdgeLocation() const { return m_edgeLocation; }
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }
    template<typename EdgeLocationT = Aws::String>
    void SetEdgeLocation(EdgeLocationT&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::forward<EdgeLocationT>(value); }
    template<typename EdgeLocationT = Aws::String>
    ListAttachmentsRequest& WithEdgeLocation(EdgeLocationT&& value) { SetEdgeLocation(std::forward<EdgeLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the attachment.</p>
     */
    inline AttachmentState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AttachmentState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ListAttachmentsRequest& WithState(AttachmentState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAttachmentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAttachmentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    AttachmentType m_attachmentType{AttachmentType::NOT_SET};
    bool m_attachmentTypeHasBeenSet = false;

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;

    AttachmentState m_state{AttachmentState::NOT_SET};
    bool m_stateHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
