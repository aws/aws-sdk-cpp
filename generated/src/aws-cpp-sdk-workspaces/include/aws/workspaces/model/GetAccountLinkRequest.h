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
  class GetAccountLinkRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API GetAccountLinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccountLink"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the account to link.</p>
     */
    inline const Aws::String& GetLinkId() const{ return m_linkId; }
    inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }
    inline void SetLinkId(const Aws::String& value) { m_linkIdHasBeenSet = true; m_linkId = value; }
    inline void SetLinkId(Aws::String&& value) { m_linkIdHasBeenSet = true; m_linkId = std::move(value); }
    inline void SetLinkId(const char* value) { m_linkIdHasBeenSet = true; m_linkId.assign(value); }
    inline GetAccountLinkRequest& WithLinkId(const Aws::String& value) { SetLinkId(value); return *this;}
    inline GetAccountLinkRequest& WithLinkId(Aws::String&& value) { SetLinkId(std::move(value)); return *this;}
    inline GetAccountLinkRequest& WithLinkId(const char* value) { SetLinkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the account link</p>
     */
    inline const Aws::String& GetLinkedAccountId() const{ return m_linkedAccountId; }
    inline bool LinkedAccountIdHasBeenSet() const { return m_linkedAccountIdHasBeenSet; }
    inline void SetLinkedAccountId(const Aws::String& value) { m_linkedAccountIdHasBeenSet = true; m_linkedAccountId = value; }
    inline void SetLinkedAccountId(Aws::String&& value) { m_linkedAccountIdHasBeenSet = true; m_linkedAccountId = std::move(value); }
    inline void SetLinkedAccountId(const char* value) { m_linkedAccountIdHasBeenSet = true; m_linkedAccountId.assign(value); }
    inline GetAccountLinkRequest& WithLinkedAccountId(const Aws::String& value) { SetLinkedAccountId(value); return *this;}
    inline GetAccountLinkRequest& WithLinkedAccountId(Aws::String&& value) { SetLinkedAccountId(std::move(value)); return *this;}
    inline GetAccountLinkRequest& WithLinkedAccountId(const char* value) { SetLinkedAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_linkId;
    bool m_linkIdHasBeenSet = false;

    Aws::String m_linkedAccountId;
    bool m_linkedAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
