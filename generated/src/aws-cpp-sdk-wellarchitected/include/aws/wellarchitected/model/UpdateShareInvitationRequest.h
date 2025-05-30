﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ShareInvitationAction.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input for Update Share Invitation</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateShareInvitationInput">AWS
   * API Reference</a></p>
   */
  class UpdateShareInvitationRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpdateShareInvitationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateShareInvitation"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline const Aws::String& GetShareInvitationId() const { return m_shareInvitationId; }
    inline bool ShareInvitationIdHasBeenSet() const { return m_shareInvitationIdHasBeenSet; }
    template<typename ShareInvitationIdT = Aws::String>
    void SetShareInvitationId(ShareInvitationIdT&& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = std::forward<ShareInvitationIdT>(value); }
    template<typename ShareInvitationIdT = Aws::String>
    UpdateShareInvitationRequest& WithShareInvitationId(ShareInvitationIdT&& value) { SetShareInvitationId(std::forward<ShareInvitationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline ShareInvitationAction GetShareInvitationAction() const { return m_shareInvitationAction; }
    inline bool ShareInvitationActionHasBeenSet() const { return m_shareInvitationActionHasBeenSet; }
    inline void SetShareInvitationAction(ShareInvitationAction value) { m_shareInvitationActionHasBeenSet = true; m_shareInvitationAction = value; }
    inline UpdateShareInvitationRequest& WithShareInvitationAction(ShareInvitationAction value) { SetShareInvitationAction(value); return *this;}
    ///@}
  private:

    Aws::String m_shareInvitationId;
    bool m_shareInvitationIdHasBeenSet = false;

    ShareInvitationAction m_shareInvitationAction{ShareInvitationAction::NOT_SET};
    bool m_shareInvitationActionHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
