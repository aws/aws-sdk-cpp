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
  class DescribeDocumentVersionsRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API DescribeDocumentVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDocumentVersions"; }

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
    inline DescribeDocumentVersionsRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}
    inline DescribeDocumentVersionsRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}
    inline DescribeDocumentVersionsRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }
    inline DescribeDocumentVersionsRequest& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}
    inline DescribeDocumentVersionsRequest& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}
    inline DescribeDocumentVersionsRequest& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeDocumentVersionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeDocumentVersionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeDocumentVersionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of versions to return with this call.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeDocumentVersionsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma-separated list of values. Specify "INITIALIZED" to include incomplete
     * versions.</p>
     */
    inline const Aws::String& GetInclude() const{ return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    inline void SetInclude(const Aws::String& value) { m_includeHasBeenSet = true; m_include = value; }
    inline void SetInclude(Aws::String&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }
    inline void SetInclude(const char* value) { m_includeHasBeenSet = true; m_include.assign(value); }
    inline DescribeDocumentVersionsRequest& WithInclude(const Aws::String& value) { SetInclude(value); return *this;}
    inline DescribeDocumentVersionsRequest& WithInclude(Aws::String&& value) { SetInclude(std::move(value)); return *this;}
    inline DescribeDocumentVersionsRequest& WithInclude(const char* value) { SetInclude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify "SOURCE" to include initialized versions and a URL for the source
     * document.</p>
     */
    inline const Aws::String& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::String& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::String&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline void SetFields(const char* value) { m_fieldsHasBeenSet = true; m_fields.assign(value); }
    inline DescribeDocumentVersionsRequest& WithFields(const Aws::String& value) { SetFields(value); return *this;}
    inline DescribeDocumentVersionsRequest& WithFields(Aws::String&& value) { SetFields(std::move(value)); return *this;}
    inline DescribeDocumentVersionsRequest& WithFields(const char* value) { SetFields(value); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_include;
    bool m_includeHasBeenSet = false;

    Aws::String m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
