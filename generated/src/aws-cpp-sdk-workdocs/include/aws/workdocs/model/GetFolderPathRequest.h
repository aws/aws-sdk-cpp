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


    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline GetFolderPathRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline GetFolderPathRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline GetFolderPathRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const{ return m_folderId; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(const Aws::String& value) { m_folderIdHasBeenSet = true; m_folderId = value; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(Aws::String&& value) { m_folderIdHasBeenSet = true; m_folderId = std::move(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(const char* value) { m_folderIdHasBeenSet = true; m_folderId.assign(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline GetFolderPathRequest& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline GetFolderPathRequest& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline GetFolderPathRequest& WithFolderId(const char* value) { SetFolderId(value); return *this;}


    /**
     * <p>The maximum number of levels in the hierarchy to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of levels in the hierarchy to return.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of levels in the hierarchy to return.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of levels in the hierarchy to return.</p>
     */
    inline GetFolderPathRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>A comma-separated list of values. Specify "NAME" to include the names of the
     * parent folders.</p>
     */
    inline const Aws::String& GetFields() const{ return m_fields; }

    /**
     * <p>A comma-separated list of values. Specify "NAME" to include the names of the
     * parent folders.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>A comma-separated list of values. Specify "NAME" to include the names of the
     * parent folders.</p>
     */
    inline void SetFields(const Aws::String& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>A comma-separated list of values. Specify "NAME" to include the names of the
     * parent folders.</p>
     */
    inline void SetFields(Aws::String&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>A comma-separated list of values. Specify "NAME" to include the names of the
     * parent folders.</p>
     */
    inline void SetFields(const char* value) { m_fieldsHasBeenSet = true; m_fields.assign(value); }

    /**
     * <p>A comma-separated list of values. Specify "NAME" to include the names of the
     * parent folders.</p>
     */
    inline GetFolderPathRequest& WithFields(const Aws::String& value) { SetFields(value); return *this;}

    /**
     * <p>A comma-separated list of values. Specify "NAME" to include the names of the
     * parent folders.</p>
     */
    inline GetFolderPathRequest& WithFields(Aws::String&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of values. Specify "NAME" to include the names of the
     * parent folders.</p>
     */
    inline GetFolderPathRequest& WithFields(const char* value) { SetFields(value); return *this;}


    /**
     * <p>This value is not supported.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>This value is not supported.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>This value is not supported.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>This value is not supported.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>This value is not supported.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>This value is not supported.</p>
     */
    inline GetFolderPathRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>This value is not supported.</p>
     */
    inline GetFolderPathRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>This value is not supported.</p>
     */
    inline GetFolderPathRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

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
