﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/ResourceSortType.h>
#include <aws/workdocs/model/OrderType.h>
#include <aws/workdocs/model/FolderContentType.h>
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
  class DescribeFolderContentsRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API DescribeFolderContentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFolderContents"; }

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
    inline DescribeFolderContentsRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}
    inline DescribeFolderContentsRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}
    inline DescribeFolderContentsRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}
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
    inline DescribeFolderContentsRequest& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}
    inline DescribeFolderContentsRequest& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}
    inline DescribeFolderContentsRequest& WithFolderId(const char* value) { SetFolderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sorting criteria.</p>
     */
    inline const ResourceSortType& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const ResourceSortType& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(ResourceSortType&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline DescribeFolderContentsRequest& WithSort(const ResourceSortType& value) { SetSort(value); return *this;}
    inline DescribeFolderContentsRequest& WithSort(ResourceSortType&& value) { SetSort(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order for the contents of the folder.</p>
     */
    inline const OrderType& GetOrder() const{ return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(const OrderType& value) { m_orderHasBeenSet = true; m_order = value; }
    inline void SetOrder(OrderType&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }
    inline DescribeFolderContentsRequest& WithOrder(const OrderType& value) { SetOrder(value); return *this;}
    inline DescribeFolderContentsRequest& WithOrder(OrderType&& value) { SetOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeFolderContentsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeFolderContentsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeFolderContentsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeFolderContentsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of items.</p>
     */
    inline const FolderContentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FolderContentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FolderContentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DescribeFolderContentsRequest& WithType(const FolderContentType& value) { SetType(value); return *this;}
    inline DescribeFolderContentsRequest& WithType(FolderContentType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents to include. Specify "INITIALIZED" to include initialized
     * documents.</p>
     */
    inline const Aws::String& GetInclude() const{ return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    inline void SetInclude(const Aws::String& value) { m_includeHasBeenSet = true; m_include = value; }
    inline void SetInclude(Aws::String&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }
    inline void SetInclude(const char* value) { m_includeHasBeenSet = true; m_include.assign(value); }
    inline DescribeFolderContentsRequest& WithInclude(const Aws::String& value) { SetInclude(value); return *this;}
    inline DescribeFolderContentsRequest& WithInclude(Aws::String&& value) { SetInclude(std::move(value)); return *this;}
    inline DescribeFolderContentsRequest& WithInclude(const char* value) { SetInclude(value); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet = false;

    ResourceSortType m_sort;
    bool m_sortHasBeenSet = false;

    OrderType m_order;
    bool m_orderHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    FolderContentType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_include;
    bool m_includeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
