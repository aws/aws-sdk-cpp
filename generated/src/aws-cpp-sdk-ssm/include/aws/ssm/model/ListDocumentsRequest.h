/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentFilter.h>
#include <aws/ssm/model/DocumentKeyValuesFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class ListDocumentsRequest : public SSMRequest
  {
  public:
    AWS_SSM_API ListDocumentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDocuments"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>This data type is deprecated. Instead, use <code>Filters</code>.</p>
     */
    inline const Aws::Vector<DocumentFilter>& GetDocumentFilterList() const { return m_documentFilterList; }
    inline bool DocumentFilterListHasBeenSet() const { return m_documentFilterListHasBeenSet; }
    template<typename DocumentFilterListT = Aws::Vector<DocumentFilter>>
    void SetDocumentFilterList(DocumentFilterListT&& value) { m_documentFilterListHasBeenSet = true; m_documentFilterList = std::forward<DocumentFilterListT>(value); }
    template<typename DocumentFilterListT = Aws::Vector<DocumentFilter>>
    ListDocumentsRequest& WithDocumentFilterList(DocumentFilterListT&& value) { SetDocumentFilterList(std::forward<DocumentFilterListT>(value)); return *this;}
    template<typename DocumentFilterListT = DocumentFilter>
    ListDocumentsRequest& AddDocumentFilterList(DocumentFilterListT&& value) { m_documentFilterListHasBeenSet = true; m_documentFilterList.emplace_back(std::forward<DocumentFilterListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more <code>DocumentKeyValuesFilter</code> objects. Use a filter to
     * return a more specific list of results. For keys, you can specify one or more
     * key-value pair tags that have been applied to a document. Other valid keys
     * include <code>Owner</code>, <code>Name</code>, <code>PlatformTypes</code>,
     * <code>DocumentType</code>, and <code>TargetType</code>. For example, to return
     * documents you own use <code>Key=Owner,Values=Self</code>. To specify a custom
     * key-value pair, use the format
     * <code>Key=tag:tagName,Values=valueName</code>.</p>  <p>This API operation
     * only supports filtering documents by using a single tag key and one or more tag
     * values. For example: <code>Key=tag:tagName,Values=valueName1,valueName2</code>
     * </p> 
     */
    inline const Aws::Vector<DocumentKeyValuesFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<DocumentKeyValuesFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<DocumentKeyValuesFilter>>
    ListDocumentsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = DocumentKeyValuesFilter>
    ListDocumentsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDocumentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDocumentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DocumentFilter> m_documentFilterList;
    bool m_documentFilterListHasBeenSet = false;

    Aws::Vector<DocumentKeyValuesFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
