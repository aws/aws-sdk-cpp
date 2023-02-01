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
  class DescribeCommentsRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API DescribeCommentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeComments"; }

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
    inline DescribeCommentsRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline DescribeCommentsRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline DescribeCommentsRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


    /**
     * <p>The ID of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }

    /**
     * <p>The ID of the document.</p>
     */
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }

    /**
     * <p>The ID of the document.</p>
     */
    inline DescribeCommentsRequest& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline DescribeCommentsRequest& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline DescribeCommentsRequest& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


    /**
     * <p>The ID of the document version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The ID of the document version.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The ID of the document version.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The ID of the document version.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The ID of the document version.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The ID of the document version.</p>
     */
    inline DescribeCommentsRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The ID of the document version.</p>
     */
    inline DescribeCommentsRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the document version.</p>
     */
    inline DescribeCommentsRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline DescribeCommentsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline DescribeCommentsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline DescribeCommentsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline DescribeCommentsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
