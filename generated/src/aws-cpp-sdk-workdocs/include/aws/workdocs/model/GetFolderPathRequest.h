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
namespace Http
{
    class URI;
} //namespace Http
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class GetFolderPathRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API GetFolderPathRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFolderPath"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

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
    inline GetFolderPathRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}
    inline GetFolderPathRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}
    inline GetFolderPathRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}
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
    inline GetFolderPathRequest& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}
    inline GetFolderPathRequest& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}
    inline GetFolderPathRequest& WithFolderId(const char* value) { SetFolderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of levels in the hierarchy to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetFolderPathRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma-separated list of values. Specify "NAME" to include the names of the
     * parent folders.</p>
     */
    inline const Aws::String& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::String& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::String&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline void SetFields(const char* value) { m_fieldsHasBeenSet = true; m_fields.assign(value); }
    inline GetFolderPathRequest& WithFields(const Aws::String& value) { SetFields(value); return *this;}
    inline GetFolderPathRequest& WithFields(Aws::String&& value) { SetFields(std::move(value)); return *this;}
    inline GetFolderPathRequest& WithFields(const char* value) { SetFields(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is not supported.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline GetFolderPathRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline GetFolderPathRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline GetFolderPathRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
