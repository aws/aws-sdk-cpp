/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class RejectAccountLinkInvitationRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API RejectAccountLinkInvitationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectAccountLinkInvitation"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the account link</p>
     */
    inline const Aws::String& GetLinkId() const { return m_linkId; }
    inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }
    template<typename LinkIdT = Aws::String>
    void SetLinkId(LinkIdT&& value) { m_linkIdHasBeenSet = true; m_linkId = std::forward<LinkIdT>(value); }
    template<typename LinkIdT = Aws::String>
    RejectAccountLinkInvitationRequest& WithLinkId(LinkIdT&& value) { SetLinkId(std::forward<LinkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token of the account link invitation to reject.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    RejectAccountLinkInvitationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_linkId;
    bool m_linkIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
