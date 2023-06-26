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
  class AssociateUserAccessLoggingSettingsRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API AssociateUserAccessLoggingSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateUserAccessLoggingSettings"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;

    AWS_WORKSPACESWEB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline bool PortalArnHasBeenSet() const { return m_portalArnHasBeenSet; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const Aws::String& value) { m_portalArnHasBeenSet = true; m_portalArn = value; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(Aws::String&& value) { m_portalArnHasBeenSet = true; m_portalArn = std::move(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const char* value) { m_portalArnHasBeenSet = true; m_portalArn.assign(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline AssociateUserAccessLoggingSettingsRequest& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline AssociateUserAccessLoggingSettingsRequest& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline AssociateUserAccessLoggingSettingsRequest& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}


    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline const Aws::String& GetUserAccessLoggingSettingsArn() const{ return m_userAccessLoggingSettingsArn; }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline bool UserAccessLoggingSettingsArnHasBeenSet() const { return m_userAccessLoggingSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(const Aws::String& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = value; }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(Aws::String&& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(const char* value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn.assign(value); }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline AssociateUserAccessLoggingSettingsRequest& WithUserAccessLoggingSettingsArn(const Aws::String& value) { SetUserAccessLoggingSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline AssociateUserAccessLoggingSettingsRequest& WithUserAccessLoggingSettingsArn(Aws::String&& value) { SetUserAccessLoggingSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline AssociateUserAccessLoggingSettingsRequest& WithUserAccessLoggingSettingsArn(const char* value) { SetUserAccessLoggingSettingsArn(value); return *this;}

  private:

    Aws::String m_portalArn;
    bool m_portalArnHasBeenSet = false;

    Aws::String m_userAccessLoggingSettingsArn;
    bool m_userAccessLoggingSettingsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
