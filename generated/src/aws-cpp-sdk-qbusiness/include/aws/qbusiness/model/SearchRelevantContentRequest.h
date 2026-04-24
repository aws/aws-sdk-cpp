/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/AttributeFilter.h>
#include <aws/qbusiness/model/ContentSource.h>

#include <utility>

namespace Aws {
namespace QBusiness {
namespace Model {

/**
 */
class SearchRelevantContentRequest : public QBusinessRequest {
 public:
  AWS_QBUSINESS_API SearchRelevantContentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SearchRelevantContent"; }

  AWS_QBUSINESS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the Amazon Q Business application to search.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  SearchRelevantContentRequest& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text to search for.</p>
   */
  inline const Aws::String& GetQueryText() const { return m_queryText; }
  inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }
  template <typename QueryTextT = Aws::String>
  void SetQueryText(QueryTextT&& value) {
    m_queryTextHasBeenSet = true;
    m_queryText = std::forward<QueryTextT>(value);
  }
  template <typename QueryTextT = Aws::String>
  SearchRelevantContentRequest& WithQueryText(QueryTextT&& value) {
    SetQueryText(std::forward<QueryTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of content to search in.</p>
   */
  inline const ContentSource& GetContentSource() const { return m_contentSource; }
  inline bool ContentSourceHasBeenSet() const { return m_contentSourceHasBeenSet; }
  template <typename ContentSourceT = ContentSource>
  void SetContentSource(ContentSourceT&& value) {
    m_contentSourceHasBeenSet = true;
    m_contentSource = std::forward<ContentSourceT>(value);
  }
  template <typename ContentSourceT = ContentSource>
  SearchRelevantContentRequest& WithContentSource(ContentSourceT&& value) {
    SetContentSource(std::forward<ContentSourceT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const AttributeFilter& GetAttributeFilter() const { return m_attributeFilter; }
  inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }
  template <typename AttributeFilterT = AttributeFilter>
  void SetAttributeFilter(AttributeFilterT&& value) {
    m_attributeFilterHasBeenSet = true;
    m_attributeFilter = std::forward<AttributeFilterT>(value);
  }
  template <typename AttributeFilterT = AttributeFilter>
  SearchRelevantContentRequest& WithAttributeFilter(AttributeFilterT&& value) {
    SetAttributeFilter(std::forward<AttributeFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline SearchRelevantContentRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. (You received this token from a
   * previous call.)</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchRelevantContentRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationId;

  Aws::String m_queryText;

  ContentSource m_contentSource;

  AttributeFilter m_attributeFilter;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_applicationIdHasBeenSet = false;
  bool m_queryTextHasBeenSet = false;
  bool m_contentSourceHasBeenSet = false;
  bool m_attributeFilterHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
