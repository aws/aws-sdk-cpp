/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/RepostspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_REPOSTSPACE_API SendInvitesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendInvites"; }

    AWS_REPOSTSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const { return m_spaceId; }
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
    template<typename SpaceIdT = Aws::String>
    void SetSpaceId(SpaceIdT&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::forward<SpaceIdT>(value); }
    template<typename SpaceIdT = Aws::String>
    SendInvitesRequest& WithSpaceId(SpaceIdT&& value) { SetSpaceId(std::forward<SpaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of identifiers for the users and groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccessorIds() const { return m_accessorIds; }
    inline bool AccessorIdsHasBeenSet() const { return m_accessorIdsHasBeenSet; }
    template<typename AccessorIdsT = Aws::Vector<Aws::String>>
    void SetAccessorIds(AccessorIdsT&& value) { m_accessorIdsHasBeenSet = true; m_accessorIds = std::forward<AccessorIdsT>(value); }
    template<typename AccessorIdsT = Aws::Vector<Aws::String>>
    SendInvitesRequest& WithAccessorIds(AccessorIdsT&& value) { SetAccessorIds(std::forward<AccessorIdsT>(value)); return *this;}
    template<typename AccessorIdsT = Aws::String>
    SendInvitesRequest& AddAccessorIds(AccessorIdsT&& value) { m_accessorIdsHasBeenSet = true; m_accessorIds.emplace_back(std::forward<AccessorIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The title of the invite.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    SendInvitesRequest& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of the invite.</p>
     */
    inline const Aws::String& GetMemberBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    SendInvitesRequest& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_accessorIds;
    bool m_accessorIdsHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
