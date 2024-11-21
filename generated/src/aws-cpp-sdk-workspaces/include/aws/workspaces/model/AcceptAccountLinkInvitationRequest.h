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
  class AcceptAccountLinkInvitationRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API AcceptAccountLinkInvitationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptAccountLinkInvitation"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the account link.</p>
     */
    inline const Aws::String& GetLinkId() const{ return m_linkId; }
    inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }
    inline void SetLinkId(const Aws::String& value) { m_linkIdHasBeenSet = true; m_linkId = value; }
    inline void SetLinkId(Aws::String&& value) { m_linkIdHasBeenSet = true; m_linkId = std::move(value); }
    inline void SetLinkId(const char* value) { m_linkIdHasBeenSet = true; m_linkId.assign(value); }
    inline AcceptAccountLinkInvitationRequest& WithLinkId(const Aws::String& value) { SetLinkId(value); return *this;}
    inline AcceptAccountLinkInvitationRequest& WithLinkId(Aws::String&& value) { SetLinkId(std::move(value)); return *this;}
    inline AcceptAccountLinkInvitationRequest& WithLinkId(const char* value) { SetLinkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string of up to 64 ASCII characters that Amazon WorkSpaces uses to ensure
     * idempotent creation.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline AcceptAccountLinkInvitationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline AcceptAccountLinkInvitationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline AcceptAccountLinkInvitationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
