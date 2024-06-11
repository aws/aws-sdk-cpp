/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class CreateFolderRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API CreateFolderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFolder"; }

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
    inline CreateFolderRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}
    inline CreateFolderRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}
    inline CreateFolderRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new folder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateFolderRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateFolderRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateFolderRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline CreateFolderRequest& WithParentFolderId(const Aws::String& value) { SetParentFolderId(value); return *this;}
    inline CreateFolderRequest& WithParentFolderId(Aws::String&& value) { SetParentFolderId(std::move(value)); return *this;}
    inline CreateFolderRequest& WithParentFolderId(const char* value) { SetParentFolderId(value); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_parentFolderId;
    bool m_parentFolderIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
