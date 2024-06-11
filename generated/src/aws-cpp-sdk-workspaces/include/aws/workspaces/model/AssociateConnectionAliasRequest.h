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
  class AssociateConnectionAliasRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API AssociateConnectionAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateConnectionAlias"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }
    inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::move(value); }
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }
    inline AssociateConnectionAliasRequest& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}
    inline AssociateConnectionAliasRequest& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}
    inline AssociateConnectionAliasRequest& WithAliasId(const char* value) { SetAliasId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory to associate the connection alias with.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline AssociateConnectionAliasRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline AssociateConnectionAliasRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline AssociateConnectionAliasRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}
  private:

    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
