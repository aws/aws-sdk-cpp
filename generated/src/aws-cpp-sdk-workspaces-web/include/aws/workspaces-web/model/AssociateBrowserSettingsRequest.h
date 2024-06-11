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
namespace Http
{
    class URI;
} //namespace Http
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class AssociateBrowserSettingsRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API AssociateBrowserSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateBrowserSettings"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;

    AWS_WORKSPACESWEB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline const Aws::String& GetBrowserSettingsArn() const{ return m_browserSettingsArn; }
    inline bool BrowserSettingsArnHasBeenSet() const { return m_browserSettingsArnHasBeenSet; }
    inline void SetBrowserSettingsArn(const Aws::String& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = value; }
    inline void SetBrowserSettingsArn(Aws::String&& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = std::move(value); }
    inline void SetBrowserSettingsArn(const char* value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn.assign(value); }
    inline AssociateBrowserSettingsRequest& WithBrowserSettingsArn(const Aws::String& value) { SetBrowserSettingsArn(value); return *this;}
    inline AssociateBrowserSettingsRequest& WithBrowserSettingsArn(Aws::String&& value) { SetBrowserSettingsArn(std::move(value)); return *this;}
    inline AssociateBrowserSettingsRequest& WithBrowserSettingsArn(const char* value) { SetBrowserSettingsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }
    inline bool PortalArnHasBeenSet() const { return m_portalArnHasBeenSet; }
    inline void SetPortalArn(const Aws::String& value) { m_portalArnHasBeenSet = true; m_portalArn = value; }
    inline void SetPortalArn(Aws::String&& value) { m_portalArnHasBeenSet = true; m_portalArn = std::move(value); }
    inline void SetPortalArn(const char* value) { m_portalArnHasBeenSet = true; m_portalArn.assign(value); }
    inline AssociateBrowserSettingsRequest& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}
    inline AssociateBrowserSettingsRequest& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}
    inline AssociateBrowserSettingsRequest& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}
    ///@}
  private:

    Aws::String m_browserSettingsArn;
    bool m_browserSettingsArnHasBeenSet = false;

    Aws::String m_portalArn;
    bool m_portalArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
