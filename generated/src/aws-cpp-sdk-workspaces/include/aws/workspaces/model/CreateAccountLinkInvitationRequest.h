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
  class CreateAccountLinkInvitationRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API CreateAccountLinkInvitationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccountLinkInvitation"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the target account.</p>
     */
    inline const Aws::String& GetTargetAccountId() const { return m_targetAccountId; }
    inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }
    template<typename TargetAccountIdT = Aws::String>
    void SetTargetAccountId(TargetAccountIdT&& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = std::forward<TargetAccountIdT>(value); }
    template<typename TargetAccountIdT = Aws::String>
    CreateAccountLinkInvitationRequest& WithTargetAccountId(TargetAccountIdT&& value) { SetTargetAccountId(std::forward<TargetAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string of up to 64 ASCII characters that Amazon WorkSpaces uses to ensure
     * idempotent creation.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateAccountLinkInvitationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetAccountId;
    bool m_targetAccountIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
