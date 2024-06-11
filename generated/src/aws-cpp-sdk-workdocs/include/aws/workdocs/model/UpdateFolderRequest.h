/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/ResourceStateType.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class UpdateFolderRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API UpdateFolderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFolder"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }
    inline UpdateFolderRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}
    inline UpdateFolderRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}
    inline UpdateFolderRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const{ return m_folderId; }
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }
    inline void SetFolderId(const Aws::String& value) { m_folderIdHasBeenSet = true; m_folderId = value; }
    inline void SetFolderId(Aws::String&& value) { m_folderIdHasBeenSet = true; m_folderId = std::move(value); }
    inline void SetFolderId(const char* value) { m_folderIdHasBeenSet = true; m_folderId.assign(value); }
    inline UpdateFolderRequest& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}
    inline UpdateFolderRequest& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}
    inline UpdateFolderRequest& WithFolderId(const char* value) { SetFolderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the folder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateFolderRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateFolderRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateFolderRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the parent folder.</p>
     */
    inline const Aws::String& GetParentFolderId() const{ return m_parentFolderId; }
    inline bool ParentFolderIdHasBeenSet() const { return m_parentFolderIdHasBeenSet; }
    inline void SetParentFolderId(const Aws::String& value) { m_parentFolderIdHasBeenSet = true; m_parentFolderId = value; }
    inline void SetParentFolderId(Aws::String&& value) { m_parentFolderIdHasBeenSet = true; m_parentFolderId = std::move(value); }
    inline void SetParentFolderId(const char* value) { m_parentFolderIdHasBeenSet = true; m_parentFolderId.assign(value); }
    inline UpdateFolderRequest& WithParentFolderId(const Aws::String& value) { SetParentFolderId(value); return *this;}
    inline UpdateFolderRequest& WithParentFolderId(Aws::String&& value) { SetParentFolderId(std::move(value)); return *this;}
    inline UpdateFolderRequest& WithParentFolderId(const char* value) { SetParentFolderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource state of the folder. Only ACTIVE and RECYCLED are accepted
     * values from the API.</p>
     */
    inline const ResourceStateType& GetResourceState() const{ return m_resourceState; }
    inline bool ResourceStateHasBeenSet() const { return m_resourceStateHasBeenSet; }
    inline void SetResourceState(const ResourceStateType& value) { m_resourceStateHasBeenSet = true; m_resourceState = value; }
    inline void SetResourceState(ResourceStateType&& value) { m_resourceStateHasBeenSet = true; m_resourceState = std::move(value); }
    inline UpdateFolderRequest& WithResourceState(const ResourceStateType& value) { SetResourceState(value); return *this;}
    inline UpdateFolderRequest& WithResourceState(ResourceStateType&& value) { SetResourceState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_parentFolderId;
    bool m_parentFolderIdHasBeenSet = false;

    ResourceStateType m_resourceState;
    bool m_resourceStateHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
