/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AssociateIpGroupsRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API AssociateIpGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateIpGroups"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline AssociateIpGroupsRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline AssociateIpGroupsRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline AssociateIpGroupsRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The identifiers of one or more IP access control groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupIds() const{ return m_groupIds; }

    /**
     * <p>The identifiers of one or more IP access control groups.</p>
     */
    inline bool GroupIdsHasBeenSet() const { return m_groupIdsHasBeenSet; }

    /**
     * <p>The identifiers of one or more IP access control groups.</p>
     */
    inline void SetGroupIds(const Aws::Vector<Aws::String>& value) { m_groupIdsHasBeenSet = true; m_groupIds = value; }

    /**
     * <p>The identifiers of one or more IP access control groups.</p>
     */
    inline void SetGroupIds(Aws::Vector<Aws::String>&& value) { m_groupIdsHasBeenSet = true; m_groupIds = std::move(value); }

    /**
     * <p>The identifiers of one or more IP access control groups.</p>
     */
    inline AssociateIpGroupsRequest& WithGroupIds(const Aws::Vector<Aws::String>& value) { SetGroupIds(value); return *this;}

    /**
     * <p>The identifiers of one or more IP access control groups.</p>
     */
    inline AssociateIpGroupsRequest& WithGroupIds(Aws::Vector<Aws::String>&& value) { SetGroupIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of one or more IP access control groups.</p>
     */
    inline AssociateIpGroupsRequest& AddGroupIds(const Aws::String& value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of one or more IP access control groups.</p>
     */
    inline AssociateIpGroupsRequest& AddGroupIds(Aws::String&& value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of one or more IP access control groups.</p>
     */
    inline AssociateIpGroupsRequest& AddGroupIds(const char* value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupIds;
    bool m_groupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
