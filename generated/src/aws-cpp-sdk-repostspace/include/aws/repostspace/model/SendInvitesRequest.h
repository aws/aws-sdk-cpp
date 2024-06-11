/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/RepostspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace repostspace
{
namespace Model
{

  /**
   */
  class SendInvitesRequest : public RepostspaceRequest
  {
  public:
    AWS_REPOSTSPACE_API SendInvitesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendInvites"; }

    AWS_REPOSTSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The array of identifiers for the users and groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccessorIds() const{ return m_accessorIds; }
    inline bool AccessorIdsHasBeenSet() const { return m_accessorIdsHasBeenSet; }
    inline void SetAccessorIds(const Aws::Vector<Aws::String>& value) { m_accessorIdsHasBeenSet = true; m_accessorIds = value; }
    inline void SetAccessorIds(Aws::Vector<Aws::String>&& value) { m_accessorIdsHasBeenSet = true; m_accessorIds = std::move(value); }
    inline SendInvitesRequest& WithAccessorIds(const Aws::Vector<Aws::String>& value) { SetAccessorIds(value); return *this;}
    inline SendInvitesRequest& WithAccessorIds(Aws::Vector<Aws::String>&& value) { SetAccessorIds(std::move(value)); return *this;}
    inline SendInvitesRequest& AddAccessorIds(const Aws::String& value) { m_accessorIdsHasBeenSet = true; m_accessorIds.push_back(value); return *this; }
    inline SendInvitesRequest& AddAccessorIds(Aws::String&& value) { m_accessorIdsHasBeenSet = true; m_accessorIds.push_back(std::move(value)); return *this; }
    inline SendInvitesRequest& AddAccessorIds(const char* value) { m_accessorIdsHasBeenSet = true; m_accessorIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The body of the invite.</p>
     */
    inline const Aws::String& GetMemberBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline SendInvitesRequest& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline SendInvitesRequest& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline SendInvitesRequest& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const{ return m_spaceId; }
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
    inline void SetSpaceId(const Aws::String& value) { m_spaceIdHasBeenSet = true; m_spaceId = value; }
    inline void SetSpaceId(Aws::String&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::move(value); }
    inline void SetSpaceId(const char* value) { m_spaceIdHasBeenSet = true; m_spaceId.assign(value); }
    inline SendInvitesRequest& WithSpaceId(const Aws::String& value) { SetSpaceId(value); return *this;}
    inline SendInvitesRequest& WithSpaceId(Aws::String&& value) { SetSpaceId(std::move(value)); return *this;}
    inline SendInvitesRequest& WithSpaceId(const char* value) { SetSpaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the invite.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline SendInvitesRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline SendInvitesRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline SendInvitesRequest& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accessorIds;
    bool m_accessorIdsHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
