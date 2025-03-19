/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/StandbyWorkspace.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class CreateStandbyWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API CreateStandbyWorkspacesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStandbyWorkspaces"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Region of the primary WorkSpace.</p>
     */
    inline const Aws::String& GetPrimaryRegion() const { return m_primaryRegion; }
    inline bool PrimaryRegionHasBeenSet() const { return m_primaryRegionHasBeenSet; }
    template<typename PrimaryRegionT = Aws::String>
    void SetPrimaryRegion(PrimaryRegionT&& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = std::forward<PrimaryRegionT>(value); }
    template<typename PrimaryRegionT = Aws::String>
    CreateStandbyWorkspacesRequest& WithPrimaryRegion(PrimaryRegionT&& value) { SetPrimaryRegion(std::forward<PrimaryRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the standby WorkSpace to be created.</p>
     */
    inline const Aws::Vector<StandbyWorkspace>& GetStandbyWorkspaces() const { return m_standbyWorkspaces; }
    inline bool StandbyWorkspacesHasBeenSet() const { return m_standbyWorkspacesHasBeenSet; }
    template<typename StandbyWorkspacesT = Aws::Vector<StandbyWorkspace>>
    void SetStandbyWorkspaces(StandbyWorkspacesT&& value) { m_standbyWorkspacesHasBeenSet = true; m_standbyWorkspaces = std::forward<StandbyWorkspacesT>(value); }
    template<typename StandbyWorkspacesT = Aws::Vector<StandbyWorkspace>>
    CreateStandbyWorkspacesRequest& WithStandbyWorkspaces(StandbyWorkspacesT&& value) { SetStandbyWorkspaces(std::forward<StandbyWorkspacesT>(value)); return *this;}
    template<typename StandbyWorkspacesT = StandbyWorkspace>
    CreateStandbyWorkspacesRequest& AddStandbyWorkspaces(StandbyWorkspacesT&& value) { m_standbyWorkspacesHasBeenSet = true; m_standbyWorkspaces.emplace_back(std::forward<StandbyWorkspacesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_primaryRegion;
    bool m_primaryRegionHasBeenSet = false;

    Aws::Vector<StandbyWorkspace> m_standbyWorkspaces;
    bool m_standbyWorkspacesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
