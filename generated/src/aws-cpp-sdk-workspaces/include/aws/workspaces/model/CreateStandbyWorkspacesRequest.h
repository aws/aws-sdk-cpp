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
    AWS_WORKSPACES_API CreateStandbyWorkspacesRequest();

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
    inline const Aws::String& GetPrimaryRegion() const{ return m_primaryRegion; }
    inline bool PrimaryRegionHasBeenSet() const { return m_primaryRegionHasBeenSet; }
    inline void SetPrimaryRegion(const Aws::String& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = value; }
    inline void SetPrimaryRegion(Aws::String&& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = std::move(value); }
    inline void SetPrimaryRegion(const char* value) { m_primaryRegionHasBeenSet = true; m_primaryRegion.assign(value); }
    inline CreateStandbyWorkspacesRequest& WithPrimaryRegion(const Aws::String& value) { SetPrimaryRegion(value); return *this;}
    inline CreateStandbyWorkspacesRequest& WithPrimaryRegion(Aws::String&& value) { SetPrimaryRegion(std::move(value)); return *this;}
    inline CreateStandbyWorkspacesRequest& WithPrimaryRegion(const char* value) { SetPrimaryRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the standby WorkSpace to be created.</p>
     */
    inline const Aws::Vector<StandbyWorkspace>& GetStandbyWorkspaces() const{ return m_standbyWorkspaces; }
    inline bool StandbyWorkspacesHasBeenSet() const { return m_standbyWorkspacesHasBeenSet; }
    inline void SetStandbyWorkspaces(const Aws::Vector<StandbyWorkspace>& value) { m_standbyWorkspacesHasBeenSet = true; m_standbyWorkspaces = value; }
    inline void SetStandbyWorkspaces(Aws::Vector<StandbyWorkspace>&& value) { m_standbyWorkspacesHasBeenSet = true; m_standbyWorkspaces = std::move(value); }
    inline CreateStandbyWorkspacesRequest& WithStandbyWorkspaces(const Aws::Vector<StandbyWorkspace>& value) { SetStandbyWorkspaces(value); return *this;}
    inline CreateStandbyWorkspacesRequest& WithStandbyWorkspaces(Aws::Vector<StandbyWorkspace>&& value) { SetStandbyWorkspaces(std::move(value)); return *this;}
    inline CreateStandbyWorkspacesRequest& AddStandbyWorkspaces(const StandbyWorkspace& value) { m_standbyWorkspacesHasBeenSet = true; m_standbyWorkspaces.push_back(value); return *this; }
    inline CreateStandbyWorkspacesRequest& AddStandbyWorkspaces(StandbyWorkspace&& value) { m_standbyWorkspacesHasBeenSet = true; m_standbyWorkspaces.push_back(std::move(value)); return *this; }
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
