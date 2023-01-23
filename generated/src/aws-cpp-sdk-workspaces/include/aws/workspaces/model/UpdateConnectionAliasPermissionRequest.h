/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ConnectionAliasPermission.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class UpdateConnectionAliasPermissionRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API UpdateConnectionAliasPermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectionAliasPermission"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the connection alias that you want to update permissions
     * for.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>The identifier of the connection alias that you want to update permissions
     * for.</p>
     */
    inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }

    /**
     * <p>The identifier of the connection alias that you want to update permissions
     * for.</p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>The identifier of the connection alias that you want to update permissions
     * for.</p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::move(value); }

    /**
     * <p>The identifier of the connection alias that you want to update permissions
     * for.</p>
     */
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }

    /**
     * <p>The identifier of the connection alias that you want to update permissions
     * for.</p>
     */
    inline UpdateConnectionAliasPermissionRequest& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>The identifier of the connection alias that you want to update permissions
     * for.</p>
     */
    inline UpdateConnectionAliasPermissionRequest& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the connection alias that you want to update permissions
     * for.</p>
     */
    inline UpdateConnectionAliasPermissionRequest& WithAliasId(const char* value) { SetAliasId(value); return *this;}


    /**
     * <p>Indicates whether to share or unshare the connection alias with the specified
     * Amazon Web Services account.</p>
     */
    inline const ConnectionAliasPermission& GetConnectionAliasPermission() const{ return m_connectionAliasPermission; }

    /**
     * <p>Indicates whether to share or unshare the connection alias with the specified
     * Amazon Web Services account.</p>
     */
    inline bool ConnectionAliasPermissionHasBeenSet() const { return m_connectionAliasPermissionHasBeenSet; }

    /**
     * <p>Indicates whether to share or unshare the connection alias with the specified
     * Amazon Web Services account.</p>
     */
    inline void SetConnectionAliasPermission(const ConnectionAliasPermission& value) { m_connectionAliasPermissionHasBeenSet = true; m_connectionAliasPermission = value; }

    /**
     * <p>Indicates whether to share or unshare the connection alias with the specified
     * Amazon Web Services account.</p>
     */
    inline void SetConnectionAliasPermission(ConnectionAliasPermission&& value) { m_connectionAliasPermissionHasBeenSet = true; m_connectionAliasPermission = std::move(value); }

    /**
     * <p>Indicates whether to share or unshare the connection alias with the specified
     * Amazon Web Services account.</p>
     */
    inline UpdateConnectionAliasPermissionRequest& WithConnectionAliasPermission(const ConnectionAliasPermission& value) { SetConnectionAliasPermission(value); return *this;}

    /**
     * <p>Indicates whether to share or unshare the connection alias with the specified
     * Amazon Web Services account.</p>
     */
    inline UpdateConnectionAliasPermissionRequest& WithConnectionAliasPermission(ConnectionAliasPermission&& value) { SetConnectionAliasPermission(std::move(value)); return *this;}

  private:

    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet = false;

    ConnectionAliasPermission m_connectionAliasPermission;
    bool m_connectionAliasPermissionHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
