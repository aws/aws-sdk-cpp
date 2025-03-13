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
  class AssociateUserSettingsRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API AssociateUserSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateUserSettings"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;

    AWS_WORKSPACESWEB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const { return m_portalArn; }
    inline bool PortalArnHasBeenSet() const { return m_portalArnHasBeenSet; }
    template<typename PortalArnT = Aws::String>
    void SetPortalArn(PortalArnT&& value) { m_portalArnHasBeenSet = true; m_portalArn = std::forward<PortalArnT>(value); }
    template<typename PortalArnT = Aws::String>
    AssociateUserSettingsRequest& WithPortalArn(PortalArnT&& value) { SetPortalArn(std::forward<PortalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user settings.</p>
     */
    inline const Aws::String& GetUserSettingsArn() const { return m_userSettingsArn; }
    inline bool UserSettingsArnHasBeenSet() const { return m_userSettingsArnHasBeenSet; }
    template<typename UserSettingsArnT = Aws::String>
    void SetUserSettingsArn(UserSettingsArnT&& value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn = std::forward<UserSettingsArnT>(value); }
    template<typename UserSettingsArnT = Aws::String>
    AssociateUserSettingsRequest& WithUserSettingsArn(UserSettingsArnT&& value) { SetUserSettingsArn(std::forward<UserSettingsArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_portalArn;
    bool m_portalArnHasBeenSet = false;

    Aws::String m_userSettingsArn;
    bool m_userSettingsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
