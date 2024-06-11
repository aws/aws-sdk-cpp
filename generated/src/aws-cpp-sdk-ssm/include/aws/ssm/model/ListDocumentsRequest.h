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
    AWS_SSM_API ListDocumentsRequest();

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
    inline const Aws::Vector<DocumentFilter>& GetDocumentFilterList() const{ return m_documentFilterList; }
    inline bool DocumentFilterListHasBeenSet() const { return m_documentFilterListHasBeenSet; }
    inline void SetDocumentFilterList(const Aws::Vector<DocumentFilter>& value) { m_documentFilterListHasBeenSet = true; m_documentFilterList = value; }
    inline void SetDocumentFilterList(Aws::Vector<DocumentFilter>&& value) { m_documentFilterListHasBeenSet = true; m_documentFilterList = std::move(value); }
    inline ListDocumentsRequest& WithDocumentFilterList(const Aws::Vector<DocumentFilter>& value) { SetDocumentFilterList(value); return *this;}
    inline ListDocumentsRequest& WithDocumentFilterList(Aws::Vector<DocumentFilter>&& value) { SetDocumentFilterList(std::move(value)); return *this;}
    inline ListDocumentsRequest& AddDocumentFilterList(const DocumentFilter& value) { m_documentFilterListHasBeenSet = true; m_documentFilterList.push_back(value); return *this; }
    inline ListDocumentsRequest& AddDocumentFilterList(DocumentFilter&& value) { m_documentFilterListHasBeenSet = true; m_documentFilterList.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<DocumentKeyValuesFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<DocumentKeyValuesFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<DocumentKeyValuesFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListDocumentsRequest& WithFilters(const Aws::Vector<DocumentKeyValuesFilter>& value) { SetFilters(value); return *this;}
    inline ListDocumentsRequest& WithFilters(Aws::Vector<DocumentKeyValuesFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListDocumentsRequest& AddFilters(const DocumentKeyValuesFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline ListDocumentsRequest& AddFilters(DocumentKeyValuesFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDocumentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListDocumentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDocumentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDocumentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<DocumentFilter> m_documentFilterList;
    bool m_documentFilterListHasBeenSet = false;

    Aws::Vector<DocumentKeyValuesFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
