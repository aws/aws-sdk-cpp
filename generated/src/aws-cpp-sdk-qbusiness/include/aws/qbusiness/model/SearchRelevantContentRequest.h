/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/ContentSource.h>
#include <aws/qbusiness/model/AttributeFilter.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class SearchRelevantContentRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API SearchRelevantContentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchRelevantContent"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the Q Business application to search.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline SearchRelevantContentRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline SearchRelevantContentRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline SearchRelevantContentRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text to search for.</p>
     */
    inline const Aws::String& GetQueryText() const{ return m_queryText; }
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }
    inline void SetQueryText(const Aws::String& value) { m_queryTextHasBeenSet = true; m_queryText = value; }
    inline void SetQueryText(Aws::String&& value) { m_queryTextHasBeenSet = true; m_queryText = std::move(value); }
    inline void SetQueryText(const char* value) { m_queryTextHasBeenSet = true; m_queryText.assign(value); }
    inline SearchRelevantContentRequest& WithQueryText(const Aws::String& value) { SetQueryText(value); return *this;}
    inline SearchRelevantContentRequest& WithQueryText(Aws::String&& value) { SetQueryText(std::move(value)); return *this;}
    inline SearchRelevantContentRequest& WithQueryText(const char* value) { SetQueryText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of content to search in.</p>
     */
    inline const ContentSource& GetContentSource() const{ return m_contentSource; }
    inline bool ContentSourceHasBeenSet() const { return m_contentSourceHasBeenSet; }
    inline void SetContentSource(const ContentSource& value) { m_contentSourceHasBeenSet = true; m_contentSource = value; }
    inline void SetContentSource(ContentSource&& value) { m_contentSourceHasBeenSet = true; m_contentSource = std::move(value); }
    inline SearchRelevantContentRequest& WithContentSource(const ContentSource& value) { SetContentSource(value); return *this;}
    inline SearchRelevantContentRequest& WithContentSource(ContentSource&& value) { SetContentSource(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const AttributeFilter& GetAttributeFilter() const{ return m_attributeFilter; }
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }
    inline void SetAttributeFilter(const AttributeFilter& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = value; }
    inline void SetAttributeFilter(AttributeFilter&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::move(value); }
    inline SearchRelevantContentRequest& WithAttributeFilter(const AttributeFilter& value) { SetAttributeFilter(value); return *this;}
    inline SearchRelevantContentRequest& WithAttributeFilter(AttributeFilter&& value) { SetAttributeFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchRelevantContentRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. (You received this token from a
     * previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline SearchRelevantContentRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchRelevantContentRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchRelevantContentRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_queryText;
    bool m_queryTextHasBeenSet = false;

    ContentSource m_contentSource;
    bool m_contentSourceHasBeenSet = false;

    AttributeFilter m_attributeFilter;
    bool m_attributeFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
