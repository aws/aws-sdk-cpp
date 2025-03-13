/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ClientDeviceType.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class DeleteClientBrandingRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DeleteClientBrandingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteClientBranding"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The directory identifier of the WorkSpace for which you want to delete client
     * branding.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    DeleteClientBrandingRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device type for which you want to delete client branding.</p>
     */
    inline const Aws::Vector<ClientDeviceType>& GetPlatforms() const { return m_platforms; }
    inline bool PlatformsHasBeenSet() const { return m_platformsHasBeenSet; }
    template<typename PlatformsT = Aws::Vector<ClientDeviceType>>
    void SetPlatforms(PlatformsT&& value) { m_platformsHasBeenSet = true; m_platforms = std::forward<PlatformsT>(value); }
    template<typename PlatformsT = Aws::Vector<ClientDeviceType>>
    DeleteClientBrandingRequest& WithPlatforms(PlatformsT&& value) { SetPlatforms(std::forward<PlatformsT>(value)); return *this;}
    inline DeleteClientBrandingRequest& AddPlatforms(ClientDeviceType value) { m_platformsHasBeenSet = true; m_platforms.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<ClientDeviceType> m_platforms;
    bool m_platformsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
