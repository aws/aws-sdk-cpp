/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class GetSessionRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API GetSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSession"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the web portal for the session.</p>
     */
    inline const Aws::String& GetPortalId() const{ return m_portalId; }
    inline bool PortalIdHasBeenSet() const { return m_portalIdHasBeenSet; }
    inline void SetPortalId(const Aws::String& value) { m_portalIdHasBeenSet = true; m_portalId = value; }
    inline void SetPortalId(Aws::String&& value) { m_portalIdHasBeenSet = true; m_portalId = std::move(value); }
    inline void SetPortalId(const char* value) { m_portalIdHasBeenSet = true; m_portalId.assign(value); }
    inline GetSessionRequest& WithPortalId(const Aws::String& value) { SetPortalId(value); return *this;}
    inline GetSessionRequest& WithPortalId(Aws::String&& value) { SetPortalId(std::move(value)); return *this;}
    inline GetSessionRequest& WithPortalId(const char* value) { SetPortalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline GetSessionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline GetSessionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline GetSessionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}
  private:

    Aws::String m_portalId;
    bool m_portalIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
