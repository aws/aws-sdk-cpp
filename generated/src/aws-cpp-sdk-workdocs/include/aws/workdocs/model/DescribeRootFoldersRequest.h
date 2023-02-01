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
  class DescribeRootFoldersRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API DescribeRootFoldersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRootFolders"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_WORKDOCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon WorkDocs authentication token.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }

    /**
     * <p>Amazon WorkDocs authentication token.</p>
     */
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }

    /**
     * <p>Amazon WorkDocs authentication token.</p>
     */
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }

    /**
     * <p>Amazon WorkDocs authentication token.</p>
     */
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }

    /**
     * <p>Amazon WorkDocs authentication token.</p>
     */
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }

    /**
     * <p>Amazon WorkDocs authentication token.</p>
     */
    inline DescribeRootFoldersRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token.</p>
     */
    inline DescribeRootFoldersRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token.</p>
     */
    inline DescribeRootFoldersRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


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
    inline DescribeRootFoldersRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeRootFoldersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeRootFoldersRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeRootFoldersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
