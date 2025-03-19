/**
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
    AWS_WORKDOCS_API DescribeFolderContentsRequest() = default;

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
    inline const Aws::String& GetAuthenticationToken() const { return m_authenticationToken; }
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }
    template<typename AuthenticationTokenT = Aws::String>
    void SetAuthenticationToken(AuthenticationTokenT&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::forward<AuthenticationTokenT>(value); }
    template<typename AuthenticationTokenT = Aws::String>
    DescribeFolderContentsRequest& WithAuthenticationToken(AuthenticationTokenT&& value) { SetAuthenticationToken(std::forward<AuthenticationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const { return m_folderId; }
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }
    template<typename FolderIdT = Aws::String>
    void SetFolderId(FolderIdT&& value) { m_folderIdHasBeenSet = true; m_folderId = std::forward<FolderIdT>(value); }
    template<typename FolderIdT = Aws::String>
    DescribeFolderContentsRequest& WithFolderId(FolderIdT&& value) { SetFolderId(std::forward<FolderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sorting criteria.</p>
     */
    inline ResourceSortType GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(ResourceSortType value) { m_sortHasBeenSet = true; m_sort = value; }
    inline DescribeFolderContentsRequest& WithSort(ResourceSortType value) { SetSort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order for the contents of the folder.</p>
     */
    inline OrderType GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(OrderType value) { m_orderHasBeenSet = true; m_order = value; }
    inline DescribeFolderContentsRequest& WithOrder(OrderType value) { SetOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeFolderContentsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeFolderContentsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of items.</p>
     */
    inline FolderContentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FolderContentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribeFolderContentsRequest& WithType(FolderContentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents to include. Specify "INITIALIZED" to include initialized
     * documents.</p>
     */
    inline const Aws::String& GetInclude() const { return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    template<typename IncludeT = Aws::String>
    void SetInclude(IncludeT&& value) { m_includeHasBeenSet = true; m_include = std::forward<IncludeT>(value); }
    template<typename IncludeT = Aws::String>
    DescribeFolderContentsRequest& WithInclude(IncludeT&& value) { SetInclude(std::forward<IncludeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet = false;

    ResourceSortType m_sort{ResourceSortType::NOT_SET};
    bool m_sortHasBeenSet = false;

    OrderType m_order{OrderType::NOT_SET};
    bool m_orderHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    FolderContentType m_type{FolderContentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_include;
    bool m_includeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
